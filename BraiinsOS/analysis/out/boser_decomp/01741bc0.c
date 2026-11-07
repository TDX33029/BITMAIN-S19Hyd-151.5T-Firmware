// FUN_01741bc0 @ 01741bc0 size=120 calls_out=5 calls_in=1
// strings: 

void FUN_01741bc0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\0') {
    FUN_01741b38(param_1);
    FUN_0178e1c4(param_1 + 0x98);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01741abc(param_1 + 0x158);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01741b0c(param_1 + 0x198);
    FUN_01741890(param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x152) = 0;
  if (*(char *)(param_1 + 0x151) != '\0') {
    FUN_01741b38(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0x151) = 0;
  return;
}

