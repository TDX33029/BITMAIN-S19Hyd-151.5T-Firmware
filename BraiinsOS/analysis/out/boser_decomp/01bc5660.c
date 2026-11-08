// FUN_01bc5660 @ 01bc5660 size=200 calls_out=2 calls_in=2
// strings: 

int FUN_01bc5660(uint param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0x38) == 1) {
    if (param_3 == 0) {
      iVar2 = FUN_01bc5598();
    }
    else {
      iVar2 = FUN_01bc556c();
    }
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    while (param_1 == 0x20000) {
      iVar5 = iVar5 + 0x100;
      param_1 = 0x1ffff;
    }
    if (param_1 < 0x40) {
      uVar4 = (uint)(byte)""[param_1];
    }
    else {
      uVar4 = 0x32 - LZCOUNT(param_1);
    }
    bVar1 = (&DAT_005639c1)[uVar4];
    iVar3 = *(int *)(param_2 + 0x2c);
    if (param_3 == 0) {
      iVar2 = FUN_01bc5598(*(undefined4 *)(*(int *)(param_2 + 4) + uVar4 * 4));
    }
    else {
      iVar2 = FUN_01bc556c();
    }
    iVar2 = (iVar3 + (uint)bVar1 * 0x100) - iVar2;
  }
  return iVar2 + iVar5;
}

