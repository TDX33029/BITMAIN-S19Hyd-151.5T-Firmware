// FUN_01a704d8 @ 01a704d8 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_01a704d8(int *param_1,int param_2)

{
  int *piVar1;
  
  while (piVar1 = param_1, param_2 != 0) {
    param_2 = param_2 + -1;
    param_1 = piVar1 + 0x30;
    if (*piVar1 != 2) {
      FUN_017b5074(piVar1 + 2);
    }
  }
  return;
}

