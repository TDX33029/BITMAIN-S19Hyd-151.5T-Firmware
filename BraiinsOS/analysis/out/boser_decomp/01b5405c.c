// FUN_01b5405c @ 01b5405c size=556 calls_out=9 calls_in=1
// strings: aws_lc_0_39_0_bn_rand_secret_range | /aws-lc/crypto/fipsmodule/bn/random.c | words > 0 | aws_lc_0_39_0_bn_rand_secret_range | /aws-lc/crypto/fipsmodule/bn/random.c | mask != 0

undefined4 FUN_01b5405c(int *param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b1fb30(&local_34,&local_30,param_3,*param_4,param_4[1]);
  if ((iVar1 != 0) && (iVar1 = FUN_01b2b248(param_1,local_34), iVar1 != 0)) {
    if (local_34 == 0) {
      uVar4 = 0xe4;
      pcVar2 = "words > 0";
LAB_01b540fc:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/bn/random.c",uVar4,
                   "aws_lc_0_39_0_bn_rand_secret_range");
    }
    if (local_30 == 0) {
      uVar4 = 0xe5;
      pcVar2 = "mask != 0";
      goto LAB_01b540fc;
    }
    if ((local_34 != 1) || (param_3 <= local_30 >> 1)) {
      iVar1 = FUN_01b52ea0(*param_1,local_34 * 4);
      if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0();
      }
      iVar5 = local_34 * 4 + -4;
      iVar1 = *param_1;
      uVar4 = *param_4;
      *(uint *)(iVar1 + iVar5) = *(uint *)(iVar1 + iVar5) & local_30;
      iVar1 = FUN_01b33934(iVar1,param_3,uVar4,local_34);
      *param_2 = iVar1;
      uVar3 = FUN_01b0c6a4(-iVar1,0,param_3);
      puVar6 = (uint *)*param_1;
      *puVar6 = *puVar6 | uVar3;
      uVar3 = FUN_01b0c6a4(-iVar1,0xffffffff,local_30 >> 1);
      uVar4 = *param_4;
      puVar6[local_34 + -1] = puVar6[local_34 + -1] & uVar3;
      iVar1 = FUN_01b33934(puVar6,param_3,uVar4,local_34);
      if (iVar1 == 0) {
        uVar4 = 0xf9;
        pcVar2 = 
        "constant_time_declassify_int(aws_lc_0_39_0_bn_in_range_words(r->d, min_inclusive, max_exclusive->d, words))"
        ;
        goto LAB_01b540fc;
      }
      param_1[1] = local_34;
      param_1[3] = 0;
      uVar4 = 1;
      goto LAB_01b54168;
    }
    FUN_01b053d4(3,0,0x6c,"/aws-lc/crypto/fipsmodule/bn/random.c",0xe8);
  }
  uVar4 = 0;
LAB_01b54168:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar4;
}

