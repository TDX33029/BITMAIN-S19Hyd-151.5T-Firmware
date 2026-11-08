// FUN_0116d4c4 @ 0116d4c4 size=1900 calls_out=6 calls_in=0
// strings: 

int FUN_0116d4c4(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  bool bVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  undefined8 uVar43;
  int local_dc;
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
  uint uStack_2c;
  
  iVar27 = 0;
  if (*param_2 == '\x05') {
    local_74 = *(int *)(param_2 + 4);
    local_70 = *(undefined4 *)(param_2 + 8);
    local_5c = *(undefined4 *)(param_2 + 0xc);
    if (local_74 == 0) {
      local_5c = 0;
    }
    local_68 = 0;
    local_78 = 0;
    iVar32 = param_1[0x1e];
    uVar35 = param_1[0x1f];
    iVar33 = iVar32 + uVar35 * 0x28;
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    uVar8 = param_1[6];
    uVar9 = param_1[7];
    iVar10 = param_1[8];
    iVar11 = param_1[9];
    iVar12 = param_1[10];
    iVar13 = param_1[0xb];
    uVar14 = param_1[0x10];
    uVar15 = param_1[0x11];
    uVar16 = param_1[0x12];
    uVar17 = param_1[0x13];
    iVar18 = param_1[0x14];
    iVar19 = param_1[0x15];
    iVar20 = param_1[0x16];
    iVar21 = param_1[0x17];
    uVar22 = param_1[0xd];
    local_7c = (uint)(local_74 != 0);
    iVar30 = *param_1;
    iVar28 = param_1[0xc];
    iVar23 = param_1[0xf];
    iVar40 = param_1[3];
    uVar24 = param_1[1];
    local_6c = local_7c;
    local_64 = local_74;
    local_60 = local_70;
LAB_0116d764:
    do {
      uVar43 = FUN_00f45584(&local_7c);
      uVar25 = (undefined4)((ulonglong)uVar43 >> 0x20);
      iVar31 = (int)uVar43;
      if (iVar31 == 0) {
        return 0;
      }
      iVar27 = *(int *)(iVar31 + 4);
      iVar39 = *(int *)(iVar31 + 8);
      if (iVar40 != 0) {
        local_48 = iVar10;
        local_44 = iVar11;
        local_40 = iVar12;
        local_3c = iVar13;
        local_38 = uVar8;
        uStack_34 = uVar9;
        local_30 = uVar6;
        uStack_2c = uVar7;
        FUN_011df94c(&local_48,iVar27,iVar39);
        uVar29 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar29 * 0xb36a80d2;
        uVar42 = (uint)lVar1;
        uVar4 = local_38 ^ 0xff;
        uVar29 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar29 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar36 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        uVar5 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                uVar29 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
        lVar1 = (ulonglong)uVar36 * (ulonglong)uVar5;
        uVar29 = (uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
                 uVar42 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
        uVar4 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                uVar29 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar4;
        uVar42 = (uint)lVar2;
        uVar4 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18) * ~local_30 + uVar4 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18) ^ (uint)lVar1;
        uVar36 = (uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
                 uVar42 >> 0x18) ^
                 uVar29 * uVar36 +
                 uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                          (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar29 = uVar36;
        if ((uVar5 & 0x20) != 0) {
          uVar29 = uVar4;
          uVar4 = uVar36;
        }
        uVar29 = uVar4 << (uVar5 & 0x1f) | (uVar29 >> 1) >> (~uVar5 & 0x1f);
        uVar4 = uVar29 >> 0x19;
        local_dc = 0;
        while( true ) {
          uVar29 = uVar24 & uVar29;
          uVar36 = *(uint *)(iVar30 + uVar29);
          uVar5 = uVar36 ^ uVar4 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar41 = uVar5 - 1 & uVar5;
            uVar42 = uVar29 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                     uVar24;
            iVar26 = iVar30 + -0x20 + uVar42 * -0x20;
            uVar5 = uVar41;
            if (iVar39 == *(int *)(iVar26 + 8)) {
              uVar37 = *(undefined4 *)(iVar26 + 4);
              iVar26 = thunk_FUN_016dd50a(iVar27,uVar37,iVar39);
              if (iVar26 == 0) {
                local_58 = 0x80000000;
                local_54 = uVar37;
                local_50 = iVar39;
                local_4c = param_3;
                iVar27 = FUN_011d018c(iVar30 + -0x14 + uVar42 * -0x20,uVar25,&local_58,param_4,
                                      param_5);
                if (iVar27 != 0) goto LAB_0116dc04;
                if (iVar23 == 0) goto LAB_0116d764;
                uVar37 = *(undefined4 *)(iVar31 + 4);
                iVar27 = *(int *)(iVar31 + 8);
                local_48 = iVar18;
                local_44 = iVar19;
                local_40 = iVar20;
                local_3c = iVar21;
                local_38 = uVar16;
                uStack_34 = uVar17;
                local_30 = uVar14;
                uStack_2c = uVar15;
                FUN_011df94c(&local_48,uVar37,iVar27);
                uVar4 = local_38 ^ 0xff;
                uVar29 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                         (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
                lVar1 = (ulonglong)uVar29 * 0xb36a80d2;
                uVar5 = (uint)lVar1;
                uVar36 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                         | uVar5 >> 0x18) ^
                         uStack_34 * 0x2df45158 +
                         uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
                uVar42 = uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 |
                         (uVar36 >> 0x10 & 0xff) << 8 | uVar36 >> 0x18;
                lVar2 = (ulonglong)~local_30 * (ulonglong)uVar42;
                uVar41 = (uint)lVar2;
                uVar29 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                          (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                         uVar29 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
                uVar5 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 |
                         (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) ^
                        (uint)((ulonglong)uVar4 * 0x2df45158);
                uVar4 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                        uVar5 >> 0x18) * ~local_30 +
                        uVar42 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
                uVar29 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                         (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
                lVar1 = (ulonglong)uVar29 * (ulonglong)uVar5;
                uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 |
                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) ^ (uint)lVar1;
                uVar36 = (uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 |
                          (uVar41 >> 0x10 & 0xff) << 8 | uVar41 >> 0x18) ^
                         uVar36 * uVar29 +
                         uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                                  (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                         (int)((ulonglong)lVar1 >> 0x20);
                uVar29 = uVar36;
                if ((uVar5 & 0x20) != 0) {
                  uVar29 = uVar4;
                  uVar4 = uVar36;
                }
                uVar29 = uVar4 << (uVar5 & 0x1f) | (uVar29 >> 1) >> (~uVar5 & 0x1f);
                iVar31 = 0;
                uVar4 = uVar29 >> 0x19;
                goto LAB_0116d638;
              }
            }
          }
          if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) break;
          local_dc = local_dc + 4;
          uVar29 = uVar29 + local_dc;
        }
      }
      local_48 = -0x80000000;
      local_44 = iVar27;
      local_40 = iVar39;
      local_3c = param_3;
      if (uVar35 != 0) {
        bVar38 = false;
        iVar27 = iVar32;
        do {
          while( true ) {
            cVar3 = FUN_0116bd94(iVar27,*(undefined4 *)(iVar31 + 4),*(undefined4 *)(iVar31 + 8));
            iVar39 = iVar27 + 0x28;
            if (cVar3 != '\0') break;
            iVar27 = iVar39;
            if (iVar39 == iVar33) {
              if (!bVar38) goto LAB_0116dbe0;
              goto LAB_0116d764;
            }
          }
          iVar27 = FUN_011d018c(iVar27 + 0x14,uVar25,&local_48,param_4,param_5);
          if (iVar27 != 0) goto LAB_0116dc04;
          bVar38 = true;
          iVar27 = iVar39;
        } while (iVar39 != iVar33);
        goto LAB_0116d764;
      }
LAB_0116dbe0:
      iVar27 = FUN_011d018c(param_1 + 0x18,uVar25,&local_48,param_4,param_5);
    } while (iVar27 == 0);
  }
