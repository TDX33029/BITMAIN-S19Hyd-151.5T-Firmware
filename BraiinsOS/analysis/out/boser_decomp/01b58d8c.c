// FUN_01b58d8c @ 01b58d8c size=1872 calls_out=36 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | rsa_generate_key_impl

int FUN_01b58d8c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int local_4c;
  undefined1 auStack_30 [4];
  int local_2c;
  
  param_2 = param_2 & 0xffffff80;
  iVar11 = (int)param_2 >> 1;
  local_2c = DAT_01d53560;
  local_4c = 4;
  while( true ) {
    FUN_01b0535c();
    iVar1 = FUN_01b58d74();
    if (iVar1 == 0) break;
    if ((int)param_2 < 0x100) {
      uVar14 = 0x3ce;
      uVar12 = 0x7e;
LAB_01b58e40:
      FUN_01b053d4(4,0,uVar12,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar14);
    }
    else {
      uVar2 = FUN_01b2b8d0(param_3);
      if (0x20 < uVar2) {
        uVar14 = 0x3d9;
        uVar12 = 0x65;
        goto LAB_01b58e40;
      }
      iVar3 = FUN_01b2e788();
      if (iVar3 == 0) {
LAB_01b593a8:
        FUN_01b053d4(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x467);
        if (iVar3 != 0) {
LAB_01b59304:
          iVar13 = 0;
          goto LAB_01b59308;
        }
      }
      else {
        FUN_01b2e894();
        iVar13 = FUN_01b2e970(iVar3);
        iVar4 = FUN_01b2e970(iVar3);
        iVar5 = FUN_01b2e970(iVar3);
        iVar6 = FUN_01b2e970(iVar3);
        iVar7 = FUN_01b2e970(iVar3);
        iVar8 = FUN_01b2e970(iVar3);
        if (((((((iVar4 == 0 || iVar13 == 0) || (iVar6 == 0 || iVar5 == 0)) ||
               (iVar8 == 0 || iVar7 == 0)) ||
              ((iVar9 = FUN_01b353f4(iVar7,iVar11 + -100), iVar9 == 0 ||
               (iVar9 = FUN_01b353f4(iVar8,iVar11), iVar9 == 0)))) ||
             (iVar9 = FUN_01b2adf0(iVar1 + 4), iVar9 == 0)) ||
            (((iVar9 = FUN_01b2adf0(iVar1 + 0xc), iVar9 == 0 ||
              (iVar9 = FUN_01b2adf0(iVar1 + 8), iVar9 == 0)) ||
             ((iVar9 = FUN_01b2adf0(iVar1 + 0x10), iVar9 == 0 ||
              (((iVar9 = FUN_01b2adf0(iVar1 + 0x14), iVar9 == 0 ||
                (iVar9 = FUN_01b2adf0(iVar1 + 0x18), iVar9 == 0)) ||
               (iVar9 = FUN_01b2adf0(iVar1 + 0x1c), iVar9 == 0)))))))) ||
           ((iVar9 = FUN_01b2b33c(*(undefined4 *)(iVar1 + 8),param_3), iVar9 == 0 ||
            (iVar9 = FUN_01b2b55c(iVar6,&DAT_0053a850,0x40), iVar9 == 0)))) goto LAB_01b593a8;
        iVar9 = FUN_01b2b8d0(iVar6);
        if (iVar9 != 0x800) {
          uVar12 = 0x405;
          pcVar10 = "sqrt2_bits == (int)BN_num_bits(sqrt2)";
          goto LAB_01b59034;
        }
        if ((int)param_2 < 0xfff) {
          iVar9 = FUN_01b33c8c(iVar6,iVar6,0x800 - iVar11);
LAB_01b59054:
          if (iVar9 == 0) goto LAB_01b593a8;
        }
        else if (0x1000 < (int)param_2) {
          iVar9 = FUN_01b2e458(iVar6,1);
          if (iVar9 == 0) goto LAB_01b593a8;
          iVar9 = FUN_01b339cc(iVar6,iVar6,iVar11 + -0x800);
          goto LAB_01b59054;
        }
        iVar9 = FUN_01b2b8d0(iVar6);
        if (iVar11 != iVar9) {
          uVar12 = 0x414;
          pcVar10 = "prime_bits == (int)BN_num_bits(sqrt2)";
LAB_01b59034:
                    /* WARNING: Subroutine does not return */
          FUN_01be3310(pcVar10,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar12,
                       "rsa_generate_key_impl");
        }
        do {
          iVar9 = FUN_01b54b58(*(undefined4 *)(iVar1 + 0x10),iVar11,*(undefined4 *)(iVar1 + 8),0,
                               iVar6,iVar7,iVar3,param_4);
          if (((iVar9 == 0) || (iVar9 = FUN_01b337a0(param_4,3,0), iVar9 == 0)) ||
             ((iVar9 = FUN_01b54b58(*(undefined4 *)(iVar1 + 0x14),iVar11,*(undefined4 *)(iVar1 + 8),
                                    *(undefined4 *)(iVar1 + 0x10),iVar6,iVar7,iVar3,param_4),
              iVar9 == 0 || (iVar9 = FUN_01b337a0(param_4,3,1), iVar9 == 0)))) goto LAB_01b593a8;
          iVar9 = FUN_01b2be38(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
          if (iVar9 < 0) {
            uVar12 = *(undefined4 *)(iVar1 + 0x10);
            *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x14);
            *(undefined4 *)(iVar1 + 0x14) = uVar12;
          }
          uVar14 = *(undefined4 *)(iVar1 + 0x10);
          uVar12 = FUN_01b2ae78();
          iVar9 = FUN_01b30698(iVar4,uVar14,uVar12);
          if (iVar9 == 0) goto LAB_01b593a8;
          uVar14 = *(undefined4 *)(iVar1 + 0x14);
          uVar12 = FUN_01b2ae78();
          iVar9 = FUN_01b30698(iVar5,uVar14,uVar12);
          if (((iVar9 == 0) || (iVar9 = FUN_01b34a70(iVar13,iVar4,iVar5,iVar3), iVar9 == 0)) ||
             (iVar9 = FUN_01b34c30(*(undefined4 *)(iVar1 + 0xc),auStack_30,
                                   *(undefined4 *)(iVar1 + 8),iVar13,iVar3), iVar9 == 0))
          goto LAB_01b593a8;
          iVar9 = FUN_01b2be38(*(undefined4 *)(iVar1 + 0xc),iVar8);
        } while (iVar9 < 1);
        iVar13 = FUN_01b2b8d0(iVar4);
        if (iVar13 != iVar11) {
          uVar12 = 0x43f;
          pcVar10 = "BN_num_bits(pm1) == (unsigned)prime_bits";
          goto LAB_01b59034;
        }
        iVar13 = FUN_01b2b8d0(iVar5);
        if (iVar11 != iVar13) {
          uVar12 = 0x440;
          pcVar10 = "BN_num_bits(qm1) == (unsigned)prime_bits";
          goto LAB_01b59034;
        }
        iVar13 = FUN_01b32c9c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x10),
                              *(undefined4 *)(iVar1 + 0x14),iVar3);
        if (((iVar13 == 0) ||
            (iVar13 = FUN_01b30ff4(0,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0xc),
                                   iVar4,iVar11,iVar3), iVar13 == 0)) ||
           (iVar13 = FUN_01b30ff4(0,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0xc),iVar5
                                  ,iVar11,iVar3), iVar13 == 0)) goto LAB_01b593a8;
        FUN_01b2b964(*(undefined4 *)(iVar1 + 4));
        uVar2 = FUN_01b2b8d0(*(undefined4 *)(iVar1 + 4));
        if (uVar2 != param_2) {
          uVar14 = 0x451;
          uVar12 = 0x44;
LAB_01b592fc:
          FUN_01b053d4(4,0,uVar12,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar14);
          goto LAB_01b59304;
        }
        iVar13 = FUN_01b36d74(iVar1,iVar3);
        if (iVar13 == 0) goto LAB_01b593a8;
        iVar4 = FUN_01b55afc(iVar1);
        if (iVar4 == 0) {
          uVar14 = 0x45f;
          uVar12 = 0x7c;
          goto LAB_01b592fc;
        }
