// FUN_014c14b4 @ 014c14b4 size=848 calls_out=1 calls_in=3
// strings: 

undefined8
FUN_014c14b4(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

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
  undefined4 local_2c;
  uint local_28;
  
  local_4c = param_4 ^ 0x74656462;
  local_50 = param_3 ^ 0x79746573;
  local_54 = param_4 ^ 0x646f7261;
  local_58 = param_3 ^ 0x6e646f6d;
  param_5 = param_5 & 0xff;
  local_5c = param_2 ^ 0x6c796765;
  local_60 = param_1 ^ 0x6e657261;
  local_64 = param_2 ^ 0x736f6d65;
  local_68 = param_1 ^ 0x70736575;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = (uint)(param_5 != 3);
  local_48 = param_1;
  uStack_44 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  FUN_014c1074(&local_68,&local_28,4);
  if (param_5 != 3) {
    local_28 = param_5;
    FUN_014c1074(&local_68,&local_28,4);
  }
  local_28 = param_6 & 0xff;
  FUN_014c1074(&local_68,&local_28,4);
  local_34 = local_34 | local_30 << 0x18;
  local_4c = local_34 ^ local_4c;
  local_50 = local_38 ^ local_50;
  uVar5 = local_50 + local_60;
  uVar6 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
  uVar1 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar6;
  uVar9 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar5;
  uVar4 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar3 = uVar1 + local_58 + local_68 + (uint)CARRY4(uVar9,uVar4);
  uVar8 = (uVar1 << 0x15 | uVar9 >> 0xb) ^ uVar3;
  uVar1 = (uVar9 << 0x15 | uVar1 >> 0xb) ^ uVar9 + uVar4;
  uVar10 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar4;
  uVar2 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar6 = uVar6 + uVar10 + (uint)CARRY4(uVar5,uVar2);
  uVar7 = uVar6 ^ 0xff;
  uVar12 = uVar1 + uVar7;
  uVar11 = uVar8 + uVar5 + uVar2 + (uint)CARRY4(uVar1,uVar7);
  uVar7 = (uVar8 << 0x10 | uVar1 >> 0x10) ^ uVar11;
  uVar8 = (uVar1 << 0x10 | uVar8 >> 0x10) ^ uVar12;
  uVar6 = uVar6 ^ (uVar10 << 0x11 | uVar2 >> 0xf);
  uVar1 = uVar5 + uVar2 ^ (uVar2 << 0x11 | uVar10 >> 0xf);
  local_38 = uVar9 + uVar4 ^ local_38;
  uVar5 = local_38 + uVar1;
  uVar3 = (uVar3 ^ local_34) + uVar6 + (uint)CARRY4(local_38,uVar1);
  uVar13 = uVar8 + uVar3;
  uVar2 = uVar3 ^ (uVar6 << 0xd | uVar1 >> 0x13);
  uVar10 = uVar7 + uVar5 + (uint)CARRY4(uVar8,uVar3);
  uVar5 = uVar5 ^ (uVar1 << 0xd | uVar6 >> 0x13);
  uVar1 = (uVar7 << 0x15 | uVar8 >> 0xb) ^ uVar10;
  uVar6 = (uVar8 << 0x15 | uVar7 >> 0xb) ^ uVar13;
  uVar3 = uVar2 + uVar11 + (uint)CARRY4(uVar5,uVar12);
  uVar9 = uVar6 + uVar3;
  uVar4 = uVar3 ^ (uVar2 << 0x11 | uVar5 >> 0xf);
  uVar7 = uVar1 + uVar5 + uVar12 + (uint)CARRY4(uVar6,uVar3);
  uVar3 = uVar5 + uVar12 ^ (uVar5 << 0x11 | uVar2 >> 0xf);
  uVar5 = (uVar1 << 0x10 | uVar6 >> 0x10) ^ uVar7;
  uVar1 = (uVar6 << 0x10 | uVar1 >> 0x10) ^ uVar9;
  uVar6 = uVar4 + uVar10 + (uint)CARRY4(uVar3,uVar13);
  uVar11 = uVar1 + uVar6;
  uVar10 = uVar5 + uVar3 + uVar13 + (uint)CARRY4(uVar1,uVar6);
  uVar2 = (uVar1 << 0x15 | uVar5 >> 0xb) ^ uVar11;
  uVar5 = (uVar5 << 0x15 | uVar1 >> 0xb) ^ uVar10;
  uVar6 = (uVar4 << 0xd | uVar3 >> 0x13) ^ uVar6;
  uVar3 = (uVar3 << 0xd | uVar4 >> 0x13) ^ uVar3 + uVar13;
  uVar8 = uVar6 + uVar7 + (uint)CARRY4(uVar3,uVar9);
  uVar7 = (uVar6 << 0x11 | uVar3 >> 0xf) ^ uVar8;
  uVar1 = uVar2 + uVar8;
  uVar4 = (uVar3 << 0x11 | uVar6 >> 0xf) ^ uVar3 + uVar9;
  uVar6 = uVar5 + uVar3 + uVar9 + (uint)CARRY4(uVar2,uVar8);
  uVar8 = (uVar2 << 0x10 | uVar5 >> 0x10) ^ uVar1;
  uVar3 = (uVar4 << 0xd | uVar7 >> 0x13) ^ uVar4 + uVar11;
  uVar5 = (uVar5 << 0x10 | uVar2 >> 0x10) ^ uVar6;
  uVar2 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar7 + uVar10 + (uint)CARRY4(uVar4,uVar11);
  uVar4 = uVar2 + uVar6 + (uint)CARRY4(uVar3,uVar1);
  return CONCAT44((uVar5 << 0x15 | uVar8 >> 0xb) ^ (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar1 ^
                  uVar4,(uVar8 << 0x15 | uVar5 >> 0xb) ^ (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar4 ^
                        uVar3 + uVar1);
}

