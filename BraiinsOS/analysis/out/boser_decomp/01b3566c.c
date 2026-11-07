// FUN_01b3566c @ 01b3566c size=540 calls_out=11 calls_in=1
// strings: aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | !BN_is_zero(&mont->N) | aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | !BN_is_negative(&mont->N)

undefined4 FUN_01b3566c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_01b2e300(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = FUN_01b2b230(param_1 + 0x14);
    if (iVar1 == 0) {
      iVar1 = FUN_01b2e5fc(param_1 + 0x14);
      if (iVar1 == 0) {
        uVar5 = 0x9b;
        pcVar2 = "BN_is_odd(&mont->N)";
      }
      else {
        iVar1 = FUN_01b2b88c(param_1 + 0x14);
        if (iVar1 == *(int *)(param_1 + 0x18)) {
          uVar3 = FUN_01b2b8d0(param_1 + 0x14);
          if (uVar3 == 0) {
            uVar5 = 0x9f;
            pcVar2 = "n_bits != 0";
          }
          else {
            if (uVar3 == 1) {
              FUN_01b2af70(param_1);
LAB_01b35790:
              uVar5 = FUN_01b2b700(param_1,*(undefined4 *)(param_1 + 0x18));
              return uVar5;
            }
            iVar1 = *(int *)(param_1 + 0x18);
            if ((uint)(iVar1 * 0x20) < uVar3) {
              uVar5 = 0xa6;
              pcVar2 = "lgBigR >= n_bits";
            }
            else {
              iVar4 = FUN_01b353f4(param_1,uVar3 - 1);
              if ((iVar4 == 0) ||
                 (iVar4 = FUN_01b30f18(param_1,param_1,(iVar1 * 0x21 + 1) - uVar3,param_1 + 0x14,
                                       param_2), iVar4 == 0)) {
                return 0;
              }
              if (iVar1 == *(int *)(param_1 + 0x18)) {
                iVar1 = 5;
                do {
                  iVar4 = FUN_01b33010(param_1,param_1,param_1,param_1,param_2);
                  if (iVar4 == 0) {
                    return 0;
                  }
                  iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
                goto LAB_01b35790;
              }
              uVar5 = 0xcc;
              pcVar2 = "threshold == mont->N.width";
            }
          }
        }
        else {
          uVar5 = 0x9c;
          pcVar2 = "bn_minimal_width(&mont->N) == mont->N.width";
        }
      }
    }
    else {
      uVar5 = 0x9a;
      pcVar2 = "!BN_is_negative(&mont->N)";
    }
  }
  else {
    uVar5 = 0x99;
    pcVar2 = "!BN_is_zero(&mont->N)";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",uVar5,
               "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
}

