// FUN_015225b0 @ 015225b0 size=1620 calls_out=18 calls_in=1
// strings: all items are strings | all items are strings

/* WARNING: Removing unreachable block (ram,0x015228f0) */

void FUN_015225b0(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  byte bVar17;
  int iVar18;
  undefined8 uVar19;
  undefined4 *local_d8;
  int iStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 *local_88;
  int local_84;
  undefined4 *puStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_4 == '\x04') {
    uVar19 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_0056cb60,4);
    puVar12 = *(undefined4 **)(param_4 + 0xc);
    puVar16 = *(undefined4 **)(param_4 + 8);
    param_4 = param_4 + 4;
    if (puVar12 != (undefined4 *)0x1) {
      iVar11 = 0;
      do {
        local_90 = uVar19;
        if ((int)puVar12 * 0x18 == iVar11) {
          if (puVar12 < (undefined4 *)0xb) {
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
              local_a4 = 4;
              local_a8 = (undefined4 *)0x0;
            }
            else {
              iVar11 = (int)puVar12 << 3;
              iVar7 = FUN_01298504(iVar11,4);
              if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(4,iVar11);
              }
              local_a0 = (undefined4 *)0x0;
              iVar18 = 0;
              local_a8 = puVar12;
              local_a4 = iVar7;
              do {
                pcVar8 = (char *)((int)puVar16 + iVar18 * 3);
                if (*pcVar8 != '\x03') {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("all items are strings",0x15,&DAT_01cfc290);
                }
                uVar14 = *(undefined4 *)(pcVar8 + 8);
                iVar15 = *(int *)(pcVar8 + 0xc);
                if (iVar15 == 0) {
                  iVar9 = 1;
                }
                else {
                  iVar9 = FUN_01298504(iVar15,1);
                  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(1,iVar15);
                  }
                }
                iVar13 = iVar18 + 8;
                FUN_01bed4e2(iVar9,uVar14,iVar15);
                *(int *)(iVar7 + iVar18) = iVar9;
                ((int *)(iVar7 + iVar18))[1] = iVar15;
                iVar18 = iVar13;
              } while (iVar11 != iVar13);
            }
            local_d8 = local_a8;
            iStack_d4 = local_a4;
            puStack_d0 = puVar12;
            local_a0 = puVar12;
            FUN_014fcef8((uint)&local_58 | 4,param_4);
            local_58 = (undefined4 *)CONCAT31(local_58._1_3_,4);
            local_88 = local_d8;
            local_84 = iStack_d4;
            puStack_80 = puStack_d0;
            local_a8 = local_58;
            local_a4 = uStack_54;
            local_a0 = (undefined4 *)local_50;
            uStack_9c = local_4c;
            local_98 = uStack_48;
            uStack_94 = uStack_44;
            puVar12 = (undefined4 *)thunk_FUN_01be5118(0x30);
            if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x30);
            }
            *puVar12 = local_a8;
            puVar12[1] = local_a4;
            puVar12[2] = local_a0;
            puVar12[3] = uStack_9c;
            puVar12[4] = local_98;
            puVar12[5] = uStack_94;
            *(undefined8 *)(puVar12 + 6) = local_90;
            puVar12[8] = local_88;
            puVar12[9] = local_84;
            puVar12[10] = puStack_80;
            puVar12[0xb] = local_7c;
            param_1[1] = puVar12;
            param_1[2] = &DAT_01cfaed0;
          }
          else {
            puVar10 = (undefined4 *)FUN_01671160();
            uVar14 = *puVar10;
            iVar11 = puVar10[1];
            puVar10 = (undefined4 *)FUN_01671044();
            uVar14 = (**(code **)(iVar11 + 0xc))(uVar14);
            FUN_00653054(&local_98,puVar10[2],*puVar10,puVar10[1],puVar10[2],puVar10[3],puVar10 + 8,
                         uVar14);
            local_a8 = &DAT_0056d238;
            local_a4 = 0;
            local_a0 = (undefined4 *)0x0;
            uStack_9c = 0;
            uStack_48 = local_98;
            uStack_44 = uStack_94;
            local_40 = (undefined4 *)local_90;
            uStack_3c = local_90._4_4_;
            uStack_38 = local_88;
            uStack_34 = local_84;
            uStack_30 = puStack_80;
            uStack_2c = local_7c;
            local_58 = local_a8;
            uStack_54 = local_a4;
            local_50 = local_a0;
            local_4c = uStack_9c;
            if (puVar12 != (undefined4 *)0x0) {
              FUN_01530074(&local_58,puVar12,&uStack_48);
            }
            puVar16 = puVar16 + 2;
            do {
              if (*(char *)(puVar16 + -2) != '\x03') {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("all items are strings",0x15,&DAT_01cfc280);
              }
              iVar11 = puVar16[1];
              if (iVar11 == 0) {
                iVar11 = 0;
                iVar7 = 1;
              }
              else {
                uVar14 = *puVar16;
                iVar7 = FUN_01298504(iVar11,1);
                if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(1,iVar11);
                }
                FUN_01bed4e2(iVar7,uVar14,iVar11);
              }
              FUN_015412e4(&local_58,iVar7,iVar11);
              puVar16 = puVar16 + 6;
              puVar12 = (undefined4 *)((int)puVar12 - 1);
            } while (puVar12 != (undefined4 *)0x0);
            local_d8 = local_58;
            iStack_d4 = uStack_54;
            puStack_d0 = (undefined4 *)local_50;
            uStack_cc = local_4c;
            uStack_c8 = uStack_48;
            uStack_c4 = uStack_44;
            local_c0 = local_40;
            uStack_bc = uStack_3c;
            uStack_b8 = uStack_38;
            uStack_b4 = uStack_34;
            uStack_b0 = uStack_30;
            uStack_ac = uStack_2c;
            FUN_014fcef8((uint)&local_58 | 4,param_4);
            local_58 = (undefined4 *)CONCAT31(local_58._1_3_,4);
            local_90._0_4_ = local_d8;
            local_90._4_4_ = iStack_d4;
            local_88 = puStack_d0;
            local_84 = uStack_cc;
            puStack_80 = (undefined4 *)uStack_c8;
            local_7c = uStack_c4;
            local_78._0_4_ = local_c0;
            local_78._4_4_ = uStack_bc;
            uStack_70 = uStack_b8;
            uStack_6c = uStack_b4;
            uStack_68 = uStack_b0;
            uStack_64 = uStack_ac;
            local_a8 = local_58;
            local_a4 = uStack_54;
            local_a0 = (undefined4 *)local_50;
            uStack_9c = local_4c;
            local_98 = uStack_48;
            uStack_94 = uStack_44;
            local_60 = uVar19;
            iVar11 = thunk_FUN_01be5118(0x50);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x50);
            }
            FUN_01bed4e2(iVar11,&local_a8,0x50);
            param_1[1] = iVar11;
            param_1[2] = &DAT_01cfae90;
          }
          goto LAB_01522ad4;
        }
        pcVar8 = (char *)((int)puVar16 + iVar11);
        iVar11 = iVar11 + 0x18;
      } while (*pcVar8 == '\x03');
      iVar11 = 0;
      bVar17 = 0;
      do {
        pbVar1 = (byte *)((int)puVar16 + iVar11);
        iVar11 = iVar11 + 0x18;
        bVar17 = (&DAT_00537160)[*pbVar1] | bVar17;
      } while ((int)puVar12 * 0x18 != iVar11);
      FUN_014fcef8((uint)&local_58 | 4,param_4);
      local_58 = (undefined4 *)CONCAT31(local_58._1_3_,4);
      FUN_01528494(&local_d8,puVar16,puVar12);
      local_a8 = local_58;
      local_a4 = uStack_54;
      local_a0 = (undefined4 *)local_50;
      uStack_9c = local_4c;
      local_98 = uStack_48;
      uStack_94 = uStack_44;
      local_7c = CONCAT31(local_7c._1_3_,bVar17);
      local_88 = local_d8;
      local_84 = iStack_d4;
      puStack_80 = puStack_d0;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(0x30);
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x30);
      }
      *puVar12 = local_a8;
      puVar12[1] = local_a4;
      puVar12[2] = local_a0;
      puVar12[3] = uStack_9c;
      puVar12[4] = local_98;
      puVar12[5] = uStack_94;
      *(undefined8 *)(puVar12 + 6) = local_90;
      puVar12[8] = local_88;
      puVar12[9] = local_84;
      puVar12[10] = puStack_80;
      puVar12[0xb] = local_7c;
      param_1[1] = puVar12;
      param_1[2] = &DAT_01cfae70;
      goto LAB_01522ad4;
    }
    FUN_014fcef8((uint)&local_d8 | 4);
    local_d8 = (undefined4 *)CONCAT31(local_d8._1_3_,4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)puVar16) {
    case 0:
      uVar4 = 0;
      break;
    case 1:
      local_58 = (undefined4 *)*puVar16;
      uStack_54 = puVar16[1];
      local_50 = puVar16[2];
      local_4c = puVar16[3];
      uStack_48 = puVar16[4];
      uStack_44 = puVar16[5];
      goto LAB_01522a74;
    case 2:
      local_50 = puVar16[2];
      local_4c = puVar16[3];
      uStack_48 = puVar16[4];
      uStack_44 = puVar16[5];
      uVar4 = 2;
      break;
    case 3:
      FUN_006666fc((uint)&local_58 | 4,puVar16[2],puVar16[3]);
      uVar4 = 3;
      break;
    case 4:
      FUN_014fcef8((uint)&local_58 | 4,puVar16 + 1);
      uVar4 = 4;
      break;
    case 5:
      FUN_0156aa80((uint)&local_58 | 4,puVar16 + 1);
      uVar4 = 5;
    }
    local_58 = (undefined4 *)CONCAT31(local_58._1_3_,uVar4);
