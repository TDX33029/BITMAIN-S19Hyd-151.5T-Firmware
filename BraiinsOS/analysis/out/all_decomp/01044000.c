// FUN_01044000 @ 01044000 size=100 calls_out=2 calls_in=0
// strings: 

void FUN_01044000(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar1 = FUN_016dac50(*(undefined4 *)(param_1 + 0x20));
    iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
    if (iVar2 == -4) {
      iVar2 = 0;
    }
    FUN_016d3496(iVar2);
    return;
  }
  if (*(char *)(param_1 + 0x44) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x40) == '\x03') {
    FUN_01044104(param_1 + 0x2c);
  }
  else if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_016dffb2(*(undefined4 *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x45) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x45) = 0;
  return;
}

