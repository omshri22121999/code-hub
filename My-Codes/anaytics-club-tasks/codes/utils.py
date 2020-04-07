import numpy as np
import matplotlib.pyplot as plt

def preprocess_img(x):
    """
    The function to return the preprocessed images. 
    You dont need to preprocess for sure, but use this if you are!!
    
    Suggest some different ways to preprocess images!!!
    
    
    
    YOUR CODE GOES HERE
    """

# helper function to download the MNIST dataset if not available and hence return the x values.

def import_mnist(preprocess=True):
    
    print("Downloading MNIST data ... ", end = "")

    # downloads the data from the mnist dataset incase it is unavailble in your system - one time operation only.
    from keras.datasets import mnist
    
    # loading data from the MNIST DIGIT dataset. We will be using only x_train as the model just needs to generate images 
    # which are real and indistinguishable. Hence we are not worried about which digit the model is outputing.
    
    (x_train, y_train), (x_test, y_test) = mnist.load_data()
    # reshaping the input to pass to keras - input shape = (number of images, image_dimensions, 1 - number of channels) : Black and white image hence single channel.
    x_train = x_train.reshape(x_train.shape[0], 28,28,1)
    x_test = x_test.reshape(x_test.shape[0], 28,28,1)
    
    """
    Preprocessing the images read from the dataset.
    if preprocess:
        x_train = preprocess_img(x_train)
        x_test = preprocess_img(x_test)
    
    You dont need to do this for sure but still think about it!
    """
    
    
    
    
    """
    YOUR CODE GOES HERE!
    """



    print("Done")
    return x_train, y_train, x_test, y_test


"""
Return a numpy array containing size number of randomly generated numbers each of length 100. HINT : use numpy random functions.
"""
def gen_noise(size):
    """
    YOUR CODE GOES HERE!!
    """

"""
Like i said everytime the entire GAN is trained the discriminator's weights are fixed. Hence this function is used to do that
Given a network net it converts all its weights either to Frozen (fixed) - if False and back to trainable mode if True
"""
def make_trainable(net, val):
    net.trainable = val
    for l in net.layers:
        l.trainable = val
        
"""
Plotting helper function - I did it for you, so take LITE!!!
"""
        
def plot_large(img):
    fig1 = plt.figure(figsize=(4,4))
    ax1 = fig1.add_subplot(1,1,1)
    ax1.axes.get_xaxis().set_visible(False)
    ax1.axes.get_yaxis().set_visible(False)
    ax1.imshow(img, cmap="gray")
    plt.show()

def plot(generator,n=5):
    img = np.zeros((n*28,1))
    for i in range(n):
        col = np.multiply(np.add(generator.predict(gen_noise(n)).reshape(n*28,28),1.0),255.0/2.0)
        img = np.concatenate((img,col), axis=1)
    plot_large(img)