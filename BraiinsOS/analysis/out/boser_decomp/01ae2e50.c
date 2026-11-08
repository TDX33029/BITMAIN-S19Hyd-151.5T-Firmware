// FUN_01ae2e50 @ 01ae2e50 size=2084 calls_out=11 calls_in=1
// strings: BUG: called is_same_file_system without root device

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ae2e50(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 *******pppppppuVar1;
  undefined4 *******pppppppuVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  uint uVar7;
  int iVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *******pppppppuVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******extraout_r2;
  undefined4 *******extraout_r2_00;
  undefined4 *******pppppppuVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 *******pppppppuVar20;
  undefined4 *******pppppppuVar21;
  bool bVar22;
  undefined4 *******local_13c;
  undefined4 *******local_138;
  undefined4 *******local_134;
  undefined4 *******local_120;
  undefined4 *******local_fc;
  undefined4 *******local_f8;
  undefined4 *******local_f4;
  undefined4 *******local_e4;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *******local_d8;
  undefined4 *******local_d4;
  undefined4 *******pppppppuStack_d0;
  char local_cc;
  undefined2 local_cb;
  undefined1 local_c9;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 *******local_c0;
  undefined4 *******local_bc;
  undefined4 *******local_b0;
  undefined4 *******local_ac;
  undefined4 *******local_a8;
  undefined4 *******local_a4;
  undefined4 *******local_a0;
  undefined2 local_9c;
  undefined4 *******local_98;
  undefined4 *******local_94;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  undefined4 *******local_88;
  undefined4 local_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  uVar7 = (uint)(byte)param_2[9];
  pppppppuVar12 = (undefined4 *******)param_3[5];
  bVar22 = uVar7 == 1;
  if (bVar22) {
    uVar7 = (uint)pppppppuVar12 & 0xf000;
  }
  if (bVar22 && uVar7 == 0xa000) {
    pppppppuVar13 = (undefined4 *******)param_3[3];
    pppppppuVar21 = (undefined4 *******)param_3[2];
    local_fc = (undefined4 *******)param_2[0x17];
    FUN_019afae4(&local_e0,pppppppuVar13,param_3[4]);
    FUN_01ae48e0(&local_98,local_fc,&local_e0,1);
    uVar16 = local_78;
    pppppppuVar12 = local_7c;
    pppppppuVar6 = local_80;
    pppppppuVar11 = local_84;
    pppppppuVar9 = local_88;
    pppppppuVar4 = local_8c;
    pppppppuVar20 = local_90;
    if (local_98 != (undefined4 *******)0x0) {
      pppppppuVar9 = pppppppuVar21;
      pppppppuVar11 = pppppppuVar13;
      pppppppuVar21 = local_94;
      pppppppuVar10 = local_80;
      local_120 = local_84;
      local_138 = local_8c;
      local_134 = local_88;
      local_fc = local_7c;
      pppppppuVar12 = local_90;
      goto LAB_01ae3548;
    }
    FUN_0134bd64(pppppppuVar21,pppppppuVar13);
    if (((uint)pppppppuVar12 & 0xf000) == 0x4000) {
      local_e0 = (undefined4 *******)0x0;
      local_d4 = (undefined4 *******)((uint)local_d4 & 0xffff0000);
      local_dc = (undefined4 *******)&DAT_000001b6;
      local_d8 = (undefined4 *******)&DAT_00000001;
      FUN_019a581c(&local_c0,&local_e0,pppppppuVar11,pppppppuVar6);
      if (((char)local_c0 == '\x04') || (((uint)local_c0 & 0xff) == 4)) {
        FUN_0193bef8(&local_98,local_bc);
        pppppppuVar13 = local_98;
        if ((char)local_84 != '\x02') {
          local_a8 = local_98;
          local_a4 = local_94;
          local_a0 = local_90;
          if (((uint)local_84 & 0xff) != 2) {
            uVar7 = param_2[0xf];
            puVar18 = (undefined4 *)((uint)&local_f8 | 4);
            uVar14 = param_2[0xe];
            *puVar18 = local_94;
            puVar18[1] = local_90;
            puVar18[2] = local_8c;
            puVar18[3] = local_88;
            local_f8 = local_98;
            local_e4 = local_84;
            if (uVar7 != 0) {
              local_138 = &local_d8;
              pppppppuVar21 = (undefined4 *******)puVar18[1];
              pppppppuVar10 = (undefined4 *******)puVar18[2];
              iVar15 = uVar7 * 0xc;
              do {
                iVar8 = uVar14 + iVar15;
                local_a4 = (undefined4 *******)&DAT_000001b6;
                local_9c = 0;
                local_a8 = (undefined4 *******)0x0;
                local_a0 = (undefined4 *******)&DAT_00000001;
                FUN_019a581c(&local_b0,&local_a8,*(undefined4 *)(iVar8 + -8),
                             *(undefined4 *)(iVar8 + -4));
                if (((char)local_b0 == '\x04') || (((uint)local_b0 & 0xff) == 4)) {
                  FUN_0193bef8(&local_98,local_ac);
                  pppppppuVar5 = local_8c;
                  pppppppuVar3 = local_90;
                  pppppppuVar2 = local_94;
                  pppppppuVar1 = local_98;
                  local_134 = extraout_r2_00;
                  if ((char)local_84 == '\x02') goto LAB_01ae34a0;
                  local_c2 = local_84._3_1_;
                  local_c4 = local_84._1_2_;
                  local_d8 = local_90;
                  local_d4 = local_8c;
                  pppppppuStack_d0 = local_88;
                  local_c9 = local_84._3_1_;
                  local_cb = local_84._1_2_;
                  local_dc = local_94;
                  local_e0 = local_98;
                  local_cc = (char)local_84;
                  FUN_01ae3864(&local_e0);
                  if ((pppppppuVar13 == pppppppuVar1 && local_f4 == pppppppuVar2) &&
                     (pppppppuVar21 == pppppppuVar3 && pppppppuVar10 == pppppppuVar5)) {
LAB_01ae3574:
                    FUN_01ae61dc(&local_98,local_fc,*(undefined4 *)(iVar8 + -8),
                                 *(undefined4 *)(iVar8 + -4),pppppppuVar11,pppppppuVar6);
                    local_fc = local_80;
                    local_138 = local_90;
                    local_13c = local_94;
                    pppppppuVar13 = local_94;
                    local_134 = local_8c;
                    local_120 = local_88;
                    pppppppuVar10 = local_84;
                    pppppppuVar21 = local_98;
                    goto LAB_01ae35cc;
                  }
                }
                else {
                  local_98 = local_b0;
                  local_94 = local_ac;
                  local_134 = extraout_r2;
LAB_01ae34a0:
                  if (((uint)local_98 & 0xff) != 4) {
                    pppppppuVar13 = (undefined4 *******)0x0;
                    local_13c = (undefined4 *******)&DAT_80000000;
                    pppppppuVar21 = (undefined4 *******)&DAT_80000000;
                    local_120 = local_98;
                    pppppppuVar10 = local_94;
LAB_01ae35cc:
                    FUN_01ae3864(&local_f8);
                    if (pppppppuVar21 == (undefined4 *******)&DAT_80000001) goto LAB_01ae3618;
                    goto LAB_01ae3524;
                  }
                  if (((uint)local_98 & 0x100) != 0) goto LAB_01ae3574;
                }
                iVar15 = iVar15 + -0xc;
              } while (iVar15 != 0);
            }
            FUN_01ae3864(&local_f8);
            goto LAB_01ae3618;
          }
        }
      }
      else {
        local_98 = local_c0;
        local_84 = (undefined4 *******)CONCAT31(local_84._1_3_,2);
        local_94 = local_bc;
      }
      pppppppuVar13 = (undefined4 *******)0x0;
      local_120 = local_98;
      pppppppuVar21 = (undefined4 *******)&DAT_80000000;
      local_13c = (undefined4 *******)&DAT_80000000;
      pppppppuVar10 = local_94;
      local_a8 = local_98;
      local_a4 = local_94;
LAB_01ae3524:
      pppppppuVar12 =
           (undefined4 *******)((uint)local_13c & 0xffffff00 | (uint)pppppppuVar13 & 0xff);
LAB_01ae3548:
      FUN_0134bd64(pppppppuVar9,pppppppuVar11);
      param_1[3] = local_138;
      param_1[4] = local_134;
      param_1[5] = local_120;
      param_1[6] = pppppppuVar10;
      *param_1 = 1;
      param_1[1] = pppppppuVar21;
      param_1[2] = pppppppuVar12;
      param_1[7] = local_fc;
      return;
    }
LAB_01ae3618:
    *param_3 = pppppppuVar20;
    param_3[3] = pppppppuVar11;
    param_3[4] = pppppppuVar6;
    param_3[5] = pppppppuVar12;
    param_3[6] = uVar16;
    param_3[7] = local_74;
    param_3[1] = pppppppuVar4;
    param_3[2] = pppppppuVar9;
  }
  puVar18 = (undefined4 *)((uint)&local_98 | 4);
  if (((uint)pppppppuVar12 & 0xf000) == 0x4000) {
    if ((*(char *)((int)param_2 + 0x27) == '\x01') && (iVar15 = param_3[6], iVar15 != 0)) {
      local_fc = (undefined4 *******)param_3[3];
      uVar16 = param_3[4];
      FUN_019adea8(&local_98,local_fc,uVar16);
      if (local_98 != (undefined4 *******)&DAT_00000001) {
        if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("BUG: called is_same_file_system without root device",0x33,&DAT_01d300e0);
        }
        if (param_2[2] == puVar18[1] && param_2[3] == puVar18[2]) {
          FUN_01ae38ac(&local_98,param_2,local_fc,uVar16);
          goto LAB_01ae303c;
        }
        goto LAB_01ae31e0;
      }
      pppppppuVar12 = (undefined4 *******)*puVar18;
      pppppppuVar20 = (undefined4 *******)puVar18[1];
      local_e0 = pppppppuVar12;
      local_dc = pppppppuVar20;
      FUN_019afae4(&local_98,local_fc,uVar16);
      param_1[5] = pppppppuVar12;
      param_1[6] = pppppppuVar20;
      param_1[7] = iVar15;
      param_1[2] = local_98;
      param_1[3] = local_94;
      param_1[4] = local_90;
      *param_1 = 1;
      param_1[1] = 0x80000000;
    }
    else {
      local_fc = (undefined4 *******)param_3[3];
      FUN_01ae38ac(&local_98,param_2,local_fc,param_3[4]);
LAB_01ae303c:
      if (local_98 == (undefined4 *******)&DAT_80000001) {
LAB_01ae31e0:
        if (*(char *)((int)param_2 + 0x26) != '\0') {
          uVar16 = param_3[2];
          uVar7 = param_2[0x12];
          uVar17 = *param_3;
          uVar19 = param_3[1];
          if (uVar7 == param_2[0x10]) {
            FUN_01ab8064(param_2 + 0x10);
          }
          puVar18 = (undefined4 *)(param_2[0x11] + uVar7 * 0x20);
          *puVar18 = uVar17;
          puVar18[1] = uVar19;
          puVar18[2] = uVar16;
          puVar18[3] = local_fc;
          uVar16 = param_3[5];
          uVar17 = param_3[6];
          uVar19 = param_3[7];
          puVar18[4] = param_3[4];
          puVar18[5] = uVar16;
          puVar18[6] = uVar17;
          puVar18[7] = uVar19;
          *param_1 = 2;
          param_2[0x12] = uVar7 + 1;
          return;
        }
        goto LAB_01ae2f28;
      }
LAB_01ae3048:
      param_1[1] = local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      param_1[4] = local_8c;
      param_1[5] = local_88;
      param_1[6] = local_84;
      param_1[7] = local_80;
      *param_1 = 1;
    }
LAB_01ae3190:
    uVar16 = param_3[2];
  }
  else {
    if ((param_3[6] == 0 && ((uint)pppppppuVar12 & 0xf000) == 0xa000) &&
       ((*(byte *)((int)param_2 + 0x25) & 1) != 0)) {
      local_fc = (undefined4 *******)param_3[3];
      uVar16 = param_3[4];
      FUN_019adea8(&local_98,local_fc,uVar16);
      if (local_98 == (undefined4 *******)&DAT_00000001) {
        uVar17 = *puVar18;
        uVar19 = puVar18[1];
        FUN_019afae4(&local_98,local_fc,uVar16);
        param_1[2] = local_98;
        param_1[3] = local_94;
        param_1[4] = local_90;
        *param_1 = 1;
        param_1[1] = 0x80000000;
        param_1[5] = uVar17;
        param_1[6] = uVar19;
        param_1[7] = 0;
        goto LAB_01ae3190;
      }
      if (((puVar18[5] & 0xf000) == 0x4000) &&
         (FUN_01ae38ac(&local_98,param_2,local_fc,uVar16),
         local_98 != (undefined4 *******)&DAT_80000001)) goto LAB_01ae3048;
    }
LAB_01ae2f28:
    if ((param_2[7] <= param_2[0x17]) && (param_2[0x17] <= param_2[8])) {
      uVar16 = param_3[1];
      uVar17 = param_3[2];
      uVar19 = param_3[3];
      *puVar18 = *param_3;
      puVar18[1] = uVar16;
      puVar18[2] = uVar17;
      puVar18[3] = uVar19;
      uVar16 = param_3[5];
      uVar17 = param_3[6];
      uVar19 = param_3[7];
      puVar18[4] = param_3[4];
      puVar18[5] = uVar16;
      puVar18[6] = uVar17;
      puVar18[7] = uVar19;
      *param_1 = 0;
      param_1[1] = local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      param_1[4] = local_8c;
      param_1[5] = local_88;
      param_1[6] = local_84;
      param_1[7] = local_80;
      param_1[8] = local_7c;
      param_1[9] = local_78;
      return;
    }
    uVar16 = param_3[2];
    local_fc = (undefined4 *******)param_3[3];
    *param_1 = 2;
  }
  FUN_0134bd64(uVar16,local_fc);
  return;
}

