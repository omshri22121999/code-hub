# The Main import statements to import python libraries and for the files which we have created for the same.
import utils
import tensorflow as tf
import dcgan
import keras

# A function to control GPU usage and ensure that one doesn't run out of memory. - IGNORE DONT WORRY TOO MUCH ABOUT IT
def get_session():
    config = tf.ConfigProto()
    config.gpu_options.allow_growth = True
    return tf.Session(config = config)

# The main function here is where everything starts - get the dataset from MNIST and then pretrain the Discriminator
# and then train the generator.
def main(lr, batch_size, num_epochs, save_path):
    
    # Loading the dataset using the function import_mnist present in utils.py
    x,_,_,_ = utils.import_mnist()
    
    # defining an object of the Class DCGAN which is going to be our gan model. This function calls the init function of the class DCGAN
    gan_model = dcgan.DCGAN(lr, batch_size, num_epochs, save_path)
    
    """
    YOUR CODE GOES HERE!!!......................... (use functions defined in the DCGAN CLASS)
    
    
    
    
    
    Start training the model.
    """
    
    print("Training Done!")
    
# This is the main function. This is used to ensure that the code runs only if the main file is executed/run by the user.
if __name__ == "__main__":
    
    keras.backend.tensorflow_backend.set_session(get_session())
    # defining model params: lr - learning rate.
    lr = 1e-4
    batch_size = 128
    num_epochs = 1000
    save_path = "weights/"
    
    # calling the main function defined above.
    main(lr, batch_size, num_epochs, save_path)