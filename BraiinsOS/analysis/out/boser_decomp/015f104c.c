// FUN_015f104c @ 015f104c size=68 calls_out=2 calls_in=0
// strings: 

void FUN_015f104c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_015e781c(iVar1);
    iVar1 = iVar1 + 0x58;
  }
  FUN_0134aee0(*param_1,iVar3,8,0x58);
  return;
}

