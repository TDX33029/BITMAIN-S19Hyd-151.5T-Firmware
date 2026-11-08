// FUN_006c4c10 @ 006c4c10 size=924 calls_out=1 calls_in=14
// strings: 

undefined8 FUN_006c4c10(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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
  uVar8 = *param_5;
  local_5c = param_2 ^ 0x6c796765;
  local_60 = param_1 ^ 0x6e657261;
  local_64 = param_2 ^ 0x736f6d65;
  local_68 = param_1 ^ 0x70736575;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_48 = param_1;
  uStack_44 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  local_28 = uVar8;
  FUN_0192ff40(&local_68,&local_28,4);
  if (uVar8 == 1) {
    FUN_0192ff40(&local_68,param_5[1],param_5[2]);
  }
  else {
    uVar8 = param_5[1];
    local_28 = (uint)(uVar8 != 0);
    FUN_0192ff40(&local_68,&local_28,4);
    if (uVar8 == 0) goto LAB_006c4d70;
    FUN_0192ff40(&local_68,uVar8,param_5[2]);
  }
  local_28 = CONCAT31(local_28._1_3_,0xff);
  FUN_0192ff40(&local_68,&local_28,1);
LAB_006c4d70:
  local_34 = local_34 | local_30 << 0x18;
  local_4c = local_34 ^ local_4c;
  local_50 = local_38 ^ local_50;
  uVar4 = local_50 + local_60;
  uVar5 = local_4c + local_5c + (uint)CARRY4(local_50,local_60);
  uVar8 = (local_4c << 0x10 | local_50 >> 0x10) ^ uVar5;
  uVar9 = (local_50 << 0x10 | local_4c >> 0x10) ^ uVar4;
  uVar3 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar2 = uVar8 + local_58 + local_68 + (uint)CARRY4(uVar9,uVar3);
  uVar7 = (uVar8 << 0x15 | uVar9 >> 0xb) ^ uVar2;
  uVar8 = (uVar9 << 0x15 | uVar8 >> 0xb) ^ uVar9 + uVar3;
  uVar10 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar3;
  uVar1 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar5 = uVar5 + uVar10 + (uint)CARRY4(uVar4,uVar1);
  uVar6 = uVar5 ^ 0xff;
  uVar12 = uVar8 + uVar6;
  uVar11 = uVar7 + uVar4 + uVar1 + (uint)CARRY4(uVar8,uVar6);
  uVar6 = (uVar7 << 0x10 | uVar8 >> 0x10) ^ uVar11;
  uVar7 = (uVar8 << 0x10 | uVar7 >> 0x10) ^ uVar12;
  uVar5 = uVar5 ^ (uVar10 << 0x11 | uVar1 >> 0xf);
  uVar8 = uVar4 + uVar1 ^ (uVar1 << 0x11 | uVar10 >> 0xf);
  local_38 = uVar9 + uVar3 ^ local_38;
  uVar4 = local_38 + uVar8;
  uVar2 = (uVar2 ^ local_34) + uVar5 + (uint)CARRY4(local_38,uVar8);
  uVar13 = uVar7 + uVar2;
  uVar1 = uVar2 ^ (uVar5 << 0xd | uVar8 >> 0x13);
  uVar10 = uVar6 + uVar4 + (uint)CARRY4(uVar7,uVar2);
  uVar4 = uVar4 ^ (uVar8 << 0xd | uVar5 >> 0x13);
  uVar8 = (uVar6 << 0x15 | uVar7 >> 0xb) ^ uVar10;
  uVar5 = (uVar7 << 0x15 | uVar6 >> 0xb) ^ uVar13;
  uVar2 = uVar1 + uVar11 + (uint)CARRY4(uVar4,uVar12);
  uVar9 = uVar5 + uVar2;
  uVar3 = uVar2 ^ (uVar1 << 0x11 | uVar4 >> 0xf);
  uVar6 = uVar8 + uVar4 + uVar12 + (uint)CARRY4(uVar5,uVar2);
  uVar2 = uVar4 + uVar12 ^ (uVar4 << 0x11 | uVar1 >> 0xf);
  uVar4 = (uVar8 << 0x10 | uVar5 >> 0x10) ^ uVar6;
  uVar8 = (uVar5 << 0x10 | uVar8 >> 0x10) ^ uVar9;
  uVar5 = uVar3 + uVar10 + (uint)CARRY4(uVar2,uVar13);
  uVar11 = uVar8 + uVar5;
  uVar10 = uVar4 + uVar2 + uVar13 + (uint)CARRY4(uVar8,uVar5);
  uVar1 = (uVar8 << 0x15 | uVar4 >> 0xb) ^ uVar11;
  uVar4 = (uVar4 << 0x15 | uVar8 >> 0xb) ^ uVar10;
  uVar5 = (uVar3 << 0xd | uVar2 >> 0x13) ^ uVar5;
  uVar2 = (uVar2 << 0xd | uVar3 >> 0x13) ^ uVar2 + uVar13;
  uVar7 = uVar5 + uVar6 + (uint)CARRY4(uVar2,uVar9);
  uVar6 = (uVar5 << 0x11 | uVar2 >> 0xf) ^ uVar7;
  uVar8 = uVar1 + uVar7;
  uVar3 = (uVar2 << 0x11 | uVar5 >> 0xf) ^ uVar2 + uVar9;
  uVar5 = uVar4 + uVar2 + uVar9 + (uint)CARRY4(uVar1,uVar7);
  uVar7 = (uVar1 << 0x10 | uVar4 >> 0x10) ^ uVar8;
  uVar2 = (uVar3 << 0xd | uVar6 >> 0x13) ^ uVar3 + uVar11;
  uVar4 = (uVar4 << 0x10 | uVar1 >> 0x10) ^ uVar5;
  uVar1 = (uVar6 << 0xd | uVar3 >> 0x13) ^ uVar6 + uVar10 + (uint)CARRY4(uVar3,uVar11);
  uVar3 = uVar1 + uVar5 + (uint)CARRY4(uVar2,uVar8);
  return CONCAT44((uVar4 << 0x15 | uVar7 >> 0xb) ^ (uVar1 << 0x11 | uVar2 >> 0xf) ^ uVar2 + uVar8 ^
                  uVar3,(uVar7 << 0x15 | uVar4 >> 0xb) ^ (uVar2 << 0x11 | uVar1 >> 0xf) ^ uVar3 ^
                        uVar2 + uVar8);
}

