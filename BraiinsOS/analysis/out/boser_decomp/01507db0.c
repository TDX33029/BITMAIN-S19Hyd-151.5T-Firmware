// FUN_01507db0 @ 01507db0 size=1836 calls_out=19 calls_in=0
// strings: 

void FUN_01507db0(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
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
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int *piVar24;
  bool bVar25;
  uint unaff_r8;
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
    uVar21 = *(uint *)(param_3 + 0xc);
    uVar17 = 0;
    local_b0 = 0;
    local_b4 = 4;
    local_b8 = 0;
    if ((0x3ffffff < uVar21) || (unaff_r8 = uVar21 * 0x40, 0x7ffffffc < unaff_r8)) {
LAB_015083a4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,unaff_r8);
    }
    local_d8 = 4;
    local_bc = (int *)&SUB_00000004;
    local_ac = 0;
    if (unaff_r8 != 0) {
      uVar17 = 4;
      local_bc = (int *)FUN_01298504(unaff_r8,4);
      if (local_bc == (int *)0x0) goto LAB_015083a4;
      local_ac = uVar21;
    }
    local_a4 = 0;
    uVar28 = 0;
    uVar3 = param_2[0x13];
    local_98 = *(int **)(param_3 + 4);
    local_94 = *(uint *)(param_3 + 8);
    if (local_98 == (int *)0x0) {
      uVar21 = 0;
    }
    iVar13 = param_2[0x12];
    iVar27 = uVar3 * 100 + iVar13;
    iVar4 = param_2[0xf];
    iVar14 = param_2[0x10];
    local_a0 = (uint)(local_98 != (int *)0x0);
    uVar5 = param_2[1];
    iVar15 = *param_2;
    iVar6 = param_2[3];
    local_8c = 0;
    local_9c = 0;
    iVar12 = 0;
    local_a8 = local_bc;
    local_90 = (int *)local_a0;
    local_88 = (uint)local_98;
    local_84 = local_94;
    local_80 = uVar21;
LAB_01507ee0:
    uVar29 = FUN_01a41998(&local_a0);
    uVar17 = (undefined4)((ulonglong)uVar29 >> 0x20);
    iVar16 = (int)uVar29;
    if (iVar16 != 0) {
      local_74 = *(undefined4 *)(iVar16 + 4);
      uStack_70 = *(undefined4 *)(iVar16 + 8);
      local_78 = 0x80000000;
      uVar22 = *(undefined4 *)(iVar16 + 4);
      iVar23 = *(int *)(iVar16 + 8);
      uStack_6c = param_4;
      if (iVar14 != 0) {
        iVar18 = iVar14 << 5;
        iVar19 = iVar4;
LAB_01507f28:
        if ((*(int *)(iVar19 + 8) != iVar23) ||
           (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar19 + 4),uVar22,iVar23), iVar7 != 0))
        goto LAB_01507f4c;
        FUN_015737d4(&local_68,iVar19 + 0xc,uVar17,&local_78,param_5,param_6);
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
        if (iVar6 != 0) {
          uVar22 = *(undefined4 *)(iVar16 + 4);
          iVar23 = *(int *)(iVar16 + 8);
          uVar9 = FUN_01676700(param_2 + 4,uVar22,iVar23);
          uVar21 = uVar9 >> 0x19;
          iVar16 = 0;
          while( true ) {
            uVar9 = uVar5 & uVar9;
            uVar20 = *(uint *)(iVar15 + uVar9);
            uVar10 = uVar20 ^ uVar21 * 0x1010101;
            for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                uVar10 = uVar10 - 1 & uVar10) {
              uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                              (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                       uVar5;
              iVar18 = iVar15 + -0x14 + uVar11 * -0x14;
              if ((iVar23 == *(int *)(iVar18 + 8)) &&
                 (iVar18 = thunk_FUN_01bed842(uVar22,*(undefined4 *)(iVar18 + 4),iVar23),
                 iVar18 == 0)) {
                iVar23 = iVar15 + uVar11 * -0x14;
                iVar16 = *(int *)(iVar23 + -4);
                if (iVar16 != 0) {
                  iVar16 = iVar16 << 2;
                  puVar26 = *(uint **)(iVar23 + -8);
                  do {
                    uVar21 = *puVar26;
                    if (uVar3 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar21,uVar3,&DAT_01cfa9b8);
                    }
                    FUN_015737d4(&local_68,uVar21 * 100 + iVar13 + 0x50,uVar17,&local_78,param_5,
                                 param_6);
                    if (uVar28 == local_ac) {
                      FUN_0155ab78(&local_ac);
                      local_bc = local_a8;
                    }
                    piVar8 = local_bc + uVar28 * 0x10;
                    uVar28 = uVar28 + 1;
                    iVar16 = iVar16 + -4;
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
                  } while (iVar16 != 0);
                }
                goto LAB_01508290;
              }
            }
            if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
            iVar16 = iVar16 + 4;
            uVar9 = uVar9 + iVar16;
          }
          goto LAB_01508290;
        }
        goto LAB_01507ee0;
      }
LAB_01507f58:
      if (uVar3 == 0) {
LAB_01508030:
        FUN_006666fc(&local_68,uVar22,iVar23);
        if (iVar12 == local_b8) {
          FUN_019abd3c(&local_b8);
          local_d8 = local_b4;
        }
        local_b0 = iVar12 + 1;
        piVar8 = (int *)(local_d8 + iVar12 * 0xc);
        *piVar8 = local_68;
        piVar8[1] = iStack_64;
        piVar8[2] = iStack_60;
        iVar12 = local_b0;
      }
      else {
        bVar25 = false;
        iVar23 = iVar13;
        do {
          iVar18 = iVar23;
          while( true ) {
            cVar2 = FUN_01501468(iVar18,*(undefined4 *)(iVar16 + 4),*(undefined4 *)(iVar16 + 8));
            iVar23 = iVar18 + 100;
            if (cVar2 != '\0') break;
            iVar18 = iVar23;
            if (iVar23 == iVar27) {
              if (bVar25) goto LAB_01508290;
              uVar22 = *(undefined4 *)(iVar16 + 4);
              iVar23 = *(int *)(iVar16 + 8);
              goto LAB_01508030;
            }
          }
          FUN_015737d4(&local_68,iVar18 + 0x50,uVar17,&local_78,param_5,param_6);
          if (uVar28 == local_ac) {
            FUN_0155ab78(&local_ac);
            local_bc = local_a8;
          }
          piVar8 = local_bc + uVar28 * 0x10;
          uVar28 = uVar28 + 1;
          bVar25 = true;
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
        } while (iVar23 != iVar27);
LAB_01508290:
      }
      goto LAB_01507ee0;
    }
    iVar4 = local_a4 << 6;
    piVar8 = local_a8;
    do {
      if (iVar4 == 0) {
        uVar17 = 0;
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = (int *)0x0;
        local_94 = local_a4;
        local_98 = local_a8;
        goto LAB_01508334;
      }
      piVar24 = piVar8 + 0xf;
      iVar4 = iVar4 + -0x40;
      piVar8 = piVar8 + 0x10;
    } while ((char)*piVar24 != '\0');
    local_94 = local_ac;
    local_a0 = 0;
    uVar17 = 4;
    local_8c = local_a4;
    local_90 = local_a8;
    local_88 = 0;
    local_98 = (int *)0x0;
    local_9c = 4;
LAB_01508334:
    local_50 = CONCAT44(uVar17,local_a0);
    if (iVar12 == 0) {
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
      uVar17 = 0;
      local_58 = local_a8;
    }
    else {
      uVar21 = param_2[0xd];
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
      }
      piVar24 = *(int **)(param_5 + 0xc);
      do {
        iVar12 = *piVar24;
        bVar25 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar25);
      *piVar24 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_015084dc;
      piVar8 = piVar8 + 2;
      uVar17 = *(undefined4 *)(param_5 + 0x10);
      uVar3 = (*(int **)(param_5 + 4))[1];
      if (uVar21 < uVar3) {
        uVar3 = 0;
      }
      else {
        iVar12 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar8,uVar3);
        if (iVar12 != 0) {
          uVar3 = 0;
        }
        piVar8 = (int *)((int)piVar8 + uVar3);
      }
      local_50 = FUN_016bc0ec(piVar8,uVar21 - uVar3);
      local_68 = 2;
      piVar8 = (int *)param_2[0xc];
      local_58 = piVar24;
    }
    do {
      iVar12 = *piVar8;
      bVar25 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar25);
    *piVar8 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_015084dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15084dc);
      (*pcVar1)();
    }
    iVar12 = param_2[0xd];
    local_5c = 3;
    local_54 = uVar17;
    uVar29 = FUN_01531840(param_4);
    local_78 = FUN_01595b0c(piVar8,iVar12,&local_68,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20),
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
LAB_01507f4c:
  iVar19 = iVar19 + 0x20;
  iVar18 = iVar18 + -0x20;
  if (iVar18 == 0) goto LAB_01507f58;
  goto LAB_01507f28;
}