LAB_0116dc04:
  return iVar27;
LAB_0116d638:
  uVar29 = uVar22 & uVar29;
  uVar36 = *(uint *)(iVar28 + uVar29);
  uVar5 = uVar36 ^ uVar4 * 0x1010101;
  for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
    uVar42 = uVar29 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar22;
    iVar39 = iVar28 + -0x14 + uVar42 * -0x14;
    if ((iVar27 == *(int *)(iVar39 + 8)) &&
       (iVar39 = thunk_FUN_016dd50a(uVar37,*(undefined4 *)(iVar39 + 4)), iVar39 == 0)) {
      iVar27 = iVar28 + uVar42 * -0x14;
      puVar34 = *(uint **)(iVar27 + -8);
      iVar31 = *(int *)(iVar27 + -4) << 2;
      goto LAB_0116d714;
    }
  }
  if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) goto LAB_0116d764;
  iVar31 = iVar31 + 4;
  uVar29 = uVar29 + iVar31;
  goto LAB_0116d638;
LAB_0116d714:
  if (iVar31 == 0) goto LAB_0116d764;
  uVar4 = *puVar34;
  if (uVar35 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar35,&DAT_018890b0);
  }
  iVar27 = FUN_011d018c(iVar32 + uVar4 * 0x28 + 0x14,uVar25,&local_58,param_4,param_5);
  iVar31 = iVar31 + -4;
  puVar34 = puVar34 + 1;
  if (iVar27 != 0) goto LAB_0116dc04;
  goto LAB_0116d714;
}

