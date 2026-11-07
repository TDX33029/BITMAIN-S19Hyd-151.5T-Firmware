// FUN_01427bf4 @ 01427bf4 size=60 calls_out=2 calls_in=6
// strings: 

int * FUN_01427bf4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0142322c(param_2);
  if (*param_1 != 0) {
    FUN_00f80320(*param_1,param_1[1]);
  }
  *param_1 = iVar1;
  param_1[1] = (int)&DAT_01cf48ac;
  return param_1;
}

