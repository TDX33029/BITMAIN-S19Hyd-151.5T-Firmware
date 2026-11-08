// FUN_006c4fac @ 006c4fac size=844 calls_out=1 calls_in=3
// strings: 

undefined8
FUN_006c4fac(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,undefined4 param_6)

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
  local_5c = param_2 ^ 0x6c796765;
  local_60 = param_1 ^ 0x6e657261;
  local_64 = param_2 ^ 0x736f6d65;
  local_68 = param_1 ^ 0x70736575;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = (uint)(param_5 != 0);
  local_48 = param_1;
  uStack_44 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  FUN_0192ff40(&local_68,&local_28,4);
  if (param_5 != 0) {
    FUN_0192ff40(&local_68,param_5,param_6);
    local_28 = CONCAT31(local_28._1_3_,0xff);
    FUN_0192ff40(&local_68,&local_28,1);
  }
  local_34 = local_34 | local_30 << 0x18;
  local_4c = local_34 ^ local_4c;
  local_50 = local_38 ^ local_50;
  uVar5 = local_50 + local_60;
  uVar9 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
  uVar1 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar9;
  uVar7 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar5;
  uVar4 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar3 = uVar1 + local_58 + local_68 + (uint)CARRY4(uVar7,uVar4);
  uVar6 = (uVar1 << 0x15 | uVar7 >> 0xb) ^ uVar3;
  uVar1 = (uVar7 << 0x15 | uVar1 >> 0xb) ^ uVar7 + uVar4;
  uVar8 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar4;
  uVar2 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar9 = uVar9 + uVar8 + (uint)CARRY4(uVar5,uVar2);
  uVar10 = uVar9 ^ 0xff;
  uVar12 = uVar1 + uVar10;
  uVar11 = uVar6 + uVar5 + uVar2 + (uint)CARRY4(uVar1,uVar10);
  uVar10 = (uVar6 << 0x10 | uVar1 >> 0x10) ^ uVar11;
  uVar6 = (uVar1 << 0x10 | uVar6 >> 0x10) ^ uVar12;
  uVar9 = uVar9 ^ (uVar8 << 0x11 | uVar2 >> 0xf);
  uVar1 = uVar5 + uVar2 ^ (uVar2 << 0x11 | uVar8 >> 0xf);
  local_38 = uVar7 + uVar4 ^ local_38;
  uVar5 = local_38 + uVar1;
  uVar3 = (uVar3 ^ local_34) + uVar9 + (uint)CARRY4(local_38,uVar1);
  uVar7 = uVar6 + uVar3;
  uVar2 = uVar3 ^ (uVar9 << 0xd | uVar1 >> 0x13);
  uVar13 = uVar10 + uVar5 + (uint)CARRY4(uVar6,uVar3);
  uVar5 = uVar5 ^ (uVar1 << 0xd | uVar9 >> 0x13);
  uVar1 = (uVar10 << 0x15 | uVar6 >> 0xb) ^ uVar13;
  uVar9 = (uVar6 << 0x15 | uVar10 >> 0xb) ^ uVar7;
  uVar3 = uVar2 + uVar11 + (uint)CARRY4(uVar5,uVar12);
  uVar8 = uVar9 + uVar3;
  uVar4 = uVar3 ^ (uVar2 << 0x11 | uVar5 >> 0xf);
  uVar6 = uVar1 + uVar5 + uVar12 + (uint)CARRY4(uVar9,uVar3);
  uVar3 = uVar5 + uVar12 ^ (uVar5 << 0x11 | uVar2 >> 0xf);
  uVar5 = (uVar1 << 0x10 | uVar9 >> 0x10) ^ uVar6;
  uVar1 = (uVar9 << 0x10 | uVar1 >> 0x10) ^ uVar8;
  uVar9 = uVar4 + uVar13 + (uint)CARRY4(uVar3,uVar7);
  uVar11 = uVar1 + uVar9;
  uVar10 = uVar5 + uVar3 + uVar7 + (uint)CARRY4(uVar1,uVar9);
  uVar2 = (uVar1 << 0x15 | uVar5 >> 0xb) ^ uVar11;
  uVar5 = (uVar5 << 0x15 | uVar1 >> 0xb) ^ uVar10;
  uVar9 = (uVar4 << 0xd | uVar3 >> 0x13) ^ uVar9;
  uVar3 = (uVar3 << 0xd | uVar4 >> 0x13) ^ uVar3 + uVar7;
  uVar6 = uVar9 + uVar6 + (uint)CARRY4(uVar3,uVar8);
  uVar1 = uVar2 + uVar6;
  uVar7 = (uVar9 << 0x11 | uVar3 >> 0xf) ^ uVar6;
  uVar4 = (uVar3 << 0x11 | uVar9 >> 0xf) ^ uVar3 + uVar8;
  uVar9 = uVar5 + uVar3 + uVar8 + (uint)CARRY4(uVar2,uVar6);
  uVar6 = (uVar2 << 0x10 | uVar5 >> 0x10) ^ uVar1;
  uVar3 = (uVar4 << 0xd | uVar7 >> 0x13) ^ uVar4 + uVar11;
  uVar5 = (uVar5 << 0x10 | uVar2 >> 0x10) ^ uVar9;
  uVar2 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar7 + uVar10 + (uint)CARRY4(uVar4,uVar11);
  uVar4 = uVar2 + uVar9 + (uint)CARRY4(uVar3,uVar1);
  return CONCAT44((uVar5 << 0x15 | uVar6 >> 0xb) ^ (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar1 ^
                  uVar4,(uVar6 << 0x15 | uVar5 >> 0xb) ^ (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar4 ^
                        uVar3 + uVar1);
}

