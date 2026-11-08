// FUN_01894dac @ 01894dac size=424 calls_out=1 calls_in=2
// strings: 

void FUN_01894dac(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_r1;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar11 = *param_1;
  uVar8 = param_1[1];
  FUN_01894f54(&local_38,param_6,uVar11,uVar8,param_5,param_6);
  uVar6 = local_2c;
  uVar4 = local_30;
  uVar2 = local_34;
  uVar1 = local_38;
  uVar10 = param_1[2];
  uVar12 = param_1[3];
  FUN_01894f54(&local_38,extraout_r1,uVar10,uVar12,param_3,param_4);
  uVar7 = local_2c;
  uVar5 = local_30;
  uVar3 = local_34;
  uVar9 = local_38;
  FUN_01894f54(&local_38,param_6 ^ param_4,uVar10 ^ uVar11,uVar12 ^ uVar8,param_5 ^ param_3,
               param_6 ^ param_4);
  *param_1 = ((uint)((byte)uVar2 & 1) << 0x1f | uVar1 >> 1) ^ (uVar1 >> 2 | uVar2 << 0x1e) ^
             (uVar1 >> 7 | uVar2 << 0x19) ^ local_30 ^ uVar1 ^ uVar4 ^ uVar9 ^ uVar5;
  uVar8 = uVar1 << 0x1e ^ uVar1 << 0x1f ^ uVar1 << 0x19 ^ local_34 ^ uVar2 ^ uVar6 ^ uVar3;
  uVar9 = local_38 ^ uVar1 ^ uVar4 ^ uVar9;
  param_1[3] = uVar8 >> 1 ^ uVar8 >> 2 ^ uVar8 >> 7 ^ uVar7 ^ uVar8;
  param_1[2] = (uVar9 >> 2 | uVar8 << 0x1e) ^ ((uint)((byte)uVar8 & 1) << 0x1f | uVar9 >> 1) ^
               (uVar9 >> 7 | uVar8 << 0x19) ^ uVar5 ^ uVar9;
  param_1[1] = uVar2 >> 1 ^ uVar2 >> 2 ^ uVar2 >> 7 ^ local_2c ^ uVar9 << 0x1f ^ uVar9 << 0x1e ^
               uVar9 << 0x19 ^ uVar2 ^ uVar6 ^ uVar3 ^ uVar7;
  return;
}

