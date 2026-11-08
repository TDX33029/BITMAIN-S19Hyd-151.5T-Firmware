// FUN_00a61140 @ 00a61140 size=92 calls_out=1 calls_in=2
// strings: 

void FUN_00a61140(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  do {
    bVar1 = *(byte *)(piVar2 + -1);
    if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar2 != 0)) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
    piVar2 = piVar2 + 0x104;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

