// FUN_00c55848 @ 00c55848 size=812 calls_out=1 calls_in=2
// strings: 

undefined8
FUN_00c55848(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_54 = param_4 ^ 0x74656462;
  local_58 = param_3 ^ 0x79746573;
  local_5c = param_4 ^ 0x646f7261;
  local_60 = param_3 ^ 0x6e646f6d;
  local_64 = param_2 ^ 0x6c796765;
  local_68 = param_1 ^ 0x6e657261;
  local_6c = param_2 ^ 0x736f6d65;
  local_70 = param_1 ^ 0x70736575;
  local_40 = 0;
  local_34 = 0;
  local_30 = param_5;
  local_2c = param_6;
  local_3c = 0;
  local_38 = 0;
  local_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_00ed56f4(&local_70,&local_30,8);
  local_2c = param_8;
  local_30 = param_7;
  FUN_00ed56f4(&local_70,&local_30,8);
  local_3c = local_3c | local_38 << 0x18;
  local_54 = local_3c ^ local_54;
  local_58 = local_40 ^ local_58;
  uVar9 = local_58 + local_68;
  uVar11 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar6 = (local_54 << 0x10 | local_58 >> 0x10) ^ uVar11;
  uVar3 = (local_58 << 0x10 | local_54 >> 0x10) ^ uVar9;
  uVar1 = local_5c + local_6c + (uint)CARRY4(local_60,local_70);
  uVar5 = uVar6 + local_60 + local_70 + (uint)CARRY4(uVar3,uVar1);
  uVar8 = (uVar6 << 0x15 | uVar3 >> 0xb) ^ uVar5;
  uVar7 = (uVar3 << 0x15 | uVar6 >> 0xb) ^ uVar3 + uVar1;
  uVar2 = (local_5c << 0xd | local_60 >> 0x13) ^ uVar1;
  uVar6 = (local_60 << 0xd | local_5c >> 0x13) ^ local_60 + local_70;
  uVar11 = uVar11 + uVar2 + (uint)CARRY4(uVar9,uVar6);
  uVar4 = uVar11 ^ 0xff;
  uVar10 = uVar7 + uVar4;
  uVar12 = uVar8 + uVar9 + uVar6 + (uint)CARRY4(uVar7,uVar4);
  uVar4 = (uVar8 << 0x10 | uVar7 >> 0x10) ^ uVar12;
  uVar7 = (uVar7 << 0x10 | uVar8 >> 0x10) ^ uVar10;
  uVar11 = uVar11 ^ (uVar2 << 0x11 | uVar6 >> 0xf);
  uVar6 = uVar9 + uVar6 ^ (uVar6 << 0x11 | uVar2 >> 0xf);
  local_40 = uVar3 + uVar1 ^ local_40;
  uVar3 = local_40 + uVar6;
  uVar2 = (uVar5 ^ local_3c) + uVar11 + (uint)CARRY4(local_40,uVar6);
  uVar13 = uVar7 + uVar2;
  uVar1 = uVar2 ^ (uVar11 << 0xd | uVar6 >> 0x13);
  uVar9 = uVar4 + uVar3 + (uint)CARRY4(uVar7,uVar2);
  uVar3 = uVar3 ^ (uVar6 << 0xd | uVar11 >> 0x13);
  uVar6 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar9;
  uVar4 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar13;
  uVar2 = uVar1 + uVar12 + (uint)CARRY4(uVar3,uVar10);
  uVar8 = uVar4 + uVar2;
  uVar11 = uVar2 ^ (uVar1 << 0x11 | uVar3 >> 0xf);
  uVar5 = uVar6 + uVar3 + uVar10 + (uint)CARRY4(uVar4,uVar2);
  uVar1 = uVar3 + uVar10 ^ (uVar3 << 0x11 | uVar1 >> 0xf);
  uVar2 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar5;
  uVar6 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar8;
  uVar3 = uVar11 + uVar9 + (uint)CARRY4(uVar1,uVar13);
  uVar10 = uVar6 + uVar3;
  uVar9 = uVar2 + uVar1 + uVar13 + (uint)CARRY4(uVar6,uVar3);
  uVar4 = (uVar2 << 0x15 | uVar6 >> 0xb) ^ uVar9;
  uVar6 = (uVar6 << 0x15 | uVar2 >> 0xb) ^ uVar10;
  uVar3 = (uVar11 << 0xd | uVar1 >> 0x13) ^ uVar3;
  uVar2 = (uVar1 << 0xd | uVar11 >> 0x13) ^ uVar1 + uVar13;
  uVar7 = uVar3 + uVar5 + (uint)CARRY4(uVar2,uVar8);
  uVar5 = (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar7;
  uVar1 = uVar6 + uVar7;
  uVar11 = (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar2 + uVar8;
  uVar3 = uVar4 + uVar2 + uVar8 + (uint)CARRY4(uVar6,uVar7);
  uVar2 = (uVar11 << 0xd | uVar5 >> 0x13) ^ uVar11 + uVar10;
  uVar7 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar1;
  uVar4 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar3;
  uVar6 = (uVar5 << 0xd | uVar11 >> 0x13) ^ uVar5 + uVar9 + (uint)CARRY4(uVar11,uVar10);
  uVar11 = uVar6 + uVar3 + (uint)CARRY4(uVar2,uVar1);
  return CONCAT44((uVar4 << 0x15 | uVar7 >> 0xb) ^ (uVar6 << 0x11 | uVar2 >> 0xf) ^ uVar2 + uVar1 ^
                  uVar11,(uVar7 << 0x15 | uVar4 >> 0xb) ^ (uVar2 << 0x11 | uVar6 >> 0xf) ^ uVar11 ^
                         uVar2 + uVar1);
}

