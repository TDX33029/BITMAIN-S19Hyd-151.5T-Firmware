// FUN_017e26b0 @ 017e26b0 size=84 calls_out=0 calls_in=1
// strings: 

void FUN_017e26b0(int *param_1,int param_2)

{
  int *piVar1;
  
  while (piVar1 = param_1, param_2 != 0) {
    param_2 = param_2 + -1;
    param_1 = piVar1 + 10;
    if (*piVar1 != 3) {
      (**(code **)(piVar1[1] + 0x10))(piVar1 + 4,piVar1[2],piVar1[3]);
    }
  }
  return;
}