LAB_01522a74:
    local_a8 = local_58;
    local_a4 = uStack_54;
    local_a0 = (undefined4 *)local_50;
    uStack_9c = local_4c;
    local_98 = uStack_48;
    uStack_94 = uStack_44;
    local_90._0_4_ = local_d8;
    local_90._4_4_ = iStack_d4;
    local_88 = puStack_d0;
    local_84 = uStack_cc;
    puStack_80 = (undefined4 *)uStack_c8;
    local_7c = uStack_c4;
    local_78 = uVar19;
    puVar12 = (undefined4 *)thunk_FUN_01be5118(0x38);
    if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x38);
    }
    puVar6 = &DAT_01cfaeb0;
    *puVar12 = local_a8;
    puVar12[1] = local_a4;
    puVar12[2] = local_a0;
    puVar12[3] = uStack_9c;
    puVar12[4] = local_98;
    puVar12[5] = uStack_94;
    puVar12[6] = (undefined4 *)local_90;
    puVar12[7] = local_90._4_4_;
    puVar12[8] = local_88;
    puVar12[9] = local_84;
    puVar12[10] = puStack_80;
    puVar12[0xb] = local_7c;
    *(undefined8 *)(puVar12 + 0xc) = local_78;
  }
  else {
    uVar19 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_0056cb60,4);
    uVar14 = (undefined4)((ulonglong)uVar19 >> 0x20);
    piVar5 = (int *)uVar19;
    do {
      iVar11 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar11 + 1;
    if (iVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x1522c38);
      (*pcVar2)();
    }
    uVar19 = FUN_015321a0();
    puVar6 = (undefined *)FUN_015956e0(piVar5,uVar14,piVar5,uVar14,uVar19,param_4,1);
    puVar12 = (undefined4 *)0x0;
  }
  param_1[1] = puVar12;
  param_1[2] = puVar6;
LAB_01522ad4:
  *param_1 = 1;
  return;
}

