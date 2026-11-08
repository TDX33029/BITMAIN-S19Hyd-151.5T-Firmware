// FUN_0165c9bc @ 0165c9bc size=40 calls_out=1 calls_in=1
// strings: 

void FUN_0165c9bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0165ca10(iVar1);
    iVar1 = iVar1 + 0x7c;
  }
  return;
}

