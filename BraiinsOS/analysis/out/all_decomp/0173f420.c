// FUN_0173f420 @ 0173f420 size=344 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | aws_lc_0_39_0_HKDF_extract | /aws-lc/crypto/fipsmodule/hkdf/hkdf.c | *out_len == EVP_MD_size(digest)

void FUN_0173f420(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar5;
  int local_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar1 = FUN_0172a880(param_3,param_2,&PTR_018bc3f4,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_0173f2e0(param_3,param_6,param_7,param_4,param_5,param_1,&local_28);
    if (iVar2 != 0) {
      *param_2 = local_28;
      uVar5 = FUN_0172a898(param_3);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (local_28 != (int)uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("*out_len == EVP_MD_size(digest)","/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x53,
                     "aws_lc_0_39_0_HKDF_extract");
      }
      uVar3 = 1;
      goto LAB_0173f4cc;
    }
    FUN_016e9cd0(0x1f,0,0x1c,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x4e);
    uVar4 = extraout_r1_00;
  }
  else {
    FUN_016e9cd0(0x1f,0,0x65,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x3f);
    uVar4 = extraout_r1;
  }
  uVar3 = 0;
LAB_0173f4cc:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar4,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

