// FUN_00fd4e94 @ 00fd4e94 size=12848 calls_out=15 calls_in=1
// strings: explicit panic

/* WARNING: Type propagation algorithm not settling */

void FUN_00fd4e94(byte *param_1,uint param_2,byte *param_3,uint param_4,byte *param_5,byte *param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  byte *unaff_r7;
  uint uVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  bool bVar23;
  int local_4c;
  int local_40;
  byte *local_38;
  byte *local_28;
  
  pbVar10 = param_6;
  local_28 = (byte *)FUN_00fd4a84(param_1,param_2,param_4);
  if (pbVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&param_6,&local_28,0);
  }
  if (param_2 < 0x202) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0x201,param_2,&DAT_018815dc);
  }
  bVar2 = param_1[0x201];
  pbVar16 = param_5;
  switch(bVar2 & 7) {
  case 1:
    uVar18 = (uint)(char)param_1[0x200];
    if ((bVar2 & 8) == 0) {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          local_28 = pbVar10;
          if (param_4 != 0) {
            pbVar16 = param_5 + 7;
            iVar20 = 0;
            do {
              bVar2 = param_3[-iVar20];
              bVar7 = param_1[bVar2 >> 2];
              pbVar16[-7] = param_1[bVar2];
              bVar4 = param_1[bVar2 >> 4];
              param_5[iVar20 * -8 + 1] = param_1[bVar2 >> 1];
              bVar5 = param_1[bVar2 >> 5];
              iVar11 = iVar20 + -1;
              param_5[iVar20 * -8 + 2] = bVar7;
              bVar7 = param_1[bVar2 >> 6];
              bVar3 = param_1[bVar2 >> 7];
              bVar2 = param_1[bVar2 >> 3];
              param_5[iVar20 * -8 + 4] = bVar4;
              param_5[iVar20 * -8 + 3] = bVar2;
              param_5[iVar20 * -8 + 5] = bVar5;
              param_5[iVar20 * -8 + 6] = bVar7;
              *pbVar16 = bVar3;
              pbVar16 = pbVar16 + 8;
              iVar20 = iVar11;
            } while (-iVar11 != param_4);
          }
          pbVar16 = (byte *)(param_4 * 8);
          if (pbVar10 < (byte *)(param_4 << 3)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pbVar16,pbVar10,pbVar10,&DAT_0188150c);
          }
          if (pbVar10 == pbVar16) {
            return;
          }
          pbVar16 = param_5 + (int)pbVar16;
          uVar18 = (uint)*param_1;
          pbVar10 = pbVar10 + param_4 * -8;
          goto LAB_014b48c4;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar13 = param_5 + 7;
          pbVar22 = param_3;
          do {
            pbVar9 = pbVar13;
            iVar11 = 0;
            do {
              bVar2 = pbVar22[-iVar11];
              bVar7 = param_1[bVar2 >> 2];
              pbVar9[-7] = param_1[bVar2];
              bVar4 = param_1[bVar2 >> 4];
              pbVar16[iVar11 * -8 + 1] = param_1[bVar2 >> 1];
              bVar5 = param_1[bVar2 >> 5];
              unaff_r7 = (byte *)(uint)bVar5;
              iVar12 = iVar11 + -1;
              pbVar16[iVar11 * -8 + 2] = bVar7;
              bVar7 = param_1[bVar2 >> 6];
              bVar3 = param_1[bVar2 >> 7];
              bVar2 = param_1[bVar2 >> 3];
              pbVar16[iVar11 * -8 + 4] = bVar4;
              pbVar16[iVar11 * -8 + 3] = bVar2;
              pbVar16[iVar11 * -8 + 5] = bVar5;
              pbVar16[iVar11 * -8 + 6] = bVar7;
              *pbVar9 = bVar3;
              pbVar9 = pbVar9 + 8;
              iVar11 = iVar12;
            } while (-iVar12 != uVar18);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar22 = pbVar22 + uVar18;
            pbVar16 = pbVar16 + iVar20;
            pbVar13 = pbVar13 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        iVar20 = uVar14 * iVar20;
        iVar11 = param_4 - uVar18;
        pbVar16 = (byte *)(iVar20 + iVar11 * 8);
        bVar23 = pbVar16 < (byte *)(iVar11 * 8);
        if (!bVar23) {
          unaff_r7 = pbVar10;
        }
        if (bVar23 || unaff_r7 < pbVar16) goto LAB_00fd74bc;
        iVar12 = 0;
        do {
          bVar2 = param_3[iVar12 + uVar18];
          bVar7 = param_1[bVar2 >> 4];
          bVar4 = param_1[bVar2 >> 3];
          bVar5 = param_1[bVar2 >> 1];
          pbVar22 = param_5 + iVar12 * 8 + iVar20;
          *pbVar22 = param_1[bVar2];
          bVar3 = param_1[bVar2 >> 5];
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + -1;
          pbVar22[1] = bVar5;
          bVar5 = param_1[bVar2 >> 6];
          bVar6 = param_1[bVar2 >> 7];
          bVar2 = param_1[bVar2 >> 2];
          pbVar22[3] = bVar4;
          pbVar22[2] = bVar2;
          pbVar22[4] = bVar7;
          pbVar22[5] = bVar3;
          pbVar22[6] = bVar5;
          pbVar22[7] = bVar6;
        } while (iVar11 != 0);
      }
      else {
        if (param_2 < 0x204) {
          pbVar22 = (byte *)(param_4 << 3);
          if (pbVar10 < (byte *)(param_4 << 3)) goto LAB_00fd7a84;
          if (param_4 != 0) {
            pbVar22 = param_5 + 7;
            iVar20 = 0;
            do {
              bVar2 = param_3[-iVar20];
              bVar7 = param_1[bVar2 >> 2];
              pbVar22[-7] = param_1[bVar2];
              bVar4 = param_1[bVar2 >> 4];
              param_5[iVar20 * -8 + 1] = param_1[bVar2 >> 1];
              bVar5 = param_1[bVar2 >> 5];
              iVar11 = iVar20 + -1;
              param_5[iVar20 * -8 + 2] = bVar7;
              bVar7 = param_1[bVar2 >> 6];
              bVar3 = param_1[bVar2 >> 7];
              bVar2 = param_1[bVar2 >> 3];
              param_5[iVar20 * -8 + 4] = bVar4;
              param_5[iVar20 * -8 + 3] = bVar2;
              param_5[iVar20 * -8 + 5] = bVar5;
              param_5[iVar20 * -8 + 6] = bVar7;
              *pbVar22 = bVar3;
              pbVar22 = pbVar22 + 8;
              iVar20 = iVar11;
            } while (-iVar11 != param_4);
            goto LAB_00fd53a4;
          }
          goto joined_r0x00fd53bc;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar13 = param_5 + 7;
          pbVar22 = param_3;
          do {
            pbVar9 = pbVar13;
            iVar11 = 0;
            do {
              bVar2 = pbVar22[-iVar11];
              bVar7 = param_1[bVar2 >> 2];
              pbVar9[-7] = param_1[bVar2];
              bVar4 = param_1[bVar2 >> 4];
              pbVar16[iVar11 * -8 + 1] = param_1[bVar2 >> 1];
              bVar5 = param_1[bVar2 >> 5];
              iVar12 = iVar11 + -1;
              pbVar16[iVar11 * -8 + 2] = bVar7;
              bVar7 = param_1[bVar2 >> 6];
              bVar3 = param_1[bVar2 >> 7];
              bVar2 = param_1[bVar2 >> 3];
              pbVar16[iVar11 * -8 + 4] = bVar4;
              pbVar16[iVar11 * -8 + 3] = bVar2;
              pbVar16[iVar11 * -8 + 5] = bVar5;
              pbVar16[iVar11 * -8 + 6] = bVar7;
              *pbVar9 = bVar3;
              pbVar9 = pbVar9 + 8;
              iVar11 = iVar12;
            } while (-iVar12 != uVar18);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar22 = pbVar22 + uVar18;
            pbVar16 = pbVar16 + iVar20;
            pbVar13 = pbVar13 + iVar20;
            unaff_r7 = param_1;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        iVar20 = uVar14 * iVar20;
        iVar11 = param_4 - uVar18;
        pbVar16 = (byte *)(iVar20 + iVar11 * 8);
        bVar23 = pbVar16 < (byte *)(iVar11 * 8);
        if (!bVar23) {
          unaff_r7 = pbVar10;
        }
        if (bVar23 || unaff_r7 < pbVar16) goto LAB_00fd74bc;
        iVar12 = 0;
        do {
          bVar2 = param_3[iVar12 + uVar18];
          bVar7 = param_1[bVar2 >> 4];
          bVar4 = param_1[bVar2 >> 3];
          bVar5 = param_1[bVar2 >> 1];
          pbVar22 = param_5 + iVar12 * 8 + iVar20;
          *pbVar22 = param_1[bVar2];
          bVar3 = param_1[bVar2 >> 5];
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + -1;
          pbVar22[1] = bVar5;
          bVar5 = param_1[bVar2 >> 6];
          bVar6 = param_1[bVar2 >> 7];
          bVar2 = param_1[bVar2 >> 2];
          pbVar22[3] = bVar4;
          pbVar22[2] = bVar2;
          pbVar22[4] = bVar7;
          pbVar22[5] = bVar3;
          pbVar22[6] = bVar5;
          pbVar22[7] = bVar6;
        } while (iVar11 != 0);
      }
    }
    else if ((int)uVar18 < 0) {
      if (param_2 < 0x204) {
        local_28 = pbVar10;
        if (param_4 != 0) {
          pbVar16 = param_5 + 7;
          iVar20 = 0;
          do {
            bVar2 = param_3[-iVar20];
            bVar7 = param_1[bVar2 >> 1];
            pbVar16[-7] = param_1[bVar2 >> 7];
            bVar4 = param_1[bVar2 >> 5];
            param_5[iVar20 * -8 + 1] = param_1[bVar2 >> 6];
            bVar5 = param_1[bVar2 >> 3];
            iVar11 = iVar20 + -1;
            param_5[iVar20 * -8 + 2] = bVar4;
            bVar4 = param_1[bVar2 >> 2];
            bVar3 = param_1[bVar2];
            bVar2 = param_1[bVar2 >> 4];
            param_5[iVar20 * -8 + 4] = bVar5;
            param_5[iVar20 * -8 + 3] = bVar2;
            param_5[iVar20 * -8 + 5] = bVar4;
            param_5[iVar20 * -8 + 6] = bVar7;
            *pbVar16 = bVar3;
            pbVar16 = pbVar16 + 8;
            iVar20 = iVar11;
          } while (-iVar11 != param_4);
        }
        pbVar16 = (byte *)(param_4 * 8);
        if (pbVar10 < (byte *)(param_4 << 3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(pbVar16,pbVar10,pbVar10,&DAT_0188150c);
        }
        if (pbVar10 == pbVar16) {
          return;
        }
        pbVar16 = param_5 + (int)pbVar16;
        uVar18 = (uint)*param_1;
        pbVar10 = pbVar10 + param_4 * -8;
        goto LAB_014b48c4;
      }
      bVar2 = param_1[0x202];
      if (bVar2 < 8) goto LAB_00fd7cf0;
      uVar21 = bVar2 & 0xf8;
      uVar18 = (uint)(bVar2 >> 3);
      iVar20 = uVar21 + (param_2 - 0x203);
      uVar14 = FUN_018462e8(param_4,uVar18);
      if (uVar18 <= param_4) {
        uVar19 = 0;
        pbVar13 = param_5 + 7;
        pbVar22 = param_3;
        do {
          pbVar9 = pbVar13;
          iVar11 = 0;
          do {
            bVar2 = pbVar22[-iVar11];
            bVar7 = param_1[bVar2 >> 6];
            pbVar9[-7] = param_1[bVar2 >> 7];
            bVar4 = param_1[bVar2 >> 5];
            bVar5 = param_1[bVar2 >> 1];
            pbVar16[iVar11 * -8 + 1] = bVar7;
            bVar7 = param_1[bVar2 >> 3];
            iVar12 = iVar11 + -1;
            pbVar16[iVar11 * -8 + 2] = bVar4;
            bVar4 = param_1[bVar2 >> 2];
            unaff_r7 = (byte *)(uint)bVar4;
            bVar3 = param_1[bVar2];
            bVar2 = param_1[bVar2 >> 4];
            pbVar16[iVar11 * -8 + 4] = bVar7;
            pbVar16[iVar11 * -8 + 3] = bVar2;
            pbVar16[iVar11 * -8 + 5] = bVar4;
            pbVar16[iVar11 * -8 + 6] = bVar5;
            *pbVar9 = bVar3;
            pbVar9 = pbVar9 + 8;
            iVar11 = iVar12;
          } while (-iVar12 != uVar18);
          FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
          uVar19 = uVar19 + 1;
          pbVar22 = pbVar22 + uVar18;
          pbVar16 = pbVar16 + iVar20;
          pbVar13 = pbVar13 + iVar20;
        } while (uVar19 < uVar14);
      }
      uVar18 = uVar14 * uVar18;
      if (param_4 <= uVar18) {
        return;
      }
      iVar20 = uVar14 * iVar20;
      iVar11 = param_4 - uVar18;
      pbVar16 = (byte *)(iVar20 + iVar11 * 8);
      bVar23 = (byte *)(iVar11 * 8) <= pbVar16;
      if (bVar23) {
        unaff_r7 = pbVar10;
      }
      if (!bVar23 || unaff_r7 < pbVar16) goto LAB_00fd74bc;
      iVar12 = 0;
      do {
        bVar2 = param_3[iVar12 + uVar18];
        bVar7 = param_1[bVar2 >> 4];
        bVar4 = param_1[bVar2 >> 6];
        bVar5 = param_1[bVar2 >> 1];
        pbVar22 = param_5 + iVar12 * 8 + iVar20;
        *pbVar22 = param_1[bVar2 >> 7];
        bVar3 = param_1[bVar2 >> 3];
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + -1;
        pbVar22[1] = bVar4;
        bVar4 = param_1[bVar2 >> 2];
        bVar6 = param_1[bVar2];
        bVar2 = param_1[bVar2 >> 5];
        pbVar22[3] = bVar7;
        pbVar22[2] = bVar2;
        pbVar22[4] = bVar3;
        pbVar22[5] = bVar4;
        pbVar22[6] = bVar5;
        pbVar22[7] = bVar6;
      } while (iVar11 != 0);
    }
    else {
      if (param_2 < 0x204) {
        pbVar22 = (byte *)(param_4 << 3);
        if (pbVar10 < (byte *)(param_4 << 3)) {
LAB_00fd7a84:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,pbVar22,pbVar10,&DAT_0188152c);
        }
        if (param_4 != 0) {
          pbVar22 = param_5 + 7;
          iVar20 = 0;
          do {
            bVar2 = param_3[-iVar20];
            bVar7 = param_1[bVar2 >> 6];
            pbVar22[-7] = param_1[bVar2 >> 7];
            bVar4 = param_1[bVar2 >> 5];
            bVar5 = param_1[bVar2 >> 1];
            param_5[iVar20 * -8 + 1] = bVar7;
            bVar7 = param_1[bVar2 >> 3];
            iVar11 = iVar20 + -1;
            param_5[iVar20 * -8 + 2] = bVar4;
            bVar4 = param_1[bVar2 >> 2];
            bVar3 = param_1[bVar2];
            bVar2 = param_1[bVar2 >> 4];
            param_5[iVar20 * -8 + 6] = bVar5;
            param_5[iVar20 * -8 + 3] = bVar2;
            param_5[iVar20 * -8 + 4] = bVar7;
            param_5[iVar20 * -8 + 5] = bVar4;
            *pbVar22 = bVar3;
            pbVar22 = pbVar22 + 8;
            iVar20 = iVar11;
          } while (-iVar11 != param_4);
LAB_00fd53a4:
          local_38 = (byte *)(param_4 * 8);
          if (local_38 != (byte *)0x0) {
            if (pbVar10 <= local_38) {
              return;
            }
            pbVar16 = param_5 + (int)local_38;
            pbVar10 = pbVar10 + ((int)param_5 - (int)pbVar16);
            goto LAB_014b48c4;
          }
        }
joined_r0x00fd53bc:
        if (pbVar10 == (byte *)0x0) {
          return;
        }
        goto LAB_014b48c4;
      }
      bVar2 = param_1[0x202];
      if (bVar2 < 8) goto LAB_00fd7cf0;
      uVar21 = bVar2 & 0xf8;
      uVar18 = (uint)(bVar2 >> 3);
      iVar20 = uVar21 + (param_2 - 0x203);
      uVar14 = FUN_018462e8(param_4,uVar18);
      if (uVar18 <= param_4) {
        uVar19 = 0;
        pbVar13 = param_5 + 7;
        pbVar22 = param_3;
        do {
          pbVar9 = pbVar13;
          iVar11 = 0;
          do {
            bVar2 = pbVar22[-iVar11];
            bVar7 = param_1[bVar2 >> 6];
            pbVar9[-7] = param_1[bVar2 >> 7];
            bVar4 = param_1[bVar2 >> 5];
            bVar5 = param_1[bVar2 >> 1];
            pbVar16[iVar11 * -8 + 1] = bVar7;
            bVar7 = param_1[bVar2 >> 3];
            iVar12 = iVar11 + -1;
            pbVar16[iVar11 * -8 + 2] = bVar4;
            bVar4 = param_1[bVar2 >> 2];
            unaff_r7 = (byte *)(uint)bVar4;
            bVar3 = param_1[bVar2];
            bVar2 = param_1[bVar2 >> 4];
            pbVar16[iVar11 * -8 + 4] = bVar7;
            pbVar16[iVar11 * -8 + 3] = bVar2;
            pbVar16[iVar11 * -8 + 5] = bVar4;
            pbVar16[iVar11 * -8 + 6] = bVar5;
            *pbVar9 = bVar3;
            pbVar9 = pbVar9 + 8;
            iVar11 = iVar12;
          } while (-iVar12 != uVar18);
          FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
          uVar19 = uVar19 + 1;
          pbVar22 = pbVar22 + uVar18;
          pbVar16 = pbVar16 + iVar20;
          pbVar13 = pbVar13 + iVar20;
        } while (uVar19 < uVar14);
      }
      uVar18 = uVar14 * uVar18;
      if (param_4 <= uVar18) {
        return;
      }
      iVar20 = uVar14 * iVar20;
      iVar11 = param_4 - uVar18;
      pbVar16 = (byte *)(iVar20 + iVar11 * 8);
      bVar23 = pbVar16 < (byte *)(iVar11 * 8);
      if (!bVar23) {
        unaff_r7 = pbVar10;
      }
      if (bVar23 || unaff_r7 < pbVar16) {
LAB_00fd74bc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(iVar20,pbVar16,pbVar10,&DAT_018815bc);
      }
      iVar12 = 0;
      do {
        bVar2 = param_3[iVar12 + uVar18];
        bVar7 = param_1[bVar2 >> 4];
        bVar4 = param_1[bVar2 >> 6];
        bVar5 = param_1[bVar2 >> 1];
        pbVar22 = param_5 + iVar12 * 8 + iVar20;
        *pbVar22 = param_1[bVar2 >> 7];
        bVar3 = param_1[bVar2 >> 3];
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + -1;
        pbVar22[1] = bVar4;
        bVar4 = param_1[bVar2 >> 2];
        bVar6 = param_1[bVar2];
        bVar2 = param_1[bVar2 >> 5];
        pbVar22[3] = bVar7;
        pbVar22[2] = bVar2;
        pbVar22[4] = bVar3;
        pbVar22[5] = bVar4;
        pbVar22[6] = bVar5;
        pbVar22[7] = bVar6;
      } while (iVar11 != 0);
    }
    local_4c = param_2 - 0x203;
    iVar11 = (int)pbVar10 - (int)pbVar16;
    if (iVar11 != local_4c) goto LAB_00fd7acc;
    param_5 = param_5 + (int)pbVar16;
    goto LAB_014b4884;
  case 2:
    uVar18 = (uint)(char)param_1[0x200];
    if ((bVar2 & 8) == 0) {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          if (param_4 != 0) {
            pbVar16 = param_5 + 1;
            uVar18 = param_4;
            do {
              bVar2 = *param_3;
              uVar18 = uVar18 - 1;
              bVar7 = param_1[bVar2 >> 4];
              bVar4 = param_1[bVar2 >> 6];
              bVar5 = param_1[bVar2 >> 2];
              pbVar16[-1] = param_1[bVar2];
              *pbVar16 = bVar5;
              pbVar16[1] = bVar7;
              pbVar16[2] = bVar4;
              pbVar16 = pbVar16 + 4;
              param_3 = param_3 + 1;
            } while (uVar18 != 0);
          }
          pbVar16 = (byte *)(param_4 * 4);
          if (pbVar10 < (byte *)(param_4 << 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pbVar16,pbVar10,pbVar10,&DAT_0188150c);
          }
          if (pbVar10 == pbVar16) {
            return;
          }
          uVar18 = (uint)*param_1;
          pbVar10 = pbVar10 + param_4 * -4;
          pbVar16 = param_5 + (int)pbVar16;
          goto LAB_014b48c4;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 4) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfc;
        uVar18 = (uint)(bVar2 >> 2);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              bVar2 = *pbVar13;
              uVar17 = uVar17 - 1;
              bVar7 = param_1[bVar2 >> 4];
              bVar4 = param_1[bVar2 >> 6];
              bVar5 = param_1[bVar2 >> 2];
              pbVar9[-1] = param_1[bVar2];
              *pbVar9 = bVar5;
              pbVar9[1] = bVar7;
              pbVar9[2] = bVar4;
              pbVar9 = pbVar9 + 4;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            pbVar16 = pbVar16 + uVar18;
            uVar19 = uVar19 + 1;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar14 = uVar14 * iVar20;
        iVar20 = param_4 - uVar18;
        local_38 = (byte *)(iVar20 * 4 & 0x7ffffffc);
        pbVar16 = (byte *)((int)local_38 + uVar14);
        if ((CARRY4((uint)local_38,uVar14)) || (pbVar10 < pbVar16)) goto LAB_00fd6544;
        iVar12 = 0;
        iVar11 = iVar20;
        do {
          bVar2 = param_3[iVar12 + uVar18];
          iVar11 = iVar11 + -1;
          bVar7 = param_1[bVar2 >> 4];
          bVar4 = param_1[bVar2 >> 6];
          bVar5 = param_1[bVar2 >> 2];
          pbVar22 = param_5 + iVar12 * 4 + uVar14;
          *pbVar22 = param_1[bVar2];
          iVar12 = iVar12 + 1;
          pbVar22[1] = bVar5;
          pbVar22[2] = bVar7;
          pbVar22[3] = bVar4;
        } while (iVar11 != 0);
        goto LAB_00fd764c;
      }
      if (0x203 < param_2) {
        bVar2 = param_1[0x202];
        if (bVar2 < 4) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfc;
        uVar18 = (uint)(bVar2 >> 2);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              bVar2 = *pbVar13;
              uVar17 = uVar17 - 1;
              bVar7 = param_1[bVar2 >> 4];
              bVar4 = param_1[bVar2 >> 6];
              bVar5 = param_1[bVar2 >> 2];
              pbVar9[-1] = param_1[bVar2];
              *pbVar9 = bVar5;
              pbVar9[1] = bVar7;
              pbVar9[2] = bVar4;
              pbVar9 = pbVar9 + 4;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            pbVar16 = pbVar16 + uVar18;
            uVar19 = uVar19 + 1;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar14 = uVar14 * iVar20;
        iVar20 = param_4 - uVar18;
        pbVar16 = (byte *)(uVar14 + iVar20 * 4);
        if (pbVar16 < (byte *)(iVar20 * 4) || pbVar10 < pbVar16) goto LAB_00fd6544;
        iVar12 = 0;
        iVar11 = iVar20;
        do {
          bVar2 = param_3[iVar12 + uVar18];
          iVar11 = iVar11 + -1;
          bVar7 = param_1[bVar2 >> 4];
          bVar4 = param_1[bVar2 >> 6];
          bVar5 = param_1[bVar2 >> 2];
          pbVar22 = param_5 + iVar12 * 4 + uVar14;
          *pbVar22 = param_1[bVar2];
          iVar12 = iVar12 + 1;
          pbVar22[1] = bVar5;
          pbVar22[2] = bVar7;
          pbVar22[3] = bVar4;
        } while (iVar11 != 0);
        goto LAB_00fd794c;
      }
      pbVar22 = (byte *)((param_4 & 0x1fffffff) * 4);
      if (pbVar10 < pbVar22) goto LAB_00fd7a84;
      pbVar13 = (byte *)(param_4 * 4);
      if (param_4 != 0) {
        pbVar9 = param_5 + 1;
        uVar14 = param_4;
        do {
          bVar2 = *param_3;
          uVar14 = uVar14 - 1;
          bVar7 = param_1[bVar2 >> 4];
          bVar4 = param_1[bVar2 >> 6];
          bVar5 = param_1[bVar2 >> 2];
          pbVar9[-1] = param_1[bVar2];
          *pbVar9 = bVar5;
          pbVar9[1] = bVar7;
          pbVar9[2] = bVar4;
          pbVar9 = pbVar9 + 4;
          param_3 = param_3 + 1;
        } while (uVar14 != 0);
        if (pbVar22 != pbVar13) goto LAB_00fd7adc;
        goto LAB_00fd542c;
      }
LAB_00fd6894:
      pbVar13 = (byte *)(param_4 * 4);
      if (pbVar22 != pbVar13) goto LAB_00fd7adc;
joined_r0x00fd68a8:
      if (pbVar10 == (byte *)0x0) {
        return;
      }
    }
    else {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          if (param_4 != 0) {
            pbVar16 = param_5 + 1;
            uVar18 = param_4;
            do {
              bVar2 = *param_3;
              uVar18 = uVar18 - 1;
              bVar7 = param_1[bVar2 >> 2];
              bVar4 = param_1[bVar2];
              bVar5 = param_1[bVar2 >> 4];
              pbVar16[-1] = param_1[bVar2 >> 6];
              *pbVar16 = bVar5;
              pbVar16[1] = bVar7;
              pbVar16[2] = bVar4;
              pbVar16 = pbVar16 + 4;
              param_3 = param_3 + 1;
            } while (uVar18 != 0);
          }
          pbVar16 = (byte *)(param_4 * 4);
          if (pbVar10 < (byte *)(param_4 << 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pbVar16,pbVar10,pbVar10,&DAT_0188150c);
          }
          if (pbVar10 == pbVar16) {
            return;
          }
          uVar18 = (uint)*param_1;
          pbVar10 = pbVar10 + param_4 * -4;
          pbVar16 = param_5 + (int)pbVar16;
          goto LAB_014b48c4;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 4) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfc;
        uVar18 = (uint)(bVar2 >> 2);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              bVar2 = *pbVar13;
              uVar17 = uVar17 - 1;
              bVar7 = param_1[bVar2 >> 2];
              bVar4 = param_1[bVar2];
              bVar5 = param_1[bVar2 >> 4];
              pbVar9[-1] = param_1[bVar2 >> 6];
              *pbVar9 = bVar5;
              pbVar9[1] = bVar7;
              pbVar9[2] = bVar4;
              pbVar9 = pbVar9 + 4;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            pbVar16 = pbVar16 + uVar18;
            uVar19 = uVar19 + 1;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar14 = uVar14 * iVar20;
        iVar20 = param_4 - uVar18;
        local_38 = (byte *)(iVar20 * 4 & 0x7ffffffc);
        pbVar16 = (byte *)((int)local_38 + uVar14);
        if ((CARRY4((uint)local_38,uVar14)) || (pbVar10 < pbVar16)) goto LAB_00fd6544;
        iVar12 = 0;
        iVar11 = iVar20;
        do {
          bVar2 = param_3[iVar12 + uVar18];
          iVar11 = iVar11 + -1;
          bVar7 = param_1[bVar2 >> 2];
          bVar4 = param_1[bVar2];
          bVar5 = param_1[bVar2 >> 4];
          pbVar22 = param_5 + iVar12 * 4 + uVar14;
          *pbVar22 = param_1[bVar2 >> 6];
          iVar12 = iVar12 + 1;
          pbVar22[1] = bVar5;
          pbVar22[2] = bVar7;
          pbVar22[3] = bVar4;
        } while (iVar11 != 0);
