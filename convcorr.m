%% Convolution and Correlation
if (exist('xx')==0)
    x = input('Enter the 1st Sequence: ');  % 1 2
else
    x = xx;
end

if (exist('hh')==0)
    h = input('Enter the 2nd Sequence: ');  % 1 2 4
else
    h = hh;
end

y1 = conv(x,h);
y2 = xcorr(x,h);

subplot(2,2,1);
stem(x);
xlabel('n--->');
ylabel('x--->');
title('1st sequence');

subplot(2,2,2);
stem(h);
xlabel('n--->');
ylabel('h--->');
title('2nd sequence');

subplot(2,2,3);
stem(y1);
xlabel('n--->');
ylabel('y1--->');
title('Discrete Convolution');

subplot(2,2,4);
stem(y2);
xlabel('n--->');
ylabel('y2--->');
title('Discrete Correlation');

disp('For Discrete Convolution');y1
disp('For Discrete Correlation');y2