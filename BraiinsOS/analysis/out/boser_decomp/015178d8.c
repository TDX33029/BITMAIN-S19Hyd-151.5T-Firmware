// FUN_015178d8 @ 015178d8 size=1952 calls_out=18 calls_in=0
// strings: 

void FUN_015178d8(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 extraout_r1;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  int iVar27;
  undefined8 uVar28;
  int local_108;
  uint local_100;
  uint local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  uint *local_78;
  int *local_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_3 == '\x05') {
    uVar19 = *(uint *)(param_3 + 0xc);
    uVar18 = 0;
    uVar23 = uVar19 * 0xc;
    if (0xaaaaaaa < uVar19) {
LAB_01517918:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,uVar23);
    }
    uVar22 = 0;
    if (uVar23 == 0) {
      local_108 = 4;
      local_c8 = 0;
    }
    else {
      uVar18 = 4;
      local_108 = FUN_01298504(uVar23,4);
      local_c8 = uVar19;
      if (local_108 == 0) goto LAB_01517918;
    }
    local_c0 = 0;
    local_c4 = local_108;
    if ((0x3ffffff < uVar19) || (uVar23 = uVar19 * 0x40, 0x7ffffffc < uVar23)) {
LAB_015179e0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar22,uVar23);
    }
    if (uVar23 == 0) {
      uVar5 = 4;
      local_bc = 0;
    }
    else {
      uVar22 = 4;
      uVar5 = FUN_01298504(uVar23,4);
      if (uVar5 == 0) goto LAB_015179e0;
      local_bc = uVar19;
    }
    local_a4 = *(uint *)(param_3 + 8);
    uVar23 = 0;
    local_a8 = *(uint *)(param_3 + 4);
    local_100 = 0;
    local_b4 = 0;
    if (local_a8 == 0) {
      uVar19 = 0;
    }
    local_9c = 0;
    local_ac = 0;
    uVar12 = param_2[1];
    iVar20 = *param_2;
    iVar13 = param_2[3];
    iVar14 = param_2[0x11];
    iVar6 = param_2[0x12];
    local_b0 = (uint)(local_a8 != 0);
    bVar4 = false;
    local_b8 = uVar5;
    local_a0 = local_b0;
    local_98 = local_a8;
    local_94 = local_a4;
    local_90 = uVar19;
LAB_01517a9c:
    uVar28 = FUN_01a41998(&local_b0);
    iVar11 = (int)uVar28;
    if (iVar11 != 0) {
      uVar18 = *(undefined4 *)(iVar11 + 4);
      iVar16 = *(int *)(iVar11 + 8);
      if (iVar13 != 0) {
        uVar7 = FUN_0155d010(param_2 + 4,uVar18,iVar16);
        uVar19 = uVar7 >> 0x19;
        iVar27 = 0;
        while( true ) {
          uVar7 = uVar12 & uVar7;
          uVar21 = *(uint *)(iVar20 + uVar7);
          uVar8 = uVar21 ^ uVar19 * 0x1010101;
          for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0;
              uVar8 = uVar8 - 1 & uVar8) {
            uVar26 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                     uVar12;
            iVar9 = iVar20 + -0x20 + uVar26 * -0x20;
            if ((iVar16 == *(int *)(iVar9 + 8)) &&
               (iVar9 = thunk_FUN_01bed842(uVar18,*(undefined4 *)(iVar9 + 4),iVar16), iVar9 == 0)) {
              local_48 = 0x80000000;
              local_44 = uVar18;
              local_40 = iVar16;
              local_3c = param_4;
              FUN_015737d4(&local_88,iVar20 + -0x14 + uVar26 * -0x20,
                           (int)((ulonglong)uVar28 >> 0x20),&local_48,param_5,param_6);
              if (uVar23 == local_bc) {
                FUN_0155ab78(&local_bc);
                uVar5 = local_b8;
              }
              puVar10 = (undefined4 *)(uVar5 + uVar23 * 0x40);
              uVar23 = uVar23 + 1;
              *puVar10 = local_88;
              puVar10[1] = uStack_84;
              puVar10[2] = uStack_80;
              puVar10[3] = local_7c;
              puVar10[4] = local_78;
              puVar10[5] = local_74;
              puVar10[6] = (undefined4)local_70;
              puVar10[7] = local_70._4_4_;
              puVar10[8] = uStack_68;
              puVar10[9] = uStack_64;
              puVar10[10] = local_60;
              puVar10[0xb] = uStack_5c;
              puVar10[0xc] = uStack_58;
              puVar10[0xd] = uStack_54;
              puVar10[0xe] = uStack_50;
              puVar10[0xf] = uStack_4c;
              local_b4 = uVar23;
              if (*(int *)(iVar11 + 8) == iVar6) {
                iVar11 = thunk_FUN_01bed842(*(undefined4 *)(iVar11 + 4),iVar14,iVar6);
                bVar4 = (bool)(iVar11 == 0 | bVar4);
              }
              goto LAB_01517a9c;
            }
          }
          if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
          iVar27 = iVar27 + 4;
          uVar7 = uVar7 + iVar27;
        }
      }
      FUN_006666fc(&local_88,uVar18,iVar16);
      if (local_100 == local_c8) {
        FUN_019abd3c(&local_c8);
        local_108 = local_c4;
      }
      local_c0 = local_100 + 1;
      puVar10 = (undefined4 *)(local_108 + local_100 * 0xc);
      *puVar10 = local_88;
      puVar10[1] = uStack_84;
      puVar10[2] = uStack_80;
      local_100 = local_c0;
      goto LAB_01517a9c;
    }
    iVar6 = local_b4 << 6;
    uVar23 = local_b8;
    do {
      if (iVar6 == 0) {
        uVar18 = 0;
        local_ac = local_bc;
        local_b0 = 0x80000000;
        local_a0 = 0;
        local_a4 = local_b4;
        local_a8 = local_b8;
        goto LAB_01517d4c;
      }
      pcVar1 = (char *)(uVar23 + 0x3c);
      iVar6 = iVar6 + -0x40;
      uVar23 = uVar23 + 0x40;
    } while (*pcVar1 != '\0');
    local_a4 = local_bc;
    local_b0 = 0;
    uVar18 = 4;
    local_9c = local_b4;
    local_a0 = local_b8;
    local_98 = 0;
    local_a8 = 0;
    local_ac = 4;
