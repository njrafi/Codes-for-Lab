%% IIR low pass filer

% filters using rectangular window

% commenting out this section for publishing
%rp =input('Enter the pass band ripple ');
%rs =input('Enter the stop band ripple ');
%wp =input('Enter the pass band freq ');
%ws =input('Enter the stop band freq ');
%fs =input('Enter the sampling freq ');


% Assigning value Directly
rp = .5;
rs = 50;
wp = 1200;
ws = 2400;
fs = 10000;

w1 =2*wp/fs; w2 = 2*ws/fs;
[n,wn] = buttord(w1,w2,rp,rs);
[b,a] = butter(n,wn);
w =0:0.01:pi;
[h,om] = freqz(b,a,w);
m = 20*log(abs(h));
an = angle(h);

subplot(2,2,1);plot(om/pi,m);
ylabel('Gain in dB ------>');
xlabel('Normalised freq ---->');
title('Low Pass Filter');

subplot(2,1,2);plot(om/pi,an);
ylabel('Phase in Radians ------>');
xlabel('Normalised freq ---->');
