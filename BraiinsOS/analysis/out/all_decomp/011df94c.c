// FUN_011df94c @ 011df94c size=872 calls_out=0 calls_in=83
// strings: 

void FUN_011df94c(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  puVar10 = param_1 + 4;
  uVar8 = *puVar10 + param_3;
  lVar3 = (ulonglong)uVar8 * 0x4c957f2d;
  uVar16 = (uint)lVar3;
  puVar5 = param_1 + 2;
  iVar15 = (param_1[5] + (uint)CARRY4(*puVar10,param_3)) * 0x4c957f2d +
           uVar8 * 0x5851f42d + (int)((ulonglong)lVar3 >> 0x20);
  if (param_3 < 9) {
    if (param_3 < 2) {
      if (param_3 == 1) {
        uVar6 = (uint)(byte)*param_2;
        uVar8 = uVar6;
      }
      else {
        uVar6 = 0;
        uVar8 = 0;
      }
    }
    else if (param_3 < 4) {
      uVar8 = (uint)*(byte *)((int)param_2 + (param_3 - 1));
      uVar6 = (uint)(ushort)*param_2;
    }
    else {
      uVar8 = *(uint *)((int)param_2 + (param_3 - 4));
      uVar6 = *param_2;
    }
    uVar11 = param_1[1];
    uVar13 = param_1[3];
    uVar6 = *param_1 ^ uVar6;
    uVar9 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
            uVar13 >> 0x18;
    lVar3 = (ulonglong)uVar6 * (ulonglong)uVar9;
    uVar8 = *puVar5 ^ uVar8;
    uVar7 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18;
    lVar4 = (ulonglong)~uVar8 * (ulonglong)uVar7;
    uVar12 = (uint)lVar4;
    uVar7 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18) * ~uVar8 + uVar7 * ~uVar13 + (int)((ulonglong)lVar4 >> 0x20);
    uVar6 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
            uVar12 >> 0x18) ^ param_1[7] + iVar15 + (uint)CARRY4(param_1[6],uVar16) ^
            (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18) * uVar6 + uVar9 * uVar11 + (int)((ulonglong)lVar3 >> 0x20);
    uVar8 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ param_1[6] + uVar16 ^ (uint)lVar3;
  }
  else {
    if (0x10 < param_3) {
      uVar12 = param_1[1] ^ *(uint *)((int)param_2 + (param_3 - 0xc));
      uVar9 = param_1[3];
      uVar8 = *param_1 ^ *(uint *)((int)param_2 + (param_3 - 0x10));
      uVar7 = uVar9 ^ *(uint *)((int)param_2 + (param_3 - 4));
      uVar17 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
      uVar11 = *puVar5;
      lVar3 = (ulonglong)uVar8 * (ulonglong)uVar17;
      uVar6 = param_1[6];
      uVar13 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
      uVar14 = uVar11 ^ *(uint *)((int)param_2 + (param_3 - 8));
      lVar4 = (ulonglong)~uVar14 * (ulonglong)uVar13;
      uVar18 = (uint)lVar4;
      uVar12 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18) ^ param_1[7] + iVar15 + (uint)CARRY4(uVar6,uVar16) ^
               (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18) * uVar8 + uVar17 * uVar12 + (int)((ulonglong)lVar3 >> 0x20);
      uVar8 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18) * ~uVar14 + uVar13 * ~uVar7 + (int)((ulonglong)lVar4 >> 0x20);
      uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18) ^ uVar6 + uVar16 ^ (uint)lVar3;
      uVar16 = uVar12 << 0x17 | uVar8 >> 9;
      uVar8 = uVar8 << 0x17 | uVar12 >> 9;
      do {
        puVar5 = param_2 + 3;
        param_3 = param_3 - 0x10;
        puVar1 = param_2 + 2;
        puVar2 = param_2 + 1;
        uVar12 = *puVar1 ^ ~uVar11;
        uVar17 = *param_2;
        param_2 = param_2 + 4;
        uVar14 = param_1[1] ^ *puVar2;
        uVar7 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                uVar14 >> 0x18;
        uVar17 = *param_1 ^ uVar17;
        lVar3 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar18 = (uint)lVar3;
        uVar13 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) * uVar12 +
                 uVar7 * (*puVar5 ^ ~uVar9) + (int)((ulonglong)lVar3 >> 0x20);
        uVar7 = uVar9 ^ *puVar5;
        uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                uVar7 >> 0x18;
        lVar3 = (ulonglong)uVar17 * (ulonglong)uVar7;
        uVar12 = uVar11 ^ *puVar1;
        uVar13 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18) ^ uVar8 + uVar6 ^ (uint)lVar3;
        uVar8 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                uVar18 >> 0x18) ^ uVar16 + param_1[7] + (uint)CARRY4(uVar8,uVar6) ^
                (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                uVar12 >> 0x18) * uVar17 + uVar7 * uVar14 + (int)((ulonglong)lVar3 >> 0x20);
        uVar16 = uVar8 << 0x17 | uVar13 >> 9;
        uVar8 = uVar13 << 0x17 | uVar8 >> 9;
      } while (0x10 < param_3);
      *puVar10 = uVar8;
      param_1[5] = uVar16;
      return;
    }
    uVar11 = param_1[1] ^ param_2[1];
    uVar8 = *param_1 ^ *param_2;
    uVar6 = param_1[3] ^ *(uint *)((int)param_2 + (param_3 - 4));
    uVar13 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18;
    uVar9 = *puVar5 ^ *(uint *)((int)param_2 + (param_3 - 8));
    lVar3 = (ulonglong)uVar8 * (ulonglong)uVar13;
    uVar7 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18;
    lVar4 = (ulonglong)~uVar9 * (ulonglong)uVar7;
    uVar12 = (uint)lVar4;
    uVar7 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18) * ~uVar9 + uVar7 * ~uVar6 + (int)((ulonglong)lVar4 >> 0x20);
    uVar6 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
            uVar12 >> 0x18) ^ param_1[7] + iVar15 + (uint)CARRY4(param_1[6],uVar16) ^
            (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18) * uVar8 + uVar13 * uVar11 + (int)((ulonglong)lVar3 >> 0x20);
    uVar8 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) ^ param_1[6] + uVar16 ^ (uint)lVar3;
  }
  *puVar10 = uVar8 << 0x17 | uVar6 >> 9;
  param_1[5] = uVar6 << 0x17 | uVar8 >> 9;
  return;
}

