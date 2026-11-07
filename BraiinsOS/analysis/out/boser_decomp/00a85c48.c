// FUN_00a85c48 @ 00a85c48 size=120 calls_out=5 calls_in=1
// strings: 

void FUN_00a85c48(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\0') {
    FUN_00a85b84(param_1);
    FUN_0178e1c4(param_1 + 0x98);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00a85b08(param_1 + 0x158);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00a85b58(param_1 + 0x198);
    FUN_00a858f8(param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x152) = 0;
  if (*(char *)(param_1 + 0x151) != '\0') {
    FUN_00a85b84(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0x151) = 0;
  return;
}

