// FUN_013a6ee0 @ 013a6ee0 size=108 calls_out=3 calls_in=4
// strings: 

void FUN_013a6ee0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar4 = param_2[1];
  iVar3 = param_2[2];
  iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar4,iVar3);
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (iVar1 < 1) {
    return;
  }
  iVar2 = FUN_0139f148(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar4,iVar3);
  if (!SBORROW4(*(int *)(iVar2 + 0x3c),iVar1)) {
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) - iVar1;
  }
  FUN_013a4374(param_1,iVar1,param_2,param_3);
  return;
}

