// FUN_006bde48 @ 006bde48 size=316 calls_out=5 calls_in=3
// strings: Float

void FUN_006bde48(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int unaff_r9;
  int unaff_lr;
  undefined8 uVar2;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  int local_7c;
  undefined4 *puStack_78;
  int *piStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  char *local_3c;
  undefined4 local_38;
  int *local_34;
  undefined1 *local_30;
  int *local_2c;
  code *local_28;
  
  iStack_70 = param_2[4];
  if (iStack_70 == -0x7ffffff9) {
    iStack_70 = -0x80000000;
    puStack_78 = param_1;
    piStack_74 = param_2;
  }
  else {
    unaff_r9 = *param_2;
    unaff_lr = param_2[1];
    puStack_78 = (undefined4 *)param_2[2];
    piStack_74 = (int *)param_2[3];
    uVar2 = *(undefined8 *)(param_2 + 2);
    local_a0 = param_2[5];
    iStack_9c = param_2[6];
    iStack_98 = param_2[7];
    local_94 = param_2[8];
    iStack_90 = param_2[9];
    iStack_8c = param_2[10];
    iStack_88 = param_2[0xb];
    if (iStack_70 == -0x7fffffff) {
      if (unaff_r9 == 0) {
        uVar2 = FUN_01bf0e80();
      }
      else if (unaff_r9 == 1) {
        uVar2 = FUN_01bf0cac();
      }
      uVar1 = 0;
      *(undefined8 *)(param_1 + 2) = uVar2;
      goto LAB_006bdf78;
    }
  }
  local_2c = &local_80;
  local_6c = local_a0;
  iStack_68 = iStack_9c;
  iStack_64 = iStack_98;
  local_60 = local_94;
  iStack_5c = iStack_90;
  iStack_58 = iStack_8c;
  iStack_54 = iStack_88;
  local_34 = &local_40;
  local_38 = 5;
  local_3c = "Float";
  local_40 = -0x80000000;
  local_28 = FUN_00700f8c;
  local_30 = &LAB_012b97d8;
  local_80 = unaff_r9;
  local_7c = unaff_lr;
  FUN_00664898(&local_50,&DAT_0059054b,&local_34);
  if (local_40 != -0x80000000) {
    FUN_019bb7e0(local_40,local_3c);
  }
  param_1[5] = local_50;
  param_1[6] = uStack_4c;
  param_1[7] = uStack_48;
  param_1[1] = 0;
  FUN_00fe40e4(&local_80);
  uVar1 = 1;
LAB_006bdf78:
  *param_1 = uVar1;
  return;
}

