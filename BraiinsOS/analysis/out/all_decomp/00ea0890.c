// FUN_00ea0890 @ 00ea0890 size=180 calls_out=3 calls_in=1
// strings: invalid IP address syntaxring::error::Unspecified | a Display implementation returned an error unexpectedly

void FUN_00ea0890(uint param_1)

{
  int iVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  undefined *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_20 = 0;
  local_10 = &DAT_60000020;
  local_18 = &local_28;
  local_24 = 1;
  local_28 = 0;
  local_c = 0;
  local_14 = &DAT_0187b3f4;
  iVar1 = FUN_00faace8(&local_18,(&PTR_s_invalid_IP_address_syntaxring_e_018b0fac)[param_1 & 0xff],
                       *(undefined4 *)(&DAT_0041f148 + (param_1 & 0xff) * 4));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_38,
                 &DAT_0187b40c,&DAT_018af130);
  }
  local_38 = local_28;
  uStack_34 = local_24;
  uStack_30 = local_20;
  FUN_0157ba88(&local_38);
  return;
}

