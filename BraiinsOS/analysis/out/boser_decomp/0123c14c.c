// FUN_0123c14c @ 0123c14c size=192 calls_out=1 calls_in=2
// strings: 

void FUN_0123c14c(int *param_1,uint *param_2)

{
  uint uVar1;
  int local_48;
  int local_44;
  int iStack_40;
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
LAB_0123c180:
    *param_1 = 2;
    param_1[1] = 0;
  }
  else {
    if (uVar1 == 0x11) {
      FUN_01223c74(&local_48,param_2[1]);
      if (local_48 != 2) {
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = iStack_40;
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
      if (uVar1 == 0x12) goto LAB_0123c180;
      FUN_01223c74(&local_48);
      if (local_48 != 2) {
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = iStack_40;
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
    param_1[1] = 1;
    *param_1 = 2;
    param_1[2] = local_44;
  }
  return;
}

