// FUN_0151f4dc @ 0151f4dc size=376 calls_out=8 calls_in=0
// strings: EVP_DigestFinal failed

void FUN_0151f4dc(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *local_d8;
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
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_6c;
  undefined1 auStack_64 [4];
  undefined *local_60;
  undefined4 local_5c;
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
  
  iVar3 = *(int *)(param_2 + 0x20);
  iVar1 = FUN_0172af48(&local_60);
  if (iVar1 != 1) {
    local_60 = &DAT_0033da77;
    local_5c = 0x16;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033da5a,0x1d,&local_60,&DAT_01857820,&DAT_01857830);
  }
  local_88 = uStack_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = local_4c;
  local_90 = local_60;
  local_6c = *(undefined1 *)(param_2 + 0x24);
  local_78 = *(undefined4 *)(param_2 + 0x18);
  uStack_74 = *(undefined4 *)(param_2 + 0x1c);
  local_8c = local_5c;
  local_70 = iVar3;
  FUN_016dd606(&local_60,0,0x40);
  iVar1 = FUN_0172b0dc(&local_90,&local_60,auStack_64);
  if (iVar1 != 1) {
    thunk_FUN_0172aae8(&local_90);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("EVP_DigestFinal failed",0x16,&local_60,&DAT_018a77c0,&DAT_018a7800);
  }
  local_d8 = local_60;
  uStack_d4 = local_5c;
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
  uVar2 = *(uint *)(local_70 + 0xc);
  FUN_0172aae8(&local_90);
  local_98 = uVar2;
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x40,&DAT_018a77d0);
  }
  FUN_016dd606(&local_60,0,0x40);
  local_20 = uVar2;
  FUN_016dd1aa(&local_60,&local_d8,uVar2);
  FUN_016dd1aa(param_1,&local_60,0x44);
  return;
}

