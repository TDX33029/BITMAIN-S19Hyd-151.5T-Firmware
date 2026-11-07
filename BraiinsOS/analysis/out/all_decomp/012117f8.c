// FUN_012117f8 @ 012117f8 size=752 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012117f8(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uStack_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_1[4];
  local_2c = param_1[5];
  local_40 = param_1[10];
  local_38 = param_1[6];
  uStack_3c = param_1[0xb];
  local_34 = param_1[7];
  local_48 = param_1[8];
  local_44 = param_1[9];
  FUN_011df94c(&local_48);
  uVar5 = local_38 ^ 0xff;
  uVar7 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar2 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar9 = (uint)lVar2;
  uVar11 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^
           local_34 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20)
  ;
  uVar8 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar8;
  uVar12 = (uint)lVar3;
  uVar7 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * ~local_30 + uVar8 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar7 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar2 = (ulonglong)uVar7 * (ulonglong)uVar9;
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)lVar2;
  uVar8 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^
          uVar11 * uVar7 +
          uVar9 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                   (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
          (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = uVar8;
  if ((uVar9 & 0x20) != 0) {
    uVar7 = uVar5;
    uVar5 = uVar8;
  }
  uVar5 = uVar5 << (uVar9 & 0x1f) | (uVar7 >> 1) >> (~uVar9 & 0x1f);
  if (param_1[2] == 0) {
    FUN_011abb94(param_1,param_1 + 4);
  }
  puVar13 = (uint *)*param_1;
  uVar9 = param_1[1];
  iVar10 = 0;
  bVar4 = false;
  uVar7 = uVar5;
  do {
    uVar7 = uVar9 & uVar7;
    uVar11 = *(uint *)((int)puVar13 + uVar7);
    uVar8 = uVar11 ^ (uVar5 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar12 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                      (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar9;
      uVar8 = uVar8 - 1 & uVar8;
      if ((param_3 == puVar13[uVar12 * -4 + -3]) &&
         (iVar6 = thunk_FUN_016dd50a(param_2,puVar13[uVar12 * -4 + -4],param_3), iVar6 == 0)) {
        puVar13[uVar12 * -4 + -2] = param_4;
        puVar13[uVar12 * -4 + -1] = param_5;
        return;
      }
    }
    uVar8 = uVar11 & 0x80808080;
    if (bVar4) {
LAB_01211a1c:
      if ((uVar8 & uVar11 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar13 + uStack_68);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar13 & 0x80808080;
          uVar8 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                          (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar13 + (uVar8 >> 3));
          uStack_68 = uVar8 >> 3;
        }
        iVar10 = param_1[3];
        iVar6 = param_1[2];
        bVar1 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)puVar13 + uStack_68) = bVar1;
        param_1[2] = iVar6 - (uVar7 & 1);
        param_1[3] = iVar10 + 1;
        *(byte *)((int)puVar13 + (uVar9 & uStack_68 - 4) + 4) = bVar1;
        puVar13[uStack_68 * -4 + -4] = param_2;
        puVar13[uStack_68 * -4 + -3] = param_3;
        puVar13[uStack_68 * -4 + -1] = param_5;
        puVar13[uStack_68 * -4 + -2] = param_4;
        return;
      }
      bVar4 = true;
    }
    else {
      if (uVar8 != 0) {
        uStack_68 = uVar7 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar9;
        goto LAB_01211a1c;
      }
      bVar4 = false;
    }
    iVar10 = iVar10 + 4;
    uVar7 = iVar10 + uVar7;
  } while( true );
}

