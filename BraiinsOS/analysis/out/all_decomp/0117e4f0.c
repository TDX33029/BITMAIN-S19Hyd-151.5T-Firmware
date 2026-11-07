// FUN_0117e4f0 @ 0117e4f0 size=988 calls_out=4 calls_in=0
// strings: 

int FUN_0117e4f0(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
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
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  iVar3 = 0;
  if (*param_2 == '\x05') {
    local_74 = *(int *)(param_2 + 4);
    local_70 = *(undefined4 *)(param_2 + 8);
    iVar21 = *param_1;
    uVar22 = param_1[1];
    local_5c = *(undefined4 *)(param_2 + 0xc);
    if (local_74 == 0) {
      local_5c = 0;
    }
    local_7c = (uint)(local_74 != 0);
    local_68 = 0;
    local_78 = 0;
    local_6c = local_7c;
    local_64 = local_74;
    local_60 = local_70;
    if (param_1[3] == 0) {
      do {
        uVar24 = FUN_00f45584(&local_7c);
        iVar3 = (int)uVar24;
        if (iVar3 == 0) {
          return 0;
        }
        local_50 = *(int *)(iVar3 + 8);
        local_54 = *(undefined4 *)(iVar3 + 4);
        local_58 = 0x80000000;
        local_4c = param_3;
        iVar3 = FUN_011d018c(param_1 + 0xc,(int)((ulonglong)uVar24 >> 0x20),&local_58,param_4,
                             param_5);
      } while (iVar3 == 0);
    }
    else {
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar12 = param_1[7];
      iVar13 = param_1[8];
      iVar14 = param_1[9];
      iVar15 = param_1[10];
      iVar4 = param_1[0xb];
      do {
        uVar24 = FUN_00f45584(&local_7c);
        uVar7 = (undefined4)((ulonglong)uVar24 >> 0x20);
        iVar3 = (int)uVar24;
        if (iVar3 == 0) {
          return 0;
        }
        uVar16 = *(undefined4 *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 8);
        local_58 = 0x80000000;
        local_54 = uVar16;
        local_50 = iVar3;
        local_4c = param_3;
        local_48 = iVar13;
        local_44 = iVar14;
        local_40 = iVar15;
        iStack_3c = iVar4;
        local_38 = uVar11;
        uStack_34 = uVar12;
        local_30 = uVar9;
        uStack_2c = uVar10;
        FUN_011df94c(&local_48,uVar16,iVar3);
        uVar6 = local_38 ^ 0xff;
        uVar20 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
        uVar17 = (uint)lVar1;
        uVar8 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                uVar17 >> 0x18) ^
                uStack_34 * 0x2df45158 +
                uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
        uVar18 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                 uVar8 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar18;
        uVar23 = (uint)lVar2;
        uVar17 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
        uVar6 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                uVar20 >> 0x18) * ~local_30 + uVar18 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar17 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar1 = (ulonglong)uVar17 * (ulonglong)uVar20;
        uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18) ^ (uint)lVar1;
        uVar8 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                uVar23 >> 0x18) ^
                uVar8 * uVar17 +
                uVar20 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                          (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar17 = uVar8;
        if ((uVar20 & 0x20) != 0) {
          uVar17 = uVar6;
          uVar6 = uVar8;
        }
        uVar17 = uVar6 << (uVar20 & 0x1f) | (uVar17 >> 1) >> (~uVar20 & 0x1f);
        uVar6 = uVar17 >> 0x19;
        iVar19 = 0;
        while( true ) {
          uVar17 = uVar22 & uVar17;
          uVar8 = *(uint *)(iVar21 + uVar17);
          uVar20 = uVar8 ^ uVar6 * 0x1010101;
          for (uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff; uVar20 != 0;
              uVar20 = uVar20 - 1 & uVar20) {
            uVar18 = uVar17 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                             (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                     uVar22;
            iVar5 = iVar21 + -0x20 + uVar18 * -0x20;
            if ((iVar3 == *(int *)(iVar5 + 8)) &&
               (iVar5 = thunk_FUN_016dd50a(uVar16,*(undefined4 *)(iVar5 + 4),iVar3), iVar5 == 0)) {
              iVar3 = FUN_011d018c(iVar21 + -0x14 + uVar18 * -0x20,uVar7,&local_58,param_4,param_5);
              goto joined_r0x0117e6c0;
            }
          }
          if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
          iVar19 = iVar19 + 4;
          uVar17 = uVar17 + iVar19;
        }
        iVar3 = FUN_011d018c(param_1 + 0xc,uVar7,&local_58,param_4,param_5);
joined_r0x0117e6c0:
      } while (iVar3 == 0);
    }
  }
  return iVar3;
}

