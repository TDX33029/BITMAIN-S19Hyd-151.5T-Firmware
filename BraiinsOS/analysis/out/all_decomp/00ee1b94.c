// FUN_00ee1b94 @ 00ee1b94 size=2296 calls_out=5 calls_in=0
// strings: all times should be after the epoch | Conversion to utf8 failed

undefined4 FUN_00ee1b94(int *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint3 uVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  char cVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar16 = *param_1;
  local_34 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar19 = *param_2;
  iVar14 = param_2[1];
  FUN_015f3c24(&local_60,iVar16,&local_38);
  uVar6 = local_50;
  uVar24 = local_58;
  if ((local_60 & 1) != 0) {
    local_5c = local_54;
    local_60 = local_58;
    local_58 = local_50;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("all times should be after the epoch",0x23,&local_60,&DAT_0188464c,&DAT_0188465c);
  }
  if (0x39 < local_54 && (uint)(local_58 < 0xfff44180) <= 0x3a - local_54) {
    return 1;
  }
  iVar8 = FUN_01846088(local_58,local_54,0x15180,0);
  uVar22 = (iVar8 + -0x2b09) % 0x23ab1;
  uVar10 = (int)uVar22 >> 0x1f;
  uVar9 = uVar22 + 0x23ab1;
  uVar18 = uVar10 + (0xfffdc54e < uVar22);
  if (-1 < (int)uVar22) {
    uVar9 = uVar22;
    uVar18 = uVar10;
  }
  uVar26 = FUN_01846088(uVar9,uVar18,0x8eac,0);
  if (uVar18 == uVar9 < 0x23ab0 && (uint)(0x8eab < uVar9 - 0x23ab0) <= uVar18 - (uVar9 < 0x23ab0)) {
    uVar26 = 3;
  }
  iVar23 = (int)(uVar26 >> 0x20);
  lVar2 = (uVar26 & 0xffffffff) * 0xffff7154;
  uVar22 = (uint)lVar2;
  uVar12 = uVar22 + uVar9;
  uVar18 = iVar23 * -0x8eac + ((int)((ulonglong)lVar2 >> 0x20) - (int)uVar26) + uVar18 +
           (uint)CARRY4(uVar22,uVar9);
  uVar27 = FUN_01846048(uVar12,uVar18,0x5b5,0);
  if (uVar18 == uVar12 < 0x8ead && (uint)(0x5b4 < uVar12 - 0x8ead) <= uVar18 - (uVar12 < 0x8ead)) {
    uVar27 = 0x18;
  }
  iVar20 = (int)(uVar27 >> 0x20);
  uVar9 = (uint)uVar27;
  lVar2 = (uVar27 & 0xffffffff) * 0xfffffa4b;
  uVar22 = (uint)lVar2;
  uVar13 = uVar22 + uVar12;
  uVar18 = iVar20 * -0x5b5 + ((int)((ulonglong)lVar2 >> 0x20) - uVar9) + uVar18 +
           (uint)CARRY4(uVar22,uVar12);
  uVar27 = FUN_01846048(uVar13,uVar18,0x16d,0);
  if (uVar18 == uVar13 < 0x5b4 && (uint)(0x16c < uVar13 - 0x5b4) <= uVar18 - (uVar13 < 0x5b4)) {
    uVar27 = 3;
  }
  lVar2 = (uVar27 & 0xffffffff) * 0xfffffe93;
  uVar12 = (uint)lVar2;
  uVar22 = uVar12 + uVar13;
  uVar18 = (int)(uVar27 >> 0x20) * -0x16d + ((int)((ulonglong)lVar2 >> 0x20) - (int)uVar27) + uVar18
           + (uint)CARRY4(uVar12,uVar13);
  cVar21 = '\x03';
  uVar24 = uVar24 + iVar8 * -0x15180;
  if ((int)uVar18 < (int)(uint)(uVar22 < 0x1f)) {
    cVar17 = '\0';
    uVar15 = 0;
    uVar13 = uVar18;
    uVar12 = uVar22;
    goto LAB_00ee1ea4;
  }
  bVar25 = uVar22 < 0x1f;
  uVar12 = uVar22 - 0x1f;
  cVar17 = '\x01';
  if (uVar18 != 0 || uVar18 < (0x3c < uVar22)) {
    uVar12 = uVar22 - 0x3d;
    cVar17 = '\x02';
    uVar13 = uVar18 - (uVar22 < 0x3d);
    uVar15 = 0;
    if (uVar18 == 0 && (0x5b < uVar22) <= uVar18) goto LAB_00ee1ea4;
    uVar12 = uVar22 - 0x5c;
    uVar13 = uVar18 - (uVar22 < 0x5c);
    if (uVar18 == 0 && (0x79 < uVar22) <= uVar18) {
      cVar17 = '\x03';
      goto LAB_00ee1ea4;
    }
    uVar12 = uVar22 - 0x7a;
    cVar17 = '\x04';
    uVar13 = uVar18 - (uVar22 < 0x7a);
    if (uVar18 == 0 && (0x98 < uVar22) <= uVar18) goto LAB_00ee1ea4;
    uVar12 = uVar22 - 0x99;
    cVar17 = '\x05';
    uVar13 = uVar18 - (uVar22 < 0x99);
    if (uVar18 == 0 && (0xb7 < uVar22) <= uVar18) goto LAB_00ee1ea4;
    uVar12 = uVar22 - 0xb8;
    cVar17 = '\x06';
    uVar13 = uVar18 - (uVar22 < 0xb8);
    if (uVar18 == 0 && (0xd5 < uVar22) <= uVar18) goto LAB_00ee1ea4;
    uVar12 = uVar22 - 0xd6;
    cVar17 = '\a';
    uVar13 = uVar18 - (uVar22 < 0xd6);
    if (uVar18 == 0 && (0xf4 < uVar22) <= uVar18) goto LAB_00ee1ea4;
    bVar25 = uVar22 < 0xf5;
    uVar12 = uVar22 - 0xf5;
    cVar17 = '\b';
    if (uVar18 != 0 || uVar18 < (0x112 < uVar22)) {
      uVar12 = uVar22 - 0x113;
      cVar17 = '\t';
      uVar13 = uVar18 - (uVar22 < 0x113);
      uVar15 = 0;
      if (uVar18 >> 1 != 0 ||
          uVar18 >> 1 < (uint)(0x98 < ((uint)((byte)uVar18 & 1) << 0x1f | uVar22 >> 1))) {
        uVar12 = uVar22 - 0x132;
        uVar13 = uVar18 - (uVar22 < 0x132);
        cVar21 = -9;
        uVar15 = 1;
        cVar17 = '\n';
        if (uVar18 != 0 || uVar18 < (0x150 < uVar22)) {
          uVar13 = 0xfffffeaf;
          if (uVar18 >> 1 != 0 ||
              uVar18 >> 1 < (uint)(0xb6 < ((uint)((byte)uVar18 & 1) << 0x1f | uVar22 >> 1))) {
            uVar13 = 0xfffffe92;
          }
          uVar12 = uVar22 + uVar13;
          cVar17 = '\v';
          uVar13 = (uVar18 - 1) + (uint)CARRY4(uVar22,uVar13);
        }
      }
      goto LAB_00ee1ea4;
    }
  }
  uVar13 = uVar18 - bVar25;
  uVar15 = 0;
LAB_00ee1ea4:
  local_50 = CONCAT13(0x2e,(undefined3)local_50);
  local_4c = 0x30303030;
  local_48 = 0x30303030;
  local_44 = 0x5a30;
  local_50 = CONCAT31(local_50._1_3_,0x3a);
  local_54._0_2_ = CONCAT11(0x3a,(undefined1)local_54);
  local_58._0_3_ = CONCAT12(0x54,(undefined2)local_58);
  local_5c = CONCAT13(0x2d,(undefined3)local_5c);
  local_5c = CONCAT31(local_5c._1_3_,0x2d);
  cVar7 = FUN_01846048(uVar12 + 1,uVar13 + (0xfffffffe < uVar12),10,0);
  local_58._0_2_ = CONCAT11((char)(uVar12 + 1) + cVar7 * -10 + '0',cVar7 + '0');
  iVar1 = (short)(char)(cVar17 + cVar21) * 0x67;
  local_58 = CONCAT13((char)(uVar24 / 36000),(undefined3)local_58) | 0x30000000;
  lVar3 = (uVar26 & 0xffffffff) * 100 +
          CONCAT44(iVar23 * 100,((iVar8 + -0x2b09) / 0x23ab1 + uVar10) * 400 + 2000) +
          CONCAT44(iVar20 << 2 | uVar9 >> 0x1e,uVar9 * 4) + uVar27 + (ulonglong)uVar15;
  uVar13 = (uint)lVar3;
  uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
  cVar7 = FUN_01846088(uVar13,uVar12,1000,0);
  uVar11 = local_5c;
  local_60 = CONCAT31(local_60._1_3_,cVar7 + '0');
  cVar7 = (char)(iVar1 >> 10) - (char)(iVar1 >> 0x1f);
  local_5c._3_1_ = SUB41(uVar11,3);
  local_5c._0_3_ =
       CONCAT12(cVar17 + cVar21 + cVar7 * -10 + '0',CONCAT11(cVar7 + '0',(undefined1)local_5c));
  cVar21 = (char)(uVar24 / 10);
  local_50 = CONCAT22(CONCAT11(local_50._3_1_,(char)uVar24 + cVar21 * -10),
                      CONCAT11(cVar21 + (char)((uVar24 / 10) * 0xaaab >> 0x12) * -6,
                               (undefined1)local_50)) | 0x303000;
  uVar10 = uVar24 / 600;
  uVar18 = uVar13 >> 1 | uVar12 * -0x80000000;
  uVar22 = uVar18 + (uVar12 >> 1) + (uint)CARRY4(uVar18,uVar12 >> 1);
  uVar22 = uVar22 - (((uint)((ulonglong)uVar22 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar22 / 5);
  uVar9 = uVar18 - uVar22;
  lVar2 = (ulonglong)uVar9 * 0xcccccccd;
  uVar9 = ((uVar12 >> 1) - (uint)(uVar18 < uVar22)) * -0x33333333 +
          uVar9 * -0x33333334 + (int)((ulonglong)lVar2 >> 0x20);
  uVar18 = uVar24 / 0xe10;
  local_54 = CONCAT31((int3)(CONCAT13((char)(uVar24 / 0x3c) +
                                      (char)((uVar24 / 0x3c) * 0xcccd >> 0x13) * -10,
                                      CONCAT12((char)uVar10 +
                                               ((byte)(uVar10 * 0xab0000 >> 0x1a) +
                                               (char)(uVar10 * 0xab >> 10) * '\x02') * -2,
                                               (undefined2)local_54)) >> 8),
                      (char)uVar18 +
                      ((byte)(uVar18 * 0xcd0000 >> 0x1b) + (char)(uVar18 * 0xcd >> 0xb) * '\x04') *
                      -2) | 0x30300030;
  uVar24 = (uint)lVar2 >> 1 | uVar9 * -0x80000000;
  uVar27 = FUN_01846088(uVar13,uVar12,100,0);
  uVar26 = uVar27 >> 1;
  lVar5 = uVar26 + CONCAT44((int)uVar26,(int)(uVar26 >> 0x20));
  uVar10 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar9 = uVar9 >> 1;
  uVar18 = uVar24 + uVar9 + (uint)CARRY4(uVar24,uVar9);
  uVar24 = (uint)((ulonglong)uVar18 * 0xcccccccd);
  local_60 = CONCAT13((char)lVar3 + (byte)lVar2 * -10,
                      CONCAT12((byte)lVar2 & 1 |
                               ((char)uVar18 -
                               (((byte)((ulonglong)uVar18 * 0xcccccccd >> 0x20) & 0xfc) +
                               (char)(uVar18 / 5))) * '\x02',
                               CONCAT11((byte)uVar27 & 1 |
                                        ((char)((ulonglong)lVar5 >> 0x20) -
                                        (((byte)((ulonglong)uVar10 * 0xcccccccd >> 0x20) & 0xfc) +
                                        (char)(uVar10 / 5))) * '\x02',(undefined1)local_60))) |
             0x30303000;
  cVar21 = *(char *)(iVar16 + 0x10);
  if (cVar21 == '\x01' || uVar6 == 0 && cVar21 == '\0') {
    uVar11 = 0x14;
    local_50 = CONCAT13(0x5a,(undefined3)local_50);
  }
  else {
    uVar26 = (ulonglong)uVar6 * 0x1ad7f29b >> 0x34;
    uVar24 = (uint)uVar26;
    uVar4 = CONCAT12((char)(uVar6 / 1000000) +
                     (char)((uint)((short)(uVar6 / 1000000) * 0x199a) >> 0x10) * -10,
                     CONCAT11((char)uVar26 +
                              (char)((uint)((short)(ushort)((ulonglong)uVar6 * 0x1ad7f29b >> 0x34) *
                                           0x67) >> 10) * -10,
                              (char)((ulonglong)uVar6 * 0x2af31dc5 >> 0x38)));
    if (cVar21 == '\x02') {
      uVar11 = 0x18;
      local_4c = CONCAT13(0x5a,uVar4 | 0x303030);
    }
    else if (cVar21 == '\x03') {
      uVar26 = (ulonglong)uVar6 * 0x346dc5d7 >> 0x2b;
      local_48 = CONCAT13(local_48._3_1_,0x5a0000);
      uVar27 = (ulonglong)uVar6 * 0x14f8b589 >> 0x2d;
      uVar24 = (short)uVar27 * 0x199a;
      uVar11 = 0x1b;
      local_48 = CONCAT31(CONCAT21(local_48._2_2_,
                                   (char)(uVar6 / 1000) + (char)((uVar6 / 1000) / 10) * -10),
                          (char)uVar26 + (char)((uint)uVar26 / 10) * -10) | 0x3030;
      local_4c = CONCAT13((char)uVar27 + (char)(uVar24 >> 0x10) * -10,uVar4) | 0x30303030;
    }
    else {
      cVar21 = (char)((ulonglong)uVar6 * 0x1999999a >> 0x20);
      uVar26 = (ulonglong)uVar6 * 0x14f8b589 >> 0x2d;
      local_44 = CONCAT11(local_44._1_1_,(char)uVar6 + cVar21 * -10) | 0x30;
      uVar10 = (uVar6 / 1000) / 10;
      uVar27 = (ulonglong)uVar6 * 0x346dc5d7 >> 0x2b;
      uVar24 = uVar10 * 5;
      uVar11 = 0x1e;
      local_48 = CONCAT31(CONCAT21(CONCAT11(cVar21 + (char)((uint)((ulonglong)uVar6 * 0x1999999a >>
                                                                  0x20) / 10) * -10,
                                            (char)((ulonglong)uVar6 * 0x28f5c29 >> 0x20) +
                                            (char)((uint)((ulonglong)uVar6 * 0x28f5c29 >> 0x20) / 10
                                                  ) * -10),(char)(uVar6 / 1000) + (char)uVar10 * -10
                                  ),(char)uVar27 + (char)((uint)uVar27 / 10) * -10) | 0x30303030;
      local_4c = CONCAT13((char)uVar26 + (char)((uint)((short)uVar26 * 0x199a) >> 0x10) * -10,uVar4)
                 | 0x30303030;
    }
  }
  FUN_00fab1e0(&local_38,&local_60,uVar11,uVar24);
  if (local_38 == 1) {
    local_40 = local_34;
    local_3c = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("Conversion to utf8 failed",0x19,&local_40,&DAT_0188463c,&DAT_0188466c);
  }
  uVar19 = (**(code **)(iVar14 + 0xc))(uVar19,local_34,local_30);
  return uVar19;
}

