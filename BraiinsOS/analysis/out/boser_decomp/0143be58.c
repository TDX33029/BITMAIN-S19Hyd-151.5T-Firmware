// FUN_0143be58 @ 0143be58 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_0143be58(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    piVar1 = piVar1 + 8;
  }
  return;
}

