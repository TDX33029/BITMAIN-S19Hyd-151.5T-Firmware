// FUN_0164e918 @ 0164e918 size=880 calls_out=3 calls_in=40
// strings: 

undefined8 FUN_0164e918(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
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
  undefined8 uVar17;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar17 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar5 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_68);
    *puVar5 = local_68;
    puVar5[1] = local_64;
    puVar5[2] = local_60;
    puVar5[3] = uStack_5c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uStack_48 = *puVar5;
  uStack_44 = puVar5[1];
  local_40 = puVar5[2];
  *puVar5 = uStack_48 + 1;
  puVar5[1] = uStack_44 + (0xfffffffe < uStack_48);
  local_3c = puVar5[3];
  do {
    local_28 = DAT_018d9108;
    bVar1 = (bool)hasExclusiveAccess(0x18d9108);
  } while (!bVar1);
  local_50 = local_40 ^ 0x79746573;
  local_38 = 0;
  local_58 = local_40 ^ 0x6e646f6d;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_4c = local_3c ^ 0x74656462;
  local_54 = local_3c ^ 0x646f7261;
  local_68 = uStack_48 ^ 0x70736575;
  local_60 = uStack_48 ^ 0x6e657261;
  local_64 = uStack_44 ^ 0x736f6d65;
  uStack_5c = uStack_44 ^ 0x6c796765;
  DAT_018d9108 = DAT_018d9108 + 1;
  FUN_0163d26c(&local_68,&local_28);
  local_34 = local_34 | local_30 << 0x18;
  local_50 = local_38 ^ local_50;
  local_4c = local_34 ^ local_4c;
  uVar12 = local_50 + local_60;
  uVar7 = local_4c + uStack_5c + (uint)CARRY4(local_50,local_60);
  uVar9 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar7;
  uVar3 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar12;
  uVar6 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar14 = uVar9 + local_58 + local_68 + (uint)CARRY4(uVar3,uVar6);
  uVar2 = (uVar9 << 0x15 | uVar3 >> 0xb) ^ uVar14;
  uVar10 = (uVar3 << 0x15 | uVar9 >> 0xb) ^ uVar3 + uVar6;
  uVar4 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar6;
  uVar9 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar8 = uVar7 + uVar4 + (uint)CARRY4(uVar12,uVar9);
  uVar7 = uVar8 ^ 0xff;
  uVar11 = uVar10 + uVar7;
  uVar13 = uVar2 + uVar12 + uVar9 + (uint)CARRY4(uVar10,uVar7);
  uVar7 = (uVar2 << 0x10 | uVar10 >> 0x10) ^ uVar13;
  uVar10 = (uVar10 << 0x10 | uVar2 >> 0x10) ^ uVar11;
  uVar8 = uVar8 ^ (uVar4 << 0x11 | uVar9 >> 0xf);
  uVar4 = uVar12 + uVar9 ^ (uVar9 << 0x11 | uVar4 >> 0xf);
  local_38 = uVar3 + uVar6 ^ local_38;
  uVar3 = local_38 + uVar4;
  uVar9 = (uVar14 ^ local_34) + uVar8 + (uint)CARRY4(local_38,uVar4);
  uVar14 = uVar10 + uVar9;
  uVar2 = uVar9 ^ (uVar8 << 0xd | uVar4 >> 0x13);
  uVar15 = uVar7 + uVar3 + (uint)CARRY4(uVar10,uVar9);
  uVar3 = uVar3 ^ (uVar4 << 0xd | uVar8 >> 0x13);
  uVar9 = (uVar7 << 0x15 | uVar10 >> 0xb) ^ uVar15;
  uVar6 = (uVar10 << 0x15 | uVar7 >> 0xb) ^ uVar14;
  uVar7 = uVar2 + uVar13 + (uint)CARRY4(uVar3,uVar11);
  uVar13 = uVar6 + uVar7;
  uVar4 = uVar7 ^ (uVar2 << 0x11 | uVar3 >> 0xf);
  uVar12 = uVar9 + uVar3 + uVar11 + (uint)CARRY4(uVar6,uVar7);
  uVar8 = uVar3 + uVar11 ^ (uVar3 << 0x11 | uVar2 >> 0xf);
  uVar2 = (uVar6 << 0x10 | uVar9 >> 0x10) ^ uVar13;
  uVar3 = uVar4 + uVar15 + (uint)CARRY4(uVar8,uVar14);
  uVar7 = (uVar9 << 0x10 | uVar6 >> 0x10) ^ uVar12;
  uVar16 = uVar2 + uVar3;
  uVar15 = uVar7 + uVar8 + uVar14 + (uint)CARRY4(uVar2,uVar3);
  uVar9 = (uVar2 << 0x15 | uVar7 >> 0xb) ^ uVar16;
  uVar6 = (uVar8 << 0xd | uVar4 >> 0x13) ^ uVar8 + uVar14;
  uVar10 = (uVar7 << 0x15 | uVar2 >> 0xb) ^ uVar15;
  uVar3 = (uVar4 << 0xd | uVar8 >> 0x13) ^ uVar3;
  uVar7 = uVar3 + uVar12 + (uint)CARRY4(uVar6,uVar13);
  uVar8 = uVar9 + uVar7;
  uVar11 = (uVar9 << 0x10 | uVar10 >> 0x10) ^ uVar8;
  uVar2 = (uVar3 << 0x11 | uVar6 >> 0xf) ^ uVar7;
  uVar3 = (uVar6 << 0x11 | uVar3 >> 0xf) ^ uVar6 + uVar13;
  uVar4 = uVar10 + uVar6 + uVar13 + (uint)CARRY4(uVar9,uVar7);
  uVar7 = (uVar3 << 0xd | uVar2 >> 0x13) ^ uVar3 + uVar16;
  uVar2 = (uVar2 << 0xd | uVar3 >> 0x13) ^ uVar2 + uVar15 + (uint)CARRY4(uVar3,uVar16);
  uVar3 = uVar2 + uVar4 + (uint)CARRY4(uVar7,uVar8);
  uVar4 = (uVar10 << 0x10 | uVar9 >> 0x10) ^ uVar4;
  return CONCAT44((uVar4 << 0x15 | uVar11 >> 0xb) ^ (uVar2 << 0x11 | uVar7 >> 0xf) ^ uVar7 + uVar8 ^
                  uVar3,(uVar11 << 0x15 | uVar4 >> 0xb) ^ (uVar7 << 0x11 | uVar2 >> 0xf) ^ uVar3 ^
                        uVar7 + uVar8);
}

