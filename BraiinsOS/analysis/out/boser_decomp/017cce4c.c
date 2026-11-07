// FUN_017cce4c @ 017cce4c size=52 calls_out=2 calls_in=0
// strings: 

void FUN_017cce4c(int param_1)

{
  int iVar1;
  bool bVar2;
  
  FUN_01712d5c((int *)(param_1 + 8));
  bVar2 = *(int *)(param_1 + 8) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (bVar2 && iVar1 != 0) {
    FUN_017c21dc();
    return;
  }
  return;
}

