// FUN_0193aef8 @ 0193aef8 size=364 calls_out=5 calls_in=0
// strings: rustls_platform_verifier::verification::others | rustls_platform_verifier::verification::others

void FUN_0193aef8(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  char *local_88;
  undefined4 *local_84;
  char *local_80;
  uint local_7c;
  undefined *local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  char *local_50;
  undefined4 *puStack_4c;
  undefined *puStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  char **local_2c;
  code *local_28;
  
  FUN_018f929c(&local_88,*param_2 + 8,param_3,param_4,param_5,param_6);
  if (local_88 == (char *)0x80000029) {
    *param_1 = 0x80000029;
  }
  else {
    local_50 = local_88;
    puStack_4c = local_84;
    puStack_48 = local_80;
    bVar2 = (char *)0x80000011 < local_88;
    local_44 = local_7c;
    local_40 = (uint)local_78;
    uStack_3c = uStack_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    if (local_88 < (char *)0x80000013) {
      bVar2 = (char *)0x1 < local_88 + 0x7ffffff1;
    }
    if (bVar2) {
      local_68 = local_7c;
      uStack_64 = (uint)local_78;
      uStack_60 = uStack_74;
      uStack_5c = uStack_70;
      uStack_58 = uStack_6c;
      puVar1 = local_84;
    }
    else {
      puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar1 = 1;
      puVar1[1] = 1;
      FUN_0193b140(&local_50);
      local_50 = (char *)0x80000012;
      puStack_48 = &DAT_01d25bd8;
    }
    local_44 = local_68;
    local_40 = uStack_64;
    uStack_3c = uStack_60;
    uStack_38 = uStack_5c;
    uStack_34 = uStack_58;
    puStack_4c = puVar1;
    if (DAT_01d51b00 != 0) {
      local_28 = FUN_018f5d98;
      local_78 = &DAT_01d25bb8;
      local_7c = 0x2e;
      local_80 = "rustls_platform_verifier::verification::others";
      local_84 = (undefined4 *)0x2e;
      local_88 = "rustls_platform_verifier::verification::others";
      local_2c = &local_50;
      FUN_0193b350(&DAT_005bcc2b,&local_2c,1,&local_88);
    }
    *param_1 = (uint)local_50;
    param_1[1] = (uint)puStack_4c;
    param_1[2] = (uint)puStack_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = uStack_3c;
    param_1[6] = uStack_38;
    param_1[7] = uStack_34;
  }
  return;
}