LAB_00fd764c:
        local_40 = param_2 - 0x203;
        uVar18 = iVar20 * 4;
        if (local_38 != (byte *)uVar18) {
LAB_00fd7b68:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar18,local_38,local_38,&DAT_0188150c);
        }
        iVar11 = (int)pbVar10 - (int)pbVar16;
        if (iVar11 != local_40) goto LAB_00fd7acc;
        param_5 = param_5 + (int)pbVar16;
        goto LAB_014b4884;
      }
      if (0x203 < param_2) {
        bVar2 = param_1[0x202];
        if (bVar2 < 4) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfc;
        uVar18 = (uint)(bVar2 >> 2);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              bVar2 = *pbVar13;
              uVar17 = uVar17 - 1;
              bVar7 = param_1[bVar2 >> 2];
              bVar4 = param_1[bVar2];
              bVar5 = param_1[bVar2 >> 4];
              pbVar9[-1] = param_1[bVar2 >> 6];
              *pbVar9 = bVar5;
              pbVar9[1] = bVar7;
              pbVar9[2] = bVar4;
              pbVar9 = pbVar9 + 4;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            pbVar16 = pbVar16 + uVar18;
            uVar19 = uVar19 + 1;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar14 = uVar14 * iVar20;
        iVar20 = param_4 - uVar18;
        pbVar16 = (byte *)(uVar14 + iVar20 * 4);
        if (pbVar16 < (byte *)(iVar20 * 4) || pbVar10 < pbVar16) {
LAB_00fd6544:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar14,pbVar16,pbVar10,&DAT_018815bc);
        }
        iVar12 = 0;
        iVar11 = iVar20;
        do {
          bVar2 = param_3[iVar12 + uVar18];
          iVar11 = iVar11 + -1;
          bVar7 = param_1[bVar2 >> 2];
          bVar4 = param_1[bVar2];
          bVar5 = param_1[bVar2 >> 4];
          pbVar22 = param_5 + iVar12 * 4 + uVar14;
          *pbVar22 = param_1[bVar2 >> 6];
          iVar12 = iVar12 + 1;
          pbVar22[1] = bVar5;
          pbVar22[2] = bVar7;
          pbVar22[3] = bVar4;
        } while (iVar11 != 0);
