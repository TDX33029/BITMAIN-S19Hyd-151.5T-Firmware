// FUN_0007807c @ 0007807c  size=140  callers=0
// program: bmminer


undefined4 FUN_0007807c(void *param_1,size_t param_2,uint *param_3)

{
  if (param_3[1] + param_2 <= *param_3) {
    memcpy((void *)(param_3[2] + param_3[1]),param_1,param_2);
  }
  param_3[1] = param_3[1] + param_2;
  return 0;
}

