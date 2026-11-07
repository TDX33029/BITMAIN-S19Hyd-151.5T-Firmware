// FUN_005f60f4 @ 005f60f4 size=112 calls_out=4 calls_in=4
// strings: 

void FUN_005f60f4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x210);
  if (cVar1 == '\0') {
    FUN_005f9b88(param_1);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_005f11d4(param_1 + 0x230);
  }
  *(undefined1 *)(param_1 + 0x213) = 0;
  FUN_005f1224(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x214) = 0;
  if (*(char *)(param_1 + 0x211) != '\0') {
    FUN_0096a6b0(param_1 + 0x220);
  }
  *(undefined2 *)(param_1 + 0x211) = 0;
  return;
}

