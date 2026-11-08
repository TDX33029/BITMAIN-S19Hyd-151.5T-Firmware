// FUN_016da6b8 @ 016da6b8 size=1588 calls_out=15 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016da6b8(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_110;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_84 [7];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_fc = FUN_016d4a28(param_2);
  if (local_fc != 0x28) {
    FUN_016f4e14(&local_fc,&DAT_0056f71c,&DAT_01d09d58);
LAB_016dac54:
    local_c8 = 0x1b;
    FUN_016d4540(&local_68,param_2[1],local_110,&local_e0,&local_c8);
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = local_60;
    param_1[4] = local_5c;
    param_1[5] = local_58;
    param_1[6] = local_54;
    param_1[7] = local_50;
    param_1[8] = iStack_4c;
    param_1[9] = iStack_48;
    param_1[10] = iStack_44;
    param_1[0xb] = local_40;
    param_1[0xc] = local_3c;
    param_1[0xd] = iStack_38;
    param_1[0xe] = iStack_34;
    param_1[0xf] = iStack_30;
    param_1[0x10] = iStack_2c;
    *param_1 = (int)&DAT_80000004;
    FUN_0134aee0(local_104,local_100,4,0x1c);
    return;
  }
  FUN_016d4f3c(&local_f8,param_2);
  FUN_016d4fe8(param_2);
  FUN_016d4684(param_2);
  iVar3 = FUN_016d99b0(param_2,&DAT_004cfddf,2);
  if ((((iVar3 == 0) && (iVar3 = FUN_016d99b0(param_2,&DAT_004cfde1,2), iVar3 == 0)) &&
      (iVar3 = FUN_016d99b0(param_2,&DAT_004cfde3,3), iVar3 == 0)) &&
     (iVar3 = FUN_016d99b0(param_2,&DAT_004cfde6,3), iVar3 == 0)) {
    iVar3 = *param_2;
    piVar9 = (int *)(iVar3 + 0x50);
    local_d4 = *piVar9;
    uStack_d0 = *(undefined4 *)(iVar3 + 0x54);
    uStack_cc = *(undefined4 *)(iVar3 + 0x58);
    local_e0 = *piVar9;
    uStack_dc = *(undefined4 *)(iVar3 + 0x54);
    uStack_d8 = *(undefined4 *)(iVar3 + 0x58);
    iVar7 = FUN_016d99b0(param_2,&DAT_004cfc8b,3);
    if ((iVar7 == 0) && (iVar4 = FUN_016d99b0(param_2,&DAT_004cfc8e,2), iVar4 == 0)) {
      iVar7 = FUN_016d99b0(param_2,&DAT_005258a1,1);
      if (iVar7 == 0) {
        FUN_016dad94(&local_68,param_2,&local_f8);
        if (local_68 != 0x22) {
          param_1[3] = local_60;
          param_1[4] = local_5c;
          param_1[5] = local_58;
          param_1[6] = local_54;
          param_1[7] = local_50;
          param_1[8] = iStack_4c;
          param_1[9] = iStack_48;
          param_1[10] = iStack_44;
          param_1[0xb] = local_40;
          param_1[0xc] = local_3c;
          param_1[0xd] = iStack_38;
          param_1[0xe] = iStack_34;
          param_1[0xf] = iStack_30;
          param_1[0x10] = iStack_2c;
          *param_1 = (int)&DAT_80000004;
          param_1[1] = local_68;
          param_1[2] = local_64;
          return;
        }
        local_68 = -0x80000000;
        local_bc = *piVar9;
        iStack_b8 = *(undefined4 *)(iVar3 + 0x54);
        local_b4 = *(undefined4 *)(iVar3 + 0x58);
        local_c8 = *piVar9;
        local_c4 = *(undefined4 *)(iVar3 + 0x54);
        iStack_c0 = *(undefined4 *)(iVar3 + 0x58);
        FUN_016eb8ac();
        local_c8 = 0;
        local_c4 = extraout_r1_00;
        puVar5 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *puVar5 = 0;
        puVar5[1] = extraout_r1_00;
        param_1[0xc] = local_f8;
        param_1[0xd] = iStack_f4;
        param_1[0xe] = iStack_f0;
        param_1[0xf] = iStack_ec;
        param_1[0x10] = iStack_e8;
        param_1[0x11] = iStack_e4;
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = local_60;
        param_1[3] = local_5c;
        param_1[4] = local_58;
      }
      else {
        local_110 = param_2[2];
        iVar7 = *piVar9;
        if (iVar7 == local_110) {
          iVar3 = param_2[1];
          local_68 = 0x15;
          piVar9 = &local_f8;
          goto LAB_016da7a8;
        }
        FUN_016dae30(&local_68,param_2);
        iVar2 = local_5c;
        iVar4 = local_60;
        iVar7 = local_64;
        local_104 = local_64;
        local_100 = local_60;
        local_c8 = local_58;
        local_c4 = local_54;
        iStack_c0 = local_50;
        local_bc = iStack_4c;
        iStack_b8 = iStack_48;
        local_b4 = iStack_44;
        if (local_68 != 0x22) {
          param_1[0xb] = local_40;
          param_1[0xc] = local_3c;
          param_1[0xd] = iStack_38;
          param_1[0xe] = iStack_34;
          param_1[0xf] = iStack_30;
          param_1[0x10] = iStack_2c;
          param_1[4] = local_5c;
          param_1[3] = local_60;
          param_1[2] = local_64;
          param_1[5] = local_58;
          param_1[6] = local_54;
          param_1[7] = local_50;
          param_1[8] = iStack_4c;
          param_1[9] = iStack_48;
          param_1[10] = iStack_44;
          goto LAB_016da9a4;
        }
        local_a0 = local_58;
        iStack_9c = local_54;
        iStack_98 = local_50;
        iStack_94 = iStack_4c;
        iStack_90 = iStack_48;
        iStack_8c = iStack_44;
        iVar6 = FUN_016d4a28(param_2);
        local_84[0] = iVar6;
        FUN_016d4fe8(param_2);
        if (iVar6 == 0x29) {
          if (iVar2 != 0) {
            iVar6 = *piVar9;
            iVar8 = *(int *)(iVar3 + 0x54);
            iVar3 = *(int *)(iVar3 + 0x58);
            param_1[4] = local_a0;
            param_1[5] = iStack_9c;
            param_1[6] = iStack_98;
            param_1[7] = iStack_94;
            param_1[8] = iStack_90;
            param_1[9] = iStack_8c;
            *param_1 = -0x7ffffffd;
            param_1[1] = iVar7;
            param_1[2] = iVar4;
            param_1[3] = iVar2;
            param_1[10] = local_f8;
            param_1[0xb] = iStack_f4;
            param_1[0xc] = iStack_f0;
            param_1[0xd] = iVar6;
            param_1[0xe] = iVar8;
            param_1[0xf] = iVar3;
            return;
          }
          goto LAB_016dac54;
        }
        if (iVar6 != 0x3a) {
          FUN_016f4e14(local_84,&DAT_0056df10,&DAT_01d09d48);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x16dacf0);
          (*pcVar1)();
        }
        local_58 = local_a0;
        local_54 = iStack_9c;
        local_50 = iStack_98;
        iStack_4c = iStack_94;
        iStack_48 = iStack_90;
        iStack_44 = iStack_8c;
        local_68 = -0x7ffffffe;
        local_bc = *piVar9;
        iStack_b8 = *(undefined4 *)(iVar3 + 0x54);
        local_b4 = *(undefined4 *)(iVar3 + 0x58);
        local_c8 = *piVar9;
        local_c4 = *(undefined4 *)(iVar3 + 0x54);
        iStack_c0 = *(undefined4 *)(iVar3 + 0x58);
        local_64 = iVar7;
        local_60 = iVar4;
        local_5c = iVar2;
        FUN_016eb8ac();
        local_c8 = 0;
        local_c4 = extraout_r1_01;
        puVar5 = (undefined4 *)FUN_00bd04d0();
        *puVar5 = 0;
        puVar5[1] = extraout_r1_01;
        param_1[0xc] = local_f8;
        param_1[0xd] = iStack_f4;
        param_1[0xe] = iStack_f0;
        param_1[0xf] = iStack_ec;
        param_1[0x10] = iStack_e8;
        param_1[0x11] = iStack_e4;
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = local_60;
        param_1[3] = local_5c;
        param_1[4] = local_58;
      }
    }
    else {
      FUN_016dad94(&local_68,param_2,&local_f8);
      if (local_68 != 0x22) {
        param_1[3] = local_60;
        param_1[4] = local_5c;
        param_1[5] = local_58;
        param_1[6] = local_54;
        param_1[7] = local_50;
        param_1[8] = iStack_4c;
        param_1[9] = iStack_48;
        param_1[10] = iStack_44;
        param_1[0xb] = local_40;
        param_1[0xc] = local_3c;
        param_1[0xd] = iStack_38;
        param_1[0xe] = iStack_34;
        param_1[0xf] = iStack_30;
        param_1[0x10] = iStack_2c;
        *param_1 = (int)&DAT_80000004;
        param_1[1] = local_68;
        param_1[2] = local_64;
        return;
      }
      FUN_016db1b8(&local_68,param_2);
      iStack_b0 = iStack_4c;
      iStack_ac = iStack_48;
      iStack_a8 = iStack_44;
      iStack_a4 = local_40;
      if (local_68 != 0x22) {
        param_1[0xc] = local_3c;
        param_1[0xd] = iStack_38;
        param_1[0xe] = iStack_34;
        param_1[0xf] = iStack_30;
        param_1[0x10] = iStack_2c;
        param_1[2] = local_64;
        param_1[3] = local_60;
        param_1[4] = local_5c;
        param_1[5] = local_58;
        param_1[6] = local_54;
        param_1[7] = local_50;
        param_1[8] = iStack_4c;
        param_1[9] = iStack_48;
        param_1[10] = iStack_44;
        param_1[0xb] = local_40;
LAB_016da9a4:
        *param_1 = (int)&DAT_80000004;
        param_1[1] = local_68;
        return;
      }
      local_68 = local_64;
      local_64 = local_60;
      local_60 = local_5c;
      local_5c = local_58;
      local_58 = local_54;
      local_54 = local_50;
      local_50 = iStack_4c;
      iStack_4c = iStack_48;
      iStack_48 = iStack_44;
      iStack_44 = local_40;
      local_40 = CONCAT31(local_40._1_3_,(char)iVar7);
      local_bc = *piVar9;
      iStack_b8 = *(undefined4 *)(iVar3 + 0x54);
      local_b4 = *(undefined4 *)(iVar3 + 0x58);
      local_c8 = *piVar9;
      local_c4 = *(undefined4 *)(iVar3 + 0x54);
      iStack_c0 = *(undefined4 *)(iVar3 + 0x58);
      FUN_016eb8ac();
      local_c8 = 0;
      local_c4 = extraout_r1;
      puVar5 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar5 = 0;
      puVar5[1] = extraout_r1;
      param_1[0xc] = local_f8;
      param_1[0xd] = iStack_f4;
      param_1[0xe] = iStack_f0;
      param_1[0xf] = iStack_ec;
      param_1[0x10] = iStack_e8;
      param_1[0x11] = iStack_e4;
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
    }
    param_1[5] = local_54;
    param_1[6] = local_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = (int)puVar5;
  }
  else {
    piVar9 = &local_c8;
    local_c8 = local_f8;
    local_c4 = iStack_f4;
    iStack_c0 = iStack_f0;
    iVar3 = *param_2;
    local_bc = *(int *)(iVar3 + 0x50);
    iStack_b8 = *(int *)(iVar3 + 0x54);
    local_b4 = *(int *)(iVar3 + 0x58);
    iVar3 = param_2[1];
    iVar7 = param_2[2];
    local_68 = 0x21;
LAB_016da7a8:
    FUN_016d4540(param_1 + 1,iVar3,iVar7,piVar9,&local_68);
    *param_1 = (int)&DAT_80000004;
  }
  return;
}

