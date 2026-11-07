// FUN_014c9bdc @ 014c9bdc size=68 calls_out=2 calls_in=4
// strings: 

void FUN_014c9bdc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_014e68d0(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0132b958(*param_1,iVar3,8,0x20);
  return;
}

