// FUN_00667f84 @ 00667f84 size=84 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00667f84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    uVar1 = FUN_006677c4();
    return uVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  do {
    iVar2 = FUN_006677c4(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = FUN_006677c4(param_1);
  return uVar1;
}

