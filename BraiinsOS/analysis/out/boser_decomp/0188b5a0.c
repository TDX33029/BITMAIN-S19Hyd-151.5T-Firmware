// FUN_0188b5a0 @ 0188b5a0 size=120 calls_out=5 calls_in=1
// strings: 

void FUN_0188b5a0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\0') {
    FUN_01741b38(param_1);
    FUN_0178e1c4(param_1 + 0x98);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_0188b524(param_1 + 0x158);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_0188b574(param_1 + 0x198);
    FUN_0188b2f8(param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x152) = 0;
  if (*(char *)(param_1 + 0x151) != '\0') {
    FUN_01741b38(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0x151) = 0;
  return;
}

