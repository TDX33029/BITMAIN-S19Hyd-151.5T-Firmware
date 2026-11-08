// FUN_01410e5c @ 01410e5c size=56 calls_out=0 calls_in=1
// strings: 

void FUN_01410e5c(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  piVar1 = (int *)(param_1 + 0x10);
  while (param_2 = param_2 + -1, param_2 != 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    piVar1 = piVar1 + 9;
  }
  return;
}

