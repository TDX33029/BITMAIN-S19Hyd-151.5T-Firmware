// FUN_01720f58 @ 01720f58 size=1500 calls_out=10 calls_in=2
// strings: aws_lc_0_39_0_bn_mod_exp_mont_small | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | bits != 0 | aws_lc_0_39_0_bn_mod_exp_mont_small | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | !r_is_one

undefined8
FUN_01720f58(undefined1 *param_1,undefined1 *param_2,uint param_3,int param_4,uint param_5,
            undefined4 *param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  int local_4c4;
  uint local_4bc;
  undefined1 auStack_4b0 [68];
  undefined1 auStack_46c [68];
  undefined1 auStack_428 [1008];
  undefined1 *local_38;
  int local_2c;
  int local_20;
  undefined1 *local_1c;
  
  uVar9 = param_6[6];
  local_38 = param_1;
  if (uVar9 == param_3) {
    bVar14 = 0x7fffffe < param_5;
    bVar13 = param_5 == 0x7ffffff;
    if (param_5 < 0x8000000) {
      bVar14 = 0x10 < uVar9;
      bVar13 = uVar9 == 0x11;
    }
    if (!bVar14 || bVar13) {
      local_20 = param_4;
      local_1c = param_2;
      iVar4 = FUN_017181d4(param_6 + 5);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("BN_is_odd(&mont->N)","/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x29f,
                     "aws_lc_0_39_0_bn_mod_exp_mont_small");
      }
      local_2c = DAT_018ddaf8;
      if (param_5 != 0) {
        piVar6 = (int *)(local_20 + param_5 * 4);
        do {
          if (piVar6[-1] != 0) {
            iVar4 = FUN_0171429c(piVar6[-1]);
            uVar8 = iVar4 + (param_5 - 1) * 0x20;
            if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("bits != 0","/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x2ab,
                           "aws_lc_0_39_0_bn_mod_exp_mont_small");
            }
            iVar4 = uVar9 * 4;
            if (uVar8 < 0xf0) {
              if (0x4f < uVar8) {
                local_4c4 = 8;
                local_4bc = 4;
                goto joined_r0x01720d14;
              }
              if (0x17 < uVar8) {
                local_4c4 = 4;
                local_4bc = 3;
                goto joined_r0x01720d14;
              }
              if (iVar4 != 0) {
                local_4c4 = 1;
                local_4bc = 1;
                goto LAB_01720aa4;
              }
LAB_01720afc:
              local_4bc = 1;
            }
            else {
              local_4c4 = 0x10;
              local_4bc = 5;
joined_r0x01720d14:
              if (iVar4 != 0) {
LAB_01720aa4:
                if (((auStack_46c < local_1c) && (local_1c < auStack_46c + iVar4)) ||
                   ((local_1c < auStack_46c && (auStack_46c < local_1c + iVar4)))) {
LAB_01720e80:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0,0x1720e80);
                  (*pcVar1)();
                }
                FUN_016dd1aa(auStack_46c,local_1c,iVar4);
                if (local_4bc == 1) goto LAB_01720afc;
              }
              FUN_0171e0b0(auStack_4b0,auStack_46c,auStack_46c,uVar9,param_6);
              puVar5 = auStack_428;
              do {
                puVar7 = puVar5 + 0x44;
                FUN_0171e0b0(puVar5,puVar5 + -0x44,auStack_4b0,uVar9,param_6);
                puVar5 = puVar7;
              } while (auStack_46c + local_4c4 * 0x44 != puVar7);
            }
            bVar13 = true;
            do {
              uVar8 = uVar8 - 1;
              iVar3 = FUN_017209a8(local_20,param_5,uVar8);
              if (iVar3 != 0) {
                if (uVar8 != 0 && local_4bc != 1) goto LAB_01720bfc;
                uVar10 = 0;
                puVar5 = auStack_46c;
                if (bVar13) goto LAB_01720c84;
LAB_01720da0:
                uVar11 = 0;
                uVar10 = 0;
                FUN_0171e0b0(param_1,param_1,param_1,uVar9,param_6);
                do {
                  FUN_0171e0b0(param_1,param_1,auStack_46c + (uVar11 >> 1) * 0x44,uVar9,param_6);
                  while( true ) {
                    if (uVar8 == uVar10) goto LAB_01720b48;
                    uVar8 = (uVar8 - 1) - uVar10;
                    iVar3 = FUN_017209a8(local_20,param_5,uVar8);
                    if (iVar3 == 0) goto LAB_01720cdc;
                    bVar13 = false;
                    if (local_4bc == 1 || uVar8 == 0) goto LAB_01720da0;
LAB_01720bfc:
                    uVar11 = 1;
                    uVar10 = 0;
                    uVar12 = 1;
                    do {
                      iVar3 = FUN_017209a8(local_20,param_5,uVar8 - uVar12);
                      if (iVar3 != 0) {
                        uVar11 = uVar11 << (uVar12 - uVar10 & 0xff) | 1;
                        uVar10 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                      uVar2 = uVar8;
                      if (uVar12 <= uVar8) {
                        uVar2 = local_4bc;
                      }
                    } while (uVar12 < uVar2);
                    if (!bVar13) break;
                    if ((uint)(1 << local_4bc) <= uVar11) goto LAB_01720f04;
                    puVar5 = auStack_46c + (uVar11 >> 1) * 0x44;
LAB_01720c84:
                    if (iVar4 != 0) {
                      if (param_1 < puVar5) {
                        if (puVar5 < param_1 + iVar4) goto LAB_01720e80;
                      }
                      else if ((param_1 != puVar5) && (param_1 < puVar5 + iVar4)) goto LAB_01720e80;
                      FUN_016dd1aa(param_1,puVar5,iVar4);
                    }
                  }
                  uVar12 = 0;
                  do {
                    uVar12 = uVar12 + 1;
                    FUN_0171e0b0(param_1,param_1,param_1,uVar9,param_6);
                  } while (uVar12 < uVar10 + 1);
                  if ((uint)(1 << local_4bc) <= uVar11) {
LAB_01720f04:
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("wvalue < (1u << window)",
                                 "/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x2e2,
                                 "aws_lc_0_39_0_bn_mod_exp_mont_small");
                  }
                } while( true );
              }
              if (!bVar13) {
LAB_01720cdc:
                bVar13 = false;
                FUN_0171e0b0(param_1,param_1,param_1,uVar9,param_6);
              }
            } while (uVar8 != 0);
            if (bVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("!r_is_one","/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x2f0,
                           "aws_lc_0_39_0_bn_mod_exp_mont_small");
            }
LAB_01720b48:
            FUN_0177aaa0(auStack_46c,0x440);
            if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78();
            }
            return 0;
          }
          param_5 = param_5 - 1;
          piVar6 = piVar6 + -1;
        } while (param_5 != 0);
      }
      uVar15 = FUN_0171cba8(param_1,uVar9,*param_6);
      return uVar15;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

