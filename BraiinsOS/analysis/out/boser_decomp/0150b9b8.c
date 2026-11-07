// FUN_0150b9b8 @ 0150b9b8 size=1844 calls_out=19 calls_in=0
// strings: 

void FUN_0150b9b8(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  bool bVar24;
  uint unaff_r8;
  int iVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  undefined8 uVar29;
  int local_d8;
  int *local_bc;
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
  undefined8 local_50;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 == '\x05') {
    uVar19 = *(uint *)(param_3 + 0xc);
    uVar16 = 0;
    local_b0 = 0;
    local_b4 = 4;
    local_b8 = 0;
    if ((0x3ffffff < uVar19) || (unaff_r8 = uVar19 * 0x40, 0x7ffffffc < unaff_r8)) {
LAB_0150bfb4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,unaff_r8);
    }
    local_d8 = 4;
    local_bc = (int *)&SUB_00000004;
    local_ac = 0;
    if (unaff_r8 != 0) {
      uVar16 = 4;
      local_bc = (int *)FUN_01298504(unaff_r8,4);
      if (local_bc == (int *)0x0) goto LAB_0150bfb4;
      local_ac = uVar19;
    }
    local_a4 = 0;
    uVar28 = 0;
    uVar3 = param_2[0x13];
    local_98 = *(int **)(param_3 + 4);
    iVar14 = param_2[0x12];
    local_94 = *(uint *)(param_3 + 8);
    if (local_98 == (int *)0x0) {
      uVar19 = 0;
    }
    iVar27 = iVar14 + uVar3 * 0x28;
    uVar4 = param_2[1];
    local_a0 = (uint)(local_98 != (int *)0x0);
    iVar5 = param_2[3];
    iVar12 = param_2[0x10];
    iVar13 = *param_2;
    iVar6 = param_2[0xf];
    local_8c = 0;
    local_9c = 0;
    iVar25 = 0;
    local_a8 = local_bc;
    local_90 = (int *)local_a0;
    local_88 = (uint)local_98;
    local_84 = local_94;
    local_80 = uVar19;
