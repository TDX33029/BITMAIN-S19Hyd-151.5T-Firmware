// FUN_00dfb908 @ 00dfb908 size=136 calls_out=4 calls_in=1
// strings: 

void FUN_00dfb908(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      FUN_00df984c(param_1 + 0x24);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '\x04') {
    if (*(char *)(param_1 + 0x5cc) == '\x03') {
      if (*(char *)(param_1 + 0x5c0) == '\x03') {
        iVar1 = param_1 + 0x2f8;
      }
      else {
        if (*(char *)(param_1 + 0x5c0) != '\0') goto LAB_00dfb970;
        iVar1 = param_1 + 0x30;
      }
      FUN_00df9ef8(iVar1);
    }
LAB_00dfb970:
    FUN_0084ec48(param_1 + 0x20);
    if (*(undefined1 **)(param_1 + 0xc) == &DAT_80000005) {
      return;
    }
    FUN_00df9ee0((undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

