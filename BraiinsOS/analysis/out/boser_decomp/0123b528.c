// FUN_0123b528 @ 0123b528 size=260 calls_out=2 calls_in=0
// strings: 

void FUN_0123b528(int *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
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
  
  puVar2 = *(uint **)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (puVar2 == (uint *)0x0) {
    FUN_01a429c4(param_1,&DAT_0056ad38,0x10);
    return;
  }
  uVar1 = 0x15;
  if ((int)*puVar2 < 0) {
    uVar1 = *puVar2 ^ 0x80000000;
  }
  if (uVar1 == 0x10) {
LAB_0123b574:
    param_1[2] = 2;
    param_1[3] = 0;
  }
  else {
    if (uVar1 == 0x11) {
      FUN_01235f80(&local_48,puVar2[1]);
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
      if (uVar1 == 0x12) goto LAB_0123b574;
      FUN_01235f80(&local_48);
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
    param_1[2] = local_40;
    param_1[3] = iStack_3c;
    param_1[4] = iStack_38;
    param_1[5] = iStack_34;
    param_1[6] = local_30;
    param_1[7] = iStack_2c;
    param_1[8] = iStack_28;
    param_1[9] = iStack_24;
  }
  *param_1 = 2;
  return;
}

