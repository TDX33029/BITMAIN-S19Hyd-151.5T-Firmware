// FUN_018f40f8 @ 018f40f8 size=288 calls_out=8 calls_in=0
// strings: 

void FUN_018f40f8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_d8;
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
  uint local_98;
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_6c;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  
  iVar2 = *(int *)(param_2 + 0x20);
  FUN_007048b8(auStack_90);
  local_6c = *(undefined1 *)(param_2 + 0x24);
  local_78 = *(undefined4 *)(param_2 + 0x18);
  uStack_74 = *(undefined4 *)(param_2 + 0x1c);
  local_70 = iVar2;
  FUN_01bed93e(&local_60,0,0x40);
  iVar2 = FUN_01b3bd78(auStack_90,&local_60,auStack_64);
  if (iVar2 != 1) {
    thunk_FUN_01b3b854(auStack_90);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00521101,0x16,&local_60,&DAT_01d23e10,&DAT_01d23fd8);
  }
  local_d8 = local_60;
  uStack_d4 = uStack_5c;
  uStack_d0 = uStack_58;
  uStack_cc = uStack_54;
  uStack_c8 = uStack_50;
  local_c4 = local_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  uStack_b8 = uStack_40;
  uStack_b4 = uStack_3c;
  local_b0 = local_38;
  uStack_ac = uStack_34;
  uStack_a8 = uStack_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  uVar1 = *(uint *)(local_70 + 0xc);
  FUN_01b3b854(auStack_90);
  local_98 = uVar1;
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d23fb8);
  }
  FUN_01bed93e(&local_60,0,0x40);
  local_20 = uVar1;
  FUN_01bed4e2(&local_60,&local_d8,uVar1);
  FUN_01bed4e2(param_1,&local_60,0x44);
  return;
}

