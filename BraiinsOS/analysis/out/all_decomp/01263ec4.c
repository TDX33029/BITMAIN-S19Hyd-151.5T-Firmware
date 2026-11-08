// FUN_01263ec4 @ 01263ec4 size=1152 calls_out=3 calls_in=1
// strings: 

longlong FUN_01263ec4(int param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *extraout_r1;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_58;
  undefined4 *local_4c;
  undefined4 **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  
  puVar9 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_48 = *(undefined4 ***)(param_1 + 0x70);
    local_44 = *(undefined4 *)(param_1 + 0x74);
    local_40 = *(undefined4 *)(param_1 + 0x78);
    uStack_30 = *(uint *)(param_1 + 0x60);
    local_2c = *(uint *)(param_1 + 100);
    local_38 = *(uint *)(param_1 + 0x68);
    local_34 = *(uint *)(param_1 + 0x6c);
    uStack_3c = *(undefined4 *)(param_1 + 0x7c);
    FUN_011df94c(&local_48,param_2,param_3);
    uVar4 = local_38 ^ 0xff;
    uVar7 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
            local_34 >> 0x18;
    lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
    uVar11 = (uint)lVar1;
    uVar7 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
            local_38 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18) ^
            local_34 * 0x2df45158 +
            uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
    uVar10 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
             local_2c >> 0x18;
    uVar11 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
             uVar7 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
    lVar1 = (ulonglong)uVar10 * (ulonglong)uVar11;
    uVar4 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    lVar2 = (ulonglong)~uStack_30 * (ulonglong)uVar4;
    uVar7 = (uint)lVar2;
    iVar12 = *(int *)(param_1 + 0x50);
    uVar13 = *(uint *)(param_1 + 0x54);
    uVar4 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18) * ~uStack_30 + uVar4 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^
            uVar8 * uVar10 +
            uVar11 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                      (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
            (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18) ^ (uint)lVar1;
    uVar7 = uVar8;
    if ((uVar11 & 0x20) != 0) {
      uVar7 = uVar4;
      uVar4 = uVar8;
    }
    uVar7 = uVar4 << (uVar11 & 0x1f) | (uVar7 >> 1) >> (~uVar11 & 0x1f);
    uVar4 = uVar7 >> 0x19;
    local_58 = 0;
    while( true ) {
      uVar7 = uVar13 & uVar7;
      uVar8 = *(uint *)(iVar12 + uVar7);
      uVar11 = uVar8 ^ uVar4 * 0x1010101;
      puVar9 = (undefined4 *)(uVar11 + 0xfefefeff);
      uVar11 = ~uVar11 & 0x80808080 & (uint)puVar9;
      while (uVar11 != 0) {
        uVar14 = uVar11 - 1 & uVar11;
        uVar10 = uVar7 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                        (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                 uVar13;
        puVar9 = (undefined4 *)(iVar12 + -0x10 + uVar10 * -0x10);
        uVar11 = uVar14;
        if (param_3 == puVar9[1]) {
          uVar15 = thunk_FUN_016dd50a(param_2,*puVar9,param_3);
          puVar9 = (undefined4 *)((ulonglong)uVar15 >> 0x20);
          if ((int)uVar15 == 0) {
            iVar12 = iVar12 + uVar10 * -0x10;
            goto LAB_012640f0;
          }
        }
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      local_58 = local_58 + 4;
      uVar7 = uVar7 + local_58;
    }
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d8718 != 0) {
    local_48 = &local_4c;
    local_4c = &DAT_018d86e8;
    FUN_015eedc4(&DAT_018d8718,1,&local_48,&DAT_0188af88,&DAT_018ac9b8);
    puVar9 = extraout_r1;
  }
  if (DAT_018d86f4 == 0) {
    return ZEXT48(puVar9) << 0x20;
  }
  local_40 = DAT_018d8710;
  uStack_30 = DAT_018d86f8;
  local_38 = DAT_018d8700;
  local_34 = DAT_018d8704;
  local_48 = (undefined4 **)DAT_018d8708;
  local_2c = DAT_018d86fc;
  uStack_3c = DAT_018d8714;
  local_44 = DAT_018d870c;
  FUN_011df94c(&local_48,param_2,param_3);
  uVar7 = DAT_018d86ec;
  iVar3 = DAT_018d86e8;
  uVar4 = local_38 ^ 0xff;
  uVar11 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
           local_34 >> 0x18;
  lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar13 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^
           local_34 * 0x2df45158 + uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20)
  ;
  uVar10 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  lVar2 = (ulonglong)~uStack_30 * (ulonglong)uVar10;
  uVar14 = (uint)lVar2;
  uVar11 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
  uVar4 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * ~uStack_30 + uVar10 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
  uVar11 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
  uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
          uVar4 >> 0x18) ^ (uint)lVar1;
  uVar10 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^
           uVar13 * uVar11 +
           uVar8 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                    (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
           (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = uVar10;
  if ((uVar8 & 0x20) != 0) {
    uVar11 = uVar4;
    uVar4 = uVar10;
  }
  uVar11 = uVar4 << (uVar8 & 0x1f) | (uVar11 >> 1) >> (~uVar8 & 0x1f);
  uVar4 = uVar11 >> 0x19;
  local_58 = 0;
  while( true ) {
    uVar11 = uVar7 & uVar11;
    uVar10 = *(uint *)(iVar3 + uVar11);
    uVar8 = uVar10 ^ uVar4 * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      iVar12 = iVar3 + (uVar11 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                       uVar7) * -0x10;
      uVar8 = uVar8 - 1 & uVar8;
      if ((param_3 == *(int *)(iVar12 + -0xc)) &&
         (iVar6 = thunk_FUN_016dd50a(param_2,*(undefined4 *)(iVar12 + -0x10),param_3), iVar6 == 0))
      goto LAB_012640f0;
    }
    uVar5 = 0;
    uVar8 = uVar10 & 0x80808080;
    if ((uVar8 & uVar10 << 1) != 0) break;
    local_58 = local_58 + 4;
    uVar11 = uVar11 + local_58;
  }
LAB_012640f4:
  return CONCAT44(uVar8,uVar5);
LAB_012640f0:
  uVar5 = *(undefined4 *)(iVar12 + -8);
  uVar8 = *(uint *)(iVar12 + -4);
  goto LAB_012640f4;
}

