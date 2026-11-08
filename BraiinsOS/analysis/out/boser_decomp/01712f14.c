// FUN_01712f14 @ 01712f14 size=44 calls_out=2 calls_in=0
// strings: 

void FUN_01712f14(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  FUN_01712f68(piVar1);
  if (*piVar1 == 4 && *(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_01712c88(piVar1);
  return;
}

