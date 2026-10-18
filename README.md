# png-color-changer

Takes an image(s) and a hex color as input
Determines how many unique colors exist in that image given a user defined threshold.
Creates a new shade of the input color for each of the unique colors found in the source image by converting from RGB to HSV and adjusting the value/brightness. 
Outputs a new image.

## Development

- clone repo
- run `./bin/build.sh` to compile
- run `./bin/test.sh` to test the program

## Usage

- clone repo
- run `./add_to_path.sh`
- reload shell
- run `png-color-changer -i ffffff -c dedede -p /path/to/file`

### Args

- `-i` a hex color that will not be adjusted
- `-c` a hex color that will replace all colors in the image
- `-p` the path to the source image, or directory
- `-t` the numeric range of what constitutes a color. directly affects the amount of detail output.
