// FUN_01b30ff4 @ 01b30ff4 size=836 calls_out=14 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/div.c | /aws-lc/crypto/fipsmodule/bn/div.c | aws_lc_0_39_0_bn_div_consttime | /aws-lc/crypto/fipsmodule/bn/div.c | constant_time_declassify_int(divisor_min_bits <= aws_lc_0_39_0_BN_num_bits(divisor))

undefined4
FUN_01b30ff4(int *param_1,int *param_2,int *param_3,int *param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 local_34;
  
  iVar1 = FUN_01b2b230(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_01b2b230(param_4), iVar1 == 0)) {
    iVar1 = FUN_01b2e300(param_4);
    if (iVar1 == 0) {
      FUN_01b2e894(param_6);
      if (param_3 == param_1 || (param_4 == param_1 || param_1 == (int *)0x0)) {
        piVar2 = (int *)FUN_01b2e970(param_6);
      }
      else {
        piVar2 = param_1;
      }
      if (param_3 == param_2 || (param_4 == param_2 || param_2 == (int *)0x0)) {
        piVar3 = (int *)FUN_01b2e970(param_6);
      }
      else {
        piVar3 = param_2;
      }
      puVar4 = (undefined4 *)FUN_01b2e970(param_6);
      local_34 = 0;
      if ((((piVar2 != (int *)0x0 && (puVar4 != (undefined4 *)0x0 && piVar3 != (int *)0x0)) &&
           (iVar1 = FUN_01b2b248(piVar2,param_3[1]), iVar1 != 0)) &&
          (iVar1 = FUN_01b2b248(piVar3,param_4[1]), iVar1 != 0)) &&
         (iVar1 = FUN_01b2b248(puVar4,param_4[1]), iVar1 != 0)) {
        FUN_01b257dc(*piVar2,0,param_3[1] << 2);
        piVar2[1] = param_3[1];
        iVar1 = *piVar3;
        iVar10 = param_4[1];
        piVar2[3] = 0;
        FUN_01b257dc(iVar1,0,iVar10 << 2);
        piVar3[1] = param_4[1];
        piVar3[3] = 0;
        uVar5 = FUN_01b2b8d0(param_4);
        if (uVar5 < param_5) {
                    /* WARNING: Subroutine does not return */
          FUN_01be3310("constant_time_declassify_int(divisor_min_bits <= aws_lc_0_39_0_BN_num_bits(divisor))"
                       ,"/aws-lc/crypto/fipsmodule/bn/div.c",0x1c6,"aws_lc_0_39_0_bn_div_consttime")
          ;
        }
        uVar5 = 0;
        if (param_5 != 0) {
          uVar8 = param_3[1];
          uVar5 = param_5 - 1 >> 5;
          if ((int)uVar8 <= (int)uVar5) {
            uVar5 = uVar8;
          }
          FUN_01b26974(*piVar3,*param_3 + (uVar8 - uVar5) * 4,uVar5 << 2);
        }
        for (iVar1 = (param_3[1] + -1) - uVar5; -1 < iVar1; iVar1 = iVar1 + -1) {
          uVar5 = 0x1f;
          iVar10 = iVar1 * 4;
          do {
            iVar11 = *piVar3;
            uVar9 = FUN_01b30190(iVar11,iVar11,iVar11,param_4[1]);
            puVar6 = (uint *)*piVar3;
            *puVar6 = *puVar6 | *(uint *)(*param_3 + iVar10) >> (uVar5 & 0xff) & 1;
            uVar7 = FUN_01b30cc4(puVar6,uVar9,*param_4,*puVar4,param_4[1]);
            uVar8 = uVar5 & 0xff;
            bVar12 = uVar5 != 0;
            uVar5 = uVar5 - 1;
            *(uint *)(*piVar2 + iVar10) = *(uint *)(*piVar2 + iVar10) | (~uVar7 & 1) << uVar8;
          } while (bVar12);
        }
        if ((param_1 == (int *)0x0) || (iVar1 = FUN_01b2b33c(param_1,piVar2), iVar1 != 0)) {
          if (param_2 == (int *)0x0) {
            local_34 = 1;
          }
          else {
            iVar1 = FUN_01b2b33c(param_2,piVar3);
            local_34 = 0;
            if (iVar1 != 0) {
              local_34 = 1;
            }
          }
        }
      }
      FUN_01b2ebbc(param_6);
      return local_34;
    }
    uVar13 = 0x19c;
    uVar9 = 0x69;
  }
  else {
    uVar13 = 0x198;
    uVar9 = 0x6d;
  }
  FUN_01b053d4(3,0,uVar9,"/aws-lc/crypto/fipsmodule/bn/div.c",uVar13);
  return 0;
}

