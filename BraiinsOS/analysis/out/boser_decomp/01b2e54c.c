// FUN_01b2e54c @ 01b2e54c size=88 calls_out=1 calls_in=10
// strings: 

bool FUN_01b2e54c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_01b2e1dc(param_1,1);
    return iVar1 != 0;
  }
  return false;
}

