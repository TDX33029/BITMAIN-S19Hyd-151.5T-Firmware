// FUN_0123e3fc @ 0123e3fc size=204 calls_out=1 calls_in=2
// strings: 

void FUN_0123e3fc(int *param_1,uint *param_2)

{
  uint uVar1;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 == 0x10) {
LAB_0123e430:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 2;
  }
  else {
    if (uVar1 == 0x11) {
      FUN_01223a00(&local_48,param_2[1]);
      if (local_48 != 2) {
        *param_1 = local_48;
        param_1[1] = iStack_44;
        param_1[2] = local_40;
        param_1[3] = iStack_3c;
        param_1[4] = iStack_38;
        param_1[5] = iStack_34;
        param_1[6] = local_30;
        param_1[7] = iStack_2c;
        param_1[8] = iStack_28;
        param_1[9] = iStack_24;
        param_1[10] = iStack_20;
        param_1[0xb] = iStack_1c;
        return;
      }
    }
    else {
      if (uVar1 == 0x12) goto LAB_0123e430;
      FUN_01223a00(&local_48);
      if (local_48 != 2) {
        *param_1 = local_48;
        param_1[1] = iStack_44;
        param_1[2] = local_40;
        param_1[3] = iStack_3c;
        param_1[4] = iStack_38;
        param_1[5] = iStack_34;
        param_1[6] = local_30;
        param_1[7] = iStack_2c;
        param_1[8] = iStack_28;
        param_1[9] = iStack_24;
        param_1[10] = iStack_20;
        param_1[0xb] = iStack_1c;
        return;
      }
    }
    param_1[2] = 1;
    param_1[3] = 0;
    *param_1 = 2;
    *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_3c,local_40);
  }
  return;
}

