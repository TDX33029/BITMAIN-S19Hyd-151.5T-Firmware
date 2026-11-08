// FUN_01b1e9b8 @ 01b1e9b8 size=488 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b1e9b8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  
  uVar7 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  local_2c = DAT_01d53560;
  FUN_01b1e90c(&local_60,&local_58,uVar7,uVar6,uVar4,uVar3);
  uVar8 = *param_2;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_2[1];
  FUN_01b1e90c(&local_50,&local_48,uVar1,uVar2,uVar8,uVar5);
  FUN_01b1e90c(&uStack_40,&local_38,uVar1 ^ uVar7,uVar2 ^ uVar6,uVar4 ^ uVar8,uVar3 ^ uVar5);
  uVar2 = local_3c ^ local_54 ^ local_4c ^ local_5c;
  uVar1 = uStack_40 ^ local_58 ^ local_50 ^ local_60;
  uVar3 = uVar2 ^ local_60 << 0x1f ^ local_60 << 0x1e ^ local_60 << 0x19;
  param_1[1] = local_54 ^ local_44 ^ local_34 ^ local_4c ^ local_5c ^ local_5c >> 1 ^ local_5c >> 2
               ^ local_5c >> 7 ^ uVar1 << 0x1f ^ uVar1 << 0x1e ^ uVar1 << 0x19;
  param_1[3] = local_44 ^ uVar3 ^ uVar3 >> 1 ^ uVar3 >> 2 ^ uVar3 >> 7;
  *param_1 = (local_60 >> 7 | local_5c << 0x19) ^
             local_58 ^ local_48 ^ local_38 ^ local_50 ^ local_60 ^
             (local_60 >> 1 | local_5c << 0x1f) ^ (local_60 >> 2 | local_5c << 0x1e);
  param_1[2] = local_48 ^ uVar1 ^ (uVar1 >> 1 | uVar2 << 0x1f) ^ (uVar1 >> 2 | uVar2 << 0x1e) ^
               (uVar1 >> 7 | uVar2 << 0x19);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

