// FUN_015ab63c @ 015ab63c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_015ab63c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_015e8b90(iVar1);
    iVar1 = iVar1 + 0x18;
  }
  FUN_0134aee0(*param_1,iVar3,4,0x18);
  return;
}

