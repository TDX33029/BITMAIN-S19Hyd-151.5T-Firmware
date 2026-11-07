// FUN_01409904 @ 01409904 size=84 calls_out=0 calls_in=1
// strings: 

void FUN_01409904(int *param_1,int param_2)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = param_2;
  while (piVar1 = param_1, iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      param_2 = piVar1[1];
    }
    param_1 = piVar1 + 3;
    if (*piVar1 != 0 && param_2 != 0) {
      (**(code **)(param_2 + 0xc))(piVar1[2]);
      param_2 = extraout_r1;
    }
  }
  return;
}

