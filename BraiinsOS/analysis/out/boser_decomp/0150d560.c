// FUN_0150d560 @ 0150d560 size=2096 calls_out=20 calls_in=0
// strings: 

void FUN_0150d560(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint unaff_r8;
  uint *puVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  int local_108;
  int local_dc;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  int *local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int *local_98;
  uint local_94;
  int *local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int *local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 == '\x05') {
    uVar26 = *(uint *)(param_3 + 0xc);
    piVar18 = (int *)0x0;
    local_b0 = 0;
    local_b4 = 4;
    local_b8 = 0;
    if ((0x3ffffff < uVar26) || (unaff_r8 = uVar26 * 0x40, 0x7ffffffc < unaff_r8)) {
LAB_0150dc58:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(piVar18,unaff_r8);
    }
    local_108 = 4;
    piVar18 = (int *)&SUB_00000004;
    local_ac = 0;
    piVar3 = piVar18;
    if (unaff_r8 != 0) {
      piVar3 = (int *)FUN_01298504(unaff_r8,4);
      if (piVar3 == (int *)0x0) goto LAB_0150dc58;
      local_ac = uVar26;
    }
    uVar4 = param_2[0xd];
    uVar5 = param_2[0x1c];
    local_94 = *(uint *)(param_3 + 8);
    iVar12 = param_2[0x1b];
    local_98 = *(int **)(param_3 + 4);
    iVar6 = iVar12 + uVar5 * 0x28;
    iVar7 = param_2[0xf];
    if (local_98 == (int *)0x0) {
      uVar26 = 0;
    }
    uVar8 = param_2[1];
    local_a0 = (uint)(local_98 != (int *)0x0);
    iVar9 = param_2[3];
    iVar15 = param_2[0xc];
    iVar13 = *param_2;
    local_dc = 0;
    uVar27 = 0;
    local_a4 = 0;
    local_8c = 0;
    local_9c = 0;
    local_a8 = piVar3;
    local_90 = (int *)local_a0;
    local_88 = (uint)local_98;
    local_84 = local_94;
    local_80 = uVar26;
LAB_0150d6c0:
    uVar28 = FUN_01a41998(&local_a0);
    uVar25 = (undefined4)((ulonglong)uVar28 >> 0x20);
    iVar20 = (int)uVar28;
    if (iVar20 != 0) {
      local_74 = *(undefined4 *)(iVar20 + 4);
      uStack_70 = *(undefined4 *)(iVar20 + 8);
      local_78 = 0x80000000;
      uVar14 = *(undefined4 *)(iVar20 + 4);
      iVar21 = *(int *)(iVar20 + 8);
      uStack_6c = param_4;
      if (iVar9 != 0) {
        uVar10 = FUN_0155d010(param_2 + 4,uVar14,iVar21);
        uVar26 = uVar10 >> 0x19;
        iVar22 = 0;
        while( true ) {
          uVar10 = uVar8 & uVar10;
          uVar19 = *(uint *)(iVar13 + uVar10);
          uVar11 = uVar19 ^ uVar26 * 0x1010101;
          for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
              uVar11 = uVar11 - 1 & uVar11) {
            uVar23 = uVar10 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar8;
            iVar16 = iVar13 + -0x20 + uVar23 * -0x20;
            if ((iVar21 == *(int *)(iVar16 + 8)) &&
               (iVar16 = thunk_FUN_01bed842(uVar14,*(undefined4 *)(iVar16 + 4),iVar21), iVar16 == 0)
               ) {
              FUN_015737d4(&local_68,iVar13 + -0x14 + uVar23 * -0x20,uVar25,&local_78,param_5,
                           param_6);
              if (uVar27 == local_ac) {
                FUN_0155ab78(&local_ac);
                piVar3 = local_a8;
              }
              piVar18 = piVar3 + uVar27 * 0x10;
              uVar27 = uVar27 + 1;
              *piVar18 = local_68;
              piVar18[1] = iStack_64;
              piVar18[2] = iStack_60;
              piVar18[3] = local_5c;
              piVar18[4] = (int)local_58;
              piVar18[5] = local_54;
              piVar18[6] = (int)local_50;
              piVar18[7] = local_4c;
              piVar18[8] = iStack_48;
              piVar18[9] = iStack_44;
              piVar18[10] = local_40;
              piVar18[0xb] = iStack_3c;
              piVar18[0xc] = iStack_38;
              piVar18[0xd] = iStack_34;
              piVar18[0xe] = iStack_30;
              piVar18[0xf] = iStack_2c;
              local_a4 = uVar27;
              if (iVar7 == 0) goto LAB_0150d6c0;
              uVar14 = *(undefined4 *)(iVar20 + 4);
              iVar20 = *(int *)(iVar20 + 8);
              uVar10 = FUN_01676700(param_2 + 0x10,uVar14,iVar20);
              uVar26 = uVar10 >> 0x19;
              iVar21 = 0;
              goto LAB_0150d8a8;
            }
          }
          if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
          iVar22 = iVar22 + 4;
          uVar10 = uVar10 + iVar22;
        }
      }
      if (uVar5 == 0) {
LAB_0150daf4:
        FUN_006666fc(&local_68,uVar14,iVar21);
        if (local_dc == local_b8) {
          FUN_019abd3c(&local_b8);
          local_108 = local_b4;
        }
        local_b0 = local_dc + 1;
        piVar18 = (int *)(local_108 + local_dc * 0xc);
        *piVar18 = local_68;
        piVar18[1] = iStack_64;
        piVar18[2] = iStack_60;
        local_dc = local_b0;
      }
      else {
        bVar17 = false;
        iVar21 = iVar12;
        do {
          iVar22 = iVar21;
          while( true ) {
            cVar2 = FUN_015050f0(iVar22,*(undefined4 *)(iVar20 + 4),*(undefined4 *)(iVar20 + 8));
            iVar21 = iVar22 + 0x28;
            if (cVar2 != '\0') break;
            iVar22 = iVar21;
            if (iVar21 == iVar6) {
              if (bVar17) goto LAB_0150d6c0;
              uVar14 = *(undefined4 *)(iVar20 + 4);
              iVar21 = *(int *)(iVar20 + 8);
              goto LAB_0150daf4;
            }
          }
          FUN_015737d4(&local_68,iVar22 + 0x14,uVar25,&local_78,param_5,param_6);
          if (uVar27 == local_ac) {
            FUN_0155ab78(&local_ac);
            piVar3 = local_a8;
          }
          piVar18 = piVar3 + uVar27 * 0x10;
          uVar27 = uVar27 + 1;
          *piVar18 = local_68;
          piVar18[1] = iStack_64;
          piVar18[2] = iStack_60;
          piVar18[3] = local_5c;
          piVar18[4] = (int)local_58;
          piVar18[5] = local_54;
          piVar18[6] = (int)local_50;
          piVar18[7] = local_4c;
          piVar18[8] = iStack_48;
          piVar18[9] = iStack_44;
          piVar18[10] = local_40;
          piVar18[0xb] = iStack_3c;
          piVar18[0xc] = iStack_38;
          piVar18[0xd] = iStack_34;
          piVar18[0xe] = iStack_30;
          piVar18[0xf] = iStack_2c;
          bVar17 = true;
          local_a4 = uVar27;
        } while (iVar21 != iVar6);
      }
      goto LAB_0150d6c0;
    }
    iVar6 = local_a4 << 6;
    piVar18 = local_a8;
    do {
      if (iVar6 == 0) {
        local_4c = 0;
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = (int *)0x0;
        local_94 = local_a4;
        local_98 = local_a8;
        goto LAB_0150dbe0;
      }
      piVar3 = piVar18 + 0xf;
      iVar6 = iVar6 + -0x40;
      piVar18 = piVar18 + 0x10;
    } while ((char)*piVar3 != '\0');
    local_94 = local_ac;
    local_a0 = 0;
    local_4c = 4;
    local_8c = local_a4;
    local_90 = local_a8;
    local_88 = 0;
    local_98 = (int *)0x0;
    local_9c = 4;
