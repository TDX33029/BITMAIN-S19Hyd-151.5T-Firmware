// FUN_01854138 @ 01854138 size=60 calls_out=2 calls_in=2
// strings: 

int * FUN_01854138(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0142306c(param_2);
  if (*param_1 != 0) {
    FUN_01443048(*param_1,param_1[1]);
  }
  *param_1 = iVar1;
  param_1[1] = (int)&DAT_01cf47cc;
  return param_1;
}

