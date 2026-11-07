// FUN_014f8d34 @ 014f8d34 size=1120 calls_out=2 calls_in=2
// strings: 

uint FUN_014f8d34(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_b0 [17];
  uint local_6a;
  uint local_66;
  uint local_62;
  uint local_5e;
  char local_5a;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  ushort local_4a;
  ushort local_48 [8];
  undefined4 local_38;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  
  bVar1 = *param_1;
  FUN_01bed4e2(&local_6a,param_1 + 1,0x11);
  bVar2 = *param_2;
  FUN_01bed4e2(&local_58,param_2 + 1,0x10);
  uVar11 = 0;
  if ((bVar1 & 1) == 0) {
    if ((bVar2 & 1) == 0) {
      uVar6 = local_66 & 0xff;
      uVar4 = -1 << (0x20 - uVar6 & 0xff);
      local_38 = 0;
      if (0x20 - uVar6 < 0x20) {
        local_38 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                   uVar4 >> 0x18;
      }
      local_38 = local_38 & local_6a;
      iVar5 = FUN_01bed842(&local_38,&local_58,4);
      if (iVar5 < 1) {
        uVar11 = 0xffffffff >> uVar6;
        if (uVar6 < 0x20) {
          local_6a = local_6a |
                     uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18;
        }
        local_38 = local_6a;
        iVar5 = FUN_01bed842(&local_58,&local_38,4);
        uVar11 = (uint)(iVar5 < 1);
      }
    }
  }
  else if ((bVar2 & 1) != 0) {
    uVar6 = (uint)local_5a;
    uVar4 = (uint)(char)(-0x80 - local_5a);
    if ((int)uVar4 < 0) {
      uVar7 = 0;
      uVar15 = 0;
      uVar4 = 0;
      uVar14 = 0;
    }
    else {
      local_b0[0xc] = 0xffffffff;
      local_b0[0xb] = 0;
      local_b0[10] = 0;
      local_b0[9] = 0;
      local_b0[8] = 0;
      local_b0[0xd] = 0xffffffff;
      local_b0[0xe] = 0xffffffff;
      local_b0[0xf] = 0xffffffff;
      iVar5 = -(uVar4 >> 3 & 0xc);
      uVar7 = *(uint *)((int)local_b0 + iVar5 + 0x30);
      uVar10 = *(uint *)((int)local_b0 + iVar5 + 0x34);
      uVar12 = *(uint *)((int)local_b0 + iVar5 + 0x38);
      uVar4 = uVar4 & 0x1f;
      uVar8 = uVar4 ^ 0x1f;
      uVar15 = uVar10 << uVar4 | (uVar7 >> 1) >> uVar8;
      uVar14 = *(int *)((int)local_b0 + iVar5 + 0x3c) << uVar4 | (uVar12 >> 1) >> uVar8;
      uVar7 = uVar7 << uVar4;
      uVar4 = uVar12 << uVar4 | (uVar10 >> 1) >> uVar8;
    }
    uVar10 = local_6a << 0x18 | (local_6a >> 8 & 0xff) << 0x10 | (local_6a >> 0x10 & 0xff) << 8 |
             local_6a >> 0x18;
    uVar8 = local_66 << 0x18 | (local_66 >> 8 & 0xff) << 0x10 | (local_66 >> 0x10 & 0xff) << 8 |
            local_66 >> 0x18;
    uVar4 = uVar4 & uVar8;
    uVar14 = uVar14 & uVar10;
    uVar12 = local_62 << 0x18 | (local_62 >> 8 & 0xff) << 0x10 | (local_62 >> 0x10 & 0xff) << 8 |
             local_62 >> 0x18;
    uVar13 = local_5e << 0x18 | (local_5e >> 8 & 0xff) << 0x10 | (local_5e >> 0x10 & 0xff) << 8 |
             local_5e >> 0x18;
    uVar15 = uVar15 & uVar12;
    local_48[3] = (short)uVar4;
    uVar7 = uVar7 & uVar13;
    local_48[2] = (short)(uVar4 >> 0x10);
    local_48[5] = (short)uVar15;
    local_48[1] = (short)uVar14;
    local_48[7] = (short)uVar7;
    local_48[6] = (short)(uVar7 >> 0x10);
    local_2a = (ushort)((local_4a & 0xff) << 8) | local_4a >> 8;
    local_2c = (ushort)((local_4c & 0xff) << 8) | local_4c >> 8;
    local_48[4] = (short)(uVar15 >> 0x10);
    local_2e = (ushort)((local_4e & 0xff) << 8) | local_4e >> 8;
    local_30 = (ushort)((local_50 & 0xff) << 8) | local_50 >> 8;
    local_48[0] = (ushort)(uVar14 >> 0x10);
    local_32 = (ushort)((local_52 & 0xff) << 8) | local_52 >> 8;
    local_34 = (ushort)((local_54 & 0xff) << 8) | local_54 >> 8;
    local_38 = CONCAT22((ushort)((local_56 & 0xff) << 8) | local_56 >> 8,
                        (ushort)((local_58 & 0xff) << 8) | local_58 >> 8);
    do {
      if (uVar11 + 2 == 0x12) goto LAB_014f9010;
      puVar9 = (ushort *)((int)local_48 + uVar11);
      uVar3 = *(ushort *)((int)local_48 + uVar11 + 0x10);
      uVar11 = uVar11 + 2;
    } while (*puVar9 == uVar3);
    uVar11 = 0;
    if (*puVar9 < uVar3) {
LAB_014f9010:
      if ((int)uVar6 < 0) {
        uVar15 = 0;
        uVar7 = 0;
        uVar4 = 0;
        uVar11 = 0;
      }
      else {
        local_b0[7] = 0;
        local_b0[6] = 0;
        local_b0[5] = 0;
        local_b0[4] = 0;
        local_b0[0] = 0xffffffff;
        local_b0[1] = 0xffffffff;
        local_b0[2] = 0xffffffff;
        local_b0[3] = 0xffffffff;
        uVar11 = (uVar6 & 0x7f) >> 5;
        uVar6 = uVar6 & 0x1f;
        uVar15 = uVar6 ^ 0x1f;
        uVar4 = local_b0[uVar11 + 2] >> uVar6 | (local_b0[uVar11 + 3] << 1) << uVar15;
        uVar7 = local_b0[uVar11 + 1] >> uVar6 | (local_b0[uVar11 + 2] << 1) << uVar15;
        uVar15 = local_b0[uVar11] >> uVar6 | (local_b0[uVar11 + 1] << 1) << uVar15;
        uVar11 = local_b0[uVar11 + 3] >> uVar6;
      }
      local_48[4] = (ushort)(((uint)local_50 << 0x18) >> 0x10) | local_50 >> 8;
      local_48[3] = (ushort)(((uint)local_52 << 0x18) >> 0x10) | local_52 >> 8;
      local_48[2] = (ushort)(((uint)local_54 << 0x18) >> 0x10) | local_54 >> 8;
      local_48[1] = (ushort)(((uint)local_56 << 0x18) >> 0x10) | local_56 >> 8;
      local_48[0] = (ushort)(((uint)local_58 << 0x18) >> 0x10) | local_58 >> 8;
      uVar4 = uVar4 | uVar8;
      uVar11 = uVar11 | uVar10;
      uVar15 = uVar15 | uVar13;
      uVar7 = uVar7 | uVar12;
      local_32 = (short)uVar4;
      local_34 = (short)(uVar4 >> 0x10);
      local_38 = CONCAT22((short)uVar11,(short)(uVar11 >> 0x10));
      local_48[7] = (ushort)(((uint)local_4a << 0x18) >> 0x10) | local_4a >> 8;
      local_48[6] = (ushort)(((uint)local_4c << 0x18) >> 0x10) | local_4c >> 8;
      local_48[5] = (ushort)(((uint)local_4e << 0x18) >> 0x10) | local_4e >> 8;
      local_2e = (short)uVar7;
      local_2a = (short)uVar15;
      local_30 = (short)(uVar7 >> 0x10);
      local_2c = (short)(uVar15 >> 0x10);
      iVar5 = 0;
      do {
        if (iVar5 + 2 == 0x12) {
          return 1;
        }
        puVar9 = (ushort *)((int)local_48 + iVar5);
        uVar3 = *(ushort *)((int)local_48 + iVar5 + 0x10);
        iVar5 = iVar5 + 2;
      } while (*puVar9 == uVar3);
      uVar11 = (uint)(*puVar9 < uVar3);
    }
  }
  return uVar11;
}

