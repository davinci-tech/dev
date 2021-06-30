import 'package:flutter/material.dart';
import 'MyHomePage.dart';
import 'constants.dart';

void main(List<String> args) {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Ad Como',
      theme: ThemeData(
        primaryColor: primary_color,
      ),
      home: MyHomePage(),
    );
  }
}