LAB_0150dbe0:
    if (local_dc == 0) {
      *param_1 = local_a0;
      param_1[1] = local_9c;
      param_1[2] = (uint)local_98;
      param_1[3] = local_94;
      param_1[4] = (uint)local_90;
      param_1[5] = local_8c;
      param_1[6] = local_88;
      FUN_006a41c0(&local_b8);
      return;
    }
    piVar18 = (int *)param_2[0x18];
    if (param_5 == 0) {
      local_68 = 0;
      uVar25 = 0;
      local_50 = param_2;
      local_58 = local_a8;
    }
    else {
      uVar26 = param_2[0x19];
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
      }
      piVar3 = *(int **)(param_5 + 0xc);
      do {
        iVar6 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_0150dd80;
      piVar18 = piVar18 + 2;
      uVar25 = *(undefined4 *)(param_5 + 0x10);
      uVar4 = (*(int **)(param_5 + 4))[1];
      if (uVar26 < uVar4) {
        uVar4 = 0;
      }
      else {
        iVar6 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar18,uVar4);
        if (iVar6 != 0) {
          uVar4 = 0;
        }
        piVar18 = (int *)((int)piVar18 + uVar4);
      }
      uVar28 = FUN_016bc0ec(piVar18,uVar26 - uVar4);
      local_4c = (int)((ulonglong)uVar28 >> 0x20);
      local_68 = 2;
      piVar18 = (int *)param_2[0x18];
      local_50 = (int *)uVar28;
      local_58 = piVar3;
    }
    do {
      iVar6 = *piVar18;
      bVar17 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar17);
    *piVar18 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_0150dd80:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x150dd80);
      (*pcVar1)();
    }
    iVar6 = param_2[0x19];
    local_5c = 3;
    local_54 = uVar25;
    uVar28 = FUN_01531840(param_4);
    local_78 = FUN_01595b0c(piVar18,iVar6,&local_68,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),
                            param_3,&local_b8);
    FUN_01508738(&local_68,&local_78);
    FUN_01562ef4(&local_a0,&local_68);
    FUN_015019e4(&local_78);
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = (uint)local_98;
    param_1[3] = local_94;
    param_1[4] = (uint)local_90;
    param_1[5] = local_8c;
    param_1[6] = local_88;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
