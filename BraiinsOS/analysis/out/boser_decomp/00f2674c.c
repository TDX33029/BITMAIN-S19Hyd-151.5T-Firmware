// FUN_00f2674c @ 00f2674c size=60 calls_out=2 calls_in=2
// strings: 

int * FUN_00f2674c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_01427b74(1,3);
  if (*piVar1 != 0) {
    FUN_00f80320(*piVar1,piVar1[1]);
  }
  *piVar1 = param_1;
  piVar1[1] = param_2;
  return piVar1;
}

