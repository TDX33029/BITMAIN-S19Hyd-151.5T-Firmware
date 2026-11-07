// FUN_0124618c @ 0124618c size=916 calls_out=4 calls_in=0
// strings: 

int FUN_0124618c(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar23;
  uint local_6c [3];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  if (*param_2 == '\x05') {
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    iVar18 = *param_1;
    local_4c = *(undefined4 *)(param_2 + 0xc);
    uVar17 = param_1[1];
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    local_6c[0] = (uint)(local_6c[2] != 0);
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (param_1[3] != 0) {
      uVar7 = param_1[4];
      uVar8 = param_1[5];
      uVar9 = param_1[6];
      uVar10 = param_1[7];
      iVar11 = param_1[8];
      iVar12 = param_1[9];
      iVar13 = param_1[10];
      iVar3 = param_1[0xb];
LAB_0124637c:
      do {
        uVar23 = FUN_00f45584(local_6c);
        iVar20 = (int)uVar23;
        if (iVar20 == 0) {
          return 0;
        }
        iVar21 = *(int *)(iVar20 + 4);
        iVar20 = *(int *)(iVar20 + 8);
        local_48 = iVar11;
        local_44 = iVar12;
        local_40 = iVar13;
        local_3c = iVar3;
        local_38 = uVar9;
        uStack_34 = uVar10;
        local_30 = uVar7;
        uStack_2c = uVar8;
        FUN_011df94c(&local_48,iVar21,iVar20);
        uVar4 = local_38 ^ 0xff;
        uVar19 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
        uVar14 = (uint)lVar1;
        uVar6 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                uVar14 >> 0x18) ^
                uStack_34 * 0x2df45158 +
                uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
        uVar15 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar15;
        uVar22 = (uint)lVar2;
        uVar14 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
        uVar4 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                uVar19 >> 0x18) * ~local_30 + uVar15 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar14 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar1 = (ulonglong)uVar14 * (ulonglong)uVar19;
        uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18) ^ (uint)lVar1;
        uVar6 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                uVar22 >> 0x18) ^
                uVar6 * uVar14 +
                uVar19 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                          (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar14 = uVar6;
        if ((uVar19 & 0x20) != 0) {
          uVar14 = uVar4;
          uVar4 = uVar6;
        }
        uVar14 = uVar4 << (uVar19 & 0x1f) | (uVar14 >> 1) >> (~uVar19 & 0x1f);
        uVar4 = uVar14 >> 0x19;
        iVar16 = 0;
        while( true ) {
          uVar14 = uVar17 & uVar14;
          uVar6 = *(uint *)(iVar18 + uVar14);
          uVar19 = uVar6 ^ uVar4 * 0x1010101;
          uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
          while (uVar19 != 0) {
            uVar15 = uVar19 - 1 & uVar19;
            uVar22 = uVar14 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                             (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                     uVar17;
            iVar5 = iVar18 + -0x20 + uVar22 * -0x20;
            uVar19 = uVar15;
            if ((iVar20 == *(int *)(iVar5 + 8)) &&
               (iVar5 = thunk_FUN_016dd50a(iVar21,*(undefined4 *)(iVar5 + 4),iVar20), iVar5 == 0)) {
              local_48 = -0x80000000;
              local_44 = iVar21;
              local_40 = iVar20;
              local_3c = param_3;
              iVar20 = FUN_011d018c(iVar18 + -0x14 + uVar22 * -0x20,(int)((ulonglong)uVar23 >> 0x20)
                                    ,&local_48,param_4,param_5);
              if (iVar20 != 0) {
                return iVar20;
              }
              goto LAB_0124637c;
            }
          }
          if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
          iVar16 = iVar16 + 4;
          uVar14 = uVar14 + iVar16;
        }
      } while( true );
    }
    do {
      iVar18 = FUN_00f45584(local_6c);
    } while (iVar18 != 0);
  }
  return 0;
}

