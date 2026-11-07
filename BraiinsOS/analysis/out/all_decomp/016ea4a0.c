// FUN_016ea4a0 @ 016ea4a0 size=172 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_016ea4a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = FUN_0172a2c0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_016ea4f0:
    iVar4 = FUN_016e60e0(iVar1,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),iVar2);
    if (iVar4 == 1) {
      FUN_016eb26c(param_2,iVar1);
      uVar3 = 1;
      goto LAB_016ea518;
    }
  }
  else {
    iVar2 = FUN_0171e3b4();
    if (iVar2 != 0) {
      FUN_0173c0e4(iVar2,param_1);
      goto LAB_016ea4f0;
    }
  }
  uVar3 = 0;
  FUN_0172a31c(iVar1);
LAB_016ea518:
  FUN_0171e3cc(iVar2);
  return uVar3;
}