LAB_01517d4c:
    uVar28 = CONCAT44(uVar18,local_100);
    piVar25 = (int *)0x0;
    if (local_100 != 0) {
      piVar17 = (int *)param_2[0xc];
      if (param_5 == 0) {
        uVar18 = 0;
        puVar15 = param_1;
        piVar24 = param_2;
      }
      else {
        uVar23 = param_2[0xd];
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
        }
        puVar15 = *(uint **)(param_5 + 0xc);
        do {
          uVar19 = *puVar15;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar19 + 1;
        if ((int)uVar19 < 0) goto LAB_01518078;
        piVar17 = piVar17 + 2;
        piVar24 = *(int **)(param_5 + 0x10);
        uVar19 = (*(int **)(param_5 + 4))[1];
        if (uVar23 < uVar19) {
          uVar19 = 0;
        }
        else {
          iVar6 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar17,uVar19);
          if (iVar6 != 0) {
            uVar19 = 0;
          }
          piVar17 = (int *)((int)piVar17 + uVar19);
        }
        uVar28 = FUN_016bc0ec(piVar17,uVar23 - uVar19);
        uVar18 = 2;
        piVar17 = (int *)param_2[0xc];
      }
      do {
        iVar6 = *piVar17;
        bVar3 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar3);
      *piVar17 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01518078;
      piVar25 = (int *)param_2[0xd];
      local_7c = 3;
      local_88 = uVar18;
      local_78 = puVar15;
      local_74 = piVar24;
      local_70 = uVar28;
      uVar28 = FUN_01531840(param_4);
      local_48 = FUN_01595b0c(piVar17,piVar25,&local_88,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20)
                              ,param_3,&local_c8);
      FUN_01508738(&local_88,&local_48);
      FUN_01562ef4(&local_b0,&local_88);
      FUN_015019e4(&local_48);
      uVar18 = extraout_r1;
    }
    if (!bVar4) {
      piVar17 = (int *)param_2[0xe];
      uVar28 = CONCAT44(uVar18,LZCOUNT(local_100));
      if (param_5 == 0) {
        uVar18 = 0;
        puVar15 = param_1;
      }
      else {
        uVar23 = param_2[0xf];
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
        }
        puVar15 = *(uint **)(param_5 + 0xc);
        do {
          uVar19 = *puVar15;
          bVar4 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar4);
        *puVar15 = uVar19 + 1;
        if ((int)uVar19 < 0) goto LAB_01518078;
        piVar17 = piVar17 + 2;
        piVar25 = *(int **)(param_5 + 0x10);
        uVar19 = (*(int **)(param_5 + 4))[1];
        if (uVar23 < uVar19) {
          uVar19 = 0;
        }
        else {
          iVar6 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar17,uVar19);
          if (iVar6 != 0) {
            uVar19 = 0;
          }
          piVar17 = (int *)((int)piVar17 + uVar19);
        }
        uVar28 = FUN_016bc0ec(piVar17,uVar23 - uVar19);
        uVar18 = 2;
        piVar17 = (int *)param_2[0xe];
      }
      do {
        iVar6 = *piVar17;
        bVar4 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar4);
      *piVar17 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_01518078:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x1518078);
        (*pcVar2)();
      }
      iVar6 = param_2[0xf];
      local_7c = 3;
      local_88 = uVar18;
      local_78 = puVar15;
      local_74 = piVar25;
      local_70 = uVar28;
      uVar28 = FUN_01531840(param_4);
      FUN_006666fc(&local_30,param_2[0x11],param_2[0x12]);
      puVar10 = (undefined4 *)((uint)&local_48 | 4);
      *puVar10 = local_30;
      puVar10[1] = uStack_2c;
      puVar10[2] = uStack_28;
      local_48 = CONCAT31(local_48._1_3_,3);
      local_30 = FUN_015963e0(piVar17,iVar6,&local_88,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),
                              param_3,&local_48);
      FUN_01508738(&local_88,&local_30);
      FUN_01562ef4(&local_b0,&local_88);
      FUN_015019e4(&local_30);
    }
    *param_1 = local_b0;
    param_1[1] = local_ac;
    param_1[2] = local_a8;
    param_1[3] = local_a4;
    param_1[4] = local_a0;
    param_1[5] = local_9c;
    param_1[6] = local_98;
    if (local_100 == 0) {
      FUN_006a41c0(&local_c8);
    }
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

