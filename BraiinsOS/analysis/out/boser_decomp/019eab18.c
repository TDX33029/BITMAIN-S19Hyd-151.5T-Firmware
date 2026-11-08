// FUN_019eab18 @ 019eab18 size=1608 calls_out=11 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019eab18(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *extraout_r2;
  int *unaff_r4;
  int *piVar7;
  int *unaff_r6;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  int local_17c;
  int *local_170;
  int *local_154;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int *local_100;
  int *piStack_fc;
  int *piStack_f8;
  int *local_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *local_c0;
  int *piStack_bc;
  int *piStack_b8;
  int *local_b0 [3];
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *piStack_70;
  int *piStack_6c;
  int *local_68;
  int *local_64;
  int *piStack_60;
  int *piStack_5c;
  int local_58;
  int *local_50;
  int *piStack_4c;
  int *local_48;
  int *local_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  iVar9 = param_3[4];
  param_3[4] = -1;
  local_154 = (int *)0x2;
  piVar2 = (int *)0x2;
  piVar6 = param_2;
  piVar8 = param_3;
  if (iVar9 == -1) {
LAB_019eab98:
    iVar9 = param_3[5];
    param_3[5] = -1;
    piVar7 = piVar2;
    piVar10 = piVar6;
    local_b0[0] = piVar2;
    local_a4 = piVar6;
    if (iVar9 == -1) {
LAB_019eac38:
      iVar9 = param_3[6];
      piVar3 = (int *)&DAT_ffffffff;
      local_a0 = local_154;
      param_3[6] = -1;
      local_9c = piVar10;
      local_98 = piVar7;
      local_94 = piVar8;
      if (iVar9 == -1) {
        piVar10 = (int *)0x2;
        local_8c = local_154;
LAB_019ead00:
        piVar7 = (int *)((uint)&local_80 | 4);
        local_50 = (int *)*param_3;
        piStack_4c = (int *)param_3[1];
        local_48 = (int *)param_3[2];
        local_44 = (int *)param_3[3];
        piStack_40 = (int *)param_3[4];
        piStack_3c = (int *)param_3[5];
        piStack_38 = (int *)param_3[6];
        local_90 = piVar10;
        local_88 = piVar3;
        local_84 = piVar8;
        if (DAT_01d51ae8 == '\0') {
          iVar9 = FUN_01be6c3c(0x1b2,local_48,0x800);
          if (iVar9 == -1) {
            puVar5 = (undefined4 *)FUN_01be3244();
            piVar8 = (int *)*puVar5;
            local_30 = (int *)((uint)local_30 & 0xffffff00);
            local_2c = piVar8;
            FUN_0069603c(&local_30);
            if (piVar8 == (int *)&DAT_00000026) {
              DAT_01d51ae8 = '\x01';
            }
            goto LAB_019ead64;
          }
          uVar11 = FUN_019ef7f4(&DAT_01d299b0);
          FUN_019e74d4(&local_30,iVar9,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),&DAT_01d299b0);
          piVar8 = local_2c;
          local_170 = local_28;
          if (local_30 == (int *)0x2) {
            FUN_01bf01d6(iVar9);
            local_74 = local_50;
            piStack_70 = piStack_4c;
            piStack_6c = local_48;
            local_68 = local_44;
            local_64 = piStack_40;
            piStack_60 = piStack_3c;
            piStack_5c = piStack_38;
            *piVar7 = (int)piVar8;
            piVar7[1] = (int)local_28;
            local_80 = (int *)&DAT_00000003;
            uVar4 = (uint)piVar8 & 0xff;
          }
          else {
            local_80 = local_50;
            local_7c = piStack_4c;
            local_78 = local_48;
            local_74 = local_44;
            piStack_70 = piStack_40;
            piStack_6c = piStack_3c;
            local_68 = piStack_38;
            local_64 = local_30;
            piVar7[7] = (int)local_2c;
            piVar7[8] = (int)local_28;
            local_17c = iVar9;
            if (local_50 != (int *)&DAT_00000003) {
              local_130 = *piVar7;
              iStack_12c = piVar7[1];
              iStack_128 = piVar7[2];
              local_124 = piVar7[3];
              iStack_120 = piVar7[4];
              iStack_11c = piVar7[5];
              iStack_118 = piVar7[6];
              local_100 = local_9c;
              piStack_fc = local_98;
              piStack_f8 = local_94;
              local_7c = local_2c;
              goto LAB_019eaf38;
            }
            uVar4 = (uint)piStack_4c & 0xff;
            local_58 = iVar9;
          }
        }
        else {
LAB_019ead64:
          local_74 = local_50;
          piStack_70 = piStack_4c;
          piStack_6c = local_48;
          local_68 = local_44;
          local_64 = piStack_40;
          piStack_60 = piStack_3c;
          piStack_5c = piStack_38;
          local_80 = (int *)&DAT_00000003;
          uVar4 = 4;
          local_7c = (int *)CONCAT31(local_7c._1_3_,4);
        }
        if (uVar4 == 4) {
          *param_3 = (int)local_74;
          param_3[1] = (int)piStack_70;
          param_3[2] = (int)piStack_6c;
          param_3[3] = (int)local_68;
          param_3[4] = (int)local_64;
          param_3[5] = (int)piStack_60;
          param_3[6] = (int)piStack_5c;
          FUN_019ea5c8(&local_80,0x11,&DAT_01d29454);
          piVar7 = local_78;
          piVar8 = local_7c;
          if (local_80 == (int *)0x0) {
            local_50 = (int *)&DAT_00000003;
            local_170 = local_78;
            local_130 = *param_3;
            iStack_12c = param_3[1];
            iStack_128 = param_3[2];
            local_124 = param_3[3];
            iStack_120 = param_3[4];
            iStack_11c = param_3[5];
            iStack_118 = param_3[6];
            local_100 = local_9c;
            piStack_fc = local_98;
            piStack_f8 = local_94;
LAB_019eaf38:
            if (local_154 != (int *)0x2) {
              local_d0 = local_100;
              piStack_cc = piStack_fc;
              piStack_c8 = piStack_f8;
            }
            if (piVar10 != (int *)0x2) {
              local_c0 = local_8c;
              piStack_bc = local_88;
              piStack_b8 = local_84;
            }
            param_1[1] = unaff_r6;
            param_1[2] = unaff_r4;
            param_1[3] = piVar6;
            param_1[4] = local_154;
            *param_1 = piVar2;
            param_1[5] = local_d0;
            param_1[6] = piStack_cc;
            param_1[7] = piStack_c8;
            param_1[8] = piVar10;
            param_1[9] = local_c0;
            param_1[10] = piStack_bc;
            param_1[0xb] = piStack_b8;
            param_1[0xc] = local_50;
            param_1[0xd] = local_130;
            param_1[0xe] = iStack_12c;
            param_1[0xf] = iStack_128;
            param_1[0x10] = local_124;
            param_1[0x11] = iStack_120;
            param_1[0x12] = iStack_11c;
            param_1[0x13] = iStack_118;
            param_1[0x15] = local_170;
            *(char *)(param_1 + 0x17) = (char)param_2;
            param_1[0x14] = local_7c;
            param_1[0x16] = local_17c;
            return;
          }
          if (piVar10 != (int *)0x2) {
            FUN_01955d68(&local_90);
          }
        }
        else {
          piVar8 = (int *)*piVar7;
          piVar7 = (int *)piVar7[1];
          FUN_010a813c(&local_74);
          if (piVar10 != (int *)0x2) {
            FUN_01955d68(&local_90);
          }
        }
        bVar1 = uVar4 == 4;
        if (local_154 != (int *)0x2) {
          FUN_01955d68(&local_a0);
        }
      }
      else {
        FUN_019ea6a8(&local_80,iVar9);
        piVar7 = local_7c;
        piVar8 = local_80;
        if (((char)local_80 == '\x04') || (((uint)local_80 & 0xff) == 4)) {
          FUN_019de2c8(&local_80,iVar9);
          if (local_80 != (int *)0x2) {
            piVar3 = local_78;
            local_8c = local_7c;
            piVar8 = local_74;
            piVar10 = local_80;
            goto LAB_019ead00;
          }
          piVar7 = local_78;
          piVar8 = local_7c;
        }
        else {
          FUN_01bf01d6(iVar9);
        }
        bVar1 = true;
        if (local_154 != (int *)0x2) {
          FUN_01955d68(&local_a0);
        }
      }
      if (piVar2 != (int *)0x2) {
        FUN_01955d68(local_b0);
      }
      if (!bVar1) goto LAB_019eb0bc;
    }
    else {
      FUN_019ea6a8(&local_80,iVar9);
      piVar7 = local_7c;
      piVar8 = local_80;
      if (((char)local_80 == '\x04') || (((uint)local_80 & 0xff) == 4)) {
        FUN_019de2c8(&local_80,iVar9);
        local_154 = local_80;
        if (local_80 != (int *)0x2) {
          piVar7 = local_78;
          piVar10 = local_7c;
          piVar8 = local_74;
          goto LAB_019eac38;
        }
        piVar7 = local_78;
        piVar8 = local_7c;
      }
      else {
        FUN_01bf01d6(iVar9);
      }
      if (piVar2 != (int *)0x2) {
        FUN_01955d68(local_b0);
      }
    }
  }
  else {
    FUN_019ea6a8(&local_80,iVar9);
    piVar7 = local_7c;
    piVar8 = local_80;
    if (((char)local_80 == '\x04') || (((uint)local_80 & 0xff) == 4)) {
      FUN_019de2c8(&local_80,iVar9);
      piVar7 = local_78;
      piVar8 = local_7c;
      if (local_80 != (int *)0x2) {
        piVar2 = local_80;
        piVar6 = local_74;
        piVar8 = extraout_r2;
        unaff_r4 = local_78;
        unaff_r6 = local_7c;
        goto LAB_019eab98;
      }
    }
    else {
      FUN_01bf01d6(iVar9);
    }
  }
  FUN_010a813c(param_3);
LAB_019eb0bc:
  param_1[2] = piVar7;
  *param_1 = 3;
  param_1[1] = piVar8;
  return;
}