LAB_00fd794c:
        local_40 = param_2 - 0x203;
        uVar18 = iVar20 * 4;
        local_38 = (byte *)(uVar18 & 0x7ffffffc);
        if (local_38 != (byte *)uVar18) goto LAB_00fd7b68;
        iVar11 = (int)pbVar10 - (int)pbVar16;
        if (iVar11 != local_40) goto LAB_00fd7acc;
        param_5 = param_5 + (int)pbVar16;
        goto LAB_014b4884;
      }
      pbVar22 = (byte *)((param_4 & 0x1fffffff) * 4);
      if (pbVar10 < pbVar22) goto LAB_00fd7a84;
      pbVar13 = (byte *)(param_4 * 4);
      if (param_4 == 0) goto LAB_00fd6894;
      pbVar9 = param_5 + 1;
      uVar14 = param_4;
      do {
        bVar2 = *param_3;
        uVar14 = uVar14 - 1;
        bVar7 = param_1[bVar2 >> 2];
        bVar4 = param_1[bVar2];
        bVar5 = param_1[bVar2 >> 4];
        pbVar9[-1] = param_1[bVar2 >> 6];
        *pbVar9 = bVar5;
        pbVar9[1] = bVar7;
        pbVar9[2] = bVar4;
        pbVar9 = pbVar9 + 4;
        param_3 = param_3 + 1;
      } while (uVar14 != 0);
      if (pbVar22 != pbVar13) goto LAB_00fd7adc;