LAB_0150d8a8:
  uVar10 = uVar4 & uVar10;
  uVar19 = *(uint *)(iVar15 + uVar10);
  uVar11 = uVar19 ^ uVar26 * 0x1010101;
  for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
      uVar11 = uVar11 - 1 & uVar11) {
    uVar23 = uVar10 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar4;
    iVar22 = iVar15 + -0x14 + uVar23 * -0x14;
    if ((iVar20 == *(int *)(iVar22 + 8)) &&
       (iVar22 = thunk_FUN_01bed842(uVar14,*(undefined4 *)(iVar22 + 4),iVar20), iVar22 == 0)) {
      iVar21 = iVar15 + uVar23 * -0x14;
      iVar20 = *(int *)(iVar21 + -4);
      if (iVar20 != 0) {
        iVar20 = iVar20 << 2;
        puVar24 = *(uint **)(iVar21 + -8);
        do {
          uVar26 = *puVar24;
          if (uVar5 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar26,uVar5,&DAT_01cfa9b8);
          }
          FUN_015737d4(&local_68,iVar12 + uVar26 * 0x28 + 0x14,uVar25,&local_78,param_5,param_6);
          if (uVar27 == local_ac) {
            FUN_0155ab78(&local_ac);
            piVar3 = local_a8;
          }
          piVar18 = piVar3 + uVar27 * 0x10;
          uVar27 = uVar27 + 1;
          iVar20 = iVar20 + -4;
          *piVar18 = local_68;
          piVar18[1] = iStack_64;
          piVar18[2] = iStack_60;
          piVar18[3] = local_5c;
          piVar18[4] = (int)local_58;
          piVar18[5] = local_54;
          piVar18[6] = (int)local_50;
          piVar18[7] = local_4c;
          piVar18[8] = iStack_48;
          piVar18[9] = iStack_44;
          piVar18[10] = local_40;
          piVar18[0xb] = iStack_3c;
          piVar18[0xc] = iStack_38;
          piVar18[0xd] = iStack_34;
          piVar18[0xe] = iStack_30;
          piVar18[0xf] = iStack_2c;
          puVar24 = puVar24 + 1;
          local_a4 = uVar27;
        } while (iVar20 != 0);
      }
      goto LAB_0150dadc;
    }
  }
  if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) goto LAB_0150dadc;
  iVar21 = iVar21 + 4;
  uVar10 = uVar10 + iVar21;
  goto LAB_0150d8a8;
LAB_0150dadc:
  goto LAB_0150d6c0;
}

