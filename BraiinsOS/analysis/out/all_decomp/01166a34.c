// FUN_01166a34 @ 01166a34 size=1884 calls_out=6 calls_in=0
// strings: 

int FUN_01166a34(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

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
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  undefined4 uVar37;
  int iVar38;
  bool bVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  undefined8 uVar43;
  int local_e8;
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
    uVar30 = param_1[0x1f];
    local_7c = (uint)(local_74 != 0);
    iVar35 = param_1[0x1e];
    iVar33 = uVar30 * 100 + iVar35;
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
    iVar31 = *param_1;
    iVar28 = param_1[0xc];
    iVar23 = param_1[0xf];
    iVar42 = param_1[3];
    uVar24 = param_1[1];
    local_6c = local_7c;
    local_64 = local_74;
    local_60 = local_70;
LAB_01166cd0:
    do {
      uVar43 = FUN_00f45584(&local_7c);
      uVar25 = (undefined4)((ulonglong)uVar43 >> 0x20);
      iVar41 = (int)uVar43;
      if (iVar41 == 0) {
        return 0;
      }
      iVar27 = *(int *)(iVar41 + 4);
      iVar38 = *(int *)(iVar41 + 8);
      if (iVar42 != 0) {
        local_48 = iVar10;
        local_44 = iVar11;
        local_40 = iVar12;
        local_3c = iVar13;
        local_38 = uVar8;
        uStack_34 = uVar9;
        local_30 = uVar6;
        uStack_2c = uVar7;
        FUN_011df94c(&local_48,iVar27,iVar38);
        uVar29 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar29 * 0xb36a80d2;
        uVar32 = (uint)lVar1;
        uVar4 = local_38 ^ 0xff;
        uVar29 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar29 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar36 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        uVar5 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                uVar29 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
        lVar1 = (ulonglong)uVar36 * (ulonglong)uVar5;
        uVar29 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
                 uVar32 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
        uVar4 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                uVar29 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar4;
        uVar32 = (uint)lVar2;
        uVar4 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18) * ~local_30 + uVar4 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18) ^ (uint)lVar1;
        uVar32 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
                 uVar32 >> 0x18) ^
                 uVar29 * uVar36 +
                 uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                          (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar29 = uVar32;
        if ((uVar5 & 0x20) != 0) {
          uVar29 = uVar4;
          uVar4 = uVar32;
        }
        uVar29 = uVar4 << (uVar5 & 0x1f) | (uVar29 >> 1) >> (~uVar5 & 0x1f);
        uVar4 = uVar29 >> 0x19;
        local_e8 = 0;
        while( true ) {
          uVar29 = uVar24 & uVar29;
          uVar32 = *(uint *)(iVar31 + uVar29);
          uVar5 = uVar32 ^ uVar4 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar40 = uVar5 - 1 & uVar5;
            uVar36 = uVar29 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                     uVar24;
            iVar26 = iVar31 + -0x20 + uVar36 * -0x20;
            uVar5 = uVar40;
            if (iVar38 == *(int *)(iVar26 + 8)) {
              uVar37 = *(undefined4 *)(iVar26 + 4);
              iVar26 = thunk_FUN_016dd50a(iVar27,uVar37,iVar38);
              if (iVar26 == 0) {
                local_58 = 0x80000000;
                local_54 = uVar37;
                local_50 = iVar38;
                local_4c = param_3;
                iVar27 = FUN_011d018c(iVar31 + -0x14 + uVar36 * -0x20,uVar25,&local_58,param_4,
                                      param_5);
                if (iVar27 != 0) goto LAB_01167164;
                if (iVar23 == 0) goto LAB_01166cd0;
                uVar37 = *(undefined4 *)(iVar41 + 4);
                iVar41 = *(int *)(iVar41 + 8);
                local_48 = iVar18;
                local_44 = iVar19;
                local_40 = iVar20;
                local_3c = iVar21;
                local_38 = uVar16;
                uStack_34 = uVar17;
                local_30 = uVar14;
                uStack_2c = uVar15;
                FUN_011df94c(&local_48,uVar37,iVar41);
                uVar4 = local_38 ^ 0xff;
                uVar29 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                         (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
                lVar1 = (ulonglong)uVar29 * 0xb36a80d2;
                uVar5 = (uint)lVar1;
                uVar36 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                         | uVar5 >> 0x18) ^
                         uStack_34 * 0x2df45158 +
                         uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
                uVar32 = uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 |
                         (uVar36 >> 0x10 & 0xff) << 8 | uVar36 >> 0x18;
                lVar2 = (ulonglong)~local_30 * (ulonglong)uVar32;
                uVar40 = (uint)lVar2;
                uVar29 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                          (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                         uVar29 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
                iVar27 = 0;
                uVar5 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 |
                         (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) ^
                        (uint)((ulonglong)uVar4 * 0x2df45158);
                uVar4 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                        uVar5 >> 0x18) * ~local_30 +
                        uVar32 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
                uVar29 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                         (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
                lVar1 = (ulonglong)uVar29 * (ulonglong)uVar5;
                uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 |
                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) ^ (uint)lVar1;
                uVar32 = (uVar40 << 0x18 | (uVar40 >> 8 & 0xff) << 0x10 |
                          (uVar40 >> 0x10 & 0xff) << 8 | uVar40 >> 0x18) ^
                         uVar36 * uVar29 +
                         uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                                  (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                         (int)((ulonglong)lVar1 >> 0x20);
                uVar29 = uVar32;
                if ((uVar5 & 0x20) != 0) {
                  uVar29 = uVar4;
                  uVar4 = uVar32;
                }
                uVar29 = uVar4 << (uVar5 & 0x1f) | (uVar29 >> 1) >> (~uVar5 & 0x1f);
                uVar4 = uVar29 >> 0x19;
                goto LAB_01166bb0;
              }
            }
          }
          if ((uVar32 & 0x80808080 & uVar32 << 1) != 0) break;
          local_e8 = local_e8 + 4;
          uVar29 = uVar29 + local_e8;
        }
      }
      local_48 = -0x80000000;
      local_44 = iVar27;
      local_40 = iVar38;
      local_3c = param_3;
      if (uVar30 != 0) {
        bVar39 = false;
        iVar27 = iVar35;
        do {
          while( true ) {
            cVar3 = FUN_01164a60(iVar27,*(undefined4 *)(iVar41 + 4),*(undefined4 *)(iVar41 + 8));
            iVar38 = iVar27 + 100;
            if (cVar3 != '\0') break;
            iVar27 = iVar38;
            if (iVar38 == iVar33) {
              if (!bVar39) goto LAB_01167140;
              goto LAB_01166cd0;
            }
          }
          iVar27 = FUN_011d018c(iVar27 + 0x50,uVar25,&local_48,param_4,param_5);
          if (iVar27 != 0) goto LAB_01167164;
          bVar39 = true;
          iVar27 = iVar38;
        } while (iVar38 != iVar33);
        goto LAB_01166cd0;
      }
