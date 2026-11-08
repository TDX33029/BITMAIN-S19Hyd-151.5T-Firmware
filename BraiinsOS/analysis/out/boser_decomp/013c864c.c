// FUN_013c864c @ 013c864c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_013c864c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_013f476c(iVar1);
    iVar1 = iVar1 + 4;
  }
  FUN_01af7af8(*param_1,iVar3,4,4);
  return;
}

