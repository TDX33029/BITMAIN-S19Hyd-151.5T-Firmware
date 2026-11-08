// FUN_01b460c8 @ 01b460c8 size=616 calls_out=2 calls_in=2
// strings: aws_lc_0_39_0_ec_compute_wNAF | /aws-lc/crypto/fipsmodule/ec/wnaf.c | 0 < w && w <= 7 | aws_lc_0_39_0_ec_compute_wNAF | /aws-lc/crypto/fipsmodule/ec/wnaf.c | bits != 0

undefined8 FUN_01b460c8(int param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  if (param_4 - 1 < 7) {
    if (param_3 == 0) {
      uVar7 = 0x21;
      pcVar4 = "bits != 0";
    }
    else {
      uVar2 = 1 << (param_4 & 0xff);
      iVar3 = -uVar2;
      uVar1 = uVar2 * 2;
      uVar9 = *param_2 & uVar1 - 1;
      puVar10 = (undefined1 *)(param_1 + -1);
      uVar8 = param_4;
      do {
        uVar8 = uVar8 + 1;
        if (uVar8 == param_3 + 2 + param_4) {
          if (uVar9 == 0) {
            return 0;
          }
          uVar7 = 0x59;
          pcVar4 = "window_val == 0";
          goto LAB_01b4610c;
        }
        if (uVar1 < uVar9) {
          uVar7 = 0x28;
          pcVar4 = "0 <= window_val && window_val <= next_bit";
          goto LAB_01b4610c;
        }
        uVar5 = 0;
        if ((uVar9 & 1) != 0) {
          if ((int)uVar1 <= (int)uVar9) {
            uVar7 = 0x2b;
            pcVar4 = "0 < window_val && window_val < next_bit";
            goto LAB_01b4610c;
          }
          uVar5 = uVar9;
          if ((uVar9 & uVar2) != 0) {
            if (uVar8 < param_3) {
              uVar5 = uVar9 + uVar2 * -2;
            }
            else {
              uVar5 = uVar9 & (int)(uVar1 - 1) >> 1;
            }
          }
          uVar9 = uVar9 - uVar5;
          if (uVar2 != uVar9 && (uVar1 != uVar9 && uVar9 != 0)) {
            uVar7 = 0x45;
            pcVar4 = "window_val == 0 || window_val == next_bit || window_val == bit";
            goto LAB_01b4610c;
          }
          bVar11 = SBORROW4(iVar3,uVar5);
          iVar6 = iVar3 - uVar5;
          if (iVar3 < (int)uVar5) {
            bVar11 = SBORROW4(uVar5,uVar2);
            iVar6 = uVar5 - uVar2;
          }
          if (iVar6 < 0 == bVar11) {
            uVar7 = 0x46;
            pcVar4 = "-bit < digit && digit < bit";
            goto LAB_01b4610c;
          }
          if ((uVar5 & 1) == 0) {
            uVar7 = 0x49;
            pcVar4 = "digit & 1";
            goto LAB_01b4610c;
          }
        }
        puVar10 = puVar10 + 1;
        *puVar10 = (char)uVar5;
        iVar6 = FUN_01b3594c(param_2);
        uVar9 = ((int)uVar9 >> 1) + (iVar6 << (param_4 & 0xff));
      } while ((int)uVar9 <= (int)uVar1);
      uVar7 = 0x55;
      pcVar4 = "window_val <= next_bit";
    }
  }
  else {
    uVar7 = 0x20;
    pcVar4 = "0 < w && w <= 7";
  }
LAB_01b4610c:
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar4,"/aws-lc/crypto/fipsmodule/ec/wnaf.c",uVar7,"aws_lc_0_39_0_ec_compute_wNAF");
}

