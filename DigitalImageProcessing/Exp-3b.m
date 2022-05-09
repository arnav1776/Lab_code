<<<<<<< HEAD
imgetfile;
I=imread(ans);
G=rgb2gray(I);
S=fft(G);
Y=uint8(ifft(S));

subplot(2,2,1)
imshow(I);
title('Orignal Image');
subplot(2,2,2)
imshow(G);
title('Gray Image');
subplot(2,2,3)
imshow(S);
title('Fast Fourier Transform');
subplot(2,2,4)
imshow(uint8(Y));
title('Inverse Fast Fourier Transform');
=======
imgetfile;
I=imread(ans);
G=rgb2gray(I);
S=fft(G);
Y=uint8(ifft(S));

subplot(2,2,1)
imshow(I);
title('Orignal Image');
subplot(2,2,2)
imshow(G);
title('Gray Image');
subplot(2,2,3)
imshow(S);
title('Fast Fourier Transform');
subplot(2,2,4)
imshow(uint8(Y));
title('Inverse Fast Fourier Transform');
>>>>>>> 2975d64f78a2c3604cbc62f30a024bb5240c2b3b
