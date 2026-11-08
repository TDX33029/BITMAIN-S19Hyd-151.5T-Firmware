// FUN_00df9ef8 @ 00df9ef8 size=108 calls_out=4 calls_in=50
// strings: 

void FUN_00df9ef8(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x97);
  if (cVar1 == '\0') {
    FUN_00b9c200(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00dfba30(param_1 + 0x98);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00dfbaa0(param_1 + 0x98);
  }
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN_01834abc(param_1);
  }
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}

