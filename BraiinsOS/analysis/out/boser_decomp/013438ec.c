// FUN_013438ec @ 013438ec size=64 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_013438ec(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  iVar3 = *(int *)(param_1[2] + 0xc);
  iVar2 = *(int *)(param_1[2] + 4);
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  if (iVar2 == iVar4) {
    return 0;
  }
  uVar1 = FUN_013437d0(*param_1,iVar4,iVar2 + 1,iVar4);
  return uVar1;
}

