// FUN_014543d8 @ 014543d8 size=1088 calls_out=0 calls_in=3
// strings: 

void FUN_014543d8(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint local_2c;
  uint local_28;
  
  uVar15 = param_1[0xf];
  puVar19 = param_1 + 2;
  param_1[0xe] = param_1[0xe] + param_3;
  if (uVar15 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 8 - uVar15;
    uVar14 = 0;
    uVar5 = param_3;
    if (uVar3 < param_3) {
      uVar5 = uVar3;
    }
    if (uVar3 < 4) {
      uVar11 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *param_2;
      uVar11 = 4;
    }
    if ((uVar11 | 1) < uVar5) {
      uVar9 = uVar11 * 8 - 0x20;
      uVar2 = *(ushort *)((int)param_2 + uVar11);
      uVar14 = (uint)uVar2 << (uVar11 << 3);
      if (-1 < (int)uVar9) {
        uVar14 = 0;
      }
      uVar6 = uVar14 | uVar6;
      iVar4 = uVar11 * -8;
      uVar11 = uVar11 | 2;
      uVar14 = (uint)(uVar2 >> (iVar4 + 0x20U & 0xff));
      if (-1 < (int)uVar9) {
        uVar14 = (uint)uVar2 << (uVar9 & 0xff);
      }
    }
    if (uVar11 < uVar5) {
      bVar1 = *(byte *)((int)param_2 + uVar11);
      uVar9 = uVar11 * 8 - 0x20;
      uVar5 = (uint)bVar1 << (uVar11 << 3);
      if (-1 < (int)uVar9) {
        uVar5 = 0;
      }
      uVar6 = uVar5 | uVar6;
      uVar5 = (uint)(bVar1 >> (uVar11 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar9) {
        uVar5 = (uint)bVar1 << (uVar9 & 0xff);
      }
      uVar14 = uVar5 | uVar14;
    }
    iVar4 = (uVar15 & 7) * 8;
    uVar11 = iVar4 - 0x20;
    uVar5 = uVar6 << iVar4;
    if (-1 < (int)uVar11) {
      uVar5 = 0;
    }
    uVar5 = param_1[0xc] | uVar5;
    param_1[0xc] = uVar5;
    uVar14 = uVar6 >> ((uVar15 & 7) * -8 + 0x20 & 0xff) | uVar14 << iVar4;
    if (-1 < (int)uVar11) {
      uVar14 = uVar6 << (uVar11 & 0xff);
    }
    uVar14 = param_1[0xd] | uVar14;
    param_1[0xd] = uVar14;
    if (param_3 < uVar3) {
      uVar15 = uVar15 + param_3;
      goto LAB_0145480c;
    }
    uVar15 = param_1[5];
    uVar6 = param_1[4];
    uVar9 = uVar6 + *param_1;
    uVar12 = uVar15 + param_1[1] + (uint)CARRY4(uVar6,*param_1);
    uVar11 = (uVar6 << 0xd | uVar15 >> 0x13) ^ uVar9;
    uVar15 = (uVar15 << 0xd | uVar6 >> 0x13) ^ uVar12;
    uVar13 = param_1[6] ^ uVar5;
    uVar7 = param_1[7] ^ uVar14;
    uVar6 = *puVar19 + uVar13;
    uVar16 = param_1[3] + uVar7 + (uint)CARRY4(*puVar19,uVar13);
    param_1[3] = uVar6 + uVar11;
    param_1[4] = uVar6 + uVar11 ^ (uVar11 << 0x11 | uVar15 >> 0xf);
    uVar10 = uVar16 + uVar15 + (uint)CARRY4(uVar6,uVar11);
    param_1[5] = uVar10 ^ (uVar15 << 0x11 | uVar11 >> 0xf);
    *puVar19 = uVar10;
    uVar6 = uVar6 ^ (uVar13 << 0x10 | uVar7 >> 0x10);
    uVar16 = uVar16 ^ (uVar7 << 0x10 | uVar13 >> 0x10);
    *param_1 = uVar6 + uVar12 ^ uVar5;
    param_1[6] = (uVar6 << 0x15 | uVar16 >> 0xb) ^ uVar6 + uVar12;
    uVar15 = uVar16 + uVar9 + (uint)CARRY4(uVar6,uVar12);
    param_1[7] = (uVar16 << 0x15 | uVar6 >> 0xb) ^ uVar15;
    param_1[1] = uVar15 ^ uVar14;
  }
  uVar14 = param_3 - uVar3 & 0xfffffff8;
  uVar15 = param_3 - uVar3 & 7;
  if (uVar3 < uVar14) {
    local_2c = *puVar19;
    local_28 = param_1[3];
    uVar7 = param_1[4];
    uVar16 = param_1[5];
    uVar9 = param_1[7];
    uVar5 = *param_1;
    uVar6 = param_1[1];
    uVar11 = param_1[6];
    do {
      uVar18 = uVar5 + uVar7;
      uVar10 = *(uint *)((int)param_2 + uVar3);
      uVar12 = uVar6 + uVar16 + (uint)CARRY4(uVar5,uVar7);
      uVar11 = uVar10 ^ uVar11;
      uVar8 = uVar12 ^ (uVar16 << 0xd | uVar7 >> 0x13);
      uVar13 = ((uint *)((int)param_2 + uVar3))[1];
      uVar17 = uVar11 + local_2c;
      uVar6 = uVar18 ^ (uVar7 << 0xd | uVar16 >> 0x13);
      uVar9 = uVar13 ^ uVar9;
      uVar5 = uVar9 + local_28 + (uint)CARRY4(uVar11,local_2c);
      local_28 = uVar17 + uVar6;
      local_2c = uVar5 + uVar8 + (uint)CARRY4(uVar17,uVar6);
      uVar16 = local_2c ^ (uVar8 << 0x11 | uVar6 >> 0xf);
      uVar5 = uVar5 ^ (uVar9 << 0x10 | uVar11 >> 0x10);
      uVar17 = uVar17 ^ (uVar11 << 0x10 | uVar9 >> 0x10);
      uVar7 = local_28 ^ (uVar6 << 0x11 | uVar8 >> 0xf);
      uVar6 = uVar5 + uVar18 + (uint)CARRY4(uVar17,uVar12);
      uVar11 = (uVar17 << 0x15 | uVar5 >> 0xb) ^ uVar17 + uVar12;
      uVar9 = (uVar5 << 0x15 | uVar17 >> 0xb) ^ uVar6;
      uVar6 = uVar6 ^ uVar13;
      uVar3 = uVar3 + 8;
      uVar5 = uVar17 + uVar12 ^ uVar10;
    } while (uVar3 < uVar14);
    param_1[4] = uVar7;
    param_1[5] = uVar16;
    param_1[6] = uVar11;
    param_1[7] = uVar9;
    *puVar19 = local_2c;
    param_1[3] = local_28;
    *param_1 = uVar5;
    param_1[1] = uVar6;
  }
  uVar14 = 0;
  if (uVar15 < 4) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)((int)param_2 + uVar3);
    uVar6 = 4;
  }
  if ((uVar6 | 1) < uVar15) {
    uVar11 = uVar6 * 8 - 0x20;
    uVar2 = *(ushort *)((int)param_2 + uVar6 + uVar3);
    uVar14 = (uint)uVar2 << (uVar6 << 3);
    if (-1 < (int)uVar11) {
      uVar14 = 0;
    }
    uVar5 = uVar14 | uVar5;
    iVar4 = uVar6 * -8;
    uVar6 = uVar6 | 2;
    uVar14 = (uint)(uVar2 >> (iVar4 + 0x20U & 0xff));
    if (-1 < (int)uVar11) {
      uVar14 = (uint)uVar2 << (uVar11 & 0xff);
    }
  }
  if (uVar6 < uVar15) {
    bVar1 = *(byte *)((int)param_2 + uVar6 + uVar3);
    uVar11 = uVar6 * 8 - 0x20;
    uVar3 = (uint)bVar1 << (uVar6 << 3);
    if (-1 < (int)uVar11) {
      uVar3 = 0;
    }
    uVar5 = uVar3 | uVar5;
    uVar3 = (uint)(bVar1 >> (uVar6 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar11) {
      uVar3 = (uint)bVar1 << (uVar11 & 0xff);
    }
    uVar14 = uVar3 | uVar14;
  }
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar14;
LAB_0145480c:
  param_1[0xf] = uVar15;
  return;
}

