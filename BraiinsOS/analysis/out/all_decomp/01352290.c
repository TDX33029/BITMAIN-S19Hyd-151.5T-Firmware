// FUN_01352290 @ 01352290 size=940 calls_out=0 calls_in=21
// strings: 

void FUN_01352290(uint *param_1,uint *param_2,uint param_3)

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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  uVar5 = param_1[4];
  uVar11 = uVar5 + param_3;
  lVar3 = (ulonglong)uVar11 * 0x4c957f2d;
  uVar14 = (uint)lVar3;
  puVar6 = param_1 + 2;
  iVar16 = (param_1[5] + (uint)CARRY4(uVar5,param_3)) * 0x4c957f2d +
           uVar11 * 0x5851f42d + (int)((ulonglong)lVar3 >> 0x20);
  if (param_3 < 9) {
    if (param_3 < 2) {
      if (param_3 == 1) {
        uVar11 = (uint)(byte)*param_2;
        uVar5 = uVar11;
      }
      else {
        uVar11 = 0;
        uVar5 = 0;
      }
    }
    else if (param_3 < 4) {
      uVar5 = (uint)*(byte *)((int)param_2 + (param_3 - 1));
      uVar11 = (uint)(ushort)*param_2;
    }
    else {
      uVar5 = *(uint *)((int)param_2 + (param_3 - 4));
      uVar11 = *param_2;
    }
    uVar9 = param_1[1];
    uVar12 = param_1[3];
    uVar11 = *param_1 ^ uVar11;
    uVar8 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
            uVar12 >> 0x18;
    lVar3 = (ulonglong)uVar11 * (ulonglong)uVar8;
    uVar5 = *puVar6 ^ uVar5;
    uVar7 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    lVar4 = (ulonglong)~uVar5 * (ulonglong)uVar7;
    uVar10 = (uint)lVar4;
    uVar7 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18) * ~uVar5 + uVar7 * ~uVar12 + (int)((ulonglong)lVar4 >> 0x20);
    uVar11 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ param_1[7] + iVar16 + (uint)CARRY4(param_1[6],uVar14) ^
             (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18) * uVar11 + uVar8 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
    uVar5 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ param_1[6] + uVar14 ^ (uint)lVar3;
  }
  else {
    if (0x10 < param_3) {
      uVar11 = *param_1 ^ *(uint *)((int)param_2 + (param_3 - 0x10));
      uVar12 = *puVar6;
      uVar15 = param_1[3];
      uVar13 = uVar15 ^ *(uint *)((int)param_2 + (param_3 - 4));
      uVar9 = param_1[1] ^ *(uint *)((int)param_2 + (param_3 - 0xc));
      uVar5 = param_1[6];
      uVar7 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
              uVar13 >> 0x18;
      lVar3 = (ulonglong)uVar11 * (ulonglong)uVar7;
      uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
      uVar8 = uVar12 ^ *(uint *)((int)param_2 + (param_3 - 8));
      lVar4 = (ulonglong)~uVar8 * (ulonglong)uVar10;
      uVar17 = (uint)lVar4;
      uVar7 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
              uVar17 >> 0x18) ^ param_1[7] + iVar16 + (uint)CARRY4(uVar5,uVar14) ^
              (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18) * uVar11 + uVar7 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
      uVar11 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) * ~uVar8 + uVar10 * ~uVar13 + (int)((ulonglong)lVar4 >> 0x20);
      uVar11 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) ^ uVar5 + uVar14 ^ (uint)lVar3;
      uVar14 = uVar7 << 0x17 | uVar11 >> 9;
      uVar11 = uVar11 << 0x17 | uVar7 >> 9;
      do {
        puVar6 = param_2 + 3;
        param_3 = param_3 - 0x10;
        puVar1 = param_2 + 2;
        uVar9 = *puVar1 ^ ~uVar12;
        puVar2 = param_2 + 1;
        uVar10 = *param_2;
        param_2 = param_2 + 4;
        uVar13 = param_1[1] ^ *puVar2;
        uVar8 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                uVar13 >> 0x18;
        lVar3 = (ulonglong)uVar9 * (ulonglong)uVar8;
        uVar7 = (uint)lVar3;
        uVar10 = *param_1 ^ uVar10;
        uVar8 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                uVar10 >> 0x18) * uVar9 +
                uVar8 * (*puVar6 ^ ~uVar15) + (int)((ulonglong)lVar3 >> 0x20);
        uVar9 = uVar15 ^ *puVar6;
        uVar9 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                uVar9 >> 0x18;
        lVar3 = (ulonglong)uVar10 * (ulonglong)uVar9;
        uVar17 = uVar12 ^ *puVar1;
        uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                uVar8 >> 0x18) ^ uVar11 + uVar5 ^ (uint)lVar3;
        uVar11 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                 uVar7 >> 0x18) ^ uVar14 + param_1[7] + (uint)CARRY4(uVar11,uVar5) ^
                 (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) * uVar10 + uVar9 * uVar13 + (int)((ulonglong)lVar3 >> 0x20);
        uVar14 = uVar11 << 0x17 | uVar8 >> 9;
        uVar11 = uVar8 << 0x17 | uVar11 >> 9;
      } while (0x10 < param_3);
      goto LAB_013525d8;
    }
    uVar9 = param_1[1] ^ param_2[1];
    uVar5 = *param_1 ^ *param_2;
    uVar11 = param_1[3] ^ *(uint *)((int)param_2 + (param_3 - 4));
    uVar12 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18;
    uVar8 = *puVar6 ^ *(uint *)((int)param_2 + (param_3 - 8));
    lVar3 = (ulonglong)uVar5 * (ulonglong)uVar12;
    uVar7 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    lVar4 = (ulonglong)~uVar8 * (ulonglong)uVar7;
    uVar10 = (uint)lVar4;
    uVar7 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18) * ~uVar8 + uVar7 * ~uVar11 + (int)((ulonglong)lVar4 >> 0x20);
    uVar11 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ param_1[7] + iVar16 + (uint)CARRY4(param_1[6],uVar14) ^
             (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) * uVar5 + uVar12 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
    uVar5 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ param_1[6] + uVar14 ^ (uint)lVar3;
  }
  uVar14 = uVar11 << 0x17 | uVar5 >> 9;
  uVar11 = uVar5 << 0x17 | uVar11 >> 9;
LAB_013525d8:
  uVar5 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18;
  lVar3 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar3;
  uVar7 = uVar11 ^ 0xff;
  uVar5 = (uVar7 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  param_1[4] = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
  param_1[5] = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
               uVar8 >> 0x18) ^
               uVar14 * 0x2df45158 +
               uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
  return;
}

