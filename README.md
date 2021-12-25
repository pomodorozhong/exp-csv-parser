# Experiment with "Vince's CSV Parser"

This is a demo project to showcase the basic usage of the [vincentlaucsb/csv-parser](https://github.com/vincentlaucsb/csv-parser).

## Run

+ Use `Qt Creator` to open the `app.pro` file
+ Modify `"your-path-to-the-example.csv"` in the `main.cpp` to reflect the path of `example.csv`.
+ Build & Run

## Expected output from the `main.cpp`

```c
25.55, 12:00,
25.8, 12:30,
25.32, 13:00,

0: 25.55
1: 25.8
2: 25.32
sum = 76.67
```

## Troubleshoot

If you got the following error while runing the `main.cpp`, you might set `"your-path-to-the-example.csv"` wrong, correct the path to fix it.
```
terminate called after throwing an instance of 'std::runtime_error'
  what():  Cannot open file your-path-to-the-example.csv
```
