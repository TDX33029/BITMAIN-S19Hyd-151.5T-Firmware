// FUN_01b4b880 @ 01b4b880 size=324 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | aws_lc_0_39_0_HKDF_extract | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | *out_len == EVP_MD_size(digest)

void FUN_01b4b880(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_28;
  uint local_24;
  
  local_24 = DAT_01d53560;
  uVar1 = FUN_01b3b6a4(param_3,param_2,&PTR_01d3b2b0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_01b4b73c(param_3,param_6,param_7,param_4,param_5,param_1,&local_28);
    if (iVar2 != 0) {
      *param_2 = local_28;
      uVar4 = FUN_01b3b6b4(param_3);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (local_28 != (int)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01be3310("*out_len == EVP_MD_size(digest)","/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x53,
                     "aws_lc_0_39_0_HKDF_extract");
      }
      uVar5 = 1;
      goto LAB_01b4b8fc;
    }
    uVar5 = 0x4e;
    uVar3 = 0x1c;
  }
  else {
    uVar5 = 0x3f;
    uVar3 = 0x65;
  }
  FUN_01b053d4(0x1f,0,uVar3,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",uVar5);
  uVar5 = 0;
  uVar3 = extraout_r1;
LAB_01b4b8fc:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar5,uVar3,local_24 ^ DAT_01d53560,0);
  }
  return;
}

