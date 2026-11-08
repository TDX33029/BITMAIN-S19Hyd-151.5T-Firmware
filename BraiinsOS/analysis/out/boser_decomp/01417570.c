// FUN_01417570 @ 01417570 size=2000 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01417570(int param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  byte extraout_r2;
  byte extraout_r2_00;
  byte extraout_r2_01;
  byte extraout_r2_02;
  undefined1 extraout_r2_03;
  undefined1 extraout_r2_04;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint local_c0 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_54;
  undefined1 local_53;
  byte local_52;
  byte local_51;
  undefined1 local_50;
  byte local_4f;
  byte local_4e;
  undefined1 local_4d;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_5c = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_019ac248(local_c0,param_1,&local_60);
  uVar5 = local_c0[4];
  uVar4 = local_c0[3];
  uVar10 = local_c0[2];
  if ((local_c0[0] & 1) != 0) {
    local_c0[2] = local_c0[4];
    local_c0[1] = local_c0[3];
    local_c0[0] = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00477ada,0x23,local_c0,&DAT_01cf43e4,&DAT_01cf43f4);
  }
  uVar9 = 1;
  if (local_c0[3] < 0x3a || 0x3a - local_c0[3] < (uint)(local_c0[2] < 0xfff44180)) {
    local_c0[0x16] = 0x1d;
    local_c0[0xc] = 0x1e;
    local_c0[0xd] = 0;
    local_c0[0xe] = 0x1f;
    local_c0[6] = 0x1e;
    local_c0[7] = 0;
    local_c0[8] = 0x1f;
    local_c0[0x10] = 0x1e;
    local_c0[2] = 0x1e;
    local_c0[3] = 0;
    local_c0[4] = 0x1f;
    local_c0[0x12] = 0x1f;
    local_c0[0x13] = 0;
    local_c0[0x14] = 0x1f;
    local_c0[0x15] = 0;
    local_c0[0x17] = 0;
    local_c0[10] = 0x1f;
    local_c0[0xb] = 0;
    local_c0[0xf] = 0;
    local_c0[0x11] = 0;
    local_c0[5] = 0;
    local_c0[9] = 0;
    uVar26 = FUN_01bf0ff0(uVar10,uVar4,0x15180,0);
    iVar13 = (int)uVar26 + -0x2b09;
    local_c0[0] = 0x1f;
    uVar12 = iVar13 % 0x23ab1;
    uVar1 = (int)uVar12 >> 0x1f;
    uVar16 = uVar1 + (0xfffdc54e < uVar12);
    uVar17 = uVar12 + 0x23ab1;
    if (-1 < (int)uVar12) {
      uVar16 = uVar1;
      uVar17 = uVar12;
    }
    uVar27 = FUN_01bf0ff0(uVar17,uVar16,0x8eac,0);
    if (uVar16 == uVar17 < 0x23ab0 &&
        (uint)(0x8eab < uVar17 - 0x23ab0) <= uVar16 - (uVar17 < 0x23ab0)) {
      uVar27 = 3;
    }
    iVar21 = (int)(uVar27 >> 0x20);
    lVar2 = (uVar27 & 0xffffffff) * 0xffff7154;
    uVar12 = (uint)lVar2;
    uVar14 = uVar12 + uVar17;
    uVar17 = iVar21 * -0x8eac + ((int)((ulonglong)lVar2 >> 0x20) - (int)uVar27) + uVar16 +
             (uint)CARRY4(uVar12,uVar17);
    uVar28 = FUN_01bf0fb0(uVar14,uVar17,0x5b5,0);
    if (uVar17 == uVar14 < 0x8ead && (uint)(0x5b4 < uVar14 - 0x8ead) <= uVar17 - (uVar14 < 0x8ead))
    {
      uVar28 = 0x18;
    }
    iVar20 = (int)(uVar28 >> 0x20);
    uVar16 = (uint)uVar28;
    lVar2 = (uVar28 & 0xffffffff) * 0xfffffa4b;
    uVar12 = (uint)lVar2;
    uVar15 = uVar12 + uVar14;
    uVar17 = iVar20 * -0x5b5 + ((int)((ulonglong)lVar2 >> 0x20) - uVar16) + uVar17 +
             (uint)CARRY4(uVar12,uVar14);
    uVar28 = FUN_01bf0fb0(uVar15,uVar17,0x16d,0);
    local_c0[1] = 0;
    if (uVar17 == uVar15 < 0x5b4 && (uint)(0x16c < uVar15 - 0x5b4) <= uVar17 - (uVar15 < 0x5b4)) {
      uVar28 = 3;
    }
    lVar2 = (uVar28 & 0xffffffff) * 0xfffffe93;
    uVar12 = (uint)lVar2;
    uVar14 = uVar12 + uVar15;
    iVar18 = (int)(uVar28 >> 0x20) * -0x16d + ((int)((ulonglong)lVar2 >> 0x20) - (int)uVar28) +
             uVar17 + (uint)CARRY4(uVar12,uVar15);
    iVar23 = 0;
    lVar2 = (uVar26 & 0xffffffff) * 0x15180;
    uVar17 = (uint)lVar2;
    iVar24 = uVar10 - uVar17;
    iVar22 = uVar4 - ((int)(uVar26 >> 0x20) * 0x15180 + (int)((ulonglong)lVar2 >> 0x20) +
                     (uint)(uVar10 < uVar17));
    iVar19 = 0;
    do {
      uVar10 = *(uint *)((int)local_c0 - iVar19);
      iVar11 = *(int *)((int)local_c0 + (4 - iVar19));
      if ((int)(iVar18 - (iVar11 + (uint)(uVar14 < uVar10))) < 0 !=
          (SBORROW4(iVar18,iVar11) != SBORROW4(iVar18 - iVar11,(uint)(uVar14 < uVar10))))
      goto LAB_01417858;
      bVar25 = uVar14 < uVar10;
      uVar14 = uVar14 - uVar10;
      iVar23 = iVar23 + 1;
      iVar18 = iVar18 - (iVar11 + (uint)bVar25);
      bVar25 = iVar19 != -0x58;
      iVar19 = iVar19 + -8;
    } while (bVar25);
    iVar23 = 0xb;
LAB_01417858:
    local_44 = 0x5a30;
    local_48 = 0x30303030;
    local_4c = 0x30303030;
    local_5c = CONCAT31(local_5c._1_3_,0x2d);
    local_5c = CONCAT13(0x2d,(undefined3)local_5c);
    local_58._0_3_ = CONCAT12(0x54,(undefined2)local_58);
    local_53 = 0x3a;
    local_50 = 0x3a;
    local_4d = 0x2e;
    uVar6 = FUN_01bf0ff0(iVar24,iVar22,36000,0);
    local_58 = CONCAT13(uVar6,(undefined3)local_58) | 0x30000000;
    cVar7 = FUN_01bf0fb0(uVar14 + 1,iVar18 + (uint)(0xfffffffe < uVar14),10,0);
    local_58 = CONCAT31(local_58._1_3_,cVar7 + '0');
    uVar29 = FUN_01bf0ff0(iVar24,iVar22,0xe10,0);
    FUN_01bf0ff0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),10,0);
    local_54 = extraout_r2 | 0x30;
    uVar29 = FUN_01bf0ff0(iVar24,iVar22,600,0);
    FUN_01bf0ff0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),6,0);
    local_52 = extraout_r2_00 | 0x30;
    uVar29 = FUN_01bf0ff0(iVar24,iVar22,0x3c,0);
    FUN_01bf0ff0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),10,0);
    local_51 = extraout_r2_01 | 0x30;
    uVar29 = FUN_01bf0ff0(iVar24,iVar22,10,0);
    FUN_01bf0ff0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),6,0);
    local_4f = extraout_r2_02 | 0x30;
    iVar19 = iVar23 + 3;
    local_4e = (char)iVar24 + (char)uVar29 * -10 | 0x30;
    local_58._0_2_ = CONCAT11((char)(uVar14 + 1) + cVar7 * -10 + '0',(undefined1)local_58);
    lVar2 = (uVar27 & 0xffffffff) * 100 +
            CONCAT44(iVar21 * 100,(iVar13 / 0x23ab1 + uVar1) * 400 + 2000) +
            CONCAT44(iVar20 << 2 | uVar16 >> 0x1e,uVar16 * 4) + uVar28;
    if (0xc < iVar19) {
      iVar19 = iVar23 + -9;
      lVar2 = lVar2 + 1;
    }
    uVar3 = (undefined4)((ulonglong)lVar2 >> 0x20);
    uVar9 = (undefined4)lVar2;
    cVar7 = FUN_01bf0ff0(uVar9,uVar3,1000,0);
    local_60 = CONCAT31(local_60._1_3_,cVar7 + '0');
    uVar29 = FUN_01bf0ff0(uVar9,uVar3,10,0);
    FUN_01bf0ff0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),10,0);
    local_60 = CONCAT13(local_60._3_1_,CONCAT12(extraout_r2_03,(undefined2)local_60)) | 0x300000;
    uVar30 = FUN_01bf0ff0(uVar9,uVar3,100,0);
    FUN_01bf0ff0((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),10,0);
    uVar9 = local_5c;
    cVar7 = (char)(iVar19 / 10);
    local_5c._3_1_ = SUB41(uVar9,3);
    local_5c._0_3_ =
         CONCAT12((char)iVar19 + cVar7 * -10 + '0',CONCAT11(cVar7 + '0',(undefined1)local_5c));
    local_60 = CONCAT13((char)lVar2 + (char)uVar29 * -10,
                        (int3)CONCAT22(local_60._2_2_,CONCAT11(extraout_r2_04,(undefined1)local_60))
                       ) | 0x30003000;
    cVar7 = *(char *)(param_1 + 0x10);
    if (cVar7 == '\x01' || uVar5 == 0 && cVar7 == '\0') {
      uVar9 = 0x14;
      local_4d = 0x5a;
    }
    else {
      if (cVar7 == '\x02') {
        bVar8 = 0x5a;
        uVar9 = 0x18;
      }
      else {
        if (cVar7 == '\x03') {
          uVar26 = (ulonglong)uVar5 * 0x346dc5d7 >> 0x2b;
          local_48 = CONCAT13(local_48._3_1_,0x5a0000);
          uVar27 = (ulonglong)uVar5 * 0x14f8b589 >> 0x2d;
          uVar9 = 0x1b;
          local_48 = CONCAT31(CONCAT21(local_48._2_2_,
                                       (char)(uVar5 / 1000) + (char)((uVar5 / 1000) / 10) * -10),
                              (char)uVar26 + (char)((uint)uVar26 / 10) * -10) | 0x3030;
          bVar8 = (char)uVar27 + (char)((uint)((short)uVar27 * 0x199a) >> 0x10) * -10;
        }
        else {
          cVar7 = (char)((ulonglong)uVar5 * 0x1999999a >> 0x20);
          uVar26 = (ulonglong)uVar5 * 0x14f8b589 >> 0x2d;
          local_44 = CONCAT11(local_44._1_1_,(char)uVar5 + cVar7 * -10) | 0x30;
          uVar27 = (ulonglong)uVar5 * 0x346dc5d7 >> 0x2b;
          uVar9 = 0x1e;
          local_48 = CONCAT31(CONCAT21(CONCAT11(cVar7 + (char)((uint)((ulonglong)uVar5 * 0x1999999a
                                                                     >> 0x20) / 10) * -10,
                                                (char)((ulonglong)uVar5 * 0x28f5c29 >> 0x20) +
                                                (char)((uint)((ulonglong)uVar5 * 0x28f5c29 >> 0x20)
                                                      / 10) * -10),
                                       (char)(uVar5 / 1000) + (char)((uVar5 / 1000) / 10) * -10),
                              (char)uVar27 + (char)((uint)uVar27 / 10) * -10) | 0x30303030;
          bVar8 = (char)uVar26 + (char)((uint)((short)uVar26 * 0x199a) >> 0x10) * -10;
        }
        bVar8 = bVar8 | 0x30;
      }
      local_4c = CONCAT13(bVar8,CONCAT12((char)(uVar5 / 1000000) +
                                         (char)((uint)((short)(uVar5 / 1000000) * 0x199a) >> 0x10) *
                                         -10,CONCAT11((char)((ulonglong)uVar5 * 0x1ad7f29b >> 0x34)
                                                      + (char)((uint)((short)(ushort)((ulonglong)
                                                                                      uVar5 * 
                                                  0x1ad7f29b >> 0x34) * 0x67) >> 10) * -10,
                                                  (char)((ulonglong)uVar5 * 0x2af31dc5 >> 0x38)))) |
                 0x303030;
    }
    FUN_012fbd94(&local_3c,&local_60,uVar9);
    if (local_3c == 1) {
      local_30 = local_38;
      local_2c = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00477afd,0x19,&local_30,&DAT_01cf43d4,&DAT_01cf4404);
    }
    uVar9 = (**(code **)(param_2[1] + 0xc))(*param_2,local_38,local_34);
  }
  return uVar9;
}