LAB_0150baec:
    uVar29 = FUN_01a41998(&local_a0);
    uVar16 = (undefined4)((ulonglong)uVar29 >> 0x20);
    iVar15 = (int)uVar29;
    if (iVar15 != 0) {
      local_74 = *(undefined4 *)(iVar15 + 4);
      uStack_70 = *(undefined4 *)(iVar15 + 8);
      local_78 = 0x80000000;
      uVar20 = *(undefined4 *)(iVar15 + 4);
      iVar18 = *(int *)(iVar15 + 8);
      uStack_6c = param_4;
      if (iVar12 != 0) {
        iVar17 = iVar12 << 5;
        iVar21 = iVar6;
LAB_0150bb38:
        if ((*(int *)(iVar21 + 8) != iVar18) ||
           (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar21 + 4),uVar20,iVar18), iVar7 != 0))
        goto LAB_0150bb5c;
        FUN_015737d4(&local_68,iVar21 + 0xc,uVar16,&local_78,param_5,param_6);
        if (uVar28 == local_ac) {
          FUN_0155ab78(&local_ac);
          local_bc = local_a8;
        }
        piVar8 = local_bc + uVar28 * 0x10;
        uVar28 = uVar28 + 1;
        *piVar8 = local_68;
        piVar8[1] = iStack_64;
        piVar8[2] = iStack_60;
        piVar8[3] = local_5c;
        piVar8[4] = (int)local_58;
        piVar8[5] = local_54;
        piVar8[6] = (int)local_50;
        piVar8[7] = local_50._4_4_;
        piVar8[8] = iStack_48;
        piVar8[9] = iStack_44;
        piVar8[10] = local_40;
        piVar8[0xb] = iStack_3c;
        piVar8[0xc] = iStack_38;
        piVar8[0xd] = iStack_34;
        piVar8[0xe] = iStack_30;
        piVar8[0xf] = iStack_2c;
        local_a4 = uVar28;
        if (iVar5 != 0) {
          uVar20 = *(undefined4 *)(iVar15 + 4);
          iVar18 = *(int *)(iVar15 + 8);
          uVar9 = FUN_01676700(param_2 + 4,uVar20,iVar18);
          uVar19 = uVar9 >> 0x19;
          iVar15 = 0;
          while( true ) {
            uVar9 = uVar4 & uVar9;
            uVar22 = *(uint *)(iVar13 + uVar9);
            uVar10 = uVar22 ^ uVar19 * 0x1010101;
            for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                uVar10 = uVar10 - 1 & uVar10) {
              uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                              (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                       uVar4;
              iVar17 = iVar13 + -0x14 + uVar11 * -0x14;
              if ((iVar18 == *(int *)(iVar17 + 8)) &&
                 (iVar17 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar17 + 4),iVar18),
                 iVar17 == 0)) {
                iVar18 = iVar13 + uVar11 * -0x14;
                iVar15 = *(int *)(iVar18 + -4);
                if (iVar15 != 0) {
                  iVar15 = iVar15 << 2;
                  puVar26 = *(uint **)(iVar18 + -8);
                  do {
                    uVar19 = *puVar26;
                    if (uVar3 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar19,uVar3,&DAT_01cfa9b8);
                    }
                    FUN_015737d4(&local_68,iVar14 + uVar19 * 0x28 + 0x14,uVar16,&local_78,param_5,
                                 param_6);
                    if (uVar28 == local_ac) {
                      FUN_0155ab78(&local_ac);
                      local_bc = local_a8;
                    }
                    piVar8 = local_bc + uVar28 * 0x10;
                    uVar28 = uVar28 + 1;
                    iVar15 = iVar15 + -4;
                    *piVar8 = local_68;
                    piVar8[1] = iStack_64;
                    piVar8[2] = iStack_60;
                    piVar8[3] = local_5c;
                    piVar8[4] = (int)local_58;
                    piVar8[5] = local_54;
                    piVar8[6] = (int)local_50;
                    piVar8[7] = local_50._4_4_;
                    piVar8[8] = iStack_48;
                    piVar8[9] = iStack_44;
                    piVar8[10] = local_40;
                    piVar8[0xb] = iStack_3c;
                    piVar8[0xc] = iStack_38;
                    piVar8[0xd] = iStack_34;
                    piVar8[0xe] = iStack_30;
                    piVar8[0xf] = iStack_2c;
                    puVar26 = puVar26 + 1;
                    local_a4 = uVar28;
                  } while (iVar15 != 0);
                }
                goto LAB_0150bea0;
              }
            }
            if ((uVar22 & 0x80808080 & uVar22 << 1) != 0) break;
            iVar15 = iVar15 + 4;
            uVar9 = uVar9 + iVar15;
          }
          goto LAB_0150bea0;
        }
        goto LAB_0150baec;
      }
