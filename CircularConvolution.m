%% Cicular Convolution

%y = [-1 2 3 -4 5];
%h = [9 -8 7 -6 5];
y = [ 0 1 2 3];
h = [ 2 1 2 1];

CC = cconv(h,y)

subplot(3,1,1)
stem(y);
xlabel('n--->');
ylabel('y--->');


subplot(3,1,2)
stem(h);
xlabel('n--->');
ylabel('h--->');


subplot(3,1,3)
stem(CC);
xlabel('range of n');
ylabel('magnitude');
title('Circular Convolution');