LAB_01b59308:
        FUN_01b2ebbc(iVar3);
        FUN_01b2e7c8(iVar3);
        if (iVar13 != 0) {
          if ((param_5 != 0) && (iVar11 = FUN_01b5603c(iVar1), iVar11 == 0)) {
            FUN_01b564e4(iVar1);
            iVar13 = 0;
            goto LAB_01b59344;
          }
          FUN_01b56408(param_1);
          FUN_01b1f970(param_1 + 4,iVar1 + 4);
          FUN_01b1f970(param_1 + 8,iVar1 + 8);
          FUN_01b1f970(param_1 + 0xc,iVar1 + 0xc);
          FUN_01b1f970(param_1 + 0x10,iVar1 + 0x10);
          FUN_01b1f970(param_1 + 0x14,iVar1 + 0x14);
          FUN_01b1f970(param_1 + 0x18,iVar1 + 0x18);
          FUN_01b1f970(param_1 + 0x1c,iVar1 + 0x1c);
          FUN_01b1f970(param_1 + 0x20,iVar1 + 0x20);
          FUN_01b323f0(*(undefined4 *)(param_1 + 0x54));
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
          *(undefined4 *)(iVar1 + 0x54) = 0;
          FUN_01b323f0(*(undefined4 *)(param_1 + 0x58));
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
          *(undefined4 *)(iVar1 + 0x58) = 0;
          FUN_01b323f0(*(undefined4 *)(param_1 + 0x5c));
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
          *(undefined4 *)(iVar1 + 0x5c) = 0;
          FUN_01b1f970(param_1 + 0x60,iVar1 + 0x60);
          FUN_01b1f970(param_1 + 100,iVar1 + 100);
          FUN_01b1f970(param_1 + 0x68,iVar1 + 0x68);
          FUN_01b1f970(param_1 + 0x6c,iVar1 + 0x6c);
          *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfe | *(byte *)(iVar1 + 0x88) & 1
          ;
          goto LAB_01b58e18;
        }
      }
    }
    uVar2 = FUN_01b052bc();
    FUN_01b564e4(iVar1);
    local_4c = local_4c + -1;
    if ((local_4c == 0) || ((uVar2 & 0xff000fff) != 0x400008d)) break;
  }
  iVar13 = 0;
  iVar1 = 0;
LAB_01b58e18:
  FUN_01b564e4(iVar1);
LAB_01b59344:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar13;
}