LAB_01167140:
      iVar27 = FUN_011d018c(param_1 + 0x18,uVar25,&local_48,param_4,param_5);
    } while (iVar27 == 0);
  }
LAB_01167164:
  return iVar27;
LAB_01166bb0:
  uVar29 = uVar22 & uVar29;
  uVar32 = *(uint *)(iVar28 + uVar29);
  uVar5 = uVar32 ^ uVar4 * 0x1010101;
  for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
    uVar36 = uVar29 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar22;
    iVar38 = iVar28 + -0x14 + uVar36 * -0x14;
    if ((iVar41 == *(int *)(iVar38 + 8)) &&
       (iVar38 = thunk_FUN_016dd50a(uVar37,*(undefined4 *)(iVar38 + 4),iVar41), iVar38 == 0)) {
      iVar27 = iVar28 + uVar36 * -0x14;
      puVar34 = *(uint **)(iVar27 + -8);
      iVar41 = *(int *)(iVar27 + -4) << 2;
      goto LAB_01166c80;
    }
  }
  if ((uVar32 & 0x80808080 & uVar32 << 1) != 0) goto LAB_01166cd0;
  iVar27 = iVar27 + 4;
  uVar29 = uVar29 + iVar27;
  goto LAB_01166bb0;
LAB_01166c80:
  if (iVar41 == 0) goto LAB_01166cd0;
  uVar4 = *puVar34;
  if (uVar30 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar30,&DAT_018890b0);
  }
  iVar27 = FUN_011d018c(uVar4 * 100 + iVar35 + 0x50,uVar25,&local_58,param_4,param_5);
  iVar41 = iVar41 + -4;
  puVar34 = puVar34 + 1;
  if (iVar27 != 0) goto LAB_01167164;
  goto LAB_01166c80;
}

