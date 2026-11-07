// FUN_0123e104 @ 0123e104 size=232 calls_out=1 calls_in=6
// strings: 

void FUN_0123e104(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 uStack_19;
  
  uVar1 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 == 0x10) {
LAB_0123e138:
    local_4c._0_1_ = 2;
    *param_1 = 2;
    goto LAB_0123e1a0;
  }
  if (uVar2 == 0x11) {
    param_2 = (uint *)param_2[1];
    if (*param_2 == 0x80000000) goto LAB_0123e194;
    FUN_01222458(&local_50,param_2,&uStack_19,&DAT_01d064d8);
    if (local_50 != 2) {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      param_1[6] = local_38;
      param_1[7] = iStack_34;
      param_1[8] = iStack_30;
      param_1[9] = iStack_2c;
      param_1[10] = iStack_28;
      param_1[0xb] = iStack_24;
      return;
    }
LAB_0123e1d0:
  }
  else {
    if (uVar2 == 0x12) goto LAB_0123e138;
    if (uVar1 != 0x80000000) {
      FUN_01222458(&local_50,param_2,&uStack_19,&DAT_01d064d8);
      if (local_50 != 2) {
        *param_1 = local_50;
        param_1[1] = local_4c;
        param_1[2] = iStack_48;
        param_1[3] = iStack_44;
        param_1[4] = iStack_40;
        param_1[5] = iStack_3c;
        param_1[6] = local_38;
        param_1[7] = iStack_34;
        param_1[8] = iStack_30;
        param_1[9] = iStack_2c;
        param_1[10] = iStack_28;
        param_1[0xb] = iStack_24;
        return;
      }
      goto LAB_0123e1d0;
    }
LAB_0123e194:
    local_4c._0_1_ = (undefined1)param_2[1];
  }
  *param_1 = 2;
LAB_0123e1a0:
  *(undefined1 *)(param_1 + 1) = (undefined1)local_4c;
  return;
}

