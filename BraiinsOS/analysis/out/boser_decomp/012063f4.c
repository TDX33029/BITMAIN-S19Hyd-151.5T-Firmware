// FUN_012063f4 @ 012063f4 size=116 calls_out=5 calls_in=1
// strings: 

void FUN_012063f4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_01ab20b8(param_1 + 800);
  FUN_01ab20b8(param_1 + 0xe0);
  FUN_01ab22d8(param_1 + 0x1cc);
  FUN_01aae528(param_1 + 0x10);
  FUN_01aae5f4(param_1 + 0x40);
  uVar2 = 0;
  iVar3 = 0x7c;
  do {
    iVar1 = *(int *)(param_1 + 0x60 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_01ac21e4(iVar1,1 << (uVar2 & 0xff));
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + -4;
  } while (iVar3 != 0);
  return;
}

