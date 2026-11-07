// FUN_01453ee8 @ 01453ee8 size=1264 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01453ee8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  undefined4 uVar2;
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
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  FUN_015f5e7c(&local_78,param_5[3],param_5[4]);
  local_38 = CONCAT31(local_38._1_3_,0xff);
  FUN_015f5e7c(&local_78,&local_38,1);
  uVar5 = param_5[5];
  uVar10 = (uint)(byte)uVar5;
  local_38 = (uint)(uVar10 != 2);
  FUN_015f5e7c(&local_78,&local_38,4);
  if (uVar10 == 2) {
    local_38 = *(uint *)((int)param_5 + 0x1a);
    FUN_014543d8(&local_78,&local_38,4);
    local_38 = *(uint *)((int)param_5 + 0x1e);
    FUN_014543d8(&local_78,&local_38,4);
    local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)((int)param_5 + 0x22));
    FUN_015f5e7c(&local_78,&local_38,1);
    bVar1 = *(byte *)((int)param_5 + 0x15);
    local_38 = (uint)bVar1;
    FUN_015f5e7c(&local_78,&local_38,4);
    if (bVar1 != 1) goto LAB_01454120;
    local_38 = *(uint *)((int)param_5 + 0x16);
    uVar2 = 4;
  }
  else {
    local_38 = *(uint *)((int)param_5 + 0x25);
    uStack_34 = *(undefined4 *)((int)param_5 + 0x29);
    uStack_30 = *(undefined4 *)((int)param_5 + 0x2d);
    uStack_2c = *(undefined4 *)((int)param_5 + 0x31);
    FUN_014543d8(&local_78,&local_38,0x10);
    local_38 = *(uint *)((int)param_5 + 0x35);
    uStack_34 = *(undefined4 *)((int)param_5 + 0x39);
    uStack_30 = *(undefined4 *)((int)param_5 + 0x3d);
    uStack_2c = *(undefined4 *)((int)param_5 + 0x41);
    FUN_014543d8(&local_78,&local_38,0x10);
    local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)((int)param_5 + 0x45));
    FUN_015f5e7c(&local_78,&local_38,1);
    local_38 = uVar10;
    FUN_015f5e7c(&local_78,&local_38,4);
    if (((byte)uVar5 & 1) == 0) goto LAB_01454120;
    local_38 = *(uint *)((int)param_5 + 0x15);
    uStack_34 = *(undefined4 *)((int)param_5 + 0x19);
    uStack_30 = *(undefined4 *)((int)param_5 + 0x1d);
    uStack_2c = *(undefined4 *)((int)param_5 + 0x21);
    uVar2 = 0x10;
  }
  FUN_014543d8(&local_78,&local_38,uVar2);
LAB_01454120:
  uVar5 = *param_5;
  local_38 = uVar5;
  FUN_015f5e7c(&local_78,&local_38,4);
  if (uVar5 == 1) {
    local_38 = param_5[1];
    FUN_015f5e7c(&local_78,&local_38,4);
  }
  local_38 = (uint)*(byte *)((int)param_5 + 0x47);
  FUN_015f5e7c(&local_78,&local_38,4);
  local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)((int)param_5 + 0x46));
  FUN_015f5e7c(&local_78,&local_38,1);
  local_44 = local_44 | local_40 << 0x18;
  local_60 = local_48 ^ local_60;
  local_5c = local_44 ^ local_5c;
  uVar9 = local_60 + local_70;
  uVar6 = local_5c + local_6c + (uint)CARRY4(local_60,local_70);
  uVar5 = (local_5c << 0x10 | local_60 >> 0x10) ^ uVar6;
  uVar11 = (local_60 << 0x10 | local_5c >> 0x10) ^ uVar9;
  uVar4 = local_64 + local_74 + (uint)CARRY4(local_68,local_78);
  uVar3 = uVar5 + local_68 + local_78 + (uint)CARRY4(uVar11,uVar4);
  uVar8 = (uVar5 << 0x15 | uVar11 >> 0xb) ^ uVar3;
  uVar5 = (uVar11 << 0x15 | uVar5 >> 0xb) ^ uVar11 + uVar4;
  uVar12 = (local_64 << 0xd | local_68 >> 0x13) ^ uVar4;
  uVar10 = (local_68 << 0xd | local_64 >> 0x13) ^ local_68 + local_78;
  uVar6 = uVar6 + uVar12 + (uint)CARRY4(uVar9,uVar10);
  uVar7 = uVar6 ^ 0xff;
  uVar13 = uVar5 + uVar7;
  uVar14 = uVar8 + uVar9 + uVar10 + (uint)CARRY4(uVar5,uVar7);
  uVar7 = (uVar8 << 0x10 | uVar5 >> 0x10) ^ uVar14;
  uVar8 = (uVar5 << 0x10 | uVar8 >> 0x10) ^ uVar13;
  uVar6 = uVar6 ^ (uVar12 << 0x11 | uVar10 >> 0xf);
  uVar5 = uVar9 + uVar10 ^ (uVar10 << 0x11 | uVar12 >> 0xf);
  local_48 = uVar11 + uVar4 ^ local_48;
  uVar9 = local_48 + uVar5;
  uVar3 = (uVar3 ^ local_44) + uVar6 + (uint)CARRY4(local_48,uVar5);
  uVar15 = uVar8 + uVar3;
  uVar10 = uVar3 ^ (uVar6 << 0xd | uVar5 >> 0x13);
  uVar16 = uVar7 + uVar9 + (uint)CARRY4(uVar8,uVar3);
  uVar9 = uVar9 ^ (uVar5 << 0xd | uVar6 >> 0x13);
  uVar5 = (uVar7 << 0x15 | uVar8 >> 0xb) ^ uVar16;
  uVar7 = (uVar8 << 0x15 | uVar7 >> 0xb) ^ uVar15;
  uVar3 = uVar10 + uVar14 + (uint)CARRY4(uVar9,uVar13);
  uVar11 = uVar7 + uVar3;
  uVar4 = uVar3 ^ (uVar10 << 0x11 | uVar9 >> 0xf);
  uVar12 = uVar5 + uVar9 + uVar13 + (uint)CARRY4(uVar7,uVar3);
  uVar3 = uVar9 + uVar13 ^ (uVar9 << 0x11 | uVar10 >> 0xf);
  uVar6 = (uVar5 << 0x10 | uVar7 >> 0x10) ^ uVar12;
  uVar5 = (uVar7 << 0x10 | uVar5 >> 0x10) ^ uVar11;
  uVar7 = uVar4 + uVar16 + (uint)CARRY4(uVar3,uVar15);
  uVar13 = uVar5 + uVar7;
  uVar14 = uVar6 + uVar3 + uVar15 + (uint)CARRY4(uVar5,uVar7);
  uVar10 = (uVar5 << 0x15 | uVar6 >> 0xb) ^ uVar13;
  uVar8 = (uVar6 << 0x15 | uVar5 >> 0xb) ^ uVar14;
  uVar7 = (uVar4 << 0xd | uVar3 >> 0x13) ^ uVar7;
  uVar3 = (uVar3 << 0xd | uVar4 >> 0x13) ^ uVar3 + uVar15;
  uVar6 = uVar7 + uVar12 + (uint)CARRY4(uVar3,uVar11);
  uVar9 = (uVar7 << 0x11 | uVar3 >> 0xf) ^ uVar6;
  uVar5 = uVar10 + uVar6;
  uVar4 = (uVar3 << 0x11 | uVar7 >> 0xf) ^ uVar3 + uVar11;
  uVar7 = uVar8 + uVar3 + uVar11 + (uint)CARRY4(uVar10,uVar6);
  uVar6 = (uVar9 << 0xd | uVar4 >> 0x13) ^ uVar9 + uVar14 + (uint)CARRY4(uVar4,uVar13);
  uVar3 = (uVar4 << 0xd | uVar9 >> 0x13) ^ uVar4 + uVar13;
  uVar9 = (uVar10 << 0x10 | uVar8 >> 0x10) ^ uVar5;
  uVar4 = (uVar8 << 0x10 | uVar10 >> 0x10) ^ uVar7;
  uVar10 = uVar6 + uVar7 + (uint)CARRY4(uVar3,uVar5);
  return CONCAT44((uVar4 << 0x15 | uVar9 >> 0xb) ^ (uVar6 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar5 ^
                  uVar10,(uVar9 << 0x15 | uVar4 >> 0xb) ^ (uVar3 << 0x11 | uVar6 >> 0xf) ^ uVar10 ^
                         uVar3 + uVar5);
}