LAB_00fd542c:
      pbVar22 = (byte *)(param_4 * 4);
      if (pbVar22 == (byte *)0x0) goto joined_r0x00fd68a8;
      if (pbVar10 <= pbVar22) {
        return;
      }
      pbVar16 = param_5 + (int)pbVar22;
    }
    pbVar10 = pbVar10 + ((int)param_5 - (int)pbVar16);
LAB_014b48c4:
    FUN_016dd606(pbVar16,uVar18,pbVar10);
    return;
  case 3:
    bVar7 = param_1[0x200];
    uVar18 = (uint)(char)bVar7;
    if ((bVar2 & 8) != 0) {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          FUN_00fd8218(param_1,param_3,param_4,param_5);
          return;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3) * 3;
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar16 = param_3;
          pbVar22 = param_5;
          do {
            FUN_00fd8218(param_1,pbVar16,uVar18,pbVar22,uVar21);
            FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar21 = (param_4 - uVar18) * 8 | 2;
        iVar20 = uVar14 * iVar20;
        pbVar16 = (byte *)(iVar20 + uVar21 / 3);
        if (pbVar16 < (byte *)(uVar21 / 3) || pbVar10 < pbVar16) goto LAB_00fd7878;
        FUN_00fd8218(param_1,param_3 + uVar18,param_4 - uVar18,param_5 + iVar20,uVar21 / 3);
        goto LAB_00fd7a40;
      }
      if (param_2 < 0x204) {
        uVar14 = param_4 << 3 | 2;
        pbVar22 = (byte *)(uVar14 / 3);
        if (pbVar10 < (byte *)(uVar14 / 3)) goto LAB_00fd7a9c;
        FUN_00fd8218(param_1,param_3,param_4,param_5,pbVar22);
        goto LAB_00fd525c;
      }
      bVar2 = param_1[0x202];
      if (bVar2 < 8) goto LAB_00fd7cf0;
      uVar21 = bVar2 & 0xf8;
      iVar20 = param_2 - 0x203;
      uVar18 = (uint)(bVar2 >> 3) * 3;
      uVar14 = FUN_018462e8(param_4,uVar18);
      if (uVar18 <= param_4) {
        uVar19 = 0;
        pbVar16 = param_3;
        pbVar22 = param_5;
        do {
          FUN_00fd8218(param_1,pbVar16,uVar18,pbVar22,uVar21);
          FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,iVar20);
          uVar19 = uVar19 + 1;
          pbVar16 = pbVar16 + uVar18;
          pbVar22 = pbVar22 + uVar21 + iVar20;
        } while (uVar19 < uVar14);
      }
      uVar18 = uVar14 * uVar18;
      if (param_4 <= uVar18) {
        return;
      }
      param_4 = param_4 - uVar18;
      uVar8 = (ulonglong)(param_4 + 2) * 0xaaaaaaab;
      uVar14 = uVar14 * (uVar21 + iVar20);
      uVar21 = ((uint)(uVar8 >> 0x20) & 0x3ffffffe) * 4;
      pbVar16 = (byte *)(uVar21 + uVar14);
      if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar14,pbVar16,pbVar10,&DAT_018815bc);
      }
      uVar17 = param_4 * 8 | 2;
      uVar19 = uVar17 / 3;
      if (uVar21 < uVar17 / 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar19,uVar21,&DAT_0188152c);
      }
      pbVar22 = param_5 + uVar14;
      FUN_00fd8218(param_1,param_3 + uVar18,param_4,pbVar22,uVar19);
      if ((param_4 & 0x1fffffff) == 0) {
        pbVar13 = pbVar22;
        if ((uVar8 & 0x3ffffffe00000000) != 0) goto LAB_00fd5c4c;
      }
      else if (uVar19 < uVar21) {
        pbVar13 = pbVar22 + uVar19;
LAB_00fd5c4c:
        do {
          pbVar9 = pbVar13 + 1;
          *pbVar13 = bVar7;
          pbVar13 = pbVar9;
        } while (pbVar9 != pbVar22 + uVar21);
      }
      if ((int)pbVar10 - (int)pbVar16 != iVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7204((int)pbVar10 - (int)pbVar16,iVar20,&DAT_018815ac);
      }
      param_5 = param_5 + (int)pbVar16;
      goto LAB_014b4884;
    }
    if (-1 < (int)uVar18) {
      if (param_2 < 0x204) {
        uVar14 = param_4 << 3 | 2;
        pbVar22 = (byte *)(uVar14 / 3);
        if (pbVar10 < (byte *)(uVar14 / 3)) {
LAB_00fd7a9c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,pbVar22,pbVar10,&DAT_0188152c);
        }
        FUN_00fd805c(param_1,param_3,param_4,param_5,pbVar22);
        goto LAB_00fd525c;
      }
      bVar2 = param_1[0x202];
      if (bVar2 < 8) goto LAB_00fd7cf0;
      uVar21 = bVar2 & 0xf8;
      iVar20 = param_2 - 0x203;
      uVar18 = (uint)(bVar2 >> 3) * 3;
      uVar14 = FUN_018462e8(param_4,uVar18);
      if (uVar18 <= param_4) {
        uVar19 = 0;
        pbVar16 = param_3;
        pbVar22 = param_5;
        do {
          FUN_00fd805c(param_1,pbVar16,uVar18,pbVar22,uVar21);
          FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,iVar20);
          uVar19 = uVar19 + 1;
          pbVar16 = pbVar16 + uVar18;
          pbVar22 = pbVar22 + uVar21 + iVar20;
        } while (uVar19 < uVar14);
      }
      uVar18 = uVar14 * uVar18;
      if (param_4 <= uVar18) {
        return;
      }
      param_4 = param_4 - uVar18;
      uVar8 = (ulonglong)(param_4 + 2) * 0xaaaaaaab;
      uVar14 = uVar14 * (uVar21 + iVar20);
      uVar21 = ((uint)(uVar8 >> 0x20) & 0x3ffffffe) * 4;
      pbVar16 = (byte *)(uVar21 + uVar14);
      if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar14,pbVar16,pbVar10,&DAT_018815bc);
      }
      uVar17 = param_4 * 8 | 2;
      uVar19 = uVar17 / 3;
      if (uVar21 < uVar17 / 3) {
LAB_00fd7aec:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar19,uVar21,&DAT_0188152c);
      }
      pbVar22 = param_5 + uVar14;
      FUN_00fd805c(param_1,param_3 + uVar18,param_4,pbVar22,uVar19);
      if ((param_4 & 0x1fffffff) == 0) {
        pbVar13 = pbVar22;
        if ((uVar8 & 0x3ffffffe00000000) != 0) goto LAB_00fd5ac8;
      }
      else if (uVar19 < uVar21) {
        pbVar13 = pbVar22 + uVar19;
LAB_00fd5ac8:
        do {
          pbVar9 = pbVar13 + 1;
          *pbVar13 = bVar7;
          pbVar13 = pbVar9;
        } while (pbVar9 != pbVar22 + uVar21);
      }
      if ((int)pbVar10 - (int)pbVar16 != iVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7204((int)pbVar10 - (int)pbVar16,iVar20,&DAT_018815ac);
      }
      param_5 = param_5 + (int)pbVar16;
      goto LAB_014b4884;
    }
    if (param_2 < 0x204) {
      FUN_00fd805c(param_1,param_3,param_4,param_5);
      return;
    }
    bVar2 = param_1[0x202];
    if (bVar2 < 8) {
LAB_00fd7cf0:
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0188159c);
    }
    uVar21 = bVar2 & 0xf8;
    iVar11 = param_2 - 0x203;
    uVar18 = (uint)(bVar2 >> 3) * 3;
    uVar14 = FUN_018462e8(param_4,uVar18);
    if (uVar18 <= param_4) {
      uVar19 = 0;
      pbVar22 = param_3;
      do {
        FUN_00fd805c(param_1,pbVar22,uVar18,pbVar16,uVar21);
        FUN_016dd1aa(pbVar16 + uVar21,param_1 + 0x203,iVar11);
        uVar19 = uVar19 + 1;
        pbVar22 = pbVar22 + uVar18;
        pbVar16 = pbVar16 + uVar21 + iVar11;
      } while (uVar19 < uVar14);
    }
    uVar18 = uVar14 * uVar18;
    if (param_4 <= uVar18) {
      return;
    }
    uVar19 = (param_4 - uVar18) * 8 | 2;
    iVar20 = uVar14 * (uVar21 + iVar11);
    pbVar16 = (byte *)(iVar20 + uVar19 / 3);
    if (pbVar16 < (byte *)(uVar19 / 3) || pbVar10 < pbVar16) {
LAB_00fd7878:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(iVar20,pbVar16,pbVar10,&DAT_018815bc);
    }
    FUN_00fd805c(param_1,param_3 + uVar18,param_4 - uVar18,param_5 + iVar20,uVar19 / 3);
    iVar20 = (int)pbVar10 - (int)pbVar16;
    if (iVar20 != iVar11) goto LAB_00fd7bfc;
