// FUN_019c8bbc @ 019c8bbc size=744 calls_out=0 calls_in=1
// strings: 

void FUN_019c8bbc(uint *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
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
  
  uVar16 = param_1[0xf];
  uVar14 = 4;
  uVar9 = 4;
  param_1[0xe] = param_1[0xe] + 4;
  if (uVar16 == 0) {
LAB_019c8de0:
    uVar16 = *param_2;
    uVar3 = 0;
  }
  else {
    uVar3 = 8 - uVar16;
    uVar8 = 4;
    uVar17 = 0;
    if (uVar3 < 4) {
      uVar8 = 0;
      uVar13 = 0;
      uVar9 = uVar3;
    }
    else {
      uVar13 = *param_2;
    }
    if ((uVar8 | 1) < uVar9) {
      uVar4 = uVar8 * 8 - 0x20;
      uVar2 = *(ushort *)((int)param_2 + uVar8);
      uVar17 = (uint)uVar2 << (uVar8 << 3);
      if (-1 < (int)uVar4) {
        uVar17 = 0;
      }
      uVar13 = uVar17 | uVar13;
      iVar5 = uVar8 * -8;
      uVar8 = uVar8 | 2;
      uVar17 = (uint)(uVar2 >> (iVar5 + 0x20U & 0xff));
      if (-1 < (int)uVar4) {
        uVar17 = (uint)uVar2 << (uVar4 & 0xff);
      }
    }
    if (uVar8 < uVar9) {
      bVar1 = *(byte *)((int)param_2 + uVar8);
      uVar4 = uVar8 * 8 - 0x20;
      uVar9 = (uint)bVar1 << (uVar8 << 3);
      if (-1 < (int)uVar4) {
        uVar9 = 0;
      }
      uVar13 = uVar9 | uVar13;
      uVar9 = (uint)(bVar1 >> (uVar8 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar4) {
        uVar9 = (uint)bVar1 << (uVar4 & 0xff);
      }
      uVar17 = uVar9 | uVar17;
    }
    iVar5 = (uVar16 & 7) * 8;
    uVar9 = iVar5 - 0x20;
    uVar8 = uVar13 << iVar5;
    if (-1 < (int)uVar9) {
      uVar8 = 0;
    }
    uVar8 = param_1[0xc] | uVar8;
    param_1[0xc] = uVar8;
    uVar17 = uVar13 >> ((uVar16 & 7) * -8 + 0x20 & 0xff) | uVar17 << iVar5;
    if (-1 < (int)uVar9) {
      uVar17 = uVar13 << (uVar9 & 0xff);
    }
    uVar17 = param_1[0xd] | uVar17;
    param_1[0xd] = uVar17;
    if (4 < uVar3) {
      uVar9 = uVar16 + 4;
      goto LAB_019c8e98;
    }
    uVar9 = param_1[2];
    uVar4 = param_1[5];
    uVar11 = param_1[4];
    uVar13 = uVar11 + *param_1;
    uVar15 = uVar4 + param_1[1] + (uint)CARRY4(uVar11,*param_1);
    uVar6 = (uVar11 << 0xd | uVar4 >> 0x13) ^ uVar13;
    uVar10 = param_1[6] ^ uVar8;
    uVar7 = (uVar4 << 0xd | uVar11 >> 0x13) ^ uVar15;
    uVar4 = uVar9 + uVar10;
    uVar11 = param_1[7] ^ uVar17;
    uVar12 = param_1[3] + uVar11 + (uint)CARRY4(uVar9,uVar10);
    param_1[3] = uVar4 + uVar6;
    param_1[4] = uVar4 + uVar6 ^ (uVar6 << 0x11 | uVar7 >> 0xf);
    uVar9 = uVar12 + uVar7 + (uint)CARRY4(uVar4,uVar6);
    param_1[2] = uVar9;
    param_1[5] = uVar9 ^ (uVar7 << 0x11 | uVar6 >> 0xf);
    uVar4 = uVar4 ^ (uVar10 << 0x10 | uVar11 >> 0x10);
    uVar12 = uVar12 ^ (uVar11 << 0x10 | uVar10 >> 0x10);
    uVar9 = uVar16 - 4;
    *param_1 = uVar4 + uVar15 ^ uVar8;
    param_1[6] = (uVar4 << 0x15 | uVar12 >> 0xb) ^ uVar4 + uVar15;
    uVar8 = uVar12 + uVar13 + (uint)CARRY4(uVar4,uVar15);
    param_1[7] = (uVar12 << 0x15 | uVar4 >> 0xb) ^ uVar8;
    param_1[1] = uVar8 ^ uVar17;
    if (uVar16 == 8) goto LAB_019c8de0;
    uVar14 = 0;
    uVar16 = 0;
  }
  uVar17 = 0;
  if ((uVar14 | 1) < uVar9) {
    uVar2 = *(ushort *)((int)param_2 + uVar14 + uVar3);
    uVar17 = (uint)uVar2 << (uVar14 << 3);
    uVar8 = uVar14 * 8 - 0x20;
    if (-1 < (int)uVar8) {
      uVar17 = 0;
    }
    uVar16 = uVar17 | uVar16;
    iVar5 = uVar14 * -8;
    uVar14 = uVar14 | 2;
    uVar17 = (uint)(uVar2 >> (iVar5 + 0x20U & 0xff));
    if (-1 < (int)uVar8) {
      uVar17 = (uint)uVar2 << (uVar8 & 0xff);
    }
  }
  if (uVar14 < uVar9) {
    uVar13 = uVar14 * 8 - 0x20;
    bVar1 = *(byte *)((int)param_2 + uVar14 + uVar3);
    uVar8 = (uint)bVar1 << (uVar14 << 3);
    if (-1 < (int)uVar13) {
      uVar8 = 0;
    }
    uVar16 = uVar8 | uVar16;
    uVar14 = (uint)(bVar1 >> (uVar14 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar13) {
      uVar14 = (uint)bVar1 << (uVar13 & 0xff);
    }
    uVar17 = uVar14 | uVar17;
  }
  param_1[0xc] = uVar16;
  param_1[0xd] = uVar17;
LAB_019c8e98:
  param_1[0xf] = uVar9;
  return;
}

