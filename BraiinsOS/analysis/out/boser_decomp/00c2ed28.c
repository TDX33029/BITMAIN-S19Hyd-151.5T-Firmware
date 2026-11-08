// FUN_00c2ed28 @ 00c2ed28 size=264 calls_out=10 calls_in=0
// strings: 

void FUN_00c2ed28(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xac) == '\x03') {
      FUN_00bb1450(param_1 + 0x40);
    }
    FUN_00d7fa90(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xf8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\x04') {
    return;
  }
  piVar1 = (int *)(param_1 + 0x38);
  if (*piVar1 == 2) {
    FUN_00b92e1c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    FUN_0132b958(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),8,0xd8);
  }
  else {
    FUN_019de0e0(piVar1);
    if (*(int *)(param_1 + 0x44) != -1) {
      FUN_01bf01d6();
    }
    FUN_0179995c(piVar1);
    FUN_01139b38(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x30));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
  FUN_00d7fa90(param_1 + 0x80);
  return;
}