LAB_00fd7a50:
    param_5 = param_5 + (int)pbVar16;
    goto LAB_014b4884;
  case 4:
    uVar18 = (uint)(char)param_1[0x200];
    if ((bVar2 & 8) == 0) {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          if (param_4 != 0) {
            pbVar16 = param_5 + 1;
            uVar18 = param_4;
            do {
              uVar18 = uVar18 - 1;
              bVar2 = param_1[*param_3 >> 4];
              pbVar16[-1] = param_1[*param_3];
              *pbVar16 = bVar2;
              pbVar16 = pbVar16 + 2;
              param_3 = param_3 + 1;
            } while (uVar18 != 0);
          }
          pbVar16 = (byte *)(param_4 * 2);
          if (pbVar10 < (byte *)(param_4 << 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pbVar16,pbVar10,pbVar10,&DAT_0188150c);
          }
          if (pbVar10 == pbVar16) {
            return;
          }
          uVar18 = (uint)*param_1;
          pbVar10 = pbVar10 + param_4 * -2;
          pbVar16 = param_5 + (int)pbVar16;
          goto LAB_014b48c4;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 2) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfe;
        uVar18 = (uint)(bVar2 >> 1);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              uVar17 = uVar17 - 1;
              bVar2 = param_1[*pbVar13 >> 4];
              pbVar9[-1] = param_1[*pbVar13];
              *pbVar9 = bVar2;
              pbVar9 = pbVar9 + 2;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar14 = uVar14 * iVar20;
        iVar20 = param_4 - uVar18;
        uVar21 = iVar20 * 2 & 0x3ffffffe;
        pbVar16 = (byte *)(uVar21 + uVar14);
        if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) goto LAB_00fd6544;
        iVar12 = 0;
        iVar11 = iVar20;
        do {
          iVar11 = iVar11 + -1;
          bVar2 = param_1[param_3[iVar12 + uVar18] >> 4];
          iVar15 = iVar12 * 2;
          param_5[iVar15 + uVar14] = param_1[param_3[iVar12 + uVar18]];
          iVar12 = iVar12 + 1;
          (param_5 + iVar15 + uVar14)[1] = bVar2;
        } while (iVar11 != 0);
        goto LAB_00fd6fcc;
      }
      if (0x203 < param_2) {
        bVar2 = param_1[0x202];
        if (bVar2 < 2) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfe;
        uVar18 = (uint)(bVar2 >> 1);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              uVar17 = uVar17 - 1;
              bVar2 = param_1[*pbVar13 >> 4];
              pbVar9[-1] = param_1[*pbVar13];
              *pbVar9 = bVar2;
              pbVar9 = pbVar9 + 2;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        iVar20 = uVar14 * iVar20;
        iVar11 = param_4 - uVar18;
        pbVar16 = (byte *)(iVar20 + iVar11 * 2);
        if (pbVar16 < (byte *)(iVar11 * 2) || pbVar10 < pbVar16) goto LAB_00fd5ee0;
        iVar15 = 0;
        iVar12 = iVar11;
        do {
          iVar12 = iVar12 + -1;
          bVar2 = param_1[param_3[iVar15 + uVar18] >> 4];
          iVar1 = iVar15 * 2;
          param_5[iVar1 + iVar20] = param_1[param_3[iVar15 + uVar18]];
          iVar15 = iVar15 + 1;
          (param_5 + iVar1 + iVar20)[1] = bVar2;
        } while (iVar12 != 0);
        goto LAB_00fd78cc;
      }
      pbVar22 = (byte *)((param_4 & 0x1fffffff) * 2);
      if (pbVar10 < pbVar22) goto LAB_00fd7a84;
      if (param_4 == 0) goto LAB_00fd6844;
      pbVar16 = param_5 + 1;
      uVar14 = param_4;
      do {
        uVar14 = uVar14 - 1;
        bVar2 = param_1[*param_3 >> 4];
        pbVar16[-1] = param_1[*param_3];
        *pbVar16 = bVar2;
        pbVar16 = pbVar16 + 2;
        param_3 = param_3 + 1;
      } while (uVar14 != 0);
    }
    else {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          if (param_4 != 0) {
            pbVar16 = param_5 + 1;
            uVar18 = param_4;
            do {
              uVar18 = uVar18 - 1;
              bVar2 = param_1[*param_3];
              pbVar16[-1] = param_1[*param_3 >> 4];
              *pbVar16 = bVar2;
              pbVar16 = pbVar16 + 2;
              param_3 = param_3 + 1;
            } while (uVar18 != 0);
          }
          pbVar16 = (byte *)(param_4 * 2);
          if (pbVar10 < (byte *)(param_4 << 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(pbVar16,pbVar10,pbVar10,&DAT_0188150c);
          }
          if (pbVar10 == pbVar16) {
            return;
          }
          uVar18 = (uint)*param_1;
          pbVar10 = pbVar10 + param_4 * -2;
          pbVar16 = param_5 + (int)pbVar16;
          goto LAB_014b48c4;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 2) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfe;
        uVar18 = (uint)(bVar2 >> 1);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              uVar17 = uVar17 - 1;
              bVar2 = param_1[*pbVar13];
              pbVar9[-1] = param_1[*pbVar13 >> 4];
              *pbVar9 = bVar2;
              pbVar9 = pbVar9 + 2;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar14 = uVar14 * iVar20;
        iVar20 = param_4 - uVar18;
        uVar21 = iVar20 * 2 & 0x3ffffffe;
        pbVar16 = (byte *)(uVar21 + uVar14);
        if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) goto LAB_00fd6544;
        iVar12 = 0;
        iVar11 = iVar20;
        do {
          iVar11 = iVar11 + -1;
          bVar2 = param_1[param_3[iVar12 + uVar18]];
          iVar15 = iVar12 * 2;
          param_5[iVar15 + uVar14] = param_1[param_3[iVar12 + uVar18] >> 4];
          iVar12 = iVar12 + 1;
          (param_5 + iVar15 + uVar14)[1] = bVar2;
        } while (iVar11 != 0);
LAB_00fd6fcc:
        if (uVar21 != iVar20 * 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(iVar20 * 2,uVar21,uVar21,&DAT_0188150c);
        }
        iVar11 = (int)pbVar10 - (int)pbVar16;
        if (iVar11 != param_2 - 0x203) goto LAB_00fd7acc;
        param_5 = param_5 + (int)pbVar16;
        goto LAB_014b4884;
      }
      if (0x203 < param_2) {
        bVar2 = param_1[0x202];
        if (bVar2 < 2) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xfe;
        uVar18 = (uint)(bVar2 >> 1);
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar22 = param_5 + 1;
          pbVar16 = param_3;
          do {
            pbVar13 = pbVar16;
            pbVar9 = pbVar22;
            uVar17 = uVar18;
            do {
              uVar17 = uVar17 - 1;
              bVar2 = param_1[*pbVar13];
              pbVar9[-1] = param_1[*pbVar13 >> 4];
              *pbVar9 = bVar2;
              pbVar9 = pbVar9 + 2;
              pbVar13 = pbVar13 + 1;
            } while (uVar17 != 0);
            FUN_016dd1aa(param_5 + uVar21 + uVar19 * iVar20,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        iVar20 = uVar14 * iVar20;
        iVar11 = param_4 - uVar18;
        pbVar16 = (byte *)(iVar20 + iVar11 * 2);
        if (pbVar16 < (byte *)(iVar11 * 2) || pbVar10 < pbVar16) {
LAB_00fd5ee0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(iVar20,pbVar16,pbVar10,&DAT_018815bc);
        }
        iVar15 = 0;
        iVar12 = iVar11;
        do {
          iVar12 = iVar12 + -1;
          bVar2 = param_1[param_3[iVar15 + uVar18]];
          iVar1 = iVar15 * 2;
          param_5[iVar1 + iVar20] = param_1[param_3[iVar15 + uVar18] >> 4];
          iVar15 = iVar15 + 1;
          (param_5 + iVar1 + iVar20)[1] = bVar2;
        } while (iVar12 != 0);
LAB_00fd78cc:
        uVar18 = iVar11 * 2;
        local_38 = (byte *)(uVar18 & 0x3ffffffe);
        if (local_38 != (byte *)uVar18) goto LAB_00fd7b68;
        iVar11 = (int)pbVar10 - (int)pbVar16;
        if (iVar11 != param_2 - 0x203) goto LAB_00fd7acc;
        param_5 = param_5 + (int)pbVar16;
        goto LAB_014b4884;
      }
      pbVar22 = (byte *)((param_4 & 0x1fffffff) * 2);
      if (pbVar10 < pbVar22) goto LAB_00fd7a84;
      if (param_4 == 0) {
LAB_00fd6844:
        pbVar13 = (byte *)(param_4 * 2);
        if (pbVar22 != pbVar13) goto LAB_00fd7adc;
        if (pbVar10 == (byte *)0x0) {
          return;
        }
        goto LAB_014b48c4;
      }
      pbVar16 = param_5 + 1;
      uVar14 = param_4;
      do {
        uVar14 = uVar14 - 1;
        bVar2 = param_1[*param_3];
        pbVar16[-1] = param_1[*param_3 >> 4];
        *pbVar16 = bVar2;
        pbVar16 = pbVar16 + 2;
        param_3 = param_3 + 1;
      } while (uVar14 != 0);
    }
    pbVar13 = (byte *)(param_4 * 2);
    if (pbVar22 != pbVar13) {
LAB_00fd7adc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(pbVar13,pbVar22,pbVar22,&DAT_0188150c);
    }
    if (pbVar10 <= pbVar13) {
      return;
    }
    pbVar10 = pbVar10 + (int)param_5 + -(int)(param_5 + (int)pbVar13);
    pbVar16 = param_5 + (int)pbVar13;
    goto LAB_014b48c4;
  case 5:
    bVar7 = param_1[0x200];
    uVar18 = (uint)(char)bVar7;
    if ((bVar2 & 8) == 0) {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          FUN_00fd84c8(param_1,param_3,param_4,param_5);
          return;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3) * 5;
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar16 = param_3;
          pbVar22 = param_5;
          do {
            FUN_00fd84c8(param_1,pbVar16,uVar18,pbVar22,uVar21);
            FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar21 = (param_4 - uVar18) * 8 | 4;
        iVar20 = uVar14 * iVar20;
        pbVar16 = (byte *)(iVar20 + uVar21 / 5);
        if (pbVar16 < (byte *)(uVar21 / 5) || pbVar10 < pbVar16) goto LAB_00fd7878;
        FUN_00fd84c8(param_1,param_3 + uVar18,param_4 - uVar18,param_5 + iVar20,uVar21 / 5);
        goto LAB_00fd7a40;
      }
      if (0x203 < param_2) {
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3) * 5;
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar16 = param_3;
          pbVar22 = param_5;
          do {
            FUN_00fd84c8(param_1,pbVar16,uVar18,pbVar22,uVar21);
            FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        param_4 = param_4 - uVar18;
        uVar14 = uVar14 * iVar20;
        uVar21 = ((uint)((ulonglong)(param_4 + 4) * 0xcccccccd >> 0x20) & 0x7ffffffc) * 2;
        pbVar16 = (byte *)(uVar21 + uVar14);
        if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar14,pbVar16,pbVar10,&DAT_018815bc);
        }
        uVar17 = param_4 * 8 | 4;
        uVar19 = uVar17 / 5;
        if (uVar21 < uVar17 / 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar19,uVar21,&DAT_0188152c);
        }
        pbVar13 = param_5 + uVar14;
        FUN_00fd84c8(param_1,param_3 + uVar18,param_4,pbVar13,uVar19);
        pbVar22 = pbVar13;
        if ((param_4 & 0x1fffffff) != 0) {
          if (uVar21 <= uVar19) goto LAB_00fd5954;
          pbVar22 = pbVar13 + uVar19;
        }
        do {
          pbVar9 = pbVar22 + 1;
          *pbVar22 = bVar7;
          pbVar22 = pbVar9;
        } while (pbVar9 != pbVar13 + uVar21);
        goto LAB_00fd5954;
      }
      uVar14 = param_4 << 3 | 4;
      pbVar22 = (byte *)(uVar14 / 5);
      if (pbVar10 < (byte *)(uVar14 / 5)) goto LAB_00fd7a9c;
      FUN_00fd84c8(param_1,param_3,param_4,param_5,pbVar22);
    }
    else {
      if ((int)uVar18 < 0) {
        if (param_2 < 0x204) {
          FUN_00fd8818(param_1,param_3,param_4,param_5);
          return;
        }
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3) * 5;
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar16 = param_3;
          pbVar22 = param_5;
          do {
            FUN_00fd8818(param_1,pbVar16,uVar18,pbVar22,uVar21);
            FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        uVar21 = (param_4 - uVar18) * 8 | 4;
        iVar20 = uVar14 * iVar20;
        pbVar16 = (byte *)(iVar20 + uVar21 / 5);
        if (pbVar16 < (byte *)(uVar21 / 5) || pbVar10 < pbVar16) goto LAB_00fd7878;
        FUN_00fd8818(param_1,param_3 + uVar18,param_4 - uVar18,param_5 + iVar20,uVar21 / 5);
LAB_00fd7a40:
        iVar20 = (int)pbVar10 - (int)pbVar16;
        if (iVar20 != param_2 - 0x203) {
LAB_00fd7bfc:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7204(iVar20,param_2 - 0x203,&DAT_018815ac);
        }
        goto LAB_00fd7a50;
      }
      if (0x203 < param_2) {
        bVar2 = param_1[0x202];
        if (bVar2 < 8) goto LAB_00fd7cf0;
        uVar21 = bVar2 & 0xf8;
        uVar18 = (uint)(bVar2 >> 3) * 5;
        iVar20 = uVar21 + (param_2 - 0x203);
        uVar14 = FUN_018462e8(param_4,uVar18);
        if (uVar18 <= param_4) {
          uVar19 = 0;
          pbVar16 = param_3;
          pbVar22 = param_5;
          do {
            FUN_00fd8818(param_1,pbVar16,uVar18,pbVar22,uVar21);
            FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
            uVar19 = uVar19 + 1;
            pbVar16 = pbVar16 + uVar18;
            pbVar22 = pbVar22 + iVar20;
          } while (uVar19 < uVar14);
        }
        uVar18 = uVar14 * uVar18;
        if (param_4 <= uVar18) {
          return;
        }
        param_4 = param_4 - uVar18;
        uVar14 = uVar14 * iVar20;
        uVar21 = ((uint)((ulonglong)(param_4 + 4) * 0xcccccccd >> 0x20) & 0x7ffffffc) * 2;
        pbVar16 = (byte *)(uVar21 + uVar14);
        if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar14,pbVar16,pbVar10,&DAT_018815bc);
        }
        uVar17 = param_4 * 8 | 4;
        uVar19 = uVar17 / 5;
        if (uVar21 < uVar17 / 5) goto LAB_00fd7aec;
        pbVar13 = param_5 + uVar14;
        FUN_00fd8818(param_1,param_3 + uVar18,param_4,pbVar13,uVar19);
        pbVar22 = pbVar13;
        if ((param_4 & 0x1fffffff) != 0) {
          if (uVar21 <= uVar19) goto LAB_00fd5954;
          pbVar22 = pbVar13 + uVar19;
        }
        do {
          pbVar9 = pbVar22 + 1;
          *pbVar22 = bVar7;
          pbVar22 = pbVar9;
        } while (pbVar9 != pbVar13 + uVar21);
