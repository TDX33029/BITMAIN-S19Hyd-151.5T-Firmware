// FUN_015581a4 @ 015581a4 size=668 calls_out=3 calls_in=1
// strings: extended master secret | master secret

void FUN_015581a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,int param_7,undefined4 *param_8)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *local_150 [17];
  undefined1 local_10c [52];
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_016dd606(local_10c,0,0x30);
  uVar4 = 0x40;
  FUN_016dd1aa((uint)local_150 | 4,param_7,0x40);
  local_150[0] = param_8;
  if (*param_6 == 0) {
    FUN_016dd1aa(&local_d8,param_7,0x20);
    FUN_016dd1aa(&uStack_b8,param_7 + 0x20,0x20);
    local_90 = local_d8;
    uStack_8c = uStack_d4;
    uStack_88 = uStack_d0;
    uStack_84 = uStack_cc;
    uStack_80 = uStack_c8;
    local_7c = local_c4;
    uStack_78 = uStack_c0;
    uStack_74 = uStack_bc;
    uStack_70 = uStack_b8;
    uStack_6c = uStack_b4;
    local_68 = local_b0;
    uStack_64 = uStack_ac;
    uStack_60 = uStack_a8;
    uStack_5c = uStack_a4;
    uStack_58 = uStack_a0;
    uStack_54 = uStack_9c;
    puVar3 = (undefined4 *)((uint)&local_d8 | 1);
    local_d8 = CONCAT31(local_d8._1_3_,1);
    FUN_016dd1aa(puVar3,&local_90,0x47);
    uVar2 = 0xd;
    pcVar1 = "master secret";
  }
  else {
    FUN_016dd1aa((uint)&local_90 | 3,param_6 + 1,0x44);
    local_d8 = local_d8 & 0xffffff00;
    FUN_016dd1aa((uint)&local_d8 | 1,&local_90,0x47);
    if (0x40 < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_94,0x40,&DAT_018a7f14);
    }
    puVar3 = &uStack_d4;
    uVar2 = 0x16;
    pcVar1 = "extended master secret";
    uVar4 = local_94;
  }
  (**(code **)(param_8[1] + 0xc))
            (&local_48,*param_8,local_10c,param_2,param_3,param_4,param_5,pcVar1,uVar2,puVar3,uVar4)
  ;
  if (local_48 == -0x7fffffd7) {
    FUN_016dd1aa(param_1 + 1,local_150,0x74);
    *param_1 = 0;
    return;
  }
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  *param_1 = 1;
  return;
}

