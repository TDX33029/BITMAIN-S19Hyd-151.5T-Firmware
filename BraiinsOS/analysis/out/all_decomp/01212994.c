// FUN_01212994 @ 01212994 size=3160 calls_out=10 calls_in=1
// strings: 

bool FUN_01212994(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  byte bVar36;
  uint local_6c;
  int local_68;
  uint local_54;
  uint *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  piVar19 = (int *)(param_1 + 0x30);
  local_4c = (uint *)*piVar19;
  puVar29 = (uint *)(param_1 + 0x40);
  iVar5 = 0;
  if (local_4c != (uint *)0x0) {
    iVar5 = *(int *)(param_1 + 0x3c);
  }
  if (local_4c != (uint *)0x0 && iVar5 != 0) {
    local_2c = *(uint *)(param_1 + 0x44);
    local_38 = *(uint *)(param_1 + 0x48);
    uStack_34 = *(uint *)(param_1 + 0x4c);
    local_48 = *(int *)(param_1 + 0x50);
    uStack_30 = *puVar29;
    local_40 = *(undefined4 *)(param_1 + 0x58);
    local_44 = *(undefined4 *)(param_1 + 0x54);
    local_3c = *(undefined4 *)(param_1 + 0x5c);
    FUN_011df94c(&local_48,param_2,param_3);
    uVar8 = local_38 ^ 0xff;
    uVar9 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8 |
            uStack_34 >> 0x18;
    lVar2 = (ulonglong)uVar9 * 0xb36a80d2;
    uVar12 = (uint)lVar2;
    uVar9 = (uVar8 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
            local_38 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar20 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^
             uStack_34 * 0x2df45158 +
             uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
    uVar21 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
             local_2c >> 0x18;
    uVar12 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
    lVar2 = (ulonglong)uVar21 * (ulonglong)uVar12;
    uVar8 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
            uVar20 >> 0x18;
    lVar3 = (ulonglong)~uStack_30 * (ulonglong)uVar8;
    uVar9 = (uint)lVar3;
    uVar8 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
            uVar12 >> 0x18) * ~uStack_30 + uVar8 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
    uVar25 = *(uint *)(param_1 + 0x34);
    uVar20 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^
             uVar20 * uVar21 +
             uVar12 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                       (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
             (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18) ^ (uint)lVar2;
    uVar9 = uVar20;
    if ((uVar12 & 0x20) != 0) {
      uVar9 = uVar8;
      uVar8 = uVar20;
    }
    uVar8 = uVar8 << (uVar12 & 0x1f) | (uVar9 >> 1) >> (~uVar12 & 0x1f);
    local_6c = (uVar8 >> 0x19) * 0x1010101;
    local_68 = 0;
    while( true ) {
      uVar8 = uVar25 & uVar8;
      uVar12 = *(uint *)((int)local_4c + uVar8);
      uVar9 = ~(uVar12 ^ local_6c) & 0x80808080 & (uVar12 ^ local_6c) + 0xfefefeff;
      while (uVar9 != 0) {
        uVar20 = uVar9 - 1 & uVar9;
        uVar21 = uVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                        (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar25;
        uVar9 = uVar20;
        if ((param_3 == local_4c[uVar21 * -4 + -2]) &&
           (iVar5 = thunk_FUN_016dd50a(param_2,local_4c[uVar21 * -4 + -3],param_3), iVar5 == 0)) {
          bVar36 = (byte)local_4c[uVar21 * -4 + -1];
          goto LAB_01212c4c;
        }
      }
      if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
      local_68 = local_68 + 4;
      uVar8 = uVar8 + local_68;
    }
  }
  FUN_012391d8(&local_48,param_2,param_3);
  iVar5 = local_48;
  if ((-0x7fffffff < local_48) && (local_48 != 0)) {
    thunk_FUN_016d3fb4(local_44);
  }
  if (local_4c == (uint *)0x0) {
    puVar6 = (undefined4 *)FUN_011e4c9c();
    uVar22 = *puVar6;
    iVar35 = puVar6[1];
    puVar7 = (uint *)FUN_011e4df8();
    uVar8 = (**(code **)(iVar35 + 0xc))(uVar22);
    uVar12 = *puVar7;
    uVar10 = puVar7[10];
    uVar31 = puVar7[0xc];
    uVar20 = puVar7[1];
    uVar14 = puVar7[8];
    uVar32 = puVar7[0xe];
    uVar9 = puVar7[2];
    uVar34 = puVar7[3];
    *(undefined4 *)(param_1 + 0x38) = 0;
    *piVar19 = (int)&DAT_005674cc;
    uVar15 = puVar7[0xb];
    uVar26 = puVar7[0xd];
    uVar16 = puVar7[9];
    uVar23 = puVar7[0xf];
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar21 = uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
             uVar34 >> 0x18;
    *(undefined4 *)(param_1 + 0x34) = 0;
    lVar2 = (ulonglong)uVar21 * 0xb36a80d2;
    uVar25 = (uint)lVar2;
    uVar9 = uVar9 ^ uVar8;
    uVar8 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18) * -0x4c957f2e + uVar21 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar13 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
    uVar17 = uVar13 ^ uVar32;
    uVar21 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18) ^
             uVar34 * 0x2df45158 + uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20)
    ;
    uVar8 = uVar21 ^ uVar23;
    uVar9 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    lVar2 = (ulonglong)uVar9 * 0xb36a80d2;
    uVar25 = (uint)lVar2;
    uVar25 = uVar8 * 0x2df45158 +
             uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20) ^
             (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18) ^ uVar16;
    uVar34 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18;
    lVar3 = (ulonglong)uVar34 * 0xb36a80d2;
    uVar33 = (uint)lVar3;
    uVar30 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    uVar8 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
            uVar17 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = (uint)((ulonglong)uVar17 * 0x2df45158) ^
            (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18) ^ uVar14;
    uVar9 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18) * -0x4c957f2e + uVar34 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar17 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18;
    uVar12 = ~uVar12;
    uVar34 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
    uVar8 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
            uVar33 >> 0x18) ^
            uVar25 * 0x2df45158 + uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
    uVar9 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar9;
    uVar25 = (uint)lVar2;
    uVar8 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
            uVar25 >> 0x18) ^
            uVar8 * uVar30 + uVar34 * uVar17 + (int)((ulonglong)uVar30 * (ulonglong)uVar34 >> 0x20);
    uVar20 = ~uVar20;
    uVar9 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
            uVar34 >> 0x18) * uVar12 + uVar9 * uVar20 + (int)((ulonglong)lVar2 >> 0x20);
    uVar25 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^ (uint)((ulonglong)uVar30 * (ulonglong)uVar34);
    uVar9 = uVar25;
    if ((uVar34 & 0x20) != 0) {
      uVar9 = uVar8;
      uVar8 = uVar25;
    }
    *(uint *)(param_1 + 0x58) = uVar9 << (uVar34 & 0x1f) | (uVar8 >> 1) >> (~uVar34 & 0x1f);
    uVar25 = uVar13 ^ uVar31;
    uVar27 = uVar21 ^ uVar26;
    uVar28 = uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18;
    lVar2 = (ulonglong)uVar28 * 0xb36a80d2;
    uVar33 = (uint)lVar2;
    uVar18 = uVar27 * 0x2df45158 +
             uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20) ^
             (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) ^ uVar15;
    uVar24 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar3 = (ulonglong)uVar24 * 0xb36a80d2;
    uVar27 = (uint)lVar3;
    uVar33 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18) * -0x4c957f2e + uVar28 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar25 = (uint)((ulonglong)uVar25 * 0x2df45158) ^
             (uVar33 * 0x1000000 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) ^ uVar10;
    uVar33 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar24 = (uVar33 * 0x1000000 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) ^ (uint)((ulonglong)uVar25 * 0x2df45158);
    uVar25 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18) ^
             uVar18 * 0x2df45158 +
             uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20);
    uVar33 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18;
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar33;
    uVar27 = (uint)lVar2;
    uVar25 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18) ^
             uVar25 * uVar30 +
             uVar24 * uVar17 + (int)((ulonglong)uVar30 * (ulonglong)uVar24 >> 0x20);
    uVar33 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18) * uVar12 + uVar33 * uVar20 + (int)((ulonglong)lVar2 >> 0x20);
    uVar27 = (uVar33 * 0x1000000 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) ^ (uint)((ulonglong)uVar30 * (ulonglong)uVar24);
    uVar33 = uVar27;
    if ((uVar24 & 0x20) != 0) {
      uVar33 = uVar25;
      uVar25 = uVar27;
    }
    *(uint *)(param_1 + 0x50) = uVar33 << (uVar24 & 0x1f) | (uVar25 >> 1) >> (~uVar24 & 0x1f);
    uVar10 = uVar13 ^ uVar10;
    uVar15 = uVar21 ^ uVar15;
    uVar18 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18;
    lVar2 = (ulonglong)uVar18 * 0xb36a80d2;
    uVar27 = (uint)lVar2;
    uVar23 = uVar15 * 0x2df45158 +
             uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20) ^
             (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18) ^ uVar23;
    uVar27 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18;
    lVar3 = (ulonglong)uVar27 * 0xb36a80d2;
    uVar28 = (uint)lVar3;
    uVar15 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar32 = (uint)((ulonglong)uVar10 * 0x2df45158) ^
             (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^ uVar32;
    uVar10 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
             uVar32 >> 0x18) * -0x4c957f2e + uVar27 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar27 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ (uint)((ulonglong)uVar32 * 0x2df45158);
    uVar10 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
             uVar28 >> 0x18) ^
             uVar23 * 0x2df45158 +
             uVar32 * 0x2d7f954c + (int)((ulonglong)uVar32 * 0x2df45158 >> 0x20);
    uVar32 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar32;
    uVar15 = (uint)lVar2;
    uVar10 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^
             uVar10 * uVar30 +
             uVar27 * uVar17 + (int)((ulonglong)uVar30 * (ulonglong)uVar27 >> 0x20);
    uVar32 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18) * uVar12 + uVar32 * uVar20 + (int)((ulonglong)lVar2 >> 0x20);
    uVar15 = (uVar32 * 0x1000000 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
             uVar32 >> 0x18) ^ (uint)((ulonglong)uVar30 * (ulonglong)uVar27);
    uVar32 = uVar15;
    if ((uVar27 & 0x20) != 0) {
      uVar32 = uVar10;
      uVar10 = uVar15;
    }
    *(uint *)(param_1 + 0x48) = uVar32 << (uVar27 & 0x1f) | (uVar10 >> 1) >> (~uVar27 & 0x1f);
    uVar13 = uVar13 ^ uVar14;
    uVar21 = uVar21 ^ uVar16;
    uVar15 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18;
    lVar2 = (ulonglong)uVar15 * 0xb36a80d2;
    uVar14 = (uint)lVar2;
    uVar26 = uVar21 * 0x2df45158 +
             uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20) ^
             (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18) ^ uVar26;
    uVar14 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
             uVar26 >> 0x18;
    lVar3 = (ulonglong)uVar14 * 0xb36a80d2;
    local_6c = (uint)lVar3;
    uVar21 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18) * -0x4c957f2e + uVar15 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar31 = (uint)((ulonglong)uVar13 * 0x2df45158) ^
             (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18) ^ uVar31;
    uVar21 = (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
             uVar31 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar13 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18) ^ (uint)((ulonglong)uVar31 * 0x2df45158);
    uVar21 = (local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
             local_6c >> 0x18) ^
             uVar26 * 0x2df45158 +
             uVar31 * 0x2d7f954c + (int)((ulonglong)uVar31 * 0x2df45158 >> 0x20);
    uVar31 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18;
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar31;
    uVar26 = (uint)lVar2;
    uVar21 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
             uVar26 >> 0x18) ^
             uVar21 * uVar30 +
             uVar13 * uVar17 + (int)((ulonglong)uVar30 * (ulonglong)uVar13 >> 0x20);
    uVar12 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18) * uVar12 + uVar31 * uVar20 + (int)((ulonglong)lVar2 >> 0x20);
    uVar20 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^ (uint)((ulonglong)uVar30 * (ulonglong)uVar13);
    uVar12 = uVar20;
    if ((uVar13 & 0x20) != 0) {
      uVar12 = uVar21;
      uVar21 = uVar20;
    }
    *puVar29 = uVar12 << (uVar13 & 0x1f) | (uVar21 >> 1) >> (~uVar13 & 0x1f);
    *(uint *)(param_1 + 0x5c) = uVar8 << (uVar34 & 0x1f) | (uVar9 >> 1) >> (~uVar34 & 0x1f);
    *(uint *)(param_1 + 0x54) = uVar25 << (uVar24 & 0x1f) | (uVar33 >> 1) >> (~uVar24 & 0x1f);
    local_4c = *(uint **)(param_1 + 0x30);
    *(uint *)(param_1 + 0x4c) = uVar10 << (uVar27 & 0x1f) | (uVar32 >> 1) >> (~uVar27 & 0x1f);
    *(uint *)(param_1 + 0x44) = uVar21 << (uVar13 & 0x1f) | (uVar12 >> 1) >> (~uVar13 & 0x1f);
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    uVar8 = 1;
    local_54 = 0;
  }
  else {
    uVar8 = thunk_FUN_016d4a50(param_3);
    local_54 = param_3;
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(uVar8,param_2,param_3);
  local_38 = *(uint *)(param_1 + 0x48);
  local_2c = *(uint *)(param_1 + 0x44);
  uStack_30 = *puVar29;
  uStack_34 = *(uint *)(param_1 + 0x4c);
  local_48 = *(int *)(param_1 + 0x50);
  local_44 = *(undefined4 *)(param_1 + 0x54);
  local_40 = *(undefined4 *)(param_1 + 0x58);
  local_3c = *(undefined4 *)(param_1 + 0x5c);
  FUN_011df94c(&local_48,uVar8,param_3);
  uVar9 = local_38 ^ 0xff;
  uVar12 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8 |
           uStack_34 >> 0x18;
  lVar2 = (ulonglong)uVar12 * 0xb36a80d2;
  uVar20 = (uint)lVar2;
  uVar12 = (uVar9 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18) * -0x4c957f2e + uVar12 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar20 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^
           uStack_34 * 0x2df45158 +
           uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
  uVar21 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
  uVar12 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar2 = (ulonglong)uVar12 * (ulonglong)uVar21;
  uVar9 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18;
  lVar3 = (ulonglong)~uStack_30 * (ulonglong)uVar9;
  uVar25 = (uint)lVar3;
  uVar9 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) * ~uStack_30 + uVar9 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar20 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^
           uVar20 * uVar12 +
           uVar21 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                     (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
           (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18) ^ (uint)lVar2;
  uVar12 = uVar20;
  if ((uVar21 & 0x20) != 0) {
    uVar12 = uVar9;
    uVar9 = uVar20;
  }
  bVar36 = iVar5 != -0x7fffffff;
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_011a940c(piVar19,puVar29);
    local_4c = (uint *)*piVar19;
  }
  uVar20 = *(uint *)(param_1 + 0x34);
  uVar12 = uVar9 << (uVar21 & 0x1f) | (uVar12 >> 1) >> (~uVar21 & 0x1f);
  iVar35 = 0;
  bVar4 = false;
  uVar9 = uVar12;
  do {
    uVar9 = uVar20 & uVar9;
    uVar25 = *(uint *)((int)local_4c + uVar9);
    uVar21 = uVar25 ^ (uVar12 >> 0x19) * 0x1010101;
    for (uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff; uVar21 != 0;
        uVar21 = uVar21 - 1 & uVar21) {
      uVar10 = uVar9 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                      (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) & uVar20;
      if ((param_3 == local_4c[uVar10 * -4 + -2]) &&
         (iVar11 = thunk_FUN_016dd50a(uVar8,local_4c[uVar10 * -4 + -3]), iVar11 == 0)) {
        *(bool *)(local_4c + uVar10 * -4 + -1) = iVar5 != -0x7fffffff;
        if (local_54 != 0) {
          thunk_FUN_016d3fb4(uVar8);
          return (bool)bVar36;
        }
LAB_01212c4c:
        return (bool)(bVar36 & 1);
      }
    }
    uVar21 = uVar25 & 0x80808080;
    if (bVar4) {
LAB_012134e4:
      if ((uVar21 & uVar25 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)local_4c + local_6c);
        if (-1 < (int)uVar9) {
          uVar9 = *local_4c & 0x80808080;
          uVar21 = LZCOUNT((*local_4c & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)local_4c + (uVar21 >> 3));
          local_6c = uVar21 >> 3;
        }
        iVar35 = *(int *)(param_1 + 0x3c);
        iVar11 = *(int *)(param_1 + 0x38);
        bVar1 = (byte)(uVar12 >> 0x19);
        *(byte *)((int)local_4c + local_6c) = bVar1;
        *(uint *)(param_1 + 0x38) = iVar11 - (uVar9 & 1);
        *(int *)(param_1 + 0x3c) = iVar35 + 1;
        *(byte *)((int)local_4c + (uVar20 & local_6c - 4) + 4) = bVar1;
        *(bool *)(local_4c + local_6c * -4 + -1) = iVar5 != -0x7fffffff;
        local_4c[local_6c * -4 + -4] = local_54;
        local_4c[local_6c * -4 + -3] = uVar8;
        local_4c[local_6c * -4 + -2] = param_3;
        return (bool)bVar36;
      }
      bVar4 = true;
    }
    else {
      if (uVar21 != 0) {
        local_6c = uVar9 + ((uint)LZCOUNT((uVar25 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                          (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                   uVar20;
        goto LAB_012134e4;
      }
      bVar4 = false;
    }
    iVar35 = iVar35 + 4;
    uVar9 = iVar35 + uVar9;
  } while( true );
}