LAB_00fd5954:
        iVar11 = (int)pbVar10 - (int)pbVar16;
        local_4c = param_2 - 0x203;
        if (iVar11 != local_4c) goto LAB_00fd7acc;
        param_5 = param_5 + (int)pbVar16;
        goto LAB_014b4884;
      }
      uVar14 = param_4 << 3 | 4;
      pbVar22 = (byte *)(uVar14 / 5);
      if (pbVar10 < (byte *)(uVar14 / 5)) goto LAB_00fd7a9c;
      FUN_00fd8818(param_1,param_3,param_4,param_5,pbVar22);
    }
LAB_00fd525c:
    if ((param_4 & 0x1fffffff) == 0) {
LAB_00fd5264:
      if (pbVar10 == (byte *)0x0) {
        return;
      }
    }
    else {
LAB_00fd5498:
      if (pbVar10 <= pbVar22) {
        return;
      }
      pbVar16 = param_5 + (int)pbVar22;
    }
    pbVar10 = pbVar10 + (int)param_5 + -(int)pbVar16;
    goto LAB_014b48c4;
  case 6:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("explicit panic",0xe,&DAT_0188164c);
  }
  bVar7 = param_1[0x200];
  uVar18 = (uint)(char)bVar7;
  if ((bVar2 & 8) != 0) {
    if ((int)uVar18 < 0) {
      if (param_2 < 0x204) {
        FUN_00fd8e40(param_1,param_3,param_4,param_5);
        return;
      }
      bVar2 = param_1[0x202];
      if (bVar2 < 4) goto LAB_00fd7cf0;
      uVar21 = bVar2 & 0xfc;
      uVar18 = (uint)(bVar2 >> 2) * 3;
      iVar20 = uVar21 + (param_2 - 0x203);
      uVar14 = FUN_018462e8(param_4,uVar18);
      if (uVar18 <= param_4) {
        uVar19 = 0;
        pbVar16 = param_3;
        pbVar22 = param_5;
        do {
          FUN_00fd8e40(param_1,pbVar16,uVar18,pbVar22,uVar21);
          FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
          uVar19 = uVar19 + 1;
          pbVar16 = pbVar16 + uVar18;
          pbVar22 = pbVar22 + iVar20;
        } while (uVar19 < uVar14);
      }
      uVar18 = uVar14 * uVar18;
      if (param_4 <= uVar18) {
        return;
      }
      uVar21 = (param_4 - uVar18) * 8 | 4;
      iVar20 = uVar14 * iVar20;
      pbVar16 = (byte *)(iVar20 + uVar21 / 6);
      if (pbVar16 < (byte *)(uVar21 / 6) || pbVar10 < pbVar16) goto LAB_00fd7878;
      FUN_00fd8e40(param_1,param_3 + uVar18,param_4 - uVar18,param_5 + iVar20,uVar21 / 6);
      goto LAB_00fd7a40;
    }
    if (param_2 < 0x204) {
      uVar14 = param_4 << 3 | 4;
      pbVar22 = (byte *)(uVar14 / 6);
      if (pbVar10 < (byte *)(uVar14 / 6)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,pbVar22,pbVar10,&DAT_0188152c);
      }
      FUN_00fd8e40(param_1,param_3,param_4,param_5,pbVar22);
      goto LAB_00fd5490;
    }
    bVar2 = param_1[0x202];
    if (bVar2 < 4) goto LAB_00fd7cf0;
    uVar21 = bVar2 & 0xfc;
    iVar20 = param_2 - 0x203;
    uVar18 = (uint)(bVar2 >> 2) * 3;
    uVar14 = FUN_018462e8(param_4,uVar18);
    if (uVar18 <= param_4) {
      uVar19 = 0;
      pbVar16 = param_3;
      pbVar22 = param_5;
      do {
        FUN_00fd8e40(param_1,pbVar16,uVar18,pbVar22,uVar21);
        FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,iVar20);
        uVar19 = uVar19 + 1;
        pbVar16 = pbVar16 + uVar18;
        pbVar22 = pbVar22 + uVar21 + iVar20;
      } while (uVar19 < uVar14);
    }
    uVar18 = uVar14 * uVar18;
    if (param_4 <= uVar18) {
      return;
    }
    iVar11 = param_4 - uVar18;
    uVar14 = uVar14 * (uVar21 + iVar20);
    uVar21 = ((uint)((ulonglong)(iVar11 + 2) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) * 2;
    pbVar16 = (byte *)(uVar21 + uVar14);
    if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) goto LAB_00fd7b1c;
    uVar17 = iVar11 * 8 | 4;
    uVar19 = uVar17 / 6;
    if (uVar21 < uVar17 / 6) goto LAB_00fd7aec;
    pbVar13 = param_5 + uVar14;
    FUN_00fd8e40(param_1,param_3 + uVar18,iVar11,pbVar13,uVar19);
    pbVar22 = pbVar13;
    if (uVar17 < 6) {
LAB_00fd680c:
      do {
        pbVar9 = pbVar22 + 1;
        *pbVar22 = bVar7;
        pbVar22 = pbVar9;
      } while (pbVar9 != pbVar13 + uVar21);
    }
    else if (uVar19 < uVar21) {
      pbVar22 = pbVar13 + uVar19;
      goto LAB_00fd680c;
    }
    if ((int)pbVar10 - (int)pbVar16 != iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7204((int)pbVar10 - (int)pbVar16,iVar20,&DAT_018815ac);
    }
    param_5 = param_5 + (int)pbVar16;
    goto LAB_014b4884;
  }
  if ((int)uVar18 < 0) {
    if (param_2 < 0x204) {
      FUN_00fd8b60(param_1,param_3,param_4,param_5);
      return;
    }
    bVar2 = param_1[0x202];
    if (bVar2 < 4) goto LAB_00fd7cf0;
    uVar21 = bVar2 & 0xfc;
    uVar18 = (uint)(bVar2 >> 2) * 3;
    iVar20 = uVar21 + (param_2 - 0x203);
    uVar14 = FUN_018462e8(param_4,uVar18);
    if (uVar18 <= param_4) {
      uVar19 = 0;
      pbVar16 = param_3;
      pbVar22 = param_5;
      do {
        FUN_00fd8b60(param_1,pbVar16,uVar18,pbVar22,uVar21);
        FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,param_2 - 0x203);
        uVar19 = uVar19 + 1;
        pbVar16 = pbVar16 + uVar18;
        pbVar22 = pbVar22 + iVar20;
      } while (uVar19 < uVar14);
    }
    uVar18 = uVar14 * uVar18;
    if (param_4 <= uVar18) {
      return;
    }
    uVar21 = (param_4 - uVar18) * 8 | 4;
    iVar20 = uVar14 * iVar20;
    pbVar16 = (byte *)(iVar20 + uVar21 / 6);
    if (pbVar16 < (byte *)(uVar21 / 6) || pbVar10 < pbVar16) goto LAB_00fd7878;
    FUN_00fd8b60(param_1,param_3 + uVar18,param_4 - uVar18,param_5 + iVar20,uVar21 / 6);
    goto LAB_00fd7a40;
  }
  if (param_2 < 0x204) {
    uVar14 = param_4 << 3 | 4;
    pbVar22 = (byte *)(uVar14 / 6);
    if (pbVar10 < (byte *)(uVar14 / 6)) goto LAB_00fd7a9c;
    FUN_00fd8b60(param_1,param_3,param_4,param_5,pbVar22);
LAB_00fd5490:
    if (uVar14 < 6) goto LAB_00fd5264;
    goto LAB_00fd5498;
  }
  bVar2 = param_1[0x202];
  if (bVar2 < 4) goto LAB_00fd7cf0;
  uVar21 = bVar2 & 0xfc;
  iVar20 = param_2 - 0x203;
  uVar18 = (uint)(bVar2 >> 2) * 3;
  uVar14 = FUN_018462e8(param_4,uVar18);
  if (uVar18 <= param_4) {
    uVar19 = 0;
    pbVar16 = param_3;
    pbVar22 = param_5;
    do {
      FUN_00fd8b60(param_1,pbVar16,uVar18,pbVar22,uVar21);
      FUN_016dd1aa(pbVar22 + uVar21,param_1 + 0x203,iVar20);
      uVar19 = uVar19 + 1;
      pbVar16 = pbVar16 + uVar18;
      pbVar22 = pbVar22 + uVar21 + iVar20;
    } while (uVar19 < uVar14);
  }
  uVar18 = uVar14 * uVar18;
  if (param_4 <= uVar18) {
    return;
  }
  iVar11 = param_4 - uVar18;
  uVar14 = uVar14 * (uVar21 + iVar20);
  uVar21 = ((uint)((ulonglong)(iVar11 + 2) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) * 2;
  pbVar16 = (byte *)(uVar21 + uVar14);
  if ((CARRY4(uVar21,uVar14)) || (pbVar10 < pbVar16)) {
LAB_00fd7b1c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar14,pbVar16,pbVar10,&DAT_018815bc);
  }
  uVar17 = iVar11 * 8 | 4;
  uVar19 = uVar17 / 6;
  if (uVar21 < uVar17 / 6) goto LAB_00fd7aec;
  pbVar13 = param_5 + uVar14;
  FUN_00fd8b60(param_1,param_3 + uVar18,iVar11,pbVar13,uVar19);
  pbVar22 = pbVar13;
  if (uVar17 < 6) {
LAB_00fd6694:
    do {
      pbVar9 = pbVar22 + 1;
      *pbVar22 = bVar7;
      pbVar22 = pbVar9;
    } while (pbVar9 != pbVar13 + uVar21);
  }
  else if (uVar19 < uVar21) {
    pbVar22 = pbVar13 + uVar19;
    goto LAB_00fd6694;
  }
  iVar11 = (int)pbVar10 - (int)pbVar16;
  if (iVar11 != iVar20) {
LAB_00fd7acc:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(iVar11,param_2 - 0x203,&DAT_018815ac);
  }
  param_5 = param_5 + (int)pbVar16;
LAB_014b4884:
  FUN_016dd1aa(param_5,param_1 + 0x203,param_2 - 0x203);
  return;
}

