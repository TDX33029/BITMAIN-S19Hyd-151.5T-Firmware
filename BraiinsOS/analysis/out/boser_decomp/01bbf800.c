// FUN_01bbf800 @ 01bbf800 size=1996 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01bbf800(int param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 extraout_d7;
  undefined8 extraout_d7_00;
  undefined8 extraout_d7_01;
  undefined8 extraout_d7_02;
  uint local_d4;
  int local_b0;
  uint local_ac;
  uint *local_a8;
  int local_a0;
  uint local_90;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  uint local_5c;
  int local_58;
  int local_4c;
  int local_48;
  uint local_44;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint local_2c;
  
  uVar28 = 0xffffffff;
  local_2c = DAT_01d53560;
  iVar1 = 1 << (*(uint *)(param_3 + 0x14) & 0xff);
  local_90 = 0;
  local_78 = 0;
  uVar7 = param_5;
  local_68 = param_4;
  while ((local_78 != (uint)((param_5 & 0xfffff) != 0) + (param_5 >> 0x14) &&
         (uVar8 = param_2[3], uVar8 < (uint)param_2[4]))) {
    local_5c = local_68;
    if (param_5 + local_78 * -0x100000 < 0x100000) {
      uVar2 = param_4 + param_5;
    }
    else {
      uVar2 = local_68 + 0x100000;
    }
    uVar9 = uVar2 - local_68;
    local_58 = *(int *)(param_1 + 4);
    if (0xa0000000 < uVar2 - local_58) {
      uVar10 = *(uint *)(param_3 + 4);
      iVar11 = local_68 - local_58;
      iVar4 = iVar1 + 2;
      uVar7 = iVar11 - iVar4;
      local_58 = local_58 + uVar7;
      *(int *)(param_1 + 4) = local_58;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar7;
      if (*(uint *)(param_1 + 0x10) < uVar7 + 2) {
        iVar24 = 2;
      }
      else {
        iVar24 = (iVar4 + *(uint *)(param_1 + 0x10)) - iVar11;
      }
      *(int *)(param_1 + 0x10) = iVar24;
      iVar24 = *(int *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0xc) < uVar7 + 2) {
        iVar25 = 2;
      }
      else {
        iVar25 = (iVar4 + *(uint *)(param_1 + 0xc)) - iVar11;
      }
      *(int *)(param_1 + 0xc) = iVar25;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      iVar25 = 0;
      do {
        uVar5 = *(uint *)(iVar24 + iVar25 * 8);
        if (uVar5 < uVar7) {
          iVar6 = 0;
        }
        else {
          iVar6 = (iVar4 - iVar11) + uVar5;
        }
        *(int *)(iVar24 + iVar25 * 8) = iVar6;
        iVar25 = iVar25 + 1;
      } while (1 << (uVar10 & 0xff) != iVar25);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    uVar7 = param_1 + 0x1c;
    if (uVar7 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1c);
    }
    if ((uint)(iVar1 + iVar4) < uVar2 - local_58) {
      uVar5 = (uVar2 - local_58) - iVar1;
      uVar10 = *(uint *)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x10) < uVar5) {
        *(uint *)(param_1 + 0x10) = uVar5;
        uVar10 = uVar5;
      }
      if (*(uint *)(param_1 + 0xc) < uVar10) {
        *(uint *)(param_1 + 0xc) = uVar10;
      }
      if (uVar7 != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar12 = *(uint *)(param_1 + 0x10);
    uVar13 = *(uint *)(param_3 + 0xc);
    uVar10 = uVar5;
    if (uVar12 <= uVar5) {
      uVar10 = uVar12;
    }
    uVar14 = uVar10;
    if (uVar12 > uVar5 || uVar5 == uVar12) {
      uVar14 = 0;
      local_7c = 0;
      local_80 = 0;
    }
    if (uVar12 < uVar5) {
      local_80 = *(int *)(param_1 + 8);
      local_7c = local_80 + uVar10;
      uVar14 = local_80 + uVar5;
    }
    if (uVar9 < uVar13) {
      uVar2 = uVar9;
    }
    else {
      uVar15 = *(uint *)(param_3 + 8);
      iVar4 = *(int *)(param_3 + 4);
      uVar26 = *(uint *)(param_3 + 0x10);
      iVar11 = local_58 + uVar5;
      uVar7 = uVar13;
      if (0x3f < uVar13) {
        uVar7 = 0x40;
      }
      iVar24 = 1 << (uVar26 & 0xff);
      local_38 = iVar24 - 1;
      uStack_34 = (1 << (uVar26 - 0x20 & 0xff) | 1U >> (0x20 - uVar26 & 0xff)) - (uint)(iVar24 == 0)
      ;
      if (uVar26 - 1 < uVar7) {
        uVar7 = uVar7 - uVar26;
        uStack_34 = uStack_34 << (uVar7 & 0xff) | local_38 << (uVar7 - 0x20 & 0xff) |
                    local_38 >> (0x20 - uVar7 & 0xff);
        local_38 = local_38 << (uVar7 & 0xff);
      }
      uStack_40 = uVar28;
      for (local_64 = local_68 + uVar13; local_64 < uVar2 - 8; local_64 = local_64 + iVar25) {
        local_4c = 0;
        piVar23 = (int *)(param_1 + 0x20);
        iVar6 = 0;
        uVar28 = FUN_01bbeb70(&uStack_40,local_64,(uVar2 - 8) - local_64,param_1 + 0x24,&local_4c);
        iVar24 = local_4c;
        uVar7 = (uint)((ulonglong)uVar28 >> 0x20);
        iVar25 = (int)uVar28;
        piVar20 = (int *)(param_1 + 0x124);
        uVar28 = extraout_d7;
        while (iVar6 != iVar24) {
          piVar23 = piVar23 + 1;
          iVar6 = iVar6 + 1;
          iVar18 = local_64 + (*piVar23 - uVar13);
          uVar28 = FUN_01bbede4(iVar18,uVar13);
          uVar7 = (uint)((ulonglong)uVar28 >> 0x20);
          *piVar20 = iVar18;
          uVar26 = (uint)uVar28 & ~(-1 << (iVar4 - uVar15 & 0xff));
          piVar20[1] = uVar26;
          piVar20[2] = uVar7;
          iVar18 = *(int *)(param_1 + 0x18) + (uVar26 << (*(uint *)(param_3 + 8) & 0xff)) * 8;
          piVar20[3] = iVar18;
          HintPreloadData(iVar18);
          piVar20 = piVar20 + 4;
          uVar28 = extraout_d7_01;
        }
        local_74 = param_1;
        for (local_a0 = 0; iVar24 != local_a0; local_a0 = local_a0 + 1) {
          uVar22 = *(uint *)(local_74 + 0x124);
          uVar26 = *(uint *)(local_74 + 300);
          uVar16 = *(undefined4 *)(local_74 + 0x128);
          local_70 = *(uint **)(local_74 + 0x130);
          iVar6 = uVar22 - local_58;
          local_48 = iVar6;
          local_44 = uVar26;
          if (uVar22 < local_5c) {
LAB_01bbfcd0:
            FUN_01bbf48c(param_1,uVar16,local_48,local_44,*(undefined4 *)(param_3 + 8));
            uVar7 = extraout_r1;
            uVar28 = extraout_d7_00;
          }
          else {
            puVar17 = (uint *)((int)local_70 + (8 << (uVar15 & 0xff)));
            local_a8 = (uint *)0x0;
            local_d4 = 0;
            local_b0 = 0;
            local_ac = 0;
            for (; local_70 < puVar17; local_70 = local_70 + 2) {
              if ((uVar26 == local_70[1]) && (uVar19 = *local_70, uVar10 < uVar19)) {
                if (uVar12 < uVar5) {
                  if (uVar19 < uVar5) {
                    iVar3 = local_7c;
                    uVar7 = uVar14;
                    iVar18 = local_80;
                  }
                  else {
                    iVar3 = iVar11;
                    uVar7 = uVar2;
                    iVar18 = local_58;
                  }
                  iVar18 = iVar18 + uVar19;
                  uVar19 = uVar22 + (uVar7 - iVar18);
                  if (uVar2 < uVar19) {
                    uVar19 = uVar2;
                  }
                  uVar28 = FUN_01bbea84(uVar22,iVar18,uVar19);
                  iVar27 = (int)uVar28;
                  if (uVar7 == iVar18 + iVar27) {
                    uVar28 = FUN_01bbea84(uVar22 + iVar27,iVar11,uVar2);
                    uVar28 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),iVar27 + (int)uVar28);
                  }
                  uVar7 = (uint)((ulonglong)uVar28 >> 0x20);
                  uVar21 = (uint)uVar28;
                  if (uVar13 <= uVar21) {
                    uVar28 = FUN_01bbea18(uVar22,local_5c,iVar18,iVar3);
                    iVar27 = (int)uVar28;
                    if (iVar3 == iVar18 - iVar27 && local_7c != iVar3) {
                      uVar28 = FUN_01bbea18(uVar22 - iVar27,local_5c,uVar14,local_7c);
                      uVar28 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),iVar27 + (int)uVar28);
                    }
LAB_01bbfe60:
                    uVar7 = (uint)((ulonglong)uVar28 >> 0x20);
                    uVar19 = uVar21 + (int)uVar28;
                    if (local_d4 < uVar19) {
                      local_a8 = local_70;
                      local_d4 = uVar19;
                      local_b0 = (int)uVar28;
                      local_ac = uVar21;
                    }
                  }
                }
                else {
                  uVar28 = FUN_01bbea84(uVar22,local_58 + uVar19,uVar2);
                  uVar7 = (uint)((ulonglong)uVar28 >> 0x20);
                  uVar21 = (uint)uVar28;
                  if (uVar13 <= uVar21) {
                    uVar28 = FUN_01bbea18(uVar22,local_5c,local_58 + uVar19,iVar11);
                    goto LAB_01bbfe60;
                  }
                }
              }
            }
            if (local_a8 == (uint *)0x0) goto LAB_01bbfcd0;
            iVar18 = param_2[3];
            if (iVar18 == param_2[4]) {
              uVar2 = 0xffffffba;
              goto LAB_01bbfeec;
            }
            iVar3 = *param_2;
            uVar7 = *local_a8;
            iVar27 = iVar3 + iVar18 * 0xc;
            *(uint *)(iVar27 + 4) = (uVar22 - local_b0) - local_5c;
            *(uint *)(iVar27 + 8) = local_ac + local_b0;
            *(uint *)(iVar3 + iVar18 * 0xc) = iVar6 - uVar7;
            param_2[3] = iVar18 + 1;
            FUN_01bbf48c(param_1,uVar16,local_48,local_44,*(undefined4 *)(param_3 + 8));
            local_5c = uVar22 + local_ac;
            uVar7 = extraout_r1_00;
            uVar28 = extraout_d7_02;
            if (local_64 + iVar25 < local_5c) {
              local_64 = local_5c - iVar25;
              break;
            }
          }
          local_74 = local_74 + 0x10;
        }
      }
      uVar2 = uVar2 - local_5c;
    }
    if (0xffffff88 < uVar2) goto LAB_01bbfeec;
    if (uVar8 < (uint)param_2[3]) {
      iVar4 = uVar8 * 0xc + *param_2;
      *(uint *)(iVar4 + 4) = *(int *)(iVar4 + 4) + local_90;
    }
    else {
      uVar2 = local_90 + uVar9;
      local_90 = uVar7;
    }
    local_78 = local_78 + 1;
    local_68 = local_68 + 0x100000;
    uVar7 = local_90;
    local_90 = uVar2;
  }
  uVar2 = 0;
LAB_01bbfeec:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar7,local_2c ^ DAT_01d53560,0);
  }
  return;
}

