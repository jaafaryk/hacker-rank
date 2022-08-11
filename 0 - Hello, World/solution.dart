import 'dart:io';

void main(List<String> arguments)
{
	int? x, y;
	double? v, z;

	// Here ? and ! are for null safety
	x = int.parse(stdin.readLineSync()!);
	y = int.parse(stdin.readLineSync()!);
	v = double.parse(stdin.readLineSync()!);
	z = double.parse(stdin.readLineSync()!);

	int intSum = x + y;
	int intSub = x - y;

	double floatSum = v + z;
	double floatSub = v - z;

	stdout.write("$intSum ");
	stdout.write("$intSub\n");
	stdout.write("$floatSum ");
	stdout.write(floatSub);
}
