// FUN_00c0a868 @ 00c0a868 size=136 calls_out=4 calls_in=1
// strings: 

void FUN_00c0a868(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      FUN_00b99500(param_1 + 0x24);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '\x04') {
    if (*(char *)(param_1 + 0x5cc) == '\x03') {
      if (*(char *)(param_1 + 0x5c0) == '\x03') {
        iVar1 = param_1 + 0x2f8;
      }
      else {
        if (*(char *)(param_1 + 0x5c0) != '\0') goto LAB_00c0a8d0;
        iVar1 = param_1 + 0x30;
      }
      FUN_00b9a8cc(iVar1);
    }
LAB_00c0a8d0:
    FUN_0084ec48(param_1 + 0x20);
    if (*(undefined1 **)(param_1 + 0xc) == &DAT_80000005) {
      return;
    }
    FUN_00c0a5c0((undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

