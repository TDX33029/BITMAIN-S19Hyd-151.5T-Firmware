// FUN_00f6cd24 @ 00f6cd24 size=1576 calls_out=4 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00f6d2f0) */
/* WARNING: Removing unreachable block (ram,0x00f6d300) */
/* WARNING: Removing unreachable block (ram,0x00f6d308) */
/* WARNING: Removing unreachable block (ram,0x00f6d314) */
/* WARNING: Removing unreachable block (ram,0x00f6d31c) */

void FUN_00f6cd24(uint *param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_128;
  uint local_120;
  uint local_11c;
  uint local_114;
  uint local_10c;
  undefined4 *local_100 [20];
  uint local_b0;
  undefined1 *local_ac;
  uint local_98;
  uint local_94;
  undefined4 *local_90 [27];
  
  if (param_2 == 0) {
    FUN_015f4cb8(&local_98,&DAT_00387b70,0xe);
    puVar4 = local_90[0];
    uVar8 = local_94;
    if (local_98 != 1) {
      FUN_016dd1aa(local_100,local_90,0x68);
      if (local_ac < &DAT_3b9aca00) {
        *param_1 = local_b0;
        param_1[1] = (int)local_b0 >> 0x1f;
        param_1[2] = (uint)local_ac;
        return;
      }
      FUN_015f3b0c(&local_98,0);
      *param_1 = local_98;
      param_1[1] = local_94;
      param_1[2] = (uint)local_90[0];
      return;
    }
    local_100[0] = local_90[0];
    FUN_015f3b0c(&local_98,0);
    *param_1 = local_98;
    param_1[1] = local_94;
    param_1[2] = (uint)local_90[0];
    if ((uVar8 & 0xff) != 3) {
      return;
    }
    uVar14 = *puVar4;
    puVar17 = (undefined4 *)puVar4[1];
    pcVar6 = (code *)*puVar17;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar14);
    }
    if (puVar17[1] != 0) {
      thunk_FUN_016d3fb4(uVar14);
    }
    thunk_FUN_016d3fb4(puVar4);
    return;
  }
  uVar10 = param_3 & 7;
  local_128 = param_3 & 0xfffffff8;
  local_120 = 0x79746573;
  local_10c = 0x646f7261;
  uVar12 = 0x6e646f6d;
  uVar21 = 0x6c796765;
  uVar19 = 0x6e657261;
  uVar8 = 0x736f6d65;
  uVar15 = 0x70736575;
  local_114 = 0x74656462;
  local_11c = 0;
  if (local_128 == 0) {
    local_128 = 0;
    local_114 = 0x74656462;
    local_10c = 0x646f7261;
    if (3 < uVar10) goto LAB_00f6ce9c;
LAB_00f6cf68:
    uVar20 = 0;
    uVar5 = 0;
    if (uVar10 < 2) goto LAB_00f6cfc8;
  }
  else {
    uVar20 = 0;
    local_120 = 0x79746573;
    do {
      uVar16 = uVar8 + local_10c + (uint)CARRY4(uVar15,uVar12);
      uVar9 = uVar16 ^ (local_10c << 0xd | uVar12 >> 0x13);
      uVar13 = uVar15 + uVar12 ^ (uVar12 << 0xd | local_10c >> 0x13);
      puVar7 = (uint *)(param_2 + uVar20);
      uVar18 = *puVar7;
      uVar20 = uVar20 + 8;
      uVar11 = puVar7[1];
      local_120 = uVar18 ^ local_120;
      uVar5 = local_120 + uVar19;
      local_114 = uVar11 ^ local_114;
      uVar22 = local_114 + uVar21 + (uint)CARRY4(local_120,uVar19);
      uVar21 = uVar5 + uVar13;
      uVar19 = uVar22 + uVar9 + (uint)CARRY4(uVar5,uVar13);
      local_10c = uVar19 ^ (uVar9 << 0x11 | uVar13 >> 0xf);
      uVar22 = uVar22 ^ (local_114 << 0x10 | local_120 >> 0x10);
      uVar5 = uVar5 ^ (local_120 << 0x10 | local_114 >> 0x10);
      uVar8 = uVar22 + uVar15 + uVar12 + (uint)CARRY4(uVar5,uVar16);
      local_114 = (uVar22 << 0x15 | uVar5 >> 0xb) ^ uVar8;
      uVar8 = uVar8 ^ uVar11;
      uVar12 = uVar21 ^ (uVar13 << 0x11 | uVar9 >> 0xf);
      local_120 = (uVar5 << 0x15 | uVar22 >> 0xb) ^ uVar5 + uVar16;
      uVar15 = uVar5 + uVar16 ^ uVar18;
    } while (uVar20 < local_128);
    if (uVar10 < 4) goto LAB_00f6cf68;
LAB_00f6ce9c:
    uVar5 = *(uint *)(param_2 + local_128);
    uVar20 = 4;
    if (uVar10 < 6) goto LAB_00f6cfc8;
  }
  uVar9 = uVar20 * 8 - 0x20;
  uVar2 = *(ushort *)(param_2 + local_128 + uVar20);
  uVar22 = (uint)uVar2 << (uVar20 << 3);
  if (-1 < (int)uVar9) {
    uVar22 = 0;
  }
  uVar5 = uVar22 | uVar5;
  iVar3 = uVar20 * -8;
  uVar20 = uVar20 | 2;
  local_11c = (uint)(uVar2 >> (iVar3 + 0x20U & 0xff));
  if (-1 < (int)uVar9) {
    local_11c = (uint)uVar2 << (uVar9 & 0xff);
  }
