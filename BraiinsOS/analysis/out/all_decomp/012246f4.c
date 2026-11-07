// FUN_012246f4 @ 012246f4 size=524 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_012246f4(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_1[3] == 0) {
    return 0;
  }
  local_48 = param_1[8];
  uStack_30 = param_1[4];
  uStack_2c = param_1[5];
  local_38 = param_1[6];
  local_34 = param_1[7];
  local_44 = param_1[9];
  local_40 = param_1[10];
  iStack_3c = param_1[0xb];
  FUN_011df94c(&local_48,param_2,param_3);
  uVar6 = local_38 ^ 0xff;
  uVar8 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar4 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar11 = (uint)lVar4;
  uVar8 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) ^
          local_34 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
  uVar10 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8 |
           uStack_2c >> 0x18;
  uVar11 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  lVar4 = (ulonglong)uVar10 * (ulonglong)uVar11;
  uVar6 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  lVar5 = (ulonglong)~uStack_30 * (ulonglong)uVar6;
  uVar8 = (uint)lVar5;
  uVar6 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * ~uStack_30 + uVar6 * ~uStack_2c + (int)((ulonglong)lVar5 >> 0x20);
  iVar12 = *param_1;
  uVar13 = param_1[1];
  uVar9 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ uVar9 * uVar10 +
              uVar11 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                        (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
              (int)((ulonglong)lVar4 >> 0x20);
  uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)lVar4;
  uVar8 = uVar9;
  if ((uVar11 & 0x20) != 0) {
    uVar8 = uVar6;
    uVar6 = uVar9;
  }
  uVar8 = uVar6 << (uVar11 & 0x1f) | (uVar8 >> 1) >> (~uVar11 & 0x1f);
  uVar6 = uVar8 >> 0x19;
  local_50 = 0;
  do {
    uVar8 = uVar13 & uVar8;
    uVar9 = *(uint *)(iVar12 + uVar8);
    uVar11 = uVar9 ^ uVar6 * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar10 = uVar11 >> 8;
      uVar1 = uVar11 >> 0x10;
      uVar2 = uVar11 >> 0x18;
      uVar3 = uVar11 << 0x18;
      uVar11 = uVar11 - 1 & uVar11;
      iVar7 = *(int *)(iVar12 + -4 +
                      (uVar8 + ((uint)LZCOUNT(uVar3 | (uVar10 & 0xff) << 0x10 | (uVar1 & 0xff) << 8
                                              | uVar2) >> 3) & uVar13) * -4);
      if ((param_3 == *(int *)(iVar7 + 8)) &&
         (iVar7 = thunk_FUN_016dd50a(param_2,*(undefined4 *)(iVar7 + 4),param_3), iVar7 == 0)) {
        return 1;
      }
    }
    if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) {
      return 0;
    }
    local_50 = local_50 + 4;
    uVar8 = uVar8 + local_50;
  } while( true );
}

