import 'dart:io';

void main() {
  Process? process;
  Directory src = Directory("./src");
  src.watch(recursive: true).forEach((event) async {
    process?.kill();
    process = await Process.start("raylib/run", [], runInShell: true);
  });
}
