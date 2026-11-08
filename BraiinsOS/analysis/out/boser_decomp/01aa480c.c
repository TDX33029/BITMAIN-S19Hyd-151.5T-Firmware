// FUN_01aa480c @ 01aa480c size=68 calls_out=2 calls_in=2
// strings: 

void FUN_01aa480c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2;
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_00949bc0(iVar1);
    iVar1 = iVar1 + 0x24;
  }
  FUN_0132b958(*param_1,iVar2,4,0x24);
  return;
}

