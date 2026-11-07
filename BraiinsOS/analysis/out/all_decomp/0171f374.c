// FUN_0171f374 @ 0171f374 size=1024 calls_out=13 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | bn_gcd_consttime | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | constant_time_declassify_int(!(u_is_odd & v_is_odd)) | bn_gcd_consttime | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c

undefined4 FUN_0171f374(undefined4 param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  int local_34;
  int local_30;
  
  uVar10 = *(uint *)(param_4 + 4);
  if ((int)*(uint *)(param_4 + 4) < (int)*(uint *)(param_3 + 4)) {
    uVar10 = *(uint *)(param_3 + 4);
  }
  if (uVar10 == 0) {
    *param_2 = 0;
    FUN_01714350();
    return 1;
  }
  FUN_017185b4(param_5);
  puVar1 = (undefined4 *)FUN_017186b0(param_5);
  puVar2 = (undefined4 *)FUN_017186b0(param_5);
  puVar3 = (undefined4 *)FUN_017186b0(param_5);
  if (((((puVar3 != (undefined4 *)0x0 &&
          (puVar2 != (undefined4 *)0x0 && puVar1 != (undefined4 *)0x0)) &&
        (iVar4 = FUN_017147ac(puVar1,param_3), iVar4 != 0)) &&
       (iVar4 = FUN_017147ac(puVar2,param_4), iVar4 != 0)) &&
      ((iVar4 = FUN_01714d30(puVar1,uVar10), iVar4 != 0 &&
       (iVar4 = FUN_01714d30(puVar2,uVar10), iVar4 != 0)))) &&
     (iVar4 = FUN_01714d30(puVar3,uVar10), iVar4 != 0)) {
    uVar12 = *(int *)(param_3 + 4) * 0x20;
    uVar15 = *(int *)(param_4 + 4) * 0x20;
    iVar4 = uVar12 + uVar15;
    if (!CARRY4(uVar12,uVar15)) {
      if (iVar4 == 0) {
        local_30 = 0;
      }
      else {
        local_34 = 0;
        local_30 = 0;
        do {
          uVar12 = *(uint *)*puVar1;
          uVar15 = *(uint *)*puVar2;
          iVar5 = FUN_0171a550(*puVar3,(uint *)*puVar1,(uint *)*puVar2,uVar10);
          uVar12 = uVar12 & uVar15 & 1;
          FUN_01714e04(*puVar1,uVar12 * (iVar5 + -1),*puVar3,*puVar1,uVar10);
          FUN_0171a550(*puVar3,*puVar2,*puVar1,uVar10);
          FUN_01714e04(*puVar2,-(uVar12 * (iVar5 + -1) + uVar12),*puVar3,*puVar2,uVar10);
          puVar7 = (uint *)*puVar1;
          uVar13 = *puVar7;
          uVar15 = *(uint *)*puVar2 & 1;
          uVar12 = -(uVar13 & 1);
          if (uVar12 * uVar15 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2c94("constant_time_declassify_int(!(u_is_odd & v_is_odd))",
                         "/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x55,"bn_gcd_consttime");
          }
          uVar11 = *puVar3;
          local_30 = local_30 + (uVar15 - 1 & ~uVar12 & 1);
          FUN_0171f268(uVar11,puVar7,uVar10);
          FUN_01714e04(puVar7,(uVar13 & 1) - 1,uVar11,puVar7,uVar10);
          uVar14 = *puVar2;
          uVar11 = *puVar3;
          FUN_0171f268(uVar11,uVar14,uVar10);
          FUN_01714e04(uVar14,uVar15 - 1,uVar11,uVar14,uVar10);
          local_34 = local_34 + 1;
        } while (iVar4 != local_34);
      }
      uVar12 = 0;
      iVar4 = FUN_01717e5c(puVar1);
      iVar5 = FUN_01717e5c(puVar2);
      if (iVar4 == 0 && iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("constant_time_declassify_int(aws_lc_0_39_0_BN_is_zero(u) | aws_lc_0_39_0_BN_is_zero(v))"
                     ,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x62,"bn_gcd_consttime");
      }
      puVar7 = (uint *)*puVar2;
      puVar16 = (uint *)*puVar1;
      if ((uVar10 - 1 < 4) || ((int)puVar7 - (int)puVar16 == 4)) {
        puVar16 = puVar16 + -1;
        puVar6 = puVar7 + -1;
        do {
          puVar6 = puVar6 + 1;
          uVar12 = uVar12 + 1;
          puVar16 = puVar16 + 1;
          *puVar6 = *puVar6 | *puVar16;
        } while (uVar12 < uVar10);
      }
      else {
        puVar6 = puVar16;
        puVar8 = puVar7;
        do {
          puVar9 = puVar8 + 2;
          uVar12 = puVar6[1];
          *puVar8 = *puVar6 | *puVar8;
          puVar8[1] = uVar12 | puVar8[1];
          puVar6 = puVar6 + 2;
          puVar8 = puVar9;
        } while (puVar7 + (uVar10 & 0xfffffffe) != puVar9);
        uVar12 = uVar10 & 0xfffffffe;
        if (uVar10 != uVar12) {
          puVar7[uVar12] = puVar7[uVar12] | puVar16[uVar12];
        }
      }
      *param_2 = local_30;
      uVar11 = FUN_01714ac8(param_1,puVar7,uVar10);
      goto LAB_0171f408;
    }
    FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x43);
  }
  uVar11 = 0;
LAB_0171f408:
  FUN_01718904(param_5);
  return uVar11;
}

