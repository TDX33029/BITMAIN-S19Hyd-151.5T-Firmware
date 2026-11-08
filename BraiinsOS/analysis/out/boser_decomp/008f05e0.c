// FUN_008f05e0 @ 008f05e0 size=136 calls_out=4 calls_in=2
// strings: 

void FUN_008f05e0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      FUN_00df984c(param_1 + 0x34);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2c) == '\x04') {
    if (*(char *)(param_1 + 0x5e8) == '\x03') {
      if (*(char *)(param_1 + 0x5d0) == '\x03') {
        iVar1 = param_1 + 0x308;
      }
      else {
        if (*(char *)(param_1 + 0x5d0) != '\0') goto LAB_008f0648;
        iVar1 = param_1 + 0x40;
      }
      FUN_00b9a8cc(iVar1);
    }
LAB_008f0648:
    FUN_0084ec48(param_1 + 0x30);
    if (*(undefined1 **)(param_1 + 0x1c) == &DAT_80000005) {
      return;
    }
    FUN_008ee56c((undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

