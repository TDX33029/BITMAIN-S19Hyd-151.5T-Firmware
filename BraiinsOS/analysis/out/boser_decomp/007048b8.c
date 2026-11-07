// FUN_007048b8 @ 007048b8 size=124 calls_out=2 calls_in=2
// strings: Unable to clone DigestContext | EVP_MD_CTX_copy failed

void FUN_007048b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_01b3bbf8(&local_30);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("Unable to clone DigestContext",0x1d,&local_30,&DAT_01d2f130);
  }
  param_1[2] = local_28;
  param_1[3] = uStack_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  *param_1 = local_30;
  param_1[1] = local_2c;
  return;
}

