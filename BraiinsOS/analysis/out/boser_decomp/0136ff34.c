// FUN_0136ff34 @ 0136ff34 size=108 calls_out=3 calls_in=12
// strings: 

void FUN_0136ff34(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar4 = param_2[1];
  iVar3 = param_2[2];
  iVar1 = FUN_01367c40(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar4,iVar3);
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (iVar1 < 1) {
    return;
  }
  iVar2 = FUN_01367cb8(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar4,iVar3);
  if (!SBORROW4(*(int *)(iVar2 + 0x3c),iVar1)) {
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) - iVar1;
  }
  FUN_0136d3c8(param_1,iVar1,param_2,param_3);
  return;
}

