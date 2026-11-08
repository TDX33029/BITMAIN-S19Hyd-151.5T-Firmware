// FUN_0068d48c @ 0068d48c size=96 calls_out=3 calls_in=2
// strings: 

void FUN_0068d48c(int param_1)

{
  int iVar1;
  uint local_98;
  int iStack_94;
  
  while( true ) {
    FUN_0069b3e8(&local_98,param_1 + 0x50,param_1);
    if ((uint)(local_98 < 2) <= (uint)-iStack_94) break;
    FUN_0069b234(&local_98);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x884);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

