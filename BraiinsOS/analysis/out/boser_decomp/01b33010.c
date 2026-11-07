// FUN_01b33010 @ 01b33010 size=416 calls_out=10 calls_in=11
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c | aws_lc_0_39_0_BN_mod_mul_montgomery | /aws-lc/crypto/fipsmodule/bn/montgomery.c | (size_t)num <= BN_MONTGOMERY_MAX_WORDS | aws_lc_0_39_0_BN_mod_mul_montgomery | /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined4
FUN_01b33010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((param_2[3] == 0) && (param_3[3] == 0)) {
    if ((((int)*(uint *)(param_4 + 0x18) < 4) || (param_2[1] != *(uint *)(param_4 + 0x18))) ||
       (uVar5 = param_3[1], uVar5 != param_2[1])) {
      FUN_01b2e894(param_5);
      iVar1 = FUN_01b2e970(param_5);
      uVar4 = 0;
      if (iVar1 != 0) {
        if (param_2 == param_3) {
          iVar3 = FUN_01b32e38(iVar1,param_2,param_5);
        }
        else {
          iVar3 = FUN_01b32c9c(iVar1,param_2,param_3,param_5);
        }
        if (iVar3 != 0) {
          uVar4 = FUN_01b30bf8(param_1,iVar1,param_4);
        }
      }
      FUN_01b2ebbc(param_5);
      return uVar4;
    }
    iVar1 = FUN_01b2b248(param_1,uVar5);
    if (iVar1 != 0) {
      if (uVar5 < 0x801) {
        iVar1 = FUN_01b32828(*param_1,*param_2,*param_3,*(undefined4 *)(param_4 + 0x14),
                             param_4 + 0x28,uVar5);
        if (iVar1 != 0) {
          param_1[3] = 0;
          param_1[1] = uVar5;
          return 1;
        }
        uVar4 = 0x1c5;
        pcVar2 = "0";
      }
      else {
        uVar4 = 0x1bc;
        pcVar2 = "(size_t)num <= BN_MONTGOMERY_MAX_WORDS";
      }
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",uVar4,
                   "aws_lc_0_39_0_BN_mod_mul_montgomery");
    }
  }
  else {
    FUN_01b053d4(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x1ad);
  }
  return 0;
}