LAB_00f6cfc8:
  if (uVar20 < uVar10) {
    uVar22 = uVar20 * 8 - 0x20;
    bVar1 = *(byte *)(param_2 + uVar20 + local_128);
    uVar10 = (uint)bVar1 << (uVar20 << 3);
    if (-1 < (int)uVar22) {
      uVar10 = 0;
    }
    uVar5 = uVar10 | uVar5;
    uVar10 = (uint)(bVar1 >> (uVar20 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar22) {
      uVar10 = (uint)bVar1 << (uVar22 & 0xff);
    }
    local_11c = uVar10 | local_11c;
  }
  uVar9 = uVar8 + local_10c + (uint)CARRY4(uVar15,uVar12);
  param_1[2] = (uint)&DAT_3b9aca00;
  uVar8 = uVar9 ^ (local_10c << 0xd | uVar12 >> 0x13);
  uVar22 = uVar15 + uVar12 ^ (uVar12 << 0xd | local_10c >> 0x13);
  local_11c = local_11c | param_3 << 0x18;
  local_114 = local_11c ^ local_114;
  local_120 = uVar5 ^ local_120;
  uVar10 = local_120 + uVar19;
  uVar19 = local_114 + uVar21 + (uint)CARRY4(local_120,uVar19);
  uVar11 = uVar19 + uVar8 + (uint)CARRY4(uVar10,uVar22);
  uVar20 = (local_120 << 0x10 | local_114 >> 0x10) ^ uVar10;
  uVar19 = (local_114 << 0x10 | local_120 >> 0x10) ^ uVar19;
  uVar21 = uVar11 ^ (uVar8 << 0x11 | uVar22 >> 0xf);
  uVar12 = uVar19 + uVar15 + uVar12 + (uint)CARRY4(uVar20,uVar9);
  uVar15 = uVar10 + uVar22 ^ (uVar22 << 0x11 | uVar8 >> 0xf);
  uVar5 = uVar20 + uVar9 ^ uVar5;
  uVar16 = uVar5 + uVar15;
  uVar13 = (uVar12 ^ local_11c) + uVar21 + (uint)CARRY4(uVar5,uVar15);
  uVar8 = uVar13 ^ (uVar21 << 0xd | uVar15 >> 0x13);
  uVar12 = (uVar19 << 0x15 | uVar20 >> 0xb) ^ uVar12;
  uVar11 = uVar11 ^ 0xff;
  uVar20 = (uVar20 << 0x15 | uVar19 >> 0xb) ^ uVar20 + uVar9;
  uVar15 = uVar16 ^ (uVar15 << 0xd | uVar21 >> 0x13);
  uVar9 = uVar20 + uVar11;
  uVar22 = uVar12 + uVar10 + uVar22 + (uint)CARRY4(uVar20,uVar11);
  uVar11 = uVar8 + uVar22 + (uint)CARRY4(uVar15,uVar9);
  uVar19 = uVar11 ^ (uVar8 << 0x11 | uVar15 >> 0xf);
  uVar21 = uVar15 + uVar9 ^ (uVar15 << 0x11 | uVar8 >> 0xf);
  uVar22 = (uVar12 << 0x10 | uVar20 >> 0x10) ^ uVar22;
  uVar10 = (uVar20 << 0x10 | uVar12 >> 0x10) ^ uVar9;
  uVar5 = uVar10 + uVar13;
  uVar12 = uVar22 + uVar16 + (uint)CARRY4(uVar10,uVar13);
  uVar13 = uVar19 + uVar12 + (uint)CARRY4(uVar21,uVar5);
  uVar8 = (uVar19 << 0xd | uVar21 >> 0x13) ^ uVar13;
  uVar19 = (uVar21 << 0xd | uVar19 >> 0x13) ^ uVar21 + uVar5;
  uVar12 = (uVar22 << 0x15 | uVar10 >> 0xb) ^ uVar12;
  uVar10 = (uVar10 << 0x15 | uVar22 >> 0xb) ^ uVar5;
  uVar22 = uVar10 + uVar11;
  uVar15 = uVar12 + uVar15 + uVar9 + (uint)CARRY4(uVar10,uVar11);
  uVar11 = uVar8 + uVar15 + (uint)CARRY4(uVar19,uVar22);
  uVar15 = (uVar12 << 0x10 | uVar10 >> 0x10) ^ uVar15;
  uVar10 = (uVar10 << 0x10 | uVar12 >> 0x10) ^ uVar22;
  uVar20 = uVar10 + uVar13;
  uVar9 = uVar15 + uVar21 + uVar5 + (uint)CARRY4(uVar10,uVar13);
  uVar12 = (uVar10 << 0x15 | uVar15 >> 0xb) ^ uVar20;
  uVar21 = (uVar8 << 0x11 | uVar19 >> 0xf) ^ uVar11;
  uVar5 = (uVar15 << 0x15 | uVar10 >> 0xb) ^ uVar9;
  uVar15 = uVar12 + uVar11;
  uVar8 = (uVar19 << 0x11 | uVar8 >> 0xf) ^ uVar19 + uVar22;
  uVar19 = uVar5 + uVar19 + uVar22 + (uint)CARRY4(uVar12,uVar11);
  uVar10 = (uVar8 << 0xd | uVar21 >> 0x13) ^ uVar8 + uVar20;
  uVar21 = (uVar21 << 0xd | uVar8 >> 0x13) ^ uVar21 + uVar9 + (uint)CARRY4(uVar8,uVar20);
  uVar20 = uVar21 + uVar19 + (uint)CARRY4(uVar10,uVar15);
  uVar19 = (uVar5 << 0x10 | uVar12 >> 0x10) ^ uVar19;
  uVar8 = (uVar12 << 0x10 | uVar5 >> 0x10) ^ uVar15;
  param_1[1] = (uVar19 << 0x15 | uVar8 >> 0xb) ^ (uVar21 << 0x11 | uVar10 >> 0xf) ^ uVar10 + uVar15
               ^ uVar20;
  *param_1 = (uVar8 << 0x15 | uVar19 >> 0xb) ^ (uVar10 << 0x11 | uVar21 >> 0xf) ^ uVar20 ^
             uVar10 + uVar15;
  return;
}

