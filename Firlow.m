%% designing of FIR low pass

% filters using rectangular window

% commenting out this section for publishing
%rp =input('Enter the pass band ripple: ');
%rs =input('Enter the stop band ripple: ');
%fp =input('Enter the pass band freq: ');
%fs =input('Enter the stop band freq: ');
%f =input('Enter the sampling freq: ');

% Assigning value Directly
rp = .05;
rs = .04;
fp = 1500;
fs = 2000;
f = 9000;

wp = 2*fp/f;
ws = 2*fs/f;
num = -20*log10(sqrt(rp*rs))-13;
dem = 14.6*(fs-fp)/f;
n = ceil(num/dem);
n1 = n+1;
if (rem(n,2)~=0)
    n1 =n;
    n = n-1;
end
y = boxcar(n1);

% low pass filter

b = fir1(n,wp,y);
[h,o] = freqz(b,1,256);
m = 20*log(abs(h));
plot(o/pi,m);
ylabel('Gain in dB--->');
xlabel('Normalised freq--->');
