// FUN_0090bf00 @ 0090bf00 size=136 calls_out=4 calls_in=3
// strings: 

void FUN_0090bf00(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\x03') {
    if (*(char *)(param_1 + 0xe8) == '\x03') {
      FUN_00df984c(param_1 + 0x2c);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x24) == '\x04') {
    if (*(char *)(param_1 + 0x5dc) == '\x03') {
      if (*(char *)(param_1 + 0x5c8) == '\x03') {
        iVar1 = param_1 + 0x300;
      }
      else {
        if (*(char *)(param_1 + 0x5c8) != '\0') goto LAB_0090bf68;
        iVar1 = param_1 + 0x38;
      }
      FUN_00b9a8cc(iVar1);
    }
LAB_0090bf68:
    FUN_0084ec48(param_1 + 0x28);
    if (*(undefined1 **)(param_1 + 0x14) == &DAT_80000005) {
      return;
    }
    FUN_008ee56c((undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

