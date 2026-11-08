// FUN_007bb54c @ 007bb54c size=40 calls_out=1 calls_in=1
// strings: 

void FUN_007bb54c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_007b96d0(iVar1);
    iVar1 = iVar1 + 0x18;
  }
  return;
}

