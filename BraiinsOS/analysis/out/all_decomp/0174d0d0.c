// FUN_0174d0d0 @ 0174d0d0 size=492 calls_out=6 calls_in=1
// strings: aws_lc_0_39_0_bn_rand_secret_range | /aws-lc/crypto/fipsmodule/bn/random.c | constant_time_declassify_int(aws_lc_0_39_0_bn_in_range_words(r->d; min_inclusive; max_exclusive->d; words)) | /aws-lc/crypto/fipsmodule/bn/random.c | /aws-lc/crypto/fipsmodule/bn/random.c | aws_lc_0_39_0_bn_rand_secret_range

undefined4 FUN_0174d0d0(int *param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  
  iVar6 = param_4[1];
  if (iVar6 != 0) {
    puVar2 = (uint *)*param_4;
    puVar7 = puVar2 + iVar6;
    do {
      if (puVar7[-1] != 0) {
        if ((iVar6 != 1) || (param_3 < *puVar2)) {
          iVar5 = (int)puVar7 + (-4 - (int)puVar2);
          uVar4 = *(uint *)((int)puVar2 + iVar5);
          iVar1 = FUN_0171464c(param_1,iVar6);
          if (iVar1 == 0) {
            return 0;
          }
          uVar4 = uVar4 | uVar4 >> 1;
          uVar4 = uVar4 | uVar4 >> 2;
          uVar4 = uVar4 | uVar4 >> 4;
          uVar4 = uVar4 | uVar4 >> 8;
          uVar4 = uVar4 | uVar4 >> 0x10;
          if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2c94("mask != 0","/aws-lc/crypto/fipsmodule/bn/random.c",0xe5,
                         "aws_lc_0_39_0_bn_rand_secret_range");
          }
          if ((iVar6 != 1) || (param_3 <= uVar4 >> 1)) {
            iVar1 = FUN_0174bccc(*param_1,iVar6 << 2);
            if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c24();
            }
            iVar1 = *param_1;
            iVar3 = *param_4;
            *(uint *)(iVar1 + iVar5) = *(uint *)(iVar1 + iVar5) & uVar4;
            iVar1 = FUN_0171e59c(iVar1,param_3,iVar3,iVar6);
            puVar7 = (uint *)*param_1;
            *param_2 = iVar1;
            iVar3 = *param_4;
            *puVar7 = *puVar7 | param_3 & iVar1 - 1U;
            *(uint *)((int)puVar7 + iVar5) =
                 (iVar1 - 1U & uVar4 >> 1 | -iVar1) & *(uint *)((int)puVar7 + iVar5);
            iVar1 = FUN_0171e59c(puVar7,param_3,iVar3,iVar6);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("constant_time_declassify_int(aws_lc_0_39_0_bn_in_range_words(r->d, min_inclusive, max_exclusive->d, words))"
                           ,"/aws-lc/crypto/fipsmodule/bn/random.c",0xf9,
                           "aws_lc_0_39_0_bn_rand_secret_range");
            }
            param_1[1] = iVar6;
            param_1[3] = 0;
            return 1;
          }
          uVar8 = 0xe8;
          goto LAB_0174d254;
        }
        break;
      }
      iVar6 = iVar6 + -1;
      puVar7 = puVar7 + -1;
    } while (iVar6 != 0);
  }
  uVar8 = 0x7e;
LAB_0174d254:
  FUN_016e9cd0(3,0,0x6c,"/aws-lc/crypto/fipsmodule/bn/random.c",uVar8);
  return 0;
}

