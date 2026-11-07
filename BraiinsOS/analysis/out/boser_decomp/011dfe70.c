// FUN_011dfe70 @ 011dfe70 size=104 calls_out=3 calls_in=2
// strings: 

void FUN_011dfe70(int param_1)

{
  int iVar1;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  while( true ) {
    FUN_01194610(&local_20,param_1 + 0x50,param_1);
    if (local_20 - 3U < 2) break;
    if (local_20 != 0) {
      FUN_019bb7e0(uStack_1c,uStack_18);
    }
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x104);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

