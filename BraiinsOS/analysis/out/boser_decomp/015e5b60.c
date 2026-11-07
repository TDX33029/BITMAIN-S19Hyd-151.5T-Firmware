// FUN_015e5b60 @ 015e5b60 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_015e5b60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2;
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28));
    FUN_015d1bd4(iVar1);
    iVar1 = iVar1 + 0x38;
  }
  FUN_0134aee0(*param_1,iVar2,8,0x38);
  return;
}

