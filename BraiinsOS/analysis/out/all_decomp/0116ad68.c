// FUN_0116ad68 @ 0116ad68 size=1320 calls_out=6 calls_in=0
// strings: 

int FUN_0116ad68(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  undefined8 uVar37;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  iVar4 = 0;
  if (*param_2 == '\x05') {
    local_74 = *(int *)(param_2 + 4);
    local_70 = *(undefined4 *)(param_2 + 8);
    local_68 = 0;
    local_78 = 0;
    uVar28 = param_1[0x16];
    local_5c = *(undefined4 *)(param_2 + 0xc);
    if (local_74 == 0) {
      local_5c = 0;
    }
    iVar26 = param_1[0x15];
    iVar36 = iVar26 + uVar28 * 0x28;
    uVar11 = param_1[4];
    uVar12 = param_1[5];
    uVar13 = param_1[6];
    uVar14 = param_1[7];
    iVar15 = param_1[8];
    iVar16 = param_1[9];
    iVar17 = param_1[10];
    iVar5 = param_1[0xb];
    iVar6 = param_1[0x12];
    iVar18 = param_1[0x13];
    local_7c = (uint)(local_74 != 0);
    uVar7 = param_1[1];
    iVar21 = *param_1;
    iVar8 = param_1[3];
    local_6c = local_7c;
    local_64 = local_74;
    local_60 = local_70;
LAB_0116aea4:
    do {
      uVar37 = FUN_00f45584(&local_7c);
      uVar19 = (undefined4)((ulonglong)uVar37 >> 0x20);
      iVar4 = (int)uVar37;
      if (iVar4 == 0) {
        return 0;
      }
      iVar31 = *(int *)(iVar4 + 4);
      iVar27 = *(int *)(iVar4 + 8);
      if (iVar18 != 0) {
        iVar24 = iVar18 << 5;
        iVar34 = iVar6;
        do {
          if (*(int *)(iVar34 + 8) == iVar27) {
            uVar29 = *(undefined4 *)(iVar34 + 4);
            iVar9 = thunk_FUN_016dd50a(uVar29,iVar31,iVar27);
            if (iVar9 == 0) {
              local_58 = 0x80000000;
              local_54 = uVar29;
              local_50 = iVar27;
              local_4c = param_3;
              iVar27 = FUN_011d018c(iVar34 + 0xc,uVar19,&local_58,param_4,param_5);
              if (iVar27 != 0) {
                return iVar27;
              }
              if (iVar8 == 0) goto LAB_0116aea4;
              uVar29 = *(undefined4 *)(iVar4 + 4);
              iVar4 = *(int *)(iVar4 + 8);
              local_48 = iVar15;
              local_44 = iVar16;
              local_40 = iVar17;
              local_3c = iVar5;
              local_38 = uVar13;
              uStack_34 = uVar14;
              local_30 = uVar11;
              local_2c = uVar12;
              FUN_011df94c(&local_48,uVar29,iVar4);
              uVar10 = local_38 ^ 0xff;
              uVar30 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                       (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
              lVar1 = (ulonglong)uVar30 * 0xb36a80d2;
              uVar22 = (uint)lVar1;
              uVar35 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8
                       | uVar22 >> 0x18) ^
                       uStack_34 * 0x2df45158 +
                       uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
              uVar20 = uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8
                       | uVar35 >> 0x18;
              uVar23 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                       (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
              lVar2 = (ulonglong)~local_30 * (ulonglong)uVar20;
              uVar32 = (uint)lVar2;
              uVar22 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                        (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                       uVar30 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
              uVar30 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 |
                        (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) ^
                       (uint)((ulonglong)uVar10 * 0x2df45158);
              uVar10 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8
                       | uVar30 >> 0x18) * ~local_30 +
                       uVar20 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
              lVar1 = (ulonglong)uVar23 * (ulonglong)uVar30;
              uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 |
                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) ^ (uint)lVar1;
              uVar20 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8
                       | uVar32 >> 0x18) ^
                       uVar35 * uVar23 +
                       uVar30 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                                 (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                       (int)((ulonglong)lVar1 >> 0x20);
              uVar22 = uVar20;
              if ((uVar30 & 0x20) != 0) {
                uVar22 = uVar10;
                uVar10 = uVar20;
              }
              uVar22 = uVar10 << (uVar30 & 0x1f) | (uVar22 >> 1) >> (~uVar30 & 0x1f);
              iVar27 = 0;
              uVar10 = uVar22 >> 0x19;
              goto LAB_0116b09c;
            }
          }
          iVar34 = iVar34 + 0x20;
          iVar24 = iVar24 + -0x20;
        } while (iVar24 != 0);
      }
      local_48 = -0x80000000;
      local_44 = iVar31;
      local_40 = iVar27;
      local_3c = param_3;
      if (uVar28 != 0) {
        bVar25 = false;
        iVar27 = iVar26;
        do {
          while( true ) {
            cVar3 = FUN_0116bd94(iVar27,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
            iVar31 = iVar27 + 0x28;
            if (cVar3 != '\0') break;
            iVar27 = iVar31;
            if (iVar31 == iVar36) {
              if (!bVar25) goto LAB_0116ae84;
              goto LAB_0116aea4;
            }
          }
          iVar27 = FUN_011d018c(iVar27 + 0x14,uVar19,&local_48,param_4,param_5);
          if (iVar27 != 0) {
            return iVar27;
          }
          bVar25 = true;
          iVar27 = iVar31;
        } while (iVar31 != iVar36);
        goto LAB_0116aea4;
      }
LAB_0116ae84:
      iVar4 = FUN_011d018c(param_1 + 0xc,uVar19,&local_48,param_4,param_5);
    } while (iVar4 == 0);
  }
  return iVar4;
LAB_0116b09c:
  uVar22 = uVar7 & uVar22;
  uVar20 = *(uint *)(iVar21 + uVar22);
  uVar30 = uVar20 ^ uVar10 * 0x1010101;
  uVar30 = ~uVar30 & 0x80808080 & uVar30 + 0xfefefeff;
  while( true ) {
    if (uVar30 == 0) goto LAB_0116b130;
    uVar23 = uVar22 + ((uint)LZCOUNT(uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                                     (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) >> 3) & uVar7;
    iVar31 = iVar21 + -0x14 + uVar23 * -0x14;
    if ((iVar4 == *(int *)(iVar31 + 8)) &&
       (iVar31 = thunk_FUN_016dd50a(uVar29,*(undefined4 *)(iVar31 + 4),iVar4), iVar31 == 0)) break;
    uVar30 = uVar30 - 1 & uVar30;
  }
  iVar4 = iVar21 + uVar23 * -0x14;
  puVar33 = *(uint **)(iVar4 + -8);
  iVar4 = *(int *)(iVar4 + -4) << 2;
  while (iVar4 != 0) {
    uVar10 = *puVar33;
    if (uVar28 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,uVar28,&DAT_018890b0);
    }
    iVar27 = FUN_011d018c(iVar26 + uVar10 * 0x28 + 0x14,uVar19,&local_58,param_4,param_5);
    iVar4 = iVar4 + -4;
    puVar33 = puVar33 + 1;
    if (iVar27 != 0) {
      return iVar27;
    }
  }
  goto LAB_0116aea4;
LAB_0116b130:
  if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) goto LAB_0116aea4;
  iVar27 = iVar27 + 4;
  uVar22 = uVar22 + iVar27;
  goto LAB_0116b09c;
}

