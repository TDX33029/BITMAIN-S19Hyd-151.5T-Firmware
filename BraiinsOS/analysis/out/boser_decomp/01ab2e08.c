// FUN_01ab2e08 @ 01ab2e08 size=1508 calls_out=1 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01ab2e08(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
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
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  
  local_4c = param_4 ^ 0x74656462;
  local_50 = param_3 ^ 0x79746573;
  local_54 = param_4 ^ 0x646f7261;
  local_58 = param_3 ^ 0x6e646f6d;
  uVar12 = 0;
  local_5c = param_2 ^ 0x6c796765;
  local_38 = 0;
  local_34 = 0;
  local_60 = param_1 ^ 0x6e657261;
  local_30 = 0;
  local_64 = param_2 ^ 0x736f6d65;
  local_68 = param_1 ^ 0x70736575;
  local_2c = 0;
  local_48 = param_1;
  uStack_44 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  FUN_01ab8ab4(*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 0xc),&local_68);
  local_28 = *(uint *)(param_5 + 0x10);
  if (local_2c == 0) {
LAB_01ab30f8:
    uVar17 = 0;
    local_2c = 4;
    uVar12 = 4;
  }
  else {
    uVar17 = 8 - local_2c;
    uVar3 = uVar17;
    if (3 < uVar17) {
      uVar3 = 4;
    }
    uVar9 = 0;
    uVar7 = 0;
    if (3 < uVar17) {
      uVar9 = 4;
      uVar7 = local_28;
    }
    if ((uVar9 | 1) < uVar3) {
      puVar5 = (ushort *)&local_28;
      if (3 < uVar17) {
        puVar5 = (ushort *)((int)register0x00000054 + -0x24);
      }
      uVar2 = *puVar5;
      uVar8 = uVar9 * 8 - 0x20;
      uVar12 = (uint)(uVar2 >> (uVar9 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar8) {
        uVar12 = (uint)uVar2 << (uVar8 & 0xff);
      }
      uVar6 = (uint)uVar2 << (uVar9 << 3);
      uVar9 = uVar9 | 2;
      if (-1 < (int)uVar8) {
        uVar6 = 0;
      }
      uVar7 = uVar6 | uVar7;
    }
    if (uVar9 < uVar3) {
      bVar1 = *(byte *)((int)&local_28 + uVar9);
      uVar8 = uVar9 * 8 - 0x20;
      uVar3 = (uint)bVar1 << (uVar9 << 3);
      if (-1 < (int)uVar8) {
        uVar3 = 0;
      }
      uVar7 = uVar3 | uVar7;
      uVar3 = (uint)(bVar1 >> (uVar9 * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar8) {
        uVar3 = (uint)bVar1 << (uVar8 & 0xff);
      }
      uVar12 = uVar3 | uVar12;
    }
    iVar4 = (local_2c & 7) * 8;
    uVar9 = iVar4 - 0x20;
    uVar3 = uVar7 << iVar4;
    if (-1 < (int)uVar9) {
      uVar3 = 0;
    }
    local_38 = local_38 | uVar3;
    uVar12 = uVar7 >> ((local_2c & 7) * -8 + 0x20 & 0xff) | uVar12 << iVar4;
    if (-1 < (int)uVar9) {
      uVar12 = uVar7 << (uVar9 & 0xff);
    }
    local_34 = local_34 | uVar12;
    if (4 < uVar17) goto LAB_01ab31b4;
    local_4c = local_4c ^ local_34;
    local_50 = local_50 ^ local_38;
    uVar12 = local_60 + local_50;
    uVar9 = local_5c + local_4c + (uint)CARRY4(local_60,local_50);
    uVar8 = local_58 + local_68;
    uVar7 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
    uVar6 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar7;
    uVar3 = (local_58 << 0xd | local_54 >> 0x13) ^ uVar8;
    local_5c = uVar12 + uVar3;
    local_60 = uVar9 + uVar6 + (uint)CARRY4(uVar12,uVar3);
    local_58 = local_5c ^ (uVar3 << 0x11 | uVar6 >> 0xf);
    local_54 = local_60 ^ (uVar6 << 0x11 | uVar3 >> 0xf);
    uVar12 = uVar12 ^ (local_50 << 0x10 | local_4c >> 0x10);
    uVar9 = uVar9 ^ (local_4c << 0x10 | local_50 >> 0x10);
    uVar3 = uVar9 + uVar8 + (uint)CARRY4(uVar12,uVar7);
    local_68 = uVar12 + uVar7 ^ local_38;
    local_50 = (uVar12 << 0x15 | uVar9 >> 0xb) ^ uVar12 + uVar7;
    local_64 = uVar3 ^ local_34;
    local_4c = (uVar9 << 0x15 | uVar12 >> 0xb) ^ uVar3;
    if (local_2c == 8) goto LAB_01ab30f8;
    local_2c = local_2c - 4;
    uVar12 = 0;
    local_28 = 0;
  }
  local_34 = 0;
  local_38 = local_28;
  if ((uVar12 | 1) < local_2c) {
    uVar3 = uVar12 * 8 - 0x20;
    uVar2 = *(ushort *)((int)&local_28 + uVar12 + uVar17);
    local_38 = (uint)uVar2 << (uVar12 << 3);
    if (-1 < (int)uVar3) {
      local_38 = 0;
    }
    local_38 = local_38 | local_28;
    iVar4 = uVar12 * -8;
    uVar12 = uVar12 | 2;
    local_34 = (uint)(uVar2 >> (iVar4 + 0x20U & 0xff));
    if (-1 < (int)uVar3) {
      local_34 = (uint)uVar2 << (uVar3 & 0xff);
    }
  }
  if (uVar12 < local_2c) {
    bVar1 = *(byte *)((int)&local_28 + uVar12 + uVar17);
    uVar17 = uVar12 * 8 - 0x20;
    uVar3 = (uint)bVar1 << (uVar12 << 3);
    if (-1 < (int)uVar17) {
      uVar3 = 0;
    }
    local_38 = uVar3 | local_38;
    uVar12 = (uint)(bVar1 >> (uVar12 * -8 + 0x20 & 0xff));
    if (-1 < (int)uVar17) {
      uVar12 = (uint)bVar1 << (uVar17 & 0xff);
    }
    local_34 = uVar12 | local_34;
  }
LAB_01ab31b4:
  local_34 = local_34 | (local_30 + 4) * 0x1000000;
  local_50 = local_38 ^ local_50;
  local_4c = local_34 ^ local_4c;
  uVar17 = local_50 + local_60;
  uVar9 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
  uVar12 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar9;
  uVar13 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar17;
  uVar10 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar3 = uVar12 + local_58 + local_68 + (uint)CARRY4(uVar13,uVar10);
  uVar8 = (uVar12 << 0x15 | uVar13 >> 0xb) ^ uVar3;
  uVar6 = (uVar13 << 0x15 | uVar12 >> 0xb) ^ uVar13 + uVar10;
  uVar11 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar10;
  uVar12 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar9 = uVar9 + uVar11 + (uint)CARRY4(uVar17,uVar12);
  uVar7 = uVar9 ^ 0xff;
  uVar14 = uVar6 + uVar7;
  uVar15 = uVar8 + uVar17 + uVar12 + (uint)CARRY4(uVar6,uVar7);
  uVar7 = (uVar8 << 0x10 | uVar6 >> 0x10) ^ uVar15;
  uVar8 = (uVar6 << 0x10 | uVar8 >> 0x10) ^ uVar14;
  uVar9 = uVar9 ^ (uVar11 << 0x11 | uVar12 >> 0xf);
  uVar11 = uVar17 + uVar12 ^ (uVar12 << 0x11 | uVar11 >> 0xf);
  local_38 = uVar13 + uVar10 ^ local_38;
  uVar6 = local_38 + uVar11;
  uVar17 = (uVar3 ^ local_34) + uVar9 + (uint)CARRY4(local_38,uVar11);
  uVar16 = uVar8 + uVar17;
  uVar10 = uVar7 + uVar6 + (uint)CARRY4(uVar8,uVar17);
  uVar12 = (uVar7 << 0x15 | uVar8 >> 0xb) ^ uVar10;
  uVar8 = (uVar8 << 0x15 | uVar7 >> 0xb) ^ uVar16;
  uVar17 = uVar17 ^ (uVar9 << 0xd | uVar11 >> 0x13);
  uVar6 = uVar6 ^ (uVar11 << 0xd | uVar9 >> 0x13);
  uVar3 = uVar17 + uVar15 + (uint)CARRY4(uVar6,uVar14);
  uVar11 = uVar8 + uVar3;
  uVar9 = uVar3 ^ (uVar17 << 0x11 | uVar6 >> 0xf);
  uVar13 = uVar12 + uVar6 + uVar14 + (uint)CARRY4(uVar8,uVar3);
  uVar7 = uVar6 + uVar14 ^ (uVar6 << 0x11 | uVar17 >> 0xf);
  uVar17 = (uVar12 << 0x10 | uVar8 >> 0x10) ^ uVar13;
  uVar12 = (uVar8 << 0x10 | uVar12 >> 0x10) ^ uVar11;
  uVar10 = uVar9 + uVar10 + (uint)CARRY4(uVar7,uVar16);
  uVar14 = uVar12 + uVar10;
  uVar15 = uVar17 + uVar7 + uVar16 + (uint)CARRY4(uVar12,uVar10);
  uVar3 = (uVar12 << 0x15 | uVar17 >> 0xb) ^ uVar14;
  uVar8 = (uVar17 << 0x15 | uVar12 >> 0xb) ^ uVar15;
  uVar10 = (uVar9 << 0xd | uVar7 >> 0x13) ^ uVar10;
  uVar17 = (uVar7 << 0xd | uVar9 >> 0x13) ^ uVar7 + uVar16;
  uVar7 = uVar10 + uVar13 + (uint)CARRY4(uVar17,uVar11);
  uVar6 = (uVar10 << 0x11 | uVar17 >> 0xf) ^ uVar7;
  uVar12 = uVar3 + uVar7;
  uVar9 = (uVar17 << 0x11 | uVar10 >> 0xf) ^ uVar17 + uVar11;
  uVar10 = uVar8 + uVar17 + uVar11 + (uint)CARRY4(uVar3,uVar7);
  uVar7 = (uVar6 << 0xd | uVar9 >> 0x13) ^ uVar6 + uVar15 + (uint)CARRY4(uVar9,uVar14);
  uVar11 = (uVar3 << 0x10 | uVar8 >> 0x10) ^ uVar12;
  uVar17 = (uVar9 << 0xd | uVar6 >> 0x13) ^ uVar9 + uVar14;
  uVar9 = (uVar8 << 0x10 | uVar3 >> 0x10) ^ uVar10;
  uVar3 = uVar7 + uVar10 + (uint)CARRY4(uVar17,uVar12);
  return CONCAT44((uVar9 << 0x15 | uVar11 >> 0xb) ^ (uVar7 << 0x11 | uVar17 >> 0xf) ^
                  uVar17 + uVar12 ^ uVar3,
                  (uVar11 << 0x15 | uVar9 >> 0xb) ^ (uVar17 << 0x11 | uVar7 >> 0xf) ^ uVar3 ^
                  uVar17 + uVar12);
}

