%% Magnitude and Phase response of LTI system

%Let h(n)=(0.9)^nu(n)


w = [0:1:500] * pi/500;
h = exp(j*w)./(exp(j*w)-0.9*ones(1,501));
magh = abs(h);
angh = angle(h);

subplot(2,1,1);
plot(w/pi,magh);grid;
ylabel('|h|------>');
xlabel('Frequency in pi units');
title('Magnitude Response');

subplot(2,1,2);
plot(w/pi,angh/pi);grid;
ylabel('Phase in pi Radians');
xlabel('Frequency in pi units');
title('Phase Response');