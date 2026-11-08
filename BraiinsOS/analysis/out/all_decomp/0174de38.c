// FUN_0174de38 @ 0174de38 size=1052 calls_out=18 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | generate_prime | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | BN_is_pow2(pow2_bits_100) | generate_prime

undefined4
FUN_0174de38(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar1 = FUN_01718204(param_6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("BN_is_pow2(pow2_bits_100)","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x343,
                 "generate_prime");
  }
  iVar1 = FUN_0172135c(param_6,param_2 + -100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("BN_is_bit_set(pow2_bits_100, bits - 100)",
                 "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x344,"generate_prime");
  }
  if (0x3fffffe < param_2) {
    uVar4 = 0;
    FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x365);
    goto LAB_0174e080;
  }
  iVar1 = FUN_0171817c(param_3,3);
  if (iVar1 == 0) {
    iVar1 = param_2 * 5;
  }
  else {
    iVar1 = param_2 << 3;
  }
  FUN_017185b4(param_7);
  iVar2 = FUN_017186b0(param_7);
  if (iVar2 != 0) {
    if (param_4 != 0) {
      iVar6 = 0;
      iVar5 = iVar6;
      do {
        iVar3 = FUN_0174bd44(param_1,param_2,0,1);
        if (((iVar3 == 0) || (iVar3 = FUN_0171e414(param_8,0,iVar5), iVar3 == 0)) ||
           (iVar3 = FUN_0171d13c(iVar2,param_1,param_4,param_7), iVar3 == 0)) goto LAB_0174e074;
        iVar3 = FUN_01715760(iVar2,param_6);
        if ((0 < iVar3) && (iVar3 = FUN_01715760(param_1,param_5), 0 < iVar3)) {
          iVar3 = FUN_0171e4f8(param_1);
          if (iVar3 == 0) {
            uVar4 = FUN_01714250();
            iVar3 = FUN_0171a748(iVar2,param_1,uVar4);
            if ((iVar3 == 0) || (iVar3 = FUN_0171f84c(&local_34,iVar2,param_3,param_7), iVar3 == 0))
            goto LAB_0174e074;
            if (local_34 != 0) {
              iVar3 = FUN_0174d2dc(&local_30,param_1,0,param_7,0,param_8);
              if (iVar3 == 0) goto LAB_0174e074;
              if (local_30 != 0) goto LAB_0174e04c;
            }
          }
          iVar6 = iVar6 + 1;
          if (iVar1 <= iVar6) goto LAB_0174e054;
          iVar3 = FUN_0171e414(param_8,2,iVar6);
          if (iVar3 == 0) goto LAB_0174e074;
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    iVar5 = 0;
    iVar6 = 0;
    do {
      iVar3 = FUN_0174bd44(param_1,param_2,0,1);
      if ((iVar3 == 0) || (iVar3 = FUN_0171e414(param_8,0,iVar6), iVar3 == 0)) break;
      iVar3 = FUN_01715760(param_1,param_5);
      if (0 < iVar3) {
        iVar3 = FUN_0171e4f8(param_1);
        if (iVar3 == 0) {
          uVar4 = FUN_01714250();
          iVar3 = FUN_0171a748(iVar2,param_1,uVar4);
          if ((iVar3 == 0) || (iVar3 = FUN_0171f84c(&local_34,iVar2,param_3,param_7), iVar3 == 0))
          break;
          if (local_34 != 0) {
            iVar3 = FUN_0174d2dc(&local_30,param_1,0,param_7,0,param_8);
            if (iVar3 == 0) break;
            if (local_30 != 0) goto LAB_0174e04c;
          }
        }
        iVar5 = iVar5 + 1;
        if (iVar1 <= iVar5) goto LAB_0174e054;
        iVar3 = FUN_0171e414(param_8,2,iVar5);
        if (iVar3 == 0) break;
      }
      iVar6 = iVar6 + 1;
    } while( true );
  }
LAB_0174e074:
  uVar4 = 0;
LAB_0174e078:
  FUN_01718904(param_7);
LAB_0174e080:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
LAB_0174e054:
  FUN_016e9cd0(4,0,0x8d,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x3af);
  goto LAB_0174e074;
LAB_0174e04c:
  uVar4 = 1;
  goto LAB_0174e078;
}

