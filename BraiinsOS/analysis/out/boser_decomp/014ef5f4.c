// FUN_014ef5f4 @ 014ef5f4 size=124 calls_out=1 calls_in=3
// strings: 

void FUN_014ef5f4(int *param_1,uint *param_2)

{
  uint uVar1;
  int local_20;
  int local_1c;
  int iStack_18;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 == 0x10) {
LAB_014ef628:
    *param_1 = -0x80000000;
  }
  else {
    if (uVar1 == 0x11) {
      param_2 = (uint *)param_2[1];
    }
    else if (uVar1 == 0x12) goto LAB_014ef628;
    FUN_014f4a6c(&local_20,param_2);
    if (local_20 == -0x80000000) {
      *param_1 = -0x7fffffff;
      param_1[1] = local_1c;
    }
    else {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = iStack_18;
    }
  }
  return;
}

