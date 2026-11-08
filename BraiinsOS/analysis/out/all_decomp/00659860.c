// FUN_00659860 @ 00659860 size=128 calls_out=3 calls_in=2
// strings: 

void FUN_00659860(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x78);
  if (cVar1 == '\0') {
    FUN_0111d680(param_1 + 0x28);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_007aa730(param_1 + 0x80);
    FUN_005c3320(param_1 + 0x80);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xd8) == '\0') {
      FUN_0111d680(param_1 + 0x88);
    }
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
  if (*(char *)(param_1 + 0x79) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}

