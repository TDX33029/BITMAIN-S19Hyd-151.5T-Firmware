// FUN_015f77ac @ 015f77ac size=856 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_015f77ac(uint param_1,uint param_2,uint param_3,uint param_4,byte *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
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
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_5c = param_4 ^ 0x74656462;
  local_60 = param_3 ^ 0x79746573;
  local_64 = param_4 ^ 0x646f7261;
  local_68 = param_3 ^ 0x6e646f6d;
  bVar1 = *param_5;
  local_6c = param_2 ^ 0x6c796765;
  local_70 = param_1 ^ 0x6e657261;
  local_74 = param_2 ^ 0x736f6d65;
  local_78 = param_1 ^ 0x70736575;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_58 = param_1;
  uStack_54 = param_2;
  uStack_50 = param_3;
  uStack_4c = param_4;
  local_38 = (uint)bVar1;
  FUN_015f5e7c(&local_78,&local_38,4);
  if (bVar1 == 1) {
    local_38 = *(uint *)(param_5 + 1);
    uStack_34 = *(undefined4 *)(param_5 + 5);
    uStack_30 = *(undefined4 *)(param_5 + 9);
    uStack_2c = *(undefined4 *)(param_5 + 0xd);
    uVar4 = 0x10;
  }
  else {
    local_38 = *(uint *)(param_5 + 1);
    uVar4 = 4;
  }
  FUN_015f5e7c(&local_78,&local_38,uVar4);
  local_44 = local_44 | local_40 << 0x18;
  local_5c = local_44 ^ local_5c;
  local_60 = local_48 ^ local_60;
  uVar7 = local_60 + local_70;
  uVar8 = local_5c + local_6c + (uint)CARRY4(local_60,local_70);
  uVar2 = (local_5c << 0x10 | local_60 >> 0x10) ^ uVar8;
  uVar11 = (local_60 << 0x10 | local_5c >> 0x10) ^ uVar7;
  uVar6 = local_64 + local_74 + (uint)CARRY4(local_68,local_78);
  uVar5 = uVar2 + local_68 + local_78 + (uint)CARRY4(uVar11,uVar6);
  uVar10 = (uVar2 << 0x15 | uVar11 >> 0xb) ^ uVar5;
  uVar2 = (uVar11 << 0x15 | uVar2 >> 0xb) ^ uVar11 + uVar6;
  uVar12 = (local_64 << 0xd | local_68 >> 0x13) ^ uVar6;
  uVar3 = (local_68 << 0xd | local_64 >> 0x13) ^ local_68 + local_78;
  uVar8 = uVar8 + uVar12 + (uint)CARRY4(uVar7,uVar3);
  uVar9 = uVar8 ^ 0xff;
  uVar14 = uVar2 + uVar9;
  uVar13 = uVar10 + uVar7 + uVar3 + (uint)CARRY4(uVar2,uVar9);
  uVar9 = (uVar10 << 0x10 | uVar2 >> 0x10) ^ uVar13;
  uVar10 = (uVar2 << 0x10 | uVar10 >> 0x10) ^ uVar14;
  uVar8 = uVar8 ^ (uVar12 << 0x11 | uVar3 >> 0xf);
  uVar2 = uVar7 + uVar3 ^ (uVar3 << 0x11 | uVar12 >> 0xf);
  local_48 = uVar11 + uVar6 ^ local_48;
  uVar7 = local_48 + uVar2;
  uVar5 = (uVar5 ^ local_44) + uVar8 + (uint)CARRY4(local_48,uVar2);
  uVar15 = uVar10 + uVar5;
  uVar3 = uVar5 ^ (uVar8 << 0xd | uVar2 >> 0x13);
  uVar12 = uVar9 + uVar7 + (uint)CARRY4(uVar10,uVar5);
  uVar7 = uVar7 ^ (uVar2 << 0xd | uVar8 >> 0x13);
  uVar2 = (uVar9 << 0x15 | uVar10 >> 0xb) ^ uVar12;
  uVar8 = (uVar10 << 0x15 | uVar9 >> 0xb) ^ uVar15;
  uVar5 = uVar3 + uVar13 + (uint)CARRY4(uVar7,uVar14);
  uVar11 = uVar8 + uVar5;
  uVar6 = uVar5 ^ (uVar3 << 0x11 | uVar7 >> 0xf);
  uVar9 = uVar2 + uVar7 + uVar14 + (uint)CARRY4(uVar8,uVar5);
  uVar5 = uVar7 + uVar14 ^ (uVar7 << 0x11 | uVar3 >> 0xf);
  uVar7 = (uVar2 << 0x10 | uVar8 >> 0x10) ^ uVar9;
  uVar2 = (uVar8 << 0x10 | uVar2 >> 0x10) ^ uVar11;
  uVar8 = uVar6 + uVar12 + (uint)CARRY4(uVar5,uVar15);
  uVar13 = uVar2 + uVar8;
  uVar12 = uVar7 + uVar5 + uVar15 + (uint)CARRY4(uVar2,uVar8);
  uVar3 = (uVar2 << 0x15 | uVar7 >> 0xb) ^ uVar13;
  uVar7 = (uVar7 << 0x15 | uVar2 >> 0xb) ^ uVar12;
  uVar8 = (uVar6 << 0xd | uVar5 >> 0x13) ^ uVar8;
  uVar5 = (uVar5 << 0xd | uVar6 >> 0x13) ^ uVar5 + uVar15;
  uVar10 = uVar8 + uVar9 + (uint)CARRY4(uVar5,uVar11);
  uVar9 = (uVar8 << 0x11 | uVar5 >> 0xf) ^ uVar10;
  uVar2 = uVar3 + uVar10;
  uVar6 = (uVar5 << 0x11 | uVar8 >> 0xf) ^ uVar5 + uVar11;
  uVar8 = uVar7 + uVar5 + uVar11 + (uint)CARRY4(uVar3,uVar10);
  uVar10 = (uVar3 << 0x10 | uVar7 >> 0x10) ^ uVar2;
  uVar5 = (uVar6 << 0xd | uVar9 >> 0x13) ^ uVar6 + uVar13;
  uVar7 = (uVar7 << 0x10 | uVar3 >> 0x10) ^ uVar8;
  uVar3 = (uVar9 << 0xd | uVar6 >> 0x13) ^ uVar9 + uVar12 + (uint)CARRY4(uVar6,uVar13);
  uVar6 = uVar3 + uVar8 + (uint)CARRY4(uVar5,uVar2);
  return CONCAT44((uVar7 << 0x15 | uVar10 >> 0xb) ^ (uVar3 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar2 ^
                  uVar6,(uVar10 << 0x15 | uVar7 >> 0xb) ^ (uVar5 << 0x11 | uVar3 >> 0xf) ^ uVar6 ^
                        uVar5 + uVar2);
}

