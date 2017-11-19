%% Unit Sample, Unit Step , Ramp and Exponential Signal

% Unit Sample Signal
x = -5:5;
y1 = [zeros(1,5),1,zeros(1,5)];
subplot(2,2,1);
stem(x,y1);
xlabel('Time Index -->');
ylabel('Amplitude -->');
title('Unit Sample Signal');

% Unit Step Signal
y2 = [zeros(1,5),ones(1,6)];
subplot(2,2,2);
stem(x,y2);
xlabel('Time Index -->');
ylabel('Amplitude -->');
title('Unit Step Signal');

% Unit Ramp Signal
y3 = max(0,x);
subplot(2,2,3);
stem(x,y3);
xlabel('Time Index -->');
ylabel('Amplitude -->');
title('Unit Ramp Signal');

% Exponential Signal
a = 2;
y4 = a.^(x);
subplot(2,2,4);
stem(x,y4);
xlabel('Time Index -->');
ylabel('Amplitude -->');
title('Exponential Signal');


% Displaying values in Command Window
disp('Unit Sample Signal');y1
disp('Unit Step Signal'); y2
disp('Unit Ramp Signal');y3
disp('Exponential Signal');y4