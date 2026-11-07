// FUN_0163d26c @ 0163d26c size=772 calls_out=0 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0163d4d8) */
/* WARNING: Removing unreachable block (ram,0x0163d4f0) */

void FUN_0163d26c(uint *param_1,uint *param_2)

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
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar3 = param_1[0xf];
  param_1[0xe] = param_1[0xe] + 4;
  if (uVar3 != 0) {
    uVar15 = 8 - uVar3;
    uVar10 = 4;
    if (3 < uVar15) {
      unaff_r5 = *param_2;
      uVar7 = 4;
    }
    else {
      uVar10 = 0;
      uVar7 = uVar15;
    }
    uVar16 = 0;
    if (3 >= uVar15) {
      unaff_r5 = 0;
    }
    if ((uVar10 | 1) < uVar7) {
      uVar4 = uVar10 * 8 - 0x20;
      uVar2 = *(ushort *)((int)param_2 + uVar10);
      uVar16 = (uint)uVar2 << (uVar10 << 3);
      if (-1 < (int)uVar4) {
        uVar16 = 0;
      }
      unaff_r5 = uVar16 | unaff_r5;
      iVar5 = uVar10 * -8;
      uVar10 = uVar10 | 2;
      uVar16 = (uint)(uVar2 >> (iVar5 + 0x20U & 0xff));
      if (-1 < (int)uVar4) {
        uVar16 = (uint)uVar2 << (uVar4 & 0xff);
      }
    }
    if (uVar10 < uVar7) {
      bVar1 = *(byte *)((int)param_2 + uVar10);
      uVar4 = uVar10 * 8 - 0x20;
      uVar7 = (uint)bVar1 << (uVar10 << 3);
      if (-1 < (int)uVar4) {
        uVar7 = 0;
      }
      unaff_r5 = uVar7 | unaff_r5;
      uVar10 = (uint)(bVar1 >> (uVar10 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar4) {
        uVar10 = (uint)bVar1 << (uVar4 & 0xff);
      }
      uVar16 = uVar10 | uVar16;
    }
    iVar5 = (uVar3 & 7) * 8;
    uVar7 = iVar5 - 0x20;
    uVar10 = unaff_r5 << iVar5;
    if (-1 < (int)uVar7) {
      uVar10 = 0;
    }
    uVar10 = param_1[0xc] | uVar10;
    param_1[0xc] = uVar10;
    uVar16 = unaff_r5 >> ((uVar3 & 7) * -8 + 0x20 & 0xff) | uVar16 << iVar5;
    if (-1 < (int)uVar7) {
      uVar16 = unaff_r5 << (uVar7 & 0xff);
    }
    uVar16 = param_1[0xd] | uVar16;
    param_1[0xd] = uVar16;
    if (4 < uVar15) {
      param_1[0xf] = uVar3 + 4;
      return;
    }
    uVar4 = param_1[5];
    uVar11 = param_1[4];
    uVar7 = uVar11 + *param_1;
    uVar8 = uVar4 + param_1[1] + (uint)CARRY4(uVar11,*param_1);
    uVar6 = (uVar11 << 0xd | uVar4 >> 0x13) ^ uVar7;
    uVar13 = (uVar4 << 0xd | uVar11 >> 0x13) ^ uVar8;
    uVar14 = param_1[6] ^ uVar10;
    uVar11 = param_1[2];
    uVar4 = param_1[7] ^ uVar16;
    uVar9 = uVar11 + uVar14;
    uVar11 = param_1[3] + uVar4 + (uint)CARRY4(uVar11,uVar14);
    param_1[4] = uVar9 + uVar6 ^ (uVar6 << 0x11 | uVar13 >> 0xf);
    uVar12 = uVar11 + uVar13 + (uint)CARRY4(uVar9,uVar6);
    param_1[2] = uVar12;
    param_1[5] = uVar12 ^ (uVar13 << 0x11 | uVar6 >> 0xf);
    uVar12 = uVar9 ^ (uVar14 << 0x10 | uVar4 >> 0x10);
    uVar11 = uVar11 ^ (uVar4 << 0x10 | uVar14 >> 0x10);
    param_1[3] = uVar9 + uVar6;
    param_1[6] = (uVar12 << 0x15 | uVar11 >> 0xb) ^ uVar12 + uVar8;
    *param_1 = uVar12 + uVar8 ^ uVar10;
    uVar10 = uVar11 + uVar7 + (uint)CARRY4(uVar12,uVar8);
    param_1[7] = (uVar11 << 0x15 | uVar12 >> 0xb) ^ uVar10;
    param_1[1] = uVar10 ^ uVar16;
    if (uVar3 != 8) {
      uVar3 = uVar3 - 4;
      uVar7 = 0;
      uVar10 = 0;
      if (1 < uVar3) {
        uVar10 = (uint)*(ushort *)((int)param_2 + uVar15);
        uVar7 = 2;
      }
      goto LAB_0163d4f8;
    }
  }
  uVar10 = *param_2;
  uVar15 = 0;
  uVar3 = 4;
  uVar7 = 4;
LAB_0163d4f8:
  uVar16 = 0;
  if (uVar7 < uVar3) {
    uVar4 = uVar7 * 8 - 0x20;
    bVar1 = *(byte *)((int)param_2 + uVar7 + uVar15);
    uVar15 = (uint)bVar1 << (uVar7 << 3);
    if (-1 < (int)uVar4) {
      uVar15 = 0;
    }
    uVar10 = uVar15 | uVar10;
    uVar16 = (uint)(bVar1 >> (uVar7 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar4) {
      uVar16 = (uint)bVar1 << (uVar4 & 0xff);
    }
  }
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar16;
  param_1[0xf] = uVar3;
  return;
}

