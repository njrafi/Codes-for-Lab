%% computing DFT and IDFT


x = [1 2 1 2 1 2 1 2];
n = 0:length(x)-1;

DFT = fft(x)
IDFT = ifft(DFT)

subplot(3,2,1)
stem(n,x)
title('Input Sequence')

subplot(3,2,2)
stem(n,real(DFT));
title('Real Part of DFT')

subplot(3,2,3)
stem(n, imag(DFT));
title('Imaginary Part of DFT')

subplot(3,2,4)
stem(n, abs(DFT));
title('Absolute Part of DFT')

subplot(3,2,5)
stem(n,IDFT);
title('IDFT of Input Sequence')