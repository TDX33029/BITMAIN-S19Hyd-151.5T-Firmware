// FUN_01897970 @ 01897970 size=428 calls_out=10 calls_in=1
// strings: 

void FUN_01897970(int param_1,undefined4 param_2)

{
  uint uVar1;
  int local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_0188fef8(&local_21c,&DAT_01d27510,param_2,0x20);
  uVar1 = *(uint *)(local_21c + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
  }
  if (uVar1 < 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d219c4);
  }
  local_118 = local_218;
  uStack_114 = uStack_214;
  uStack_110 = uStack_210;
  uStack_10c = uStack_20c;
  local_108 = local_208;
  local_104 = uStack_204;
  uStack_100 = uStack_200;
  uStack_fc = uStack_1fc;
  FUN_01bcc1b4(&local_118);
  local_1d8 = local_118;
  uStack_1d4 = uStack_114;
  uStack_1d0 = uStack_110;
  uStack_1cc = uStack_10c;
  local_1c8 = local_108;
  uStack_1c4 = local_104;
  uStack_1c0 = uStack_100;
  uStack_1bc = uStack_fc;
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  FUN_01bed93e(&local_118,0,0xa0);
  FUN_01bca638(&local_118,&local_1d8,0);
  FUN_01bed4e2(&local_1b8,&local_118,0xa0);
  if (uVar1 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_118,&DAT_01d219b4,&DAT_01d219d4);
  }
  FUN_01bed4e2(param_1 + 0x20,auStack_1f8,0x20);
  local_78 = local_1b8;
  uStack_74 = uStack_1b4;
  uStack_70 = uStack_1b0;
  uStack_6c = uStack_1ac;
  uStack_68 = uStack_1a8;
  local_64 = local_1a4;
  uStack_60 = uStack_1a0;
  uStack_5c = uStack_19c;
  uStack_58 = uStack_198;
  uStack_54 = uStack_194;
  local_50 = local_190;
  uStack_4c = uStack_18c;
  uStack_48 = uStack_188;
  uStack_44 = uStack_184;
  uStack_40 = uStack_180;
  local_3c = local_17c;
  uStack_38 = uStack_178;
  uStack_34 = uStack_174;
  uStack_30 = uStack_170;
  uStack_2c = uStack_16c;
  local_118 = local_168;
  uStack_114 = uStack_164;
  uStack_110 = uStack_160;
  uStack_10c = uStack_15c;
  local_108 = uStack_158;
  local_104 = local_154;
  uStack_100 = uStack_150;
  uStack_fc = uStack_14c;
  uStack_f8 = uStack_148;
  uStack_f4 = uStack_144;
  FUN_0189581c(param_1 + 0x40,&local_78,&local_50,&local_118);
  FUN_01bed4e2(param_1,&local_1d8,0x20);
  return;
}

