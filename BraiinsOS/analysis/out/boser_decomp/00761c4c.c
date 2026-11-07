// FUN_00761c4c @ 00761c4c size=204 calls_out=7 calls_in=2
// strings: 

void FUN_00761c4c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x68c);
  if (cVar1 == '\0') {
    FUN_00761df0(param_1 + 0x670);
    FUN_0075d5b4(param_1 + 0x80);
    FUN_0074b190(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x694));
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00761e40(param_1 + 0x690);
  }
  if (*(char *)(param_1 + 0x68d) != '\0') {
    FUN_0077ef00(param_1 + 0x480);
  }
  *(undefined1 *)(param_1 + 0x68d) = 0;
  if (*(char *)(param_1 + 0x68e) != '\0') {
    FUN_0075d5b4(param_1 + 0x698);
  }
  *(undefined1 *)(param_1 + 0x68e) = 0;
  FUN_0077ef00(param_1 + 0x290);
  FUN_013f476c(param_1 + 0x688);
  *(undefined1 *)(param_1 + 0x68f) = 0;
  FUN_0074b190(param_1 + 0x200);
  FUN_0075d5b4(param_1 + 0x140);
  FUN_00761df0(param_1 + 0x67c);
  return;
}

