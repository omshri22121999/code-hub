# Understanding of GAN

GAN (Generative Adversarial Network) is a type of unsupervised learning where we generate data/images based on random noise inputs.

It comprises of two adversaries, the generator and the discriminator. The job of the generator is to generate the data based on given noise input, and the job of the discriminator is to predict whether the given data is real or fake.

The method of training the networks consists of joining both the networks, the generator first followed by the discriminator. The discriminator is trained initially on real data and fake data (provided by the generator initially). After the discriminator is trained, the weights of discriminator is fixed and the generator is trained via the conjoined network. The noise input is given to the network and based on the output, the gradients are calculated and backpropagated to the generator network to train it. This process keeps repeating until either the generator provides somewhat reasonable data, or the discriminator cannot differentiate between real and fake, thus making its loss constant.
