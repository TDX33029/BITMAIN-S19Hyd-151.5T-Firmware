// FUN_012f5f9c @ 012f5f9c size=3124 calls_out=2 calls_in=1
// strings: ordinalperiod | for the given year | for the given month and yea

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012f5f9c(undefined4 *param_1,undefined4 *******param_2,undefined4 *******param_3,
                 int param_4,int param_5)

{
  longlong lVar1;
  undefined4 *******pppppppuVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  undefined4 uVar10;
  undefined4 *******pppppppuVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined4 *******extraout_r2;
  uint uVar16;
  undefined4 *******pppppppuVar17;
  undefined4 *******extraout_r3;
  undefined4 *******pppppppuVar18;
  undefined4 *******pppppppuVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  undefined4 *******pppppppuVar23;
  undefined4 *******extraout_r12;
  undefined4 *******pppppppuVar24;
  undefined4 *******pppppppuVar25;
  bool bVar26;
  undefined1 local_94;
  undefined1 local_90;
  undefined1 local_8c;
  ushort local_88;
  short local_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  byte local_78;
  char local_74;
  undefined4 *******local_70;
  byte local_6c;
  undefined4 ******local_68;
  uint local_64;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  undefined4 *******local_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 local_4c;
  ushort local_48;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  char cStack_42;
  byte bStack_41;
  byte bStack_40;
  byte bStack_3f;
  undefined4 local_3e;
  undefined4 local_3a;
  uint local_36;
  uint local_30;
  undefined4 *******local_2c;
  undefined4 *******local_28;
  
  local_3a = 0x2070080;
  local_3e = 0x8080ffff;
  cStack_42 = '\0';
  bStack_41 = 0;
  bStack_40 = 0xff;
  bStack_3f = 0;
  local_60 = (undefined4 *******)0x0;
  local_64 = 0;
  local_68 = (undefined4 ******)0x0;
  local_36 = 0;
  local_48 = 0;
  local_54 = (undefined4 *******)&DAT_80000000;
  local_50 = (undefined4 *******)&DAT_ffffffff;
  local_4c = (undefined4 *******)0x80008000;
  bStack_46 = 0xff;
  bStack_45 = 0xff;
  bStack_44 = 0xff;
  bStack_43 = 0xff;
  pppppppuVar5 = &local_68;
  param_5 = param_5 * 0xc;
  local_5c = (undefined4 *******)&DAT_80000000;
  local_58 = (undefined4 *******)&DAT_80000000;
  do {
    FUN_012f6cd8(&local_30,param_4,pppppppuVar5,param_2,param_3);
    uVar14 = local_3a;
    pppppppuVar24 = local_50;
    if (local_30 != 3) {
      pppppppuVar24 = extraout_r2;
      local_5c = local_28;
      local_64 = local_30;
      local_60 = local_2c;
      goto LAB_012f6084;
    }
    param_4 = param_4 + 0xc;
    param_5 = param_5 + -0xc;
    param_3 = local_28;
    param_2 = local_2c;
  } while (param_5 != 0);
  if (local_28 != (undefined4 *******)0x0) {
    local_64 = 2;
    local_5c = (undefined4 *******)0x0;
    pppppppuVar24 = local_28;
    local_60 = (undefined4 *******)0x12f603c;
LAB_012f6084:
    uVar15 = SUB41(pppppppuVar24,0);
    local_48 = 0;
    uVar10 = 4;
    bStack_46 = 0;
    bStack_45 = 0;
    bStack_44 = 0;
    bStack_43 = 0;
    local_3e._0_1_ = 0;
    local_3e._1_1_ = 0;
LAB_012f609c:
    *(byte *)((int)param_1 + 0x2b) = local_3e._1_1_;
    *(byte *)(param_1 + 10) = local_78;
    *(byte *)((int)param_1 + 0x27) = local_6c;
    *(char *)((int)param_1 + 0x26) = local_74;
    *(ushort *)((int)param_1 + 0x1e) = local_88;
    *(undefined1 *)((int)param_1 + 0x2f) = uVar15;
    *(short *)(param_1 + 7) = local_84;
    *(undefined1 *)((int)param_1 + 0x2e) = local_94;
    param_1[4] = local_80;
    *(undefined1 *)((int)param_1 + 0x2d) = local_90;
    param_1[5] = local_70;
    *(undefined1 *)(param_1 + 0xb) = local_8c;
    *(undefined1 *)((int)param_1 + 0x2a) = (undefined1)local_3e;
    *(char *)((int)param_1 + 0x29) = (char)pppppppuVar5;
    *(byte *)((int)param_1 + 0x25) = bStack_43;
    *(byte *)(param_1 + 9) = bStack_44;
    *(byte *)((int)param_1 + 0x23) = bStack_45;
    *(byte *)((int)param_1 + 0x22) = bStack_46;
    *(ushort *)(param_1 + 8) = local_48;
    *param_1 = uVar10;
    param_1[1] = local_64;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[6] = local_7c;
    return;
  }
  pppppppuVar4 = (undefined4 *******)(local_3e & 0xff);
  pppppppuVar5 = (undefined4 *******)(uint)bStack_3f;
  pppppppuVar6 = (undefined4 *******)(uint)bStack_40;
  local_78 = bStack_40;
  pppppppuVar7 = (undefined4 *******)(uint)bStack_41;
  local_6c = bStack_41;
  local_74 = cStack_42;
  pppppppuVar8 = (undefined4 *******)(uint)bStack_43;
  pppppppuVar9 = (undefined4 *******)(uint)bStack_44;
  pppppppuVar2 = (undefined4 *******)(uint)local_3a._1_1_;
  pppppppuVar17 = (undefined4 *******)(uint)local_4c._2_2_;
  uVar16 = (uint)bStack_45;
  pppppppuVar3 = (undefined4 *******)(uint)local_3e._1_1_;
  pppppppuVar23 = (undefined4 *******)(uint)bStack_46;
  uVar21 = (uint)local_48;
  local_70 = local_54;
  if ((local_36 & 0xff000000) == 0x2000000) {
    if (((uint)local_68 & 1) == 0) {
      local_94 = (undefined1)local_3a;
      local_90 = (undefined1)(local_3e >> 0x18);
      local_8c = (undefined1)(local_3e >> 0x10);
      uVar10 = 6;
      local_7c = local_50;
      local_80 = local_58;
      local_64 = local_36;
      local_88 = local_4c._2_2_;
      local_84 = (short)local_4c;
    }
    else {
      uVar10 = 4;
      bStack_46 = 0;
      bStack_45 = 0;
      bStack_44 = 0;
      bStack_43 = 0;
      local_3e._0_1_ = 0;
      local_48 = 0;
      local_3e._1_1_ = 0;
      pppppppuVar2 = local_5c;
      pppppppuVar5 = (undefined4 *******)(int)(short)local_4c._2_2_;
      local_80 = &local_60;
    }
    uVar15 = SUB41(pppppppuVar2,0);
    goto LAB_012f609c;
  }
  pcVar22 = (char *)(uint)local_3a._2_1_;
  pppppppuVar18 = (undefined4 *******)(local_3a >> 0x18);
  pppppppuVar19 = local_58;
  if ((local_58 == (undefined4 *******)&DAT_80000000) &&
     (pppppppuVar19 = pppppppuVar23, pppppppuVar23 == (undefined4 *******)0xff)) {
    pppppppuVar25 = (undefined4 *******)&DAT_80000000;
  }
  else {
    iVar13 = 0;
    if ((char *)((int)pppppppuVar19 + -0x45) < (char *)0x1f) {
      iVar13 = 0x76c;
    }
    if (pppppppuVar19 < &DAT_00000045) {
      iVar13 = 2000;
    }
    pppppppuVar25 = local_58;
    if ((char *)(iVar13 + (int)pppppppuVar19 + 9999) < (char *)0x4e1f) {
      pppppppuVar25 = (undefined4 *******)(iVar13 + (int)pppppppuVar19);
    }
    if (((pppppppuVar23 != (undefined4 *******)0xff) && (((uint)local_4c & 0xffff) != 0x8000)) &&
       (pppppppuVar25 == (undefined4 *******)&DAT_80000000)) {
      if ((local_36 & 0x100) != 0) {
        pppppppuVar23 = (undefined4 *******)-(int)pppppppuVar23;
      }
      pppppppuVar25 = pppppppuVar23 + (short)local_4c * 0x19;
      if (pppppppuVar25 + -0x9c4 < (undefined4 *******)0xffffb1e1) {
        pppppppuVar25 = (undefined4 *******)&DAT_80000000;
      }
    }
  }
  if (((uVar16 != 0xff) && (pppppppuVar17 != (undefined4 *******)0x8000)) &&
     (local_54 == (undefined4 *******)&DAT_80000000)) {
    if ((local_36 & 0x10000) != 0) {
      uVar16 = -uVar16;
    }
    local_70 = (undefined4 *******)((short)local_4c._2_2_ * 100 + uVar16);
    pppppppuVar17 = (undefined4 *******)0xffffb1e1;
    if (local_70 + -0x9c4 < (undefined4 *******)0xffffb1e1) {
      local_70 = (undefined4 *******)&DAT_80000000;
    }
  }
  pppppppuVar11 = pppppppuVar25 + -0x20000000;
  pppppppuVar19 = (undefined4 *******)LZCOUNT(pppppppuVar11);
  pppppppuVar23 = pppppppuVar25;
  if (uVar21 == 0) {
    bVar26 = pppppppuVar11 == (undefined4 *******)0x0;
LAB_012f63a8:
    if ((pppppppuVar7 == (undefined4 *******)0x0) ||
       (pppppppuVar2 == (undefined4 *******)0x0 || bVar26)) {
      if (cStack_42 == '\0') {
        pppppppuVar23 = (undefined4 *******)(uint)(pcVar22 == &DAT_00000007);
      }
      else {
        pcVar12 = (char *)((int)pcVar22 + -7);
        pppppppuVar23 = (undefined4 *******)(uint)(pcVar12 == (char *)0x0);
        pppppppuVar2 = (undefined4 *******)LZCOUNT(pcVar12);
        if (pcVar12 != (char *)0x0) {
          pppppppuVar2 = local_70;
        }
        if (!(pcVar12 == (char *)0x0 || pppppppuVar2 == (undefined4 *******)&DAT_80000000)) {
          FUN_019d6718(&local_68,pppppppuVar2,cStack_42,pcVar22);
          pppppppuVar17 = extraout_r3;
          pppppppuVar7 = extraout_r12;
          if (local_68 != (undefined4 ******)0x0) {
            pcVar22 = (char *)CONCAT13(bStack_45,CONCAT12(bStack_46,local_48));
            pppppppuVar17 =
                 (undefined4 *******)
                 CONCAT13(bStack_41,CONCAT12(cStack_42,CONCAT11(bStack_43,bStack_44)));
            pppppppuVar9 = local_60;
            pppppppuVar19 = local_4c;
            pppppppuVar8 = local_5c;
            uVar21 = local_64;
            goto LAB_012f6b74;
          }
          goto LAB_012f689c;
        }
      }
      local_54 = pppppppuVar23;
      if ((pppppppuVar9 == (undefined4 *******)0xff) ||
         (!(pppppppuVar11 != (undefined4 *******)0x0 && local_54 == (undefined4 *******)0x0))) {
        local_68 = (undefined4 ******)0x0;
        local_58 = pppppppuVar3;
        local_50 = pppppppuVar7;
        if (pppppppuVar8 == (undefined4 *******)0xff) goto LAB_012f6b74;
        local_58 = (undefined4 *******)
                   ((uint)(pppppppuVar11 == (undefined4 *******)0x0) | (uint)local_54);
        if (local_58 != (undefined4 *******)0x0) goto LAB_012f6b74;
        iVar13 = (((int)pppppppuVar25 << 10) >> 10) + 999999;
        if (pppppppuVar25 + -0x9c4 < (undefined4 *******)0xffffb1e1) goto LAB_012f6748;
        iVar20 = (int)((ulonglong)((longlong)iVar13 * -0x51eb851f) >> 0x20);
        lVar1 = (longlong)iVar13 * 0x5b5 + ((ulonglong)((longlong)iVar13 * 0x5b5) >> 0x3e);
        uVar16 = ((iVar20 >> 5) - (iVar20 >> 0x1f)) + iVar13 / 400 +
                 ((uint)lVar1 >> 2 | (int)((ulonglong)lVar1 >> 0x20) << 0x1e) + 0xea551bce;
        iVar13 = (int)(((ulonglong)uVar16 << 0x20) + (longlong)(int)uVar16 * -0x6db6db6d >> 0x20);
        uVar16 = (int)pppppppuVar8 * 7 + (int)(char)local_3a._2_1_ +
                 (uint)*(ushort *)
                        (&UNK_0053660a + (uVar16 + ((iVar13 >> 2) - (iVar13 >> 0x1f)) * -7) * 2);
        local_64 = uVar16 + 1;
        if (0x16c < (uVar16 & 0xffff)) {
          pppppppuVar17 =
               pppppppuVar25 +
               (((int)pppppppuVar25 * 0x147b >> 0x13) - ((int)pppppppuVar25 * 0x147b >> 0x1f)) *
               -0x19;
          pppppppuVar7 = (undefined4 *******)(local_64 & 0xffff);
          if (pppppppuVar7 == (undefined4 *******)&DAT_0000016e) {
            uVar16 = 3;
            if (((uint)pppppppuVar17 & 0xffff) == 0) {
              uVar16 = 0xf;
            }
            if ((uVar16 & (uint)pppppppuVar25) == 0) goto LAB_012f687c;
          }
          uVar14 = 3;
          local_58 = (undefined4 *******)&DAT_0000016d;
          if (((uint)pppppppuVar17 & 0xffff) == 0) {
            uVar14 = 0xf;
          }
          if ((uVar14 & (uint)pppppppuVar25) == 0) {
            local_58 = (undefined4 *******)&DAT_0000016e;
          }
          goto LAB_012f6b64;
        }
        pppppppuVar17 =
             pppppppuVar25 +
             (((int)pppppppuVar25 * 0x147b >> 0x13) - ((int)pppppppuVar25 * 0x147b >> 0x1f)) * -0x19
        ;
        pppppppuVar7 = pppppppuVar25;
LAB_012f687c:
        uVar16 = 3;
        local_64 = local_64 & 0xffff;
        if (((uint)pppppppuVar17 & 0xffff) == 0) {
          uVar16 = 0xf;
        }
        if ((uVar16 & (uint)pppppppuVar25) == 0) {
          local_64 = local_64 | 0x200;
        }
        local_64 = local_64 | (int)pppppppuVar25 << 10;
        pppppppuVar19 = (undefined4 *******)pcVar22;
        pppppppuVar23 = (undefined4 *******)0xffff;
      }
      else {
        pppppppuVar7 = (undefined4 *******)((int)pppppppuVar25 << 10);
        iVar13 = ((int)pppppppuVar7 >> 10) + 999999;
        if (pppppppuVar25 + -0x9c4 < (undefined4 *******)0xffffb1e1) {
LAB_012f6748:
          pppppppuVar17 = (undefined4 *******)&DAT_00000012;
          goto LAB_012f6754;
        }
        iVar20 = (int)((ulonglong)((longlong)iVar13 * -0x51eb851f) >> 0x20);
        lVar1 = (longlong)iVar13 * 0x5b5 + ((ulonglong)((longlong)iVar13 * 0x5b5) >> 0x3e);
        uVar16 = ((iVar20 >> 5) - (iVar20 >> 0x1f)) + iVar13 / 400 +
                 ((uint)lVar1 >> 2 | (int)((ulonglong)lVar1 >> 0x20) << 0x1e) + 0xea551bce;
        iVar13 = (int)(((ulonglong)uVar16 << 0x20) + (longlong)(int)uVar16 * -0x6db6db6d >> 0x20);
        uVar16 = (int)pppppppuVar9 * 7 + (uint)*(byte *)((int)pcVar22 + 0x5b1f47) +
                 (uint)*(ushort *)
                        (&UNK_00536624 + (uVar16 + ((iVar13 >> 2) - (iVar13 >> 0x1f)) * -7) * 2);
        local_64 = uVar16 + 1;
        if (0x16c < (uVar16 & 0xffff)) {
          local_50 = (undefined4 *******)(local_64 & 0xffff);
          pppppppuVar17 =
               pppppppuVar25 +
               (((int)pppppppuVar25 * 0x147b >> 0x13) - ((int)pppppppuVar25 * 0x147b >> 0x1f)) *
               -0x19;
          if (local_50 == (undefined4 *******)&DAT_0000016e) {
            uVar16 = 3;
            if (((uint)pppppppuVar17 & 0xffff) == 0) {
              uVar16 = 0xf;
            }
            if ((uVar16 & (uint)pppppppuVar25) == 0) goto LAB_012f66d4;
          }
          uVar14 = 3;
          local_58 = (undefined4 *******)&DAT_0000016d;
          if (((uint)pppppppuVar17 & 0xffff) == 0) {
            uVar14 = 0xf;
          }
          local_68 = (undefined4 ******)0x528421;
          pcVar22 = "for the given year";
          if ((uVar14 & (uint)pppppppuVar25) == 0) {
            local_58 = (undefined4 *******)&DAT_0000016e;
          }
          pppppppuVar19 = (undefined4 *******)0x0;
          pppppppuVar9 = (undefined4 *******)&DAT_00000001;
          uVar21 = 7;
          pppppppuVar17 = (undefined4 *******)&DAT_00000012;
          local_54 = (undefined4 *******)0x0;
          pppppppuVar8 = (undefined4 *******)0x0;
          goto LAB_012f6b74;
        }
        pppppppuVar17 =
             pppppppuVar25 +
             (((int)pppppppuVar25 * 0x147b >> 0x13) - ((int)pppppppuVar25 * 0x147b >> 0x1f)) * -0x19
        ;
LAB_012f66d4:
        uVar16 = 3;
        local_64 = local_64 & 0xffff;
        if (((uint)pppppppuVar17 & 0xffff) == 0) {
          uVar16 = 0xf;
        }
        if ((uVar16 & (uint)pppppppuVar25) == 0) {
          local_64 = local_64 | 0x200;
        }
        local_64 = local_64 | (uint)pppppppuVar7;
        pppppppuVar19 = pppppppuVar25;
        pppppppuVar23 = (undefined4 *******)0xffff;
      }
    }
    else {
      if (pppppppuVar25 + -0x9c4 < (undefined4 *******)0xffffb1e1) {
        pppppppuVar17 = (undefined4 *******)&DAT_0000001c;
LAB_012f6754:
        local_68 = (undefined4 ******)&DAT_0056cfb8;
        pcVar22 = (char *)0x0;
        local_54 = (undefined4 *******)0x0;
        local_58 = (undefined4 *******)0x270f;
        pppppppuVar9 = (undefined4 *******)0xffffd8f1;
        pppppppuVar19 = (undefined4 *******)((int)pppppppuVar25 >> 0x1f);
        pppppppuVar8 = (undefined4 *******)&DAT_ffffffff;
        uVar21 = 4;
        local_50 = pppppppuVar25;
        goto LAB_012f6b74;
      }
      if (&DAT_0000001d <= pppppppuVar7) {
        if (pppppppuVar2 == (undefined4 *******)0x2) {
          uVar16 = (int)pppppppuVar25 * 0x5c29 + 0x51c;
          uVar21 = 3;
          if (((uVar16 & 0xffff) >> 2 | uVar16 * 0x4000 & 0xffff) < 0x28f) {
            uVar21 = 0xf;
          }
          local_58 = (undefined4 *******)&DAT_0000001c;
          pppppppuVar17 = local_58;
          if ((uVar21 & (uint)pppppppuVar25) == 0) {
            local_58 = (undefined4 *******)&DAT_0000001d;
            pppppppuVar17 = local_58;
          }
        }
        else {
          local_58 = (undefined4 *******)&DAT_0000001e;
          pppppppuVar17 = (undefined4 *******)((byte)(local_3a._1_1_ ^ local_3a._1_1_ >> 3) | 0x1e);
        }
        if (pppppppuVar17 < pppppppuVar7) {
          local_68 = (undefined4 ******)0x52d4db;
          uVar21 = 3;
          pcVar22 = "for the given month and yea";
          pppppppuVar17 = (undefined4 *******)&DAT_0000001c;
          local_50 = pppppppuVar7;
          goto LAB_012f6b6c;
        }
      }
      uVar16 = (int)pppppppuVar25 * 0x5c29 + 0x51c;
      pppppppuVar17 = (undefined4 *******)0x28f;
      pcVar22 = "";
      uVar21 = 3;
      if (((uVar16 & 0xffff) >> 2 | uVar16 * 0x4000 & 0xffff) < 0x28f) {
        uVar21 = 0xf;
      }
      bVar26 = (uVar21 & (uint)pppppppuVar25) == 0;
      if (bVar26) {
        pcVar22 = "";
      }
      local_64 = (int)pppppppuVar25 << 10;
      if (bVar26) {
        local_64 = (int)pppppppuVar25 << 10 | 0x200;
      }
      local_64 = local_64 |
                 (uint)((uint)*(ushort *)(pcVar22 + (int)pppppppuVar2 * 2 + -2) + (int)pppppppuVar7)
                 & 0xffff;
      pppppppuVar19 = pppppppuVar2;
    }
  }
  else {
    bVar26 = true;
    if (pppppppuVar25 == (undefined4 *******)&DAT_80000000) goto LAB_012f63a8;
    if (pppppppuVar25 + -0x9c4 < (undefined4 *******)0xffffb1e1) goto LAB_012f6748;
    if (0xb6 < local_48 >> 1) {
      uVar16 = 3;
      if (((uint)(pppppppuVar25 +
                 (((int)pppppppuVar25 * 0x147b >> 0x13) - ((int)pppppppuVar25 * 0x147b >> 0x1f)) *
                 -0x19) & 0xffff) == 0) {
        uVar16 = 0xf;
      }
      if ((uVar16 & (uint)pppppppuVar25) == 0) goto LAB_012f65a4;
      local_58 = (undefined4 *******)&DAT_0000016d;
      pppppppuVar7 = (undefined4 *******)&DAT_0000016e;
LAB_012f6b64:
      pcVar22 = "for the given year";
      local_68 = (undefined4 ******)0x528421;
      uVar21 = 7;
      pppppppuVar17 = (undefined4 *******)&DAT_00000012;
      local_50 = pppppppuVar7;
LAB_012f6b6c:
      pppppppuVar19 = (undefined4 *******)0x0;
      pppppppuVar9 = (undefined4 *******)&DAT_00000001;
      local_54 = (undefined4 *******)0x0;
      pppppppuVar8 = (undefined4 *******)0x0;
      goto LAB_012f6b74;
    }
LAB_012f65a4:
    pppppppuVar17 = (undefined4 *******)0xffff;
    uVar16 = 3;
    local_64 = (int)pppppppuVar25 << 10;
    if (((uint)(pppppppuVar25 +
               (((int)pppppppuVar25 * 0x147b >> 0x13) - ((int)pppppppuVar25 * 0x147b >> 0x1f)) *
               -0x19) & 0xffff) == 0) {
      uVar16 = 0xf;
    }
    if ((uVar16 & (uint)pppppppuVar25) == 0) {
      local_64 = (int)pppppppuVar25 << 10 | 0x200;
    }
    local_64 = local_64 | uVar21;
  }
LAB_012f689c:
  pppppppuVar9 = pppppppuVar4;
  local_54 = pppppppuVar23;
  uVar21 = local_64;
  local_50 = pppppppuVar7;
  if (pppppppuVar6 == (undefined4 *******)0xff) {
    local_68 = (undefined4 ******)0x0;
    if (pppppppuVar18 != (undefined4 *******)0x2) {
      pppppppuVar17 = pppppppuVar5;
    }
    local_58 = pppppppuVar18;
    if (pppppppuVar18 != (undefined4 *******)0x2 && pppppppuVar17 != (undefined4 *******)0x0) {
      pppppppuVar5 = pppppppuVar17;
      if (pppppppuVar17 != (undefined4 *******)&DAT_0000000c) {
        pppppppuVar5 = pppppppuVar17 + 3;
      }
      pppppppuVar6 = (undefined4 *******)0x0;
      if (pppppppuVar17 != (undefined4 *******)&DAT_0000000c) {
        pppppppuVar6 = pppppppuVar17;
      }
      if ((uVar14 & 0x1000000) != 0) {
        pppppppuVar6 = pppppppuVar5;
      }
      if (pppppppuVar4 != (undefined4 *******)0xff) goto LAB_012f6930;
      local_58 = pppppppuVar3;
      if (pppppppuVar3 == (undefined4 *******)0xff) {
        local_58 = pppppppuVar24;
      }
      pppppppuVar17 = pppppppuVar18;
      if (pppppppuVar3 == (undefined4 *******)0xff && local_58 == (undefined4 *******)&DAT_ffffffff)
      {
        uVar14 = ((uint)pppppppuVar6 & 0xff) << 0x10;
        goto LAB_012f6aac;
      }
    }
  }
  else {
    pppppppuVar18 = pppppppuVar17;
    if (pppppppuVar4 == (undefined4 *******)0xff) {
      local_68 = (undefined4 ******)0x0;
      local_58 = pppppppuVar3;
      if (pppppppuVar3 == (undefined4 *******)0xff) {
        local_58 = pppppppuVar24;
      }
      if (pppppppuVar3 == (undefined4 *******)0xff && local_58 == (undefined4 *******)&DAT_ffffffff)
      {
        uVar14 = (int)pppppppuVar6 << 0x10;
LAB_012f6aac:
        pppppppuVar24 = (undefined4 *******)0x0;
LAB_012f6ac4:
        param_1[1] = pppppppuVar24;
        *(undefined1 *)((int)param_1 + 0x12) = 0;
        *(undefined2 *)(param_1 + 4) = 0;
        param_1[2] = uVar14;
        param_1[3] = local_64;
        *param_1 = 10;
        return;
      }
    }
    else {
LAB_012f6930:
      local_58 = (undefined4 *******)((int)pppppppuVar4 << 8);
      pppppppuVar17 = pppppppuVar18;
      if (pppppppuVar3 == (undefined4 *******)0xff) {
        if (pppppppuVar24 == (undefined4 *******)&DAT_ffffffff) {
          uVar14 = (uint)local_58 | ((uint)pppppppuVar6 & 0xff) << 0x10;
          goto LAB_012f6aac;
        }
        local_68 = (undefined4 ******)0x0;
        pppppppuVar9 = pppppppuVar24;
      }
      else {
        if (pppppppuVar24 == (undefined4 *******)&DAT_ffffffff) {
          if (pppppppuVar3 < &DAT_0000003c) {
            uVar14 = (uint)pppppppuVar3 | ((uint)pppppppuVar6 & 0xff) << 0x10 | (uint)local_58;
            goto LAB_012f6aac;
          }
LAB_012f6bbc:
          local_68 = (undefined4 ******)0x52d4e4;
          pppppppuVar24 = (undefined4 *******)&DAT_0000003c;
          local_58 = (undefined4 *******)0x3b;
          uVar21 = 6;
        }
        else {
          if ((undefined4 *******)0x3b < pppppppuVar3) goto LAB_012f6bbc;
          if (pppppppuVar24 < &DAT_3b9aca00) {
            uVar14 = (uint)pppppppuVar3 | ((uint)pppppppuVar6 & 0xff) << 0x10 | (uint)local_58;
            goto LAB_012f6ac4;
          }
          local_58 = (undefined4 *******)&DAT_3b9ac9ff;
          local_68 = (undefined4 ******)0x52d4ea;
          uVar21 = 10;
        }
        pppppppuVar19 = (undefined4 *******)0x0;
        pppppppuVar9 = (undefined4 *******)0x0;
        local_54 = (undefined4 *******)0x0;
        local_50 = pppppppuVar24;
      }
    }
  }
  pppppppuVar8 = (undefined4 *******)0x0;
  pcVar22 = (char *)0x0;
LAB_012f6b74:
  param_1[2] = local_68;
  param_1[4] = pppppppuVar9;
  param_1[10] = pcVar22;
  param_1[3] = uVar21;
  *param_1 = 6;
  param_1[0xb] = pppppppuVar17;
  param_1[5] = pppppppuVar8;
  param_1[6] = local_58;
  param_1[7] = local_54;
  param_1[8] = local_50;
  param_1[9] = pppppppuVar19;
  return;
}

