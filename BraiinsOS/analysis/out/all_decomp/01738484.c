// FUN_01738484 @ 01738484 size=684 calls_out=2 calls_in=2
// strings: aws_lc_0_39_0_ec_compute_wNAF | /aws-lc/crypto/fipsmodule/ec/wnaf.c | -bit < digit && digit < bit | aws_lc_0_39_0_ec_compute_wNAF | /aws-lc/crypto/fipsmodule/ec/wnaf.c | 0 <= window_val && window_val <= next_bit

undefined8 FUN_01738484(int param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  
  if (6 < param_4 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("0 < w && w <= 7","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x20,
                 "aws_lc_0_39_0_ec_compute_wNAF");
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("bits != 0","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x21,
                 "aws_lc_0_39_0_ec_compute_wNAF");
  }
  uVar2 = 1 << (param_4 & 0xff);
  uVar1 = uVar2 * 2;
  uVar8 = *param_2 & uVar1 - 1;
  if (param_3 != 0xffffffff) {
    puVar6 = (undefined1 *)(param_1 + -1);
    uVar7 = param_4 + 1;
    do {
      if (uVar1 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("0 <= window_val && window_val <= next_bit",
                     "/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x28,"aws_lc_0_39_0_ec_compute_wNAF");
      }
      if ((uVar8 & 1) == 0) {
        iVar5 = (int)uVar8 >> 1;
        uVar8 = 0;
      }
      else {
        if ((int)uVar1 <= (int)uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("0 < window_val && window_val < next_bit",
                       "/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x2b,"aws_lc_0_39_0_ec_compute_wNAF");
        }
        if ((uVar2 & uVar8) == 0) {
          iVar5 = 0;
          if ((int)uVar2 <= (int)uVar8) goto LAB_01738610;
        }
        else {
          if (uVar7 < param_3) {
            uVar4 = uVar8 + uVar2 * -2;
            uVar8 = uVar1;
          }
          else {
            uVar4 = uVar8 & (int)(uVar1 - 1) >> 1;
            uVar8 = uVar8 - uVar4;
            if (uVar8 != 0 && uVar1 != uVar8) {
              if (uVar2 != uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_016d2c94("window_val == 0 || window_val == next_bit || window_val == bit",
                             "/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x45,
                             "aws_lc_0_39_0_ec_compute_wNAF");
              }
              if ((int)uVar2 <= (int)uVar4) goto LAB_01738610;
              if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_016d2c94("digit & 1","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x49,
                             "aws_lc_0_39_0_ec_compute_wNAF");
              }
              iVar5 = (int)uVar2 >> 1;
              uVar8 = uVar4;
              goto LAB_01738578;
            }
          }
          if ((int)uVar2 <= (int)uVar4 || (int)uVar4 <= (int)-uVar2) {
LAB_01738610:
                    /* WARNING: Subroutine does not return */
            FUN_016d2c94("-bit < digit && digit < bit","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x46,
                         "aws_lc_0_39_0_ec_compute_wNAF");
          }
          iVar5 = (int)uVar8 >> 1;
          uVar8 = uVar4;
        }
      }
LAB_01738578:
      puVar6 = puVar6 + 1;
      *puVar6 = (char)uVar8;
      iVar3 = FUN_017209a8(param_2,param_3 + 0x1f >> 5,uVar7);
      uVar8 = iVar5 + (iVar3 << (param_4 & 0xff));
      if ((int)uVar1 < (int)uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("window_val <= next_bit","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x55,
                     "aws_lc_0_39_0_ec_compute_wNAF");
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3 + 2 + param_4);
  }
  if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("window_val == 0","/aws-lc/crypto/fipsmodule/ec/wnaf.c",0x59,
                 "aws_lc_0_39_0_ec_compute_wNAF");
  }
  return 0;
}

