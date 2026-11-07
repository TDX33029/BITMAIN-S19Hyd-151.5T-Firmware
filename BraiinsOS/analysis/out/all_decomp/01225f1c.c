// FUN_01225f1c @ 01225f1c size=588 calls_out=2 calls_in=2
// strings: 

int FUN_01225f1c(int *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_58;
  int local_48;
  uint local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_1[3] == 0) {
    return 0;
  }
  local_40 = param_1[10];
  local_34 = param_1[7];
  local_48 = param_1[8];
  uVar12 = param_1[9];
  uStack_30 = param_1[4];
  uStack_2c = param_1[5];
  local_38 = param_1[6];
  iStack_3c = param_1[0xb];
  local_44 = uVar12;
  FUN_011df94c(&local_48);
  uVar3 = local_38 ^ 0xff;
  uVar6 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar9 = (uint)lVar1;
  uVar6 = (uVar3 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) ^ local_34 * 0x2df45158 +
              uVar3 * 0x2d7f954c + (int)((ulonglong)uVar3 * 0x2df45158 >> 0x20);
  uVar8 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8 |
          uStack_2c >> 0x18;
  uVar9 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar3 * 0x2df45158);
  lVar1 = (ulonglong)uVar8 * (ulonglong)uVar9;
  uVar3 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  lVar2 = (ulonglong)~uStack_30 * (ulonglong)uVar3;
  uVar6 = (uint)lVar2;
  uVar3 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * ~uStack_30 + uVar3 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
  iVar10 = *param_1;
  uVar11 = param_1[1];
  uVar7 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) ^ uVar7 * uVar8 +
              uVar9 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                       (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
              (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
          uVar3 >> 0x18) ^ (uint)lVar1;
  uVar6 = uVar7;
  if ((uVar9 & 0x20) != 0) {
    uVar6 = uVar3;
    uVar3 = uVar7;
  }
  uVar6 = uVar3 << (uVar9 & 0x1f) | (uVar6 >> 1) >> (~uVar9 & 0x1f);
  uVar3 = uVar6 >> 0x19;
  local_58 = 0;
  while( true ) {
    uVar6 = uVar11 & uVar6;
    uVar7 = *(uint *)(iVar10 + uVar6);
    uVar9 = uVar7 ^ uVar3 * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    while (uVar8 = uVar9, uVar8 != 0) {
      uVar9 = uVar8 - 1 & uVar8;
      uVar12 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                      (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar11;
      piVar4 = (int *)(iVar10 + -0x18 + uVar12 * -0x18);
      if ((param_3 == piVar4[1]) &&
         (iVar5 = thunk_FUN_016dd50a(param_2,*piVar4 + 8,param_3), iVar5 == 0)) goto LAB_01226144;
    }
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
    local_58 = local_58 + 4;
    uVar6 = uVar6 + local_58;
  }
LAB_01226144:
  iVar10 = iVar10 + uVar12 * -0x18 + -0x10;
  if (uVar8 == 0) {
    iVar10 = 0;
  }
  return iVar10;
}

