import 'package:flutter/material.dart';
import 'constants.dart';

class Como extends StatelessWidget {
  const Como({Key? key, required this.title}) : super(key: key);

  final String title;

  @override
  Widget build(BuildContext context) {
    return Card(
      child: SizedBox(
        child: Center(
          child: Text(
            this.title,
            style: TextStyle(fontSize: 20),
            textAlign: TextAlign.center,
          ),
        ),
        height: 50,
      ),
      color: Colors.green,
      elevation: 1.68,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(PHI*11)),
    );
  }
}