LAB_0150bb68:
      if (uVar3 == 0) {
LAB_0150bc44:
        FUN_006666fc(&local_68,uVar20,iVar18);
        if (iVar25 == local_b8) {
          FUN_019abd3c(&local_b8);
          local_d8 = local_b4;
        }
        local_b0 = iVar25 + 1;
        piVar8 = (int *)(local_d8 + iVar25 * 0xc);
        *piVar8 = local_68;
        piVar8[1] = iStack_64;
        piVar8[2] = iStack_60;
        iVar25 = local_b0;
      }
      else {
        bVar24 = false;
        iVar18 = iVar14;
        do {
          iVar17 = iVar18;
          while( true ) {
            cVar2 = FUN_015050f0(iVar17,*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8));
            iVar18 = iVar17 + 0x28;
            if (cVar2 != '\0') break;
            iVar17 = iVar18;
            if (iVar18 == iVar27) {
              if (bVar24) goto LAB_0150bea0;
              uVar20 = *(undefined4 *)(iVar15 + 4);
              iVar18 = *(int *)(iVar15 + 8);
              goto LAB_0150bc44;
            }
          }
          FUN_015737d4(&local_68,iVar17 + 0x14,uVar16,&local_78,param_5,param_6);
          if (uVar28 == local_ac) {
            FUN_0155ab78(&local_ac);
            local_bc = local_a8;
          }
          piVar8 = local_bc + uVar28 * 0x10;
          uVar28 = uVar28 + 1;
          bVar24 = true;
          *piVar8 = local_68;
          piVar8[1] = iStack_64;
          piVar8[2] = iStack_60;
          piVar8[3] = local_5c;
          piVar8[4] = (int)local_58;
          piVar8[5] = local_54;
          piVar8[6] = (int)local_50;
          piVar8[7] = local_50._4_4_;
          piVar8[8] = iStack_48;
          piVar8[9] = iStack_44;
          piVar8[10] = local_40;
          piVar8[0xb] = iStack_3c;
          piVar8[0xc] = iStack_38;
          piVar8[0xd] = iStack_34;
          piVar8[0xe] = iStack_30;
          piVar8[0xf] = iStack_2c;
          local_a4 = uVar28;
        } while (iVar18 != iVar27);
LAB_0150bea0:
      }
      goto LAB_0150baec;
    }
    iVar14 = local_a4 << 6;
    piVar8 = local_a8;
    do {
      if (iVar14 == 0) {
        uVar16 = 0;
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = (int *)0x0;
        local_94 = local_a4;
        local_98 = local_a8;
        goto LAB_0150bf44;
      }
      piVar23 = piVar8 + 0xf;
      iVar14 = iVar14 + -0x40;
      piVar8 = piVar8 + 0x10;
    } while ((char)*piVar23 != '\0');
    local_94 = local_ac;
    local_a0 = 0;
    uVar16 = 4;
    local_8c = local_a4;
    local_90 = local_a8;
    local_88 = 0;
    local_98 = (int *)0x0;
    local_9c = 4;
LAB_0150bf44:
    local_50 = CONCAT44(uVar16,local_a0);
    if (iVar25 == 0) {
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
    piVar8 = (int *)param_2[0xc];
    if (param_5 == 0) {
      local_68 = 0;
      uVar16 = 0;
      local_58 = local_a8;
    }
    else {
      uVar19 = param_2[0xd];
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
      }
      piVar23 = *(int **)(param_5 + 0xc);
      do {
        iVar14 = *piVar23;
        bVar24 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar24);
      *piVar23 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_0150c0ec;
      piVar8 = piVar8 + 2;
      uVar16 = *(undefined4 *)(param_5 + 0x10);
      uVar3 = (*(int **)(param_5 + 4))[1];
      if (uVar19 < uVar3) {
        uVar3 = 0;
      }
      else {
        iVar14 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar8,uVar3);
        if (iVar14 != 0) {
          uVar3 = 0;
        }
        piVar8 = (int *)((int)piVar8 + uVar3);
      }
      local_50 = FUN_016bc0ec(piVar8,uVar19 - uVar3);
      local_68 = 2;
      piVar8 = (int *)param_2[0xc];
      local_58 = piVar23;
    }
    do {
      iVar14 = *piVar8;
      bVar24 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar24);
    *piVar8 = iVar14 + 1;
    if (iVar14 < 0) {
LAB_0150c0ec:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x150c0ec);
      (*pcVar1)();
    }
    iVar14 = param_2[0xd];
    local_5c = 3;
    local_54 = uVar16;
    uVar29 = FUN_01531840(param_4);
    local_78 = FUN_01595b0c(piVar8,iVar14,&local_68,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20),
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
LAB_0150bb5c:
  iVar21 = iVar21 + 0x20;
  iVar17 = iVar17 + -0x20;
  if (iVar17 == 0) goto LAB_0150bb68;
  goto LAB_0150bb38;
}

