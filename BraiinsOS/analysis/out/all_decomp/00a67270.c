// FUN_00a67270 @ 00a67270 size=1060 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_00a67270(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  param_1 = param_1 + param_2 * -0x10;
  puVar13 = *(uint **)(param_1 + -0xc);
  uVar14 = *(uint *)(param_1 + -8);
  FUN_00ac348c(&local_48);
  lVar3 = (ulonglong)(local_38 + uVar14) * 0x4c957f2d;
  uVar15 = (uint)lVar3;
  iVar16 = (local_34 + (uint)CARRY4(local_38,uVar14)) * 0x4c957f2d +
           (local_38 + uVar14) * 0x5851f42d + (int)((ulonglong)lVar3 >> 0x20);
  if (uVar14 < 9) {
    if (uVar14 < 2) {
      if (uVar14 == 1) {
        uVar5 = (uint)(byte)*puVar13;
        uVar14 = uVar5;
      }
      else {
        uVar5 = 0;
        uVar14 = 0;
      }
    }
    else if (uVar14 < 4) {
      uVar14 = (uint)*(byte *)((int)puVar13 + (uVar14 - 1));
      uVar5 = (uint)(ushort)*puVar13;
    }
    else {
      uVar14 = *(uint *)((int)puVar13 + (uVar14 - 4));
      uVar5 = *puVar13;
    }
    local_48 = local_48 ^ uVar5;
    local_40 = local_40 ^ uVar14;
    uVar7 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
            local_3c >> 0x18;
    lVar3 = (ulonglong)local_48 * (ulonglong)uVar7;
    uVar5 = (uint)lVar3;
    uVar14 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
             local_44 >> 0x18;
    uVar8 = ~local_40;
    uVar7 = (local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
            local_40 >> 0x18) * local_48 + uVar7 * local_44 + (int)((ulonglong)lVar3 >> 0x20);
    lVar3 = (ulonglong)uVar8 * (ulonglong)uVar14;
    uVar9 = (uint)lVar3;
    iVar6 = uVar14 * ~local_3c + (int)((ulonglong)lVar3 >> 0x20);
    uVar14 = local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
             local_48 >> 0x18;
  }
  else {
    if (0x10 < uVar14) {
      uVar11 = local_44 ^ *(uint *)((int)puVar13 + (uVar14 - 0xc));
      uVar10 = local_3c ^ *(uint *)((int)puVar13 + (uVar14 - 4));
      uVar9 = local_48 ^ *(uint *)((int)puVar13 + (uVar14 - 0x10));
      uVar7 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
              uVar10 >> 0x18;
      lVar3 = (ulonglong)uVar9 * (ulonglong)uVar7;
      uVar12 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
      uVar8 = local_40 ^ *(uint *)((int)puVar13 + (uVar14 - 8));
      lVar4 = (ulonglong)~uVar8 * (ulonglong)uVar12;
      uVar5 = (uint)lVar4;
      uVar7 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18) ^ local_2c + iVar16 + (uint)CARRY4(local_30,uVar15) ^
              (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18) * uVar9 + uVar7 * uVar11 + (int)((ulonglong)lVar3 >> 0x20);
      uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
              uVar9 >> 0x18) * ~uVar8 + uVar12 * ~uVar10 + (int)((ulonglong)lVar4 >> 0x20);
      uVar15 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18) ^ local_30 + uVar15 ^ (uint)lVar3;
      uVar8 = uVar7 << 0x17 | uVar15 >> 9;
      uVar15 = uVar15 << 0x17 | uVar7 >> 9;
      do {
        puVar1 = puVar13 + 3;
        uVar14 = uVar14 - 0x10;
        puVar2 = puVar13 + 2;
        uVar10 = *puVar2 ^ ~local_40;
        uVar9 = local_44 ^ puVar13[1];
        uVar7 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                uVar9 >> 0x18;
        uVar12 = *puVar13;
        puVar13 = puVar13 + 4;
        lVar3 = (ulonglong)uVar10 * (ulonglong)uVar7;
        uVar5 = (uint)lVar3;
        uVar12 = local_48 ^ uVar12;
        uVar7 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                uVar12 >> 0x18) * uVar10 +
                uVar7 * (*puVar1 ^ ~local_3c) + (int)((ulonglong)lVar3 >> 0x20);
        uVar10 = local_3c ^ *puVar1;
        uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                 uVar10 >> 0x18;
        lVar3 = (ulonglong)uVar12 * (ulonglong)uVar10;
        uVar11 = local_40 ^ *puVar2;
        uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                uVar7 >> 0x18) ^ uVar15 + local_30 ^ (uint)lVar3;
        uVar15 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18) ^ uVar8 + local_2c + (uint)CARRY4(uVar15,local_30) ^
                 (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18) * uVar12 + uVar10 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
        uVar8 = uVar15 << 0x17 | uVar7 >> 9;
        uVar15 = uVar7 << 0x17 | uVar15 >> 9;
      } while (0x10 < uVar14);
      goto LAB_00a675c4;
    }
    local_48 = local_48 ^ *puVar13;
    local_44 = local_44 ^ puVar13[1];
    local_3c = local_3c ^ *(uint *)((int)puVar13 + (uVar14 - 4));
    uVar7 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
            local_3c >> 0x18;
    local_40 = local_40 ^ *(uint *)((int)puVar13 + (uVar14 - 8));
    lVar3 = (ulonglong)local_48 * (ulonglong)uVar7;
    uVar5 = (uint)lVar3;
    uVar8 = ~local_40;
    uVar10 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
             local_44 >> 0x18;
    uVar7 = (local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
            local_40 >> 0x18) * local_48 + uVar7 * local_44 + (int)((ulonglong)lVar3 >> 0x20);
    uVar14 = local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
             local_48 >> 0x18;
    lVar3 = (ulonglong)uVar8 * (ulonglong)uVar10;
    uVar9 = (uint)lVar3;
    iVar6 = uVar10 * ~local_3c + (int)((ulonglong)lVar3 >> 0x20);
  }
  uVar14 = uVar14 * uVar8 + iVar6;
  uVar7 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) ^ local_2c + iVar16 + (uint)CARRY4(local_30,uVar15) ^ uVar7;
  uVar5 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) ^ local_30 + uVar15 ^ uVar5;
  uVar8 = uVar7 << 0x17 | uVar5 >> 9;
  uVar15 = uVar5 << 0x17 | uVar7 >> 9;
LAB_00a675c4:
  uVar14 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  lVar3 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar7 = (uint)lVar3;
  uVar10 = uVar15 ^ 0xff;
  uVar14 = (uVar10 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar5 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
  uVar9 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  uVar14 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^
           uVar8 * 0x2df45158 + uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
  lVar3 = (ulonglong)uVar9 * (ulonglong)uVar5;
  uVar15 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18;
  lVar4 = (ulonglong)~local_30 * (ulonglong)uVar15;
  uVar7 = (uint)lVar4;
  uVar15 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * ~local_30 + uVar15 * ~local_2c + (int)((ulonglong)lVar4 >> 0x20);
  uVar7 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) ^ uVar14 * uVar9 +
              uVar5 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                       (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
              (int)((ulonglong)lVar3 >> 0x20);
  uVar14 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^ (uint)lVar3;
  uVar15 = uVar7;
  if ((uVar5 & 0x20) != 0) {
    uVar15 = uVar14;
    uVar14 = uVar7;
  }
  return CONCAT44(uVar15 << (uVar5 & 0x1f) | (uVar14 >> 1) >> (~uVar5 & 0x1f),
                  uVar14 << (uVar5 & 0x1f) | (uVar15 >> 1) >> (~uVar5 & 0x1f));
}

