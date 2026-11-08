// FUN_01b328ac @ 01b328ac size=336 calls_out=4 calls_in=1
// strings: aws_lc_0_39_0_bn_mont_n0 | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | !BN_is_zero(n) | aws_lc_0_39_0_bn_mont_n0 | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | !BN_is_negative(n)

uint FUN_01b328ac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = FUN_01b2e300();
  if (iVar2 == 0) {
    iVar2 = FUN_01b2b230(param_1);
    if (iVar2 == 0) {
      uVar14 = 0x1b32928;
      iVar2 = FUN_01b2e5fc(param_1);
      if (iVar2 == 0) {
        uVar6 = 0x1c;
        pcVar9 = "aws_lc_0_39_0_bn_mont_n0";
        pcVar3 = "BN_is_odd(n)";
      }
      else {
        if (param_1[1] < 2) {
          uVar14 = 0;
        }
        uVar11 = 0;
        uVar12 = *(uint *)*param_1;
        if (1 < param_1[1]) {
          uVar14 = ((uint *)*param_1)[1];
        }
        uVar7 = uVar12 & 1;
        if (uVar7 != 0) {
          iVar2 = 0x40;
          uVar4 = 0;
          uVar5 = 0;
          do {
            uVar4 = uVar4 >> 1 | uVar5 << 0x1f;
            uVar10 = (uVar7 & 1) * uVar12;
            uVar8 = uVar7 & uVar10;
            uVar1 = (uVar7 & 1) * uVar14;
            uVar13 = uVar1 ^ uVar11;
            uVar10 = (uVar10 ^ uVar7) >> 1 | uVar13 << 0x1f;
            uVar11 = (uVar1 & uVar11) + (uVar13 >> 1) + (uint)CARRY4(uVar10,uVar8);
            uVar5 = uVar7 * -0x80000000 + (uVar5 >> 1);
            iVar2 = iVar2 + -1;
            uVar7 = uVar10 + uVar8;
          } while (iVar2 != 0);
          return uVar4;
        }
        uVar6 = 0x5f;
        pcVar9 = "bn_neg_inv_mod_r_u64";
        pcVar3 = "n % 2 == 1";
      }
    }
    else {
      uVar6 = 0x1b;
      pcVar9 = "aws_lc_0_39_0_bn_mont_n0";
      pcVar3 = "!BN_is_negative(n)";
    }
  }
  else {
    uVar6 = 0x1a;
    pcVar9 = "aws_lc_0_39_0_bn_mont_n0";
    pcVar3 = "!BN_is_zero(n)";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar3,"/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",uVar6,pcVar9,param_4);
}

