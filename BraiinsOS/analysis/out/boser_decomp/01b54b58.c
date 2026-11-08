// FUN_01b54b58 @ 01b54b58 size=760 calls_out=18 calls_in=1
// strings: generate_prime | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | BN_is_pow2(pow2_bits_100) | generate_prime | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | BN_is_bit_set(pow2_bits_100; bits - 100)

undefined4
FUN_01b54b58(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b2e624(param_6,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    uVar5 = 0x343;
    pcVar2 = "BN_is_pow2(pow2_bits_100)";
  }
  else {
    iVar1 = FUN_01b35f4c(param_6,param_2 + -100);
    if (iVar1 != 0) {
      if (param_2 < 0x3ffffff) {
        iVar1 = FUN_01b2e5a4(param_3,3);
        if (iVar1 == 0) {
          iVar1 = param_2 * 5;
        }
        else {
          iVar1 = param_2 << 3;
        }
        FUN_01b2e894(param_7);
        iVar3 = FUN_01b2e970(param_7);
        if (iVar3 != 0) {
          iVar6 = 0;
          iVar7 = iVar6;
          do {
            iVar4 = FUN_01b52efc(param_1,param_2,0,1);
            if ((iVar4 == 0) || (iVar4 = FUN_01b337a0(param_8,0,iVar7), iVar4 == 0)) break;
            if (param_4 == 0) {
LAB_01b54d28:
              iVar4 = FUN_01b2be38(param_1,param_5);
              if (0 < iVar4) {
                iVar4 = FUN_01b33884(param_1);
                if (iVar4 == 0) {
                  uVar5 = FUN_01b2ae78();
                  iVar4 = FUN_01b30698(iVar3,param_1,uVar5);
                  uVar5 = 0;
                  if ((iVar4 == 0) ||
                     (iVar4 = FUN_01b34938(&local_34,iVar3,param_3,param_7), iVar4 == 0))
                  goto LAB_01b54dd4;
                  if (local_34 != 0) {
                    iVar4 = FUN_01b542bc(&local_30,param_1,0,param_7,0,param_8);
                    uVar5 = 0;
                    if (iVar4 == 0) goto LAB_01b54dd4;
                    if (local_30 != 0) {
                      uVar5 = 1;
                      goto LAB_01b54dd4;
                    }
                  }
                }
                iVar6 = iVar6 + 1;
                if (iVar1 <= iVar6) {
                  FUN_01b053d4(4,0,0x8d,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x3af);
                  break;
                }
                iVar4 = FUN_01b337a0(param_8,2,iVar6);
                if (iVar4 == 0) break;
              }
            }
            else {
              iVar4 = FUN_01b32b70(iVar3,param_1,param_4,param_7);
              if (iVar4 == 0) break;
              iVar4 = FUN_01b2be38(iVar3,param_6);
              if (0 < iVar4) goto LAB_01b54d28;
            }
            iVar7 = iVar7 + 1;
          } while( true );
        }
        uVar5 = 0;
LAB_01b54dd4:
        FUN_01b2ebbc(param_7);
      }
      else {
        uVar5 = 0;
        FUN_01b053d4(4,0,0x80,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x365);
      }
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return uVar5;
    }
    uVar5 = 0x344;
    pcVar2 = "BN_is_bit_set(pow2_bits_100, bits - 100)";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar5,"generate_prime");
}

