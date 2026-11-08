// FUN_01297c94 @ 01297c94 size=1688 calls_out=1 calls_in=2
// strings: 

undefined2 FUN_01297c94(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
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
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_3c;
  uint local_34;
  uint local_28;
  
  uVar9 = param_2 & 7;
  uVar6 = param_2 & 0xfffffff8;
  local_28 = 0x6e657261;
  uVar15 = 0x6c796765;
  uVar11 = 0x736f6d65;
  uVar5 = 0x70736575;
  uVar18 = 0x8668acff;
  uVar13 = 0xd8666c1a;
  uVar20 = 0x9662bafc;
  uVar21 = 0xcf7666ea;
  local_3c = 0;
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar22 = 0;
    do {
      uVar16 = *(uint *)(param_1 + uVar22);
      uVar12 = uVar11 + uVar18 + (uint)CARRY4(uVar5,uVar13);
      uVar10 = uVar12 ^ (uVar18 << 0xd | uVar13 >> 0x13);
      uVar14 = uVar5 + uVar13 ^ (uVar13 << 0xd | uVar18 >> 0x13);
      uVar19 = ((uint *)(param_1 + uVar22))[1];
      uVar21 = uVar16 ^ uVar21;
      uVar20 = uVar19 ^ uVar20;
      uVar17 = uVar21 + local_28;
      uVar8 = uVar20 + uVar15 + (uint)CARRY4(uVar21,local_28);
      uVar15 = uVar17 + uVar14;
      local_28 = uVar8 + uVar10 + (uint)CARRY4(uVar17,uVar14);
      uVar18 = local_28 ^ (uVar10 << 0x11 | uVar14 >> 0xf);
      uVar8 = uVar8 ^ (uVar20 << 0x10 | uVar21 >> 0x10);
      uVar17 = uVar17 ^ (uVar21 << 0x10 | uVar20 >> 0x10);
      uVar22 = uVar22 + 8;
      uVar11 = uVar8 + uVar5 + uVar13 + (uint)CARRY4(uVar17,uVar12);
      uVar20 = (uVar8 << 0x15 | uVar17 >> 0xb) ^ uVar11;
      uVar11 = uVar11 ^ uVar19;
      uVar13 = uVar15 ^ (uVar14 << 0x11 | uVar10 >> 0xf);
      uVar21 = (uVar17 << 0x15 | uVar8 >> 0xb) ^ uVar17 + uVar12;
      uVar5 = uVar17 + uVar12 ^ uVar16;
    } while (uVar22 < uVar6);
  }
  if (uVar9 < 4) {
    uVar22 = 0;
    local_34 = 0;
  }
  else {
    local_34 = *(uint *)(param_1 + uVar6);
    uVar22 = 4;
  }
  if ((uVar22 | 1) < uVar9) {
    uVar8 = uVar22 * 8 - 0x20;
    uVar3 = *(ushort *)(param_1 + uVar6 + uVar22);
    uVar17 = (uint)uVar3 << (uVar22 << 3);
    if (-1 < (int)uVar8) {
      uVar17 = 0;
    }
    local_34 = uVar17 | local_34;
    iVar1 = uVar22 * -8;
    uVar22 = uVar22 | 2;
    local_3c = (uint)(uVar3 >> (iVar1 + 0x20U & 0xff));
    if (-1 < (int)uVar8) {
      local_3c = (uint)uVar3 << (uVar8 & 0xff);
    }
  }
  if (uVar22 < uVar9) {
    bVar2 = *(byte *)(param_1 + uVar22 + uVar6);
    uVar6 = (uint)bVar2 << (uVar22 << 3);
    uVar17 = uVar22 * 8 - 0x20;
    uVar9 = (uint)(bVar2 >> (uVar22 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar17) {
      uVar6 = 0;
      uVar9 = (uint)bVar2 << (uVar17 & 0xff);
    }
    local_34 = uVar6 | local_34;
    local_3c = uVar9 | local_3c;
  }
  uVar17 = uVar11 + uVar18 + (uint)CARRY4(uVar5,uVar13);
  uVar11 = uVar17 ^ (uVar18 << 0xd | uVar13 >> 0x13);
  uVar22 = uVar5 + uVar13 ^ (uVar13 << 0xd | uVar18 >> 0x13);
  local_3c = local_3c | param_2 << 0x18;
  uVar20 = local_3c ^ uVar20;
  uVar21 = local_34 ^ uVar21;
  uVar6 = uVar21 + local_28;
  uVar9 = uVar20 + uVar15 + (uint)CARRY4(uVar21,local_28);
  uVar15 = (uVar21 << 0x10 | uVar20 >> 0x10) ^ uVar6;
  uVar18 = uVar9 + uVar11 + (uint)CARRY4(uVar6,uVar22);
  uVar9 = (uVar20 << 0x10 | uVar21 >> 0x10) ^ uVar9;
  uVar20 = uVar18 ^ (uVar11 << 0x11 | uVar22 >> 0xf);
  uVar13 = uVar9 + uVar5 + uVar13 + (uint)CARRY4(uVar15,uVar17);
  uVar5 = uVar6 + uVar22 ^ (uVar22 << 0x11 | uVar11 >> 0xf);
  local_34 = uVar15 + uVar17 ^ local_34;
  uVar12 = local_34 + uVar5;
  uVar8 = (uVar13 ^ local_3c) + uVar20 + (uint)CARRY4(local_34,uVar5);
  uVar21 = uVar8 ^ (uVar20 << 0xd | uVar5 >> 0x13);
  uVar20 = uVar12 ^ (uVar5 << 0xd | uVar20 >> 0x13);
  uVar13 = (uVar9 << 0x15 | uVar15 >> 0xb) ^ uVar13;
  uVar18 = uVar18 ^ 0xee;
  uVar5 = (uVar15 << 0x15 | uVar9 >> 0xb) ^ uVar15 + uVar17;
  uVar11 = uVar5 + uVar18;
  uVar15 = uVar13 + uVar6 + uVar22 + (uint)CARRY4(uVar5,uVar18);
  uVar10 = uVar21 + uVar15 + (uint)CARRY4(uVar20,uVar11);
  uVar17 = uVar10 ^ (uVar21 << 0x11 | uVar20 >> 0xf);
  uVar21 = uVar20 + uVar11 ^ (uVar20 << 0x11 | uVar21 >> 0xf);
  uVar15 = (uVar13 << 0x10 | uVar5 >> 0x10) ^ uVar15;
  uVar5 = (uVar5 << 0x10 | uVar13 >> 0x10) ^ uVar11;
  uVar9 = uVar5 + uVar8;
  uVar22 = uVar15 + uVar12 + (uint)CARRY4(uVar5,uVar8);
  uVar8 = uVar17 + uVar22 + (uint)CARRY4(uVar21,uVar9);
  uVar22 = (uVar15 << 0x15 | uVar5 >> 0xb) ^ uVar22;
  uVar18 = (uVar5 << 0x15 | uVar15 >> 0xb) ^ uVar9;
  uVar6 = (uVar17 << 0xd | uVar21 >> 0x13) ^ uVar8;
  uVar13 = uVar18 + uVar10;
  uVar5 = (uVar21 << 0xd | uVar17 >> 0x13) ^ uVar21 + uVar9;
  uVar15 = uVar22 + uVar20 + uVar11 + (uint)CARRY4(uVar18,uVar10);
  uVar10 = uVar6 + uVar15 + (uint)CARRY4(uVar5,uVar13);
  uVar11 = (uVar6 << 0x11 | uVar5 >> 0xf) ^ uVar10;
  uVar20 = (uVar5 << 0x11 | uVar6 >> 0xf) ^ uVar5 + uVar13;
  uVar15 = (uVar22 << 0x10 | uVar18 >> 0x10) ^ uVar15;
  uVar18 = (uVar18 << 0x10 | uVar22 >> 0x10) ^ uVar13;
  uVar22 = uVar18 + uVar8;
  uVar21 = uVar15 + uVar21 + uVar9 + (uint)CARRY4(uVar18,uVar8);
  uVar9 = uVar11 + uVar21 + (uint)CARRY4(uVar20,uVar22);
  uVar6 = (uVar11 << 0xd | uVar20 >> 0x13) ^ uVar9;
  uVar17 = (uVar20 << 0xd | uVar11 >> 0x13) ^ uVar20 + uVar22;
  uVar21 = (uVar15 << 0x15 | uVar18 >> 0xb) ^ uVar21;
  uVar11 = (uVar18 << 0x15 | uVar15 >> 0xb) ^ uVar22;
  uVar15 = uVar11 + uVar10;
  uVar18 = uVar21 + uVar5 + uVar13 + (uint)CARRY4(uVar11,uVar10);
  uVar8 = uVar17 + uVar15;
  uVar23 = uVar6 + uVar18 + (uint)CARRY4(uVar17,uVar15);
  uVar14 = (uVar6 << 0x11 | uVar17 >> 0xf) ^ uVar23;
  uVar5 = (uVar17 << 0x11 | uVar6 >> 0xf) ^ uVar8;
  uVar6 = uVar5 ^ 0xdd;
  uVar18 = (uVar21 << 0x10 | uVar11 >> 0x10) ^ uVar18;
  uVar15 = (uVar11 << 0x10 | uVar21 >> 0x10) ^ uVar15;
  uVar12 = uVar15 + uVar9;
  uVar9 = uVar18 + uVar20 + uVar22 + (uint)CARRY4(uVar15,uVar9);
  uVar10 = uVar14 + uVar9 + (uint)CARRY4(uVar6,uVar12);
  uVar13 = (uVar14 << 0xd | uVar5 >> 0x13) ^ uVar10;
  uVar20 = (uVar6 << 0xd | uVar14 >> 0x13) ^ uVar6 + uVar12;
  uVar22 = uVar18 << 0x15 | uVar15 >> 0xb;
  uVar15 = uVar15 << 0x15 | uVar18 >> 0xb;
  uVar9 = uVar22 ^ uVar9;
  uVar18 = uVar15 ^ uVar12;
  uVar11 = uVar18 + uVar23;
  uVar21 = uVar9 + uVar8 + (uint)CARRY4(uVar18,uVar23);
  uVar24 = uVar13 + uVar21 + (uint)CARRY4(uVar20,uVar11);
  uVar21 = (uVar9 << 0x10 | uVar18 >> 0x10) ^ uVar21;
  uVar9 = (uVar18 << 0x10 | uVar9 >> 0x10) ^ uVar11;
  uVar19 = uVar24 ^ (uVar13 << 0x11 | uVar20 >> 0xf);
  uVar17 = uVar10 + uVar9;
  uVar18 = uVar20 + uVar11 ^ (uVar20 << 0x11 | uVar13 >> 0xf);
  uVar13 = uVar6 + uVar12 + uVar21 + (uint)CARRY4(uVar10,uVar9);
  uVar16 = uVar19 + uVar13 + (uint)CARRY4(uVar18,uVar17);
  uVar10 = (uVar19 << 0xd | uVar18 >> 0x13) ^ uVar16;
  uVar6 = (uVar18 << 0xd | uVar19 >> 0x13) ^ uVar18 + uVar17;
  uVar13 = uVar13 ^ (uVar21 << 0x15 | uVar9 >> 0xb);
  uVar21 = uVar17 ^ (uVar9 << 0x15 | uVar21 >> 0xb);
  uVar12 = uVar21 + uVar24;
  uVar11 = uVar13 + uVar20 + uVar11 + (uint)CARRY4(uVar21,uVar24);
  uVar9 = (uVar13 << 0x10 | uVar21 >> 0x10) ^ uVar11;
  uVar20 = (uVar21 << 0x10 | uVar13 >> 0x10) ^ uVar12;
  uVar13 = uVar10 + uVar11 + (uint)CARRY4(uVar6,uVar12);
  uVar11 = uVar20 + uVar16;
  uVar17 = uVar9 + uVar18 + uVar17 + (uint)CARRY4(uVar20,uVar16);
  uVar18 = (uVar20 << 0x15 | uVar9 >> 0xb) ^ uVar11;
  uVar21 = (uVar10 << 0x11 | uVar6 >> 0xf) ^ uVar13;
  uVar9 = (uVar9 << 0x15 | uVar20 >> 0xb) ^ uVar17;
  uVar16 = uVar18 + uVar13;
  uVar20 = (uVar6 << 0x11 | uVar10 >> 0xf) ^ uVar6 + uVar12;
  uVar13 = uVar9 + uVar6 + uVar12 + (uint)CARRY4(uVar18,uVar13);
  uVar6 = (uVar21 << 0xd | uVar20 >> 0x13) ^ uVar21 + uVar17 + (uint)CARRY4(uVar20,uVar11);
  uVar21 = (uVar20 << 0xd | uVar21 >> 0x13) ^ uVar20 + uVar11;
  uVar7 = 0x255;
  uVar14 = uVar8 ^ uVar22 ^ uVar14;
  iVar1 = (uVar14 + ((uVar14 / 0x78) * 0x10 - uVar14 / 0x78) * -8) * 8;
  iVar1 = ((*(int *)(&DAT_0041f638 + iVar1) * (uVar23 ^ uVar15 ^ uVar5) +
           *(int *)(&DAT_0041f63c + iVar1) +
           (((uVar16 ^ uVar9 >> 0x10) << 0x15 | ((uVar9 << 0x10 | uVar18 >> 0x10) ^ uVar13) >> 0xb)
            ^ (uVar21 << 0x11 | uVar6 >> 0xf) ^ uVar6 + uVar13 + (uint)CARRY4(uVar21,uVar16) ^
           uVar21 + uVar16)) % 0x255) * 0xc;
  if ((*(uint *)(&DAT_01ce05f4 + iVar1) == param_2) &&
     (iVar4 = thunk_FUN_01bed842(*(undefined4 *)(&DAT_01ce05f0 + iVar1),param_1), iVar4 == 0)) {
    uVar7 = *(undefined2 *)(&DAT_01ce05f8 + iVar1);
  }
  return uVar7;
}

