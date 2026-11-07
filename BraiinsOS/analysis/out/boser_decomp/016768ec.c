// FUN_016768ec @ 016768ec size=1180 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_016768ec(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_44 = param_1[5];
  local_2c = param_1[1];
  local_38 = param_1[2];
  local_30 = *param_1;
  local_34 = param_1[3];
  local_48 = param_1[4];
  local_40 = param_1[6];
  local_3c = param_1[7];
  FUN_01676264(&local_48,*(undefined4 *)(*param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10));
  puVar6 = (uint *)param_2[1];
  uVar12 = param_2[2];
  lVar3 = (ulonglong)(local_38 + uVar12) * 0x4c957f2d;
  uVar14 = (uint)lVar3;
  iVar13 = (local_34 + CARRY4(local_38,uVar12)) * 0x4c957f2d +
           (local_38 + uVar12) * 0x5851f42d + (int)((ulonglong)lVar3 >> 0x20);
  if (uVar12 < 9) {
    if (uVar12 < 2) {
      if (uVar12 == 1) {
        uVar5 = (uint)(byte)*puVar6;
        uVar12 = uVar5;
      }
      else {
        uVar5 = 0;
        uVar12 = 0;
      }
    }
    else if (uVar12 < 4) {
      uVar12 = (uint)*(byte *)((int)puVar6 + (uVar12 - 1));
      uVar5 = (uint)(ushort)*puVar6;
    }
    else {
      uVar12 = *(uint *)((int)puVar6 + (uVar12 - 4));
      uVar5 = *puVar6;
    }
    local_48 = local_48 ^ uVar5;
    uVar7 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
            local_3c >> 0x18;
    lVar3 = (ulonglong)local_48 * (ulonglong)uVar7;
    uVar5 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
            local_44 >> 0x18;
    local_40 = local_40 ^ uVar12;
    lVar4 = (ulonglong)~local_40 * (ulonglong)uVar5;
    uVar8 = (uint)lVar4;
    uVar12 = (local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
             local_48 >> 0x18) * ~local_40 + uVar5 * ~local_3c + (int)((ulonglong)lVar4 >> 0x20);
    uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18) ^ local_2c + iVar13 + (uint)CARRY4(local_30,uVar14) ^
            (local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
            local_40 >> 0x18) * local_48 + uVar7 * local_44 + (int)((ulonglong)lVar3 >> 0x20);
    uVar12 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^ local_30 + uVar14 ^ (uint)lVar3;
    uVar7 = uVar5 << 0x17 | uVar12 >> 9;
    uVar14 = uVar12 << 0x17 | uVar5 >> 9;
  }
  else if (uVar12 < 0x11) {
    local_48 = local_48 ^ *puVar6;
    local_3c = local_3c ^ *(uint *)((int)puVar6 + (uVar12 - 4));
    local_40 = local_40 ^ *(uint *)((int)puVar6 + (uVar12 - 8));
    uVar5 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
            local_3c >> 0x18;
    local_44 = local_44 ^ puVar6[1];
    lVar3 = (ulonglong)local_48 * (ulonglong)uVar5;
    uVar12 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
             local_44 >> 0x18;
    lVar4 = (ulonglong)~local_40 * (ulonglong)uVar12;
    uVar7 = (uint)lVar4;
    uVar12 = (local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
             local_48 >> 0x18) * ~local_40 + uVar12 * ~local_3c + (int)((ulonglong)lVar4 >> 0x20);
    uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ local_2c + iVar13 + (uint)CARRY4(local_30,uVar14) ^
            (local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
            local_40 >> 0x18) * local_48 + uVar5 * local_44 + (int)((ulonglong)lVar3 >> 0x20);
    uVar12 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^ local_30 + uVar14 ^ (uint)lVar3;
    uVar7 = uVar5 << 0x17 | uVar12 >> 9;
    uVar14 = uVar12 << 0x17 | uVar5 >> 9;
  }
  else {
    uVar9 = local_48 ^ *(uint *)((int)puVar6 + (uVar12 - 0x10));
    uVar15 = local_3c ^ *(uint *)((int)puVar6 + (uVar12 - 4));
    uVar10 = local_44 ^ *(uint *)((int)puVar6 + (uVar12 - 0xc));
    uVar7 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
            uVar15 >> 0x18;
    lVar3 = (ulonglong)uVar9 * (ulonglong)uVar7;
    uVar8 = local_40 ^ *(uint *)((int)puVar6 + (uVar12 - 8));
    uVar11 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
    lVar4 = (ulonglong)~uVar8 * (ulonglong)uVar11;
    uVar5 = (uint)lVar4;
    uVar10 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18) ^ local_2c + iVar13 + (uint)CARRY4(local_30,uVar14) ^
             (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) * uVar9 + uVar7 * uVar10 + (int)((ulonglong)lVar3 >> 0x20);
    uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18) * ~uVar8 + uVar11 * ~uVar15 + (int)((ulonglong)lVar4 >> 0x20);
    uVar14 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18) ^ local_30 + uVar14 ^ (uint)lVar3;
    uVar7 = uVar10 << 0x17 | uVar14 >> 9;
    uVar14 = uVar14 << 0x17 | uVar10 >> 9;
    do {
      puVar1 = puVar6 + 3;
      uVar12 = uVar12 - 0x10;
      puVar2 = puVar6 + 2;
      uVar10 = *puVar2 ^ ~local_40;
      uVar9 = local_44 ^ puVar6[1];
      uVar15 = *puVar6;
      uVar8 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
              uVar9 >> 0x18;
      puVar6 = puVar6 + 4;
      lVar3 = (ulonglong)uVar10 * (ulonglong)uVar8;
      uVar5 = (uint)lVar3;
      uVar15 = local_48 ^ uVar15;
      uVar8 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
              uVar15 >> 0x18) * uVar10 +
              uVar8 * (*puVar1 ^ ~local_3c) + (int)((ulonglong)lVar3 >> 0x20);
      uVar10 = local_3c ^ *puVar1;
      uVar11 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18;
      lVar3 = (ulonglong)uVar15 * (ulonglong)uVar11;
      uVar10 = local_40 ^ *puVar2;
      uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18) ^ uVar14 + local_30 ^ (uint)lVar3;
      uVar14 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18) ^ uVar7 + local_2c + (uint)CARRY4(uVar14,local_30) ^
               (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18) * uVar15 + uVar11 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
      uVar7 = uVar14 << 0x17 | uVar8 >> 9;
      uVar14 = uVar8 << 0x17 | uVar14 >> 9;
    } while (0x10 < uVar12);
  }
  uVar12 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  uVar5 = uVar14 ^ 0xff;
  lVar3 = (ulonglong)uVar12 * 0xb36a80d2;
  uVar8 = (uint)lVar3;
  uVar12 = (uVar5 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * -0x4c957f2e + uVar12 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar14 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^
           uVar7 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar7 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar7;
  uVar9 = (uint)lVar3;
  uVar5 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar8 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar4 = (ulonglong)uVar5 * (ulonglong)uVar8;
  uVar12 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * ~local_30 + uVar7 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar12 = (uint)lVar4 ^
           (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18);
  uVar7 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * uVar5 + uVar8 * uVar14 + (int)((ulonglong)lVar4 >> 0x20) ^
          (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          );
  uVar14 = uVar7;
  if ((uVar5 & 0x20) != 0) {
    uVar14 = uVar12;
    uVar12 = uVar7;
  }
  return CONCAT44(uVar14 << (uVar5 & 0x1f) | (uVar12 >> 1) >> (~uVar5 & 0x1f),
                  uVar12 << (uVar5 & 0x1f) | (uVar14 >> 1) >> (~uVar5 & 0x1f));
}

