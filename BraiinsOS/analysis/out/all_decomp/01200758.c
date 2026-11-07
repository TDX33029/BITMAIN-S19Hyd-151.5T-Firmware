// FUN_01200758 @ 01200758 size=2048 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_01200758(int param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_r1;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_2 != '\x05') {
    return 1;
  }
  iVar22 = *(int *)(param_2 + 0xc);
  puVar2 = (undefined4 *)FUN_011e4c9c();
  uVar15 = *puVar2;
  iVar17 = puVar2[1];
  puVar3 = (uint *)FUN_011e4df8();
  uVar4 = (**(code **)(iVar17 + 0xc))(uVar15);
  uVar5 = puVar3[8];
  uVar6 = puVar3[9];
  uVar7 = puVar3[10];
  uVar8 = puVar3[0xb];
  uVar9 = puVar3[0xc];
  uVar10 = puVar3[0xd];
  uVar11 = puVar3[1];
  uVar16 = puVar3[0xe];
  uVar28 = puVar3[0xf];
  uVar24 = *puVar3;
  uVar18 = puVar3[2];
  uVar25 = puVar3[3];
  FUN_011a5370(&local_48,4,4,iVar22);
  local_78 = local_48;
  local_74 = local_44;
  iStack_70 = local_40;
  local_6c = local_3c;
  uVar12 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar1 = (ulonglong)uVar12 * 0xb36a80d2;
  uVar14 = (uint)lVar1;
  uVar18 = uVar18 ^ uVar4;
  uVar4 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
          uVar18 >> 0x18) * -0x4c957f2e + uVar12 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
           uVar4 >> 0x18) ^ (uint)((ulonglong)uVar18 * 0x2df45158);
  uVar4 = uVar13 ^ uVar16;
  uVar26 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^
           uVar25 * 0x2df45158 + uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20)
  ;
  uVar14 = uVar26 ^ uVar28;
  uVar12 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18;
  lVar1 = (ulonglong)uVar12 * 0xb36a80d2;
  uVar18 = (uint)lVar1;
  uVar12 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
           uVar4 >> 0x18) * -0x4c957f2e + uVar12 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar19 = uVar14 * 0x2df45158 + uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20) ^
           (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^ uVar6;
  uVar14 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  lVar1 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar23 = (uint)lVar1;
  uVar4 = (uint)((ulonglong)uVar4 * 0x2df45158) ^
          (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^ uVar5;
  uVar12 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
           uVar4 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar29 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  uVar18 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
  uVar25 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  uVar4 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
          uVar23 >> 0x18) ^
          uVar19 * 0x2df45158 + uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
  uVar24 = ~uVar24;
  uVar11 = ~uVar11;
  uVar12 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
  ;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar12;
  uVar14 = (uint)lVar1;
  uVar4 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) ^
          uVar4 * uVar29 + uVar18 * uVar25 + (int)((ulonglong)uVar29 * (ulonglong)uVar18 >> 0x20);
  uVar12 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) * uVar24 + uVar12 * uVar11 + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^ (uint)((ulonglong)uVar29 * (ulonglong)uVar18);
  uVar12 = uVar14;
  if ((uVar18 & 0x20) != 0) {
    uVar12 = uVar4;
    uVar4 = uVar14;
  }
  local_50 = uVar12 << (uVar18 & 0x1f) | (uVar4 >> 1) >> (~uVar18 & 0x1f);
  uVar14 = uVar13 ^ uVar9;
  uVar23 = uVar26 ^ uVar10;
  uVar19 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
  lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
  uVar20 = (uint)lVar1;
  uVar19 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = uVar23 * 0x2df45158 + uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20)
           ^ (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ uVar8;
  uVar23 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  lVar1 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar27 = (uint)lVar1;
  uVar14 = (uint)((ulonglong)uVar14 * 0x2df45158) ^
           (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^ uVar7;
  uVar19 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar23 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^ (uint)((ulonglong)uVar14 * 0x2df45158);
  uVar14 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) ^
           uVar20 * 0x2df45158 + uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20)
  ;
  uVar19 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar19;
  uVar20 = (uint)lVar1;
  uVar19 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18) * uVar24 + uVar19 * uVar11 + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^
           uVar14 * uVar29 + uVar23 * uVar25 + (int)((ulonglong)uVar29 * (ulonglong)uVar23 >> 0x20);
  uVar20 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^ (uint)((ulonglong)uVar29 * (ulonglong)uVar23);
  uVar19 = uVar20;
  if ((uVar23 & 0x20) != 0) {
    uVar19 = uVar14;
    uVar14 = uVar20;
  }
  local_58 = uVar19 << (uVar23 & 0x1f) | (uVar14 >> 1) >> (~uVar23 & 0x1f);
  uVar7 = uVar13 ^ uVar7;
  uVar8 = uVar26 ^ uVar8;
  uVar20 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar27 = (uint)lVar1;
  uVar20 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar28 = uVar8 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20) ^
           (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) ^ uVar28;
  uVar8 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
          uVar28 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar27 = (uint)lVar1;
  uVar16 = (uint)((ulonglong)uVar7 * 0x2df45158) ^
           (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^ uVar16;
  uVar8 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
  uVar8 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
          uVar27 >> 0x18) ^
          uVar28 * 0x2df45158 + uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
  uVar7 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar7;
  uVar16 = (uint)lVar1;
  uVar8 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^
          uVar8 * uVar29 + uVar20 * uVar25 + (int)((ulonglong)uVar29 * (ulonglong)uVar20 >> 0x20);
  uVar7 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * uVar24 + uVar7 * uVar11 + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar29 * (ulonglong)uVar20);
  uVar7 = uVar16;
  if ((uVar20 & 0x20) != 0) {
    uVar7 = uVar8;
    uVar8 = uVar16;
  }
  local_60 = uVar7 << (uVar20 & 0x1f) | (uVar8 >> 1) >> (~uVar20 & 0x1f);
  uVar13 = uVar13 ^ uVar5;
  uVar26 = uVar26 ^ uVar6;
  uVar5 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar5 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = uVar26 * 0x2df45158 + uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20)
           ^ (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18) ^ uVar10;
  uVar6 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar16 = (uint)lVar1;
  uVar9 = (uint)((ulonglong)uVar13 * 0x2df45158) ^
          (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ uVar9;
  uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
  uVar5 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^
          uVar10 * 0x2df45158 + uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar6;
  uVar10 = (uint)lVar1;
  uVar5 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) ^
          uVar5 * uVar29 + uVar13 * uVar25 + (int)((ulonglong)uVar29 * (ulonglong)uVar13 >> 0x20);
  uVar6 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18) * uVar24 + uVar6 * uVar11 + (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ (uint)((ulonglong)uVar29 * (ulonglong)uVar13);
  uVar6 = uVar10;
  if ((uVar13 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar10;
  }
  local_68 = uVar6 << (uVar13 & 0x1f) | (uVar5 >> 1) >> (~uVar13 & 0x1f);
  local_4c = uVar4 << (uVar18 & 0x1f) | (uVar12 >> 1) >> (~uVar18 & 0x1f);
  local_54 = uVar14 << (uVar23 & 0x1f) | (uVar19 >> 1) >> (~uVar23 & 0x1f);
  local_5c = uVar8 << (uVar20 & 0x1f) | (uVar7 >> 1) >> (~uVar20 & 0x1f);
  local_64 = uVar5 << (uVar13 & 0x1f) | (uVar6 >> 1) >> (~uVar13 & 0x1f);
  uVar15 = 1;
  FUN_01202da8(param_1 + 8,param_2,&local_78,param_3,1);
  uVar4 = extraout_r1;
  if (local_6c != iVar22) {
    local_40 = *(int *)(param_2 + 4);
    local_3c = *(int *)(param_2 + 8);
    iVar17 = *(int *)(param_1 + 0x4c);
    local_28 = iVar22;
    if (local_40 == 0) {
      local_28 = 0;
    }
    local_48 = (uint)(local_40 != 0);
    local_34 = 0;
    local_44 = 0;
    local_38 = local_48;
    local_30 = local_40;
    local_2c = local_3c;
    if (iVar17 == 0) {
      do {
        uVar30 = FUN_00f45584(&local_48);
        uVar4 = (uint)((ulonglong)uVar30 >> 0x20);
        iVar17 = (int)uVar30;
        if (iVar17 == 0) goto LAB_01200f14;
        uVar30 = FUN_012246f4(&local_78,*(undefined4 *)(iVar17 + 4),*(undefined4 *)(iVar17 + 8));
        uVar12 = (uint)((ulonglong)uVar30 >> 0x20);
      } while ((int)uVar30 != 0);
    }
    else {
      do {
        while( true ) {
          do {
            uVar30 = FUN_00f45584(&local_48);
            uVar4 = (uint)((ulonglong)uVar30 >> 0x20);
            iVar22 = (int)uVar30;
            if (iVar22 == 0) goto LAB_01200f14;
            iVar22 = FUN_012246f4(&local_78,*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8))
            ;
          } while (iVar22 != 0);
          uVar12 = *(uint *)(iVar17 + 8);
          uVar5 = 1;
          if ((int)uVar12 < 0) {
            uVar5 = uVar12 ^ 0x80000000;
          }
          if (uVar5 == 0) break;
          if (uVar5 == 1) {
            iVar22 = *(int *)(iVar17 + 0x10);
            puVar2 = *(undefined4 **)(iVar17 + 0xc);
            if (iVar22 == 1) {
              uVar30 = (**(code **)(puVar2[1] + 0x10))(*puVar2,uVar4,param_3);
              uVar12 = (uint)((ulonglong)uVar30 >> 0x20);
              if ((int)uVar30 == 0) goto LAB_01200f0c;
            }
            else if (iVar22 != 0) {
              puVar21 = puVar2 + iVar22 * 8;
              do {
                uVar30 = (**(code **)(puVar2[1] + 0x10))(*puVar2,uVar4,param_3);
                uVar12 = (uint)((ulonglong)uVar30 >> 0x20);
                if ((int)uVar30 == 0) goto LAB_01200f0c;
                puVar2 = puVar2 + 8;
              } while (puVar2 != puVar21);
            }
          }
          else {
            puVar2 = *(undefined4 **)(iVar17 + 0x10);
            iVar22 = *(int *)(iVar17 + 0x14) << 5;
            while (iVar22 != 0) {
              uVar30 = (**(code **)(puVar2[1] + 0x10))(*puVar2,uVar4,param_3);
              uVar12 = (uint)((ulonglong)uVar30 >> 0x20);
              iVar22 = iVar22 + -0x20;
              puVar2 = puVar2 + 8;
              if ((int)uVar30 == 0) goto LAB_01200f0c;
            }
          }
        }
      } while (*(int *)(iVar17 + 0xc) == 0);
    }
LAB_01200f0c:
    uVar15 = 0;
    uVar4 = uVar12;
  }
LAB_01200f18:
  if (local_74 != 0) {
    uVar4 = local_74 * 5;
  }
  if (local_74 != 0 && uVar4 != 0xfffffff7) {
    thunk_FUN_016d3fb4(local_78 + local_74 * -4 + -4);
    return uVar15;
  }
  return uVar15;
LAB_01200f14:
  uVar15 = 1;
  goto LAB_01200f18;
}

