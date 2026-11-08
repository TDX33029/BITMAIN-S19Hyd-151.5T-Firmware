// FUN_00044f74 @ 00044f74  size=68  callers=0
// program: cgminer


undefined4 FUN_00044f74(void *param_1,size_t param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = param_3[1] + param_2;
  if (uVar1 <= *param_3) {
    memcpy((void *)(param_3[2] + param_3[1]),param_1,param_2);
    uVar1 = param_2 + param_3[1];
  }
  param_3[1] = uVar1;
  return 0;
}

