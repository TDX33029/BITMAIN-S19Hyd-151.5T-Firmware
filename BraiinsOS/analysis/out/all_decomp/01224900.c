// FUN_01224900 @ 01224900 size=524 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01224900(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
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
  uVar9 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar4 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar12 = (uint)lVar4;
  uVar9 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
  uVar10 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^
           local_34 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20)
  ;
  uVar11 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8 |
           uStack_2c >> 0x18;
  uVar12 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  lVar4 = (ulonglong)uVar11 * (ulonglong)uVar12;
  uVar6 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18;
  lVar5 = (ulonglong)~uStack_30 * (ulonglong)uVar6;
  uVar9 = (uint)lVar5;
  uVar6 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * ~uStack_30 + uVar6 * ~uStack_2c + (int)((ulonglong)lVar5 >> 0x20);
  iVar13 = *param_1;
  uVar14 = param_1[1];
  uVar10 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^
           uVar10 * uVar11 +
           uVar12 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                     (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
           (int)((ulonglong)lVar4 >> 0x20);
  uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)lVar4;
  uVar9 = uVar10;
  if ((uVar12 & 0x20) != 0) {
    uVar9 = uVar6;
    uVar6 = uVar10;
  }
  uVar9 = uVar6 << (uVar12 & 0x1f) | (uVar9 >> 1) >> (~uVar12 & 0x1f);
  uVar6 = uVar9 >> 0x19;
  local_50 = 0;
  do {
    uVar9 = uVar14 & uVar9;
    uVar10 = *(uint *)(iVar13 + uVar9);
    uVar12 = uVar10 ^ uVar6 * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (uVar12 != 0) {
      uVar11 = uVar12 >> 8;
      uVar1 = uVar12 >> 0x10;
      uVar2 = uVar12 >> 0x18;
      uVar3 = uVar12 << 0x18;
      uVar12 = uVar12 - 1 & uVar12;
      puVar7 = (undefined4 *)
               (iVar13 + -8 +
               (uVar9 + ((uint)LZCOUNT(uVar3 | (uVar11 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2
                                      ) >> 3) & uVar14) * -8);
      if ((param_3 == puVar7[1]) &&
         (iVar8 = thunk_FUN_016dd50a(param_2,*puVar7,param_3), iVar8 == 0)) {
        return 1;
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) {
      return 0;
    }
    local_50 = local_50 + 4;
    uVar9 = uVar9 + local_50;
  } while( true );
}

