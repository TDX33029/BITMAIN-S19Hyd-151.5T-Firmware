// FUN_00711e0c @ 00711e0c size=96 calls_out=0 calls_in=2
// strings: 

void FUN_00711e0c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != param_2) {
    param_3 = param_3 - param_2;
    piVar1 = (int *)(param_1 + param_2 * 0x18);
    do {
      param_3 = param_3 + -1;
      if (*piVar1 != 0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
      }
      piVar1 = piVar1 + 6;
    } while (param_3 != 0);
  }
  return;
}

