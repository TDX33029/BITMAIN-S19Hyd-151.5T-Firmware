// FUN_01b2b88c @ 01b2b88c size=68 calls_out=0 calls_in=7
// strings: 

int FUN_01b2b88c(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while ((0 < iVar1 && (*(int *)(*param_1 + (iVar1 + -1) * 4) == 0))) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

