// FUN_018f3e94 @ 018f3e94 size=444 calls_out=9 calls_in=0
// strings: 

void FUN_018f3e94(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  uint local_f0;
  uint local_ec;
  uint *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined4 uStack_74;
  undefined1 auStack_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  FUN_0070590c(&local_108,*param_2);
  uVar1 = local_f0 + param_4;
  uVar3 = local_ec + CARRY4(local_f0,param_4);
  if (!CARRY4(local_ec,(uint)CARRY4(local_f0,param_4))) {
    uVar4 = local_e8[1];
    if (uVar3 < uVar4 || uVar4 - uVar3 < (uint)(uVar1 <= *local_e8)) {
      local_e4 = CONCAT31(local_e4._1_3_,uVar1 == *local_e8 && uVar3 == uVar4);
      local_f0 = uVar1;
      local_ec = uVar3;
      iVar2 = FUN_01b3bc2c(&local_108,param_3,param_4);
      if (iVar2 == 1) {
        local_98 = local_108;
        uStack_94 = uStack_104;
        uStack_90 = uStack_100;
        uStack_8c = uStack_fc;
        uStack_88 = uStack_f8;
        local_84 = local_f4;
        uStack_80 = local_f0;
        uStack_7c = local_ec;
        local_78 = local_e8;
        uStack_74 = local_e4;
        FUN_01bed93e(&local_68,0,0x40);
        iVar2 = FUN_01b3bd78(&local_98,&local_68,auStack_6c);
        if (iVar2 != 1) {
          thunk_FUN_01b3b854(&local_98);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00521101,0x16,&local_68,&DAT_01d23e10,&DAT_01d23fd8);
        }
        local_e0 = local_68;
        uStack_dc = uStack_64;
        uStack_d8 = uStack_60;
        uStack_d4 = uStack_5c;
        uStack_d0 = uStack_58;
        local_cc = local_54;
        uStack_c8 = uStack_50;
        uStack_c4 = uStack_4c;
        uStack_c0 = uStack_48;
        uStack_bc = uStack_44;
        local_b8 = local_40;
        uStack_b4 = uStack_3c;
        uStack_b0 = uStack_38;
        uStack_ac = uStack_34;
        uStack_a8 = uStack_30;
        uStack_a4 = uStack_2c;
        uVar1 = local_78[3];
        FUN_01b3b854(&local_98);
        local_a0 = uVar1;
        if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar1,0x40,&DAT_01d23fb8);
        }
        FUN_01bed93e(&local_68,0,0x40);
        local_28 = uVar1;
        FUN_01bed4e2(&local_68,&local_e0,uVar1);
        FUN_01bed4e2(param_1,&local_68,0x44);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00521117,0x14,&local_68,&DAT_01d23e10,&DAT_01d23fe8);
}

