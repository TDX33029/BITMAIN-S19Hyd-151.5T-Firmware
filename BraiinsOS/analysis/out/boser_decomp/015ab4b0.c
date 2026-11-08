// FUN_015ab4b0 @ 015ab4b0 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_015ab4b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_015e8cd8(iVar1);
    iVar1 = iVar1 + 0x30;
  }
  FUN_0134aee0(*param_1,iVar3,8,0x30);
  return;
}

