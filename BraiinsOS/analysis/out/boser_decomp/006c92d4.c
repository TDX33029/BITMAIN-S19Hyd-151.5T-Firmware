// FUN_006c92d4 @ 006c92d4 size=484 calls_out=6 calls_in=3
// strings: 

void FUN_006c92d4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *local_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  uint local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int *local_88;
  undefined *local_84;
  int local_80;
  int local_7c;
  uint uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  char *local_44;
  undefined4 local_40;
  int *local_38;
  undefined1 *local_34;
  int **local_30;
  code *local_2c;
  
  if (param_2[4] == -0x7ffffff9) {
    local_a8 = 0x80000000;
  }
  else {
    local_b8 = (int *)*param_2;
    iStack_b4 = param_2[1];
    iStack_b0 = param_2[2];
    local_ac = param_2[3];
    local_a8 = param_2[4];
    iStack_a4 = param_2[5];
    local_a0 = param_2[6];
    iStack_9c = param_2[7];
    iStack_98 = param_2[8];
    iStack_94 = param_2[9];
    iStack_90 = param_2[10];
    iStack_8c = param_2[0xb];
    if ((int)local_a8 < 0) {
      if ((local_a8 ^ 0x80000000) == 1) {
        if (local_b8 == (int *)0x0) {
          if (local_ac < 0) goto LAB_006c931c;
        }
        else if (local_b8 != (int *)0x1) goto LAB_006c931c;
        local_88 = &local_48;
        local_40 = 0;
        local_48 = 0;
        local_7c = 0;
        local_44 = (char *)0x1;
        local_80 = 0x60000020;
        local_84 = &DAT_01c05eb4;
        local_38 = local_b8;
        local_34 = (undefined1 *)iStack_b4;
        local_30 = (int **)iStack_b0;
        local_2c = (code *)local_ac;
        iVar1 = FUN_0196a8d8(&local_38,&local_88);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01c05ecc,&DAT_01d30334);
        }
        param_1[1] = local_48;
        param_1[2] = local_44;
        param_1[3] = local_40;
      }
      else {
        if ((local_a8 ^ 0x80000000) != 2) goto LAB_006c931c;
        param_1[1] = local_b8;
        param_1[2] = iStack_b4;
        param_1[3] = iStack_b0;
      }
      *param_1 = 2;
      if (local_a8 + 0x7fffffff < 2) {
        return;
      }
      FUN_006c7f2c(&local_b8);
      return;
    }
  }
LAB_006c931c:
  local_30 = &local_88;
  local_88 = local_b8;
  local_84 = (undefined *)iStack_b4;
  local_80 = iStack_b0;
  local_7c = local_ac;
  uStack_78 = local_a8;
  iStack_74 = iStack_a4;
  local_70 = local_a0;
  iStack_6c = iStack_9c;
  iStack_68 = iStack_98;
  iStack_64 = iStack_94;
  iStack_60 = iStack_90;
  iStack_5c = iStack_8c;
  local_40 = 2;
  local_48 = -0x80000000;
  local_38 = &local_48;
  local_44 = "ID";
  local_2c = FUN_00700f8c;
  local_34 = &LAB_012b97d8;
  FUN_00664898(&local_58,&DAT_0059054b,&local_38);
  if (local_48 != -0x80000000) {
    FUN_019bb7e0(local_48,local_44);
  }
  param_1[4] = local_58;
  param_1[5] = uStack_54;
  param_1[6] = uStack_50;
  *param_1 = 0;
  FUN_00fe40e4(&local_88);
  return;
}

