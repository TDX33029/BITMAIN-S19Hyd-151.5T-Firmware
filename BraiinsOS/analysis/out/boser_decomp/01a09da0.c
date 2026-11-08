// FUN_01a09da0 @ 01a09da0 size=848 calls_out=10 calls_in=2
// strings: 

void FUN_01a09da0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  uint unaff_r10;
  int *unaff_r11;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int *local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_80;
  int local_7c;
  int *local_78;
  int *local_74;
  int local_70;
  int iStack_6c;
  int *piStack_68;
  int local_60;
  int iStack_5c;
  int *piStack_58;
  int local_50;
  int iStack_4c;
  int *piStack_48;
  int local_40;
  int iStack_3c;
  int *piStack_38;
  int local_30;
  int iStack_2c;
  int *piStack_28;
  
  piVar8 = param_2 + 2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    param_2[1] = *param_2;
    FUN_01bed93e(piVar8,0,0x11);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29fe0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29fe0);
  }
  uVar4 = FUN_019ec670(param_3);
  if ((uVar4 & 0xff) == 2) {
    uVar4 = 0;
  }
  else {
    if ((uVar4 & 1) != 0) {
      uVar7 = 3;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_01a0a0d8;
    }
    unaff_r10 = (uVar4 & 0xffffff) >> 0x10;
    uVar4 = (uVar4 & 0xffffff) >> 8;
  }
  FUN_01a168f4(&local_80,param_2[1],piVar8,param_3);
  piVar3 = local_78;
  if (local_80 == 3 && local_7c == 0) {
    iVar5 = local_78[3];
    local_88 = local_78[2];
    if (local_88 == 3 && iVar5 == 0) {
      iVar5 = 0;
      local_88 = 3;
      local_90 = 0;
      local_8c = 0;
    }
    else {
      local_94 = piVar8;
      piVar8 = unaff_r11;
      if (local_88 != 2 || iVar5 != 0) {
        local_90 = local_78[4];
        local_8c = local_78[5];
        local_a0 = local_78[8];
        local_a8 = local_78[9];
        local_9c = local_78[10];
        local_a4 = local_78[0xb];
        local_ac = local_78[0xc];
        local_b0 = local_78[0xd];
        local_94 = (int *)local_78[7];
        piVar8 = (int *)local_78[6];
      }
      FUN_01299464(&local_30,local_78[0xf],local_78[0x10]);
      FUN_015e8ad4(&local_80,piVar3[0x12],piVar3[0x13]);
      piStack_58 = piStack_28;
      iStack_5c = iStack_2c;
      local_60 = local_30;
      piStack_68 = local_78;
      iStack_6c = local_7c;
      local_70 = local_80;
      local_40 = local_30;
      iStack_3c = iStack_2c;
      piStack_38 = piStack_28;
      local_50 = local_80;
      iStack_4c = local_7c;
      piStack_48 = local_78;
      unaff_r11 = (int *)piVar3[0x14];
      do {
        iVar6 = *unaff_r11;
        bVar2 = (bool)hasExclusiveAccess(unaff_r11);
      } while (!bVar2);
      *unaff_r11 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1a0a0fc);
        (*pcVar1)();
      }
      local_80 = local_30;
      local_7c = iStack_2c;
      local_78 = piStack_28;
      local_30 = local_70;
      iStack_2c = iStack_6c;
      piStack_28 = piStack_68;
    }
    FUN_01a187c4(piVar3);
LAB_01a0a034:
    param_1[10] = local_ac;
    param_1[0xb] = local_b0;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = (int)piVar8;
    param_1[5] = (int)local_94;
    param_1[6] = local_a0;
    param_1[7] = local_a8;
    param_1[8] = local_9c;
    param_1[9] = local_a4;
    param_1[0xc] = local_60;
    param_1[0xd] = iStack_5c;
    param_1[0xe] = (int)piStack_58;
    param_1[0xf] = local_70;
    param_1[0x10] = iStack_6c;
    param_1[0x11] = (int)piStack_68;
    uVar4 = 0;
    param_1[0x12] = (int)unaff_r11;
  }
  else {
    if (local_80 != 0) {
      if (local_80 != 1) {
        local_94 = local_74;
        piVar8 = local_78;
      }
      local_8c = 0;
      local_90 = (uint)(local_80 != 1);
      iVar5 = 0;
      local_88 = 3;
      goto LAB_01a0a034;
    }
    iVar5 = 0;
    local_88 = 4;
  }
  *param_1 = local_88;
  param_1[1] = iVar5;
  FUN_019edbc4(uVar4,unaff_r10);
  uVar7 = 3;
  if (local_88 != 4 || iVar5 != 0) {
    uVar7 = 1;
    FUN_009cdcac(param_2 + 1);
  }
LAB_01a0a0d8:
  *(undefined1 *)(param_2 + 7) = uVar7;
  return;
}

