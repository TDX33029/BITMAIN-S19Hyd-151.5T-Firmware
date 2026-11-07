// FUN_014ef3ac @ 014ef3ac size=236 calls_out=3 calls_in=2
// strings: 

void FUN_014ef3ac(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  uVar2 = *param_2;
  uVar1 = 0x15;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      piVar3 = (int *)param_2[1];
      local_40 = *piVar3;
      local_3c = piVar3[1];
      iStack_38 = piVar3[2];
      iStack_34 = piVar3[3];
      FUN_014caa68(&local_30);
      if (local_30 == -0x80000000) {
        *param_1 = -0x7fffffff;
        param_1[1] = local_2c;
      }
      else {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = iStack_28;
      }
      thunk_FUN_01be4678(piVar3);
      goto LAB_014ef478;
    }
    if (uVar1 != 0x12) {
      FUN_014caa68(&local_40,param_2);
      if (local_40 == -0x80000000) {
        *param_1 = -0x7fffffff;
        param_1[1] = local_3c;
        return;
      }
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = iStack_38;
      return;
    }
  }
  *param_1 = -0x80000000;
LAB_014ef478:
  if (uVar2 == 0x80000011) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
}

