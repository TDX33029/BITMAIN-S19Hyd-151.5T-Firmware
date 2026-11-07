// FUN_0171fb24 @ 0171fb24 size=1980 calls_out=20 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | aws_lc_0_39_0_bn_mod_inverse_consttime | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | constant_time_declassify_int(u_is_even != v_is_even)

bool FUN_0171fb24(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  int local_5c;
  
  *param_2 = 0;
  iVar1 = FUN_0171462c(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_01715744(param_3,param_4), iVar1 < 0)) {
    iVar1 = FUN_01717e5c(param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_017181d4(param_3);
      if ((iVar1 != 0) || (iVar1 = FUN_017181d4(param_4), iVar1 != 0)) {
        uVar14 = param_3[1];
        uVar16 = param_4[1];
        FUN_017185b4(param_5);
        puVar2 = (undefined4 *)FUN_017186b0(param_5);
        puVar3 = (undefined4 *)FUN_017186b0(param_5);
        puVar4 = (undefined4 *)FUN_017186b0(param_5);
        puVar5 = (undefined4 *)FUN_017186b0(param_5);
        puVar6 = (undefined4 *)FUN_017186b0(param_5);
        puVar7 = (undefined4 *)FUN_017186b0(param_5);
        puVar8 = (undefined4 *)FUN_017186b0(param_5);
        puVar9 = (undefined4 *)FUN_017186b0(param_5);
        bVar21 = false;
        if (((((puVar3 != (undefined4 *)0x0 && puVar2 != (undefined4 *)0x0) &&
              (((puVar5 != (undefined4 *)0x0 && puVar4 != (undefined4 *)0x0 &&
                (puVar7 != (undefined4 *)0x0 && puVar6 != (undefined4 *)0x0)) &&
               (puVar9 != (undefined4 *)0x0 && puVar8 != (undefined4 *)0x0)))) &&
             (((iVar1 = FUN_017147ac(puVar2,param_3), iVar1 != 0 &&
               (iVar1 = FUN_017147ac(puVar3,param_4), iVar1 != 0)) &&
              (iVar1 = FUN_01714ab0(puVar4), iVar1 != 0)))) &&
            ((iVar1 = FUN_01714ab0(puVar7), iVar1 != 0 &&
             (iVar1 = FUN_01714d30(puVar2,uVar16), iVar1 != 0)))) &&
           ((iVar1 = FUN_01714d30(puVar3,uVar16), iVar1 != 0 &&
            ((iVar1 = FUN_01714d30(puVar4,uVar16), iVar1 != 0 &&
             (iVar1 = FUN_01714d30(puVar6,uVar16), iVar1 != 0)))))) {
          if (uVar14 < uVar16) {
          }
          else {
            uVar14 = uVar16;
          }
          iVar1 = FUN_01714d30(puVar5,uVar14);
          if ((((iVar1 != 0) && (iVar1 = FUN_01714d30(puVar7,uVar14), iVar1 != 0)) &&
              (iVar1 = FUN_01714d30(puVar8,uVar16), iVar1 != 0)) &&
             (iVar1 = FUN_01714d30(puVar9,uVar16), iVar1 != 0)) {
            if (CARRY4(uVar14 * 0x20,uVar16 * 0x20)) {
              FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0xed);
            }
            else {
              for (local_5c = 0; local_5c != uVar14 * 0x20 + uVar16 * 0x20; local_5c = local_5c + 1)
              {
                uVar19 = *(uint *)*puVar2 & *(uint *)*puVar3 & 1;
                iVar1 = FUN_0171a550(*puVar8,(uint *)*puVar3,(uint *)*puVar2,uVar16);
                iVar20 = uVar19 * (iVar1 + -1);
                FUN_01714e04(*puVar3,iVar20,*puVar8,*puVar3,uVar16);
                FUN_0171a550(*puVar8,*puVar2,*puVar3,uVar16);
                iVar1 = -(uVar19 * iVar1);
                FUN_01714e04(*puVar2,iVar1,*puVar8,*puVar2,uVar16);
                iVar10 = FUN_0171a054(*puVar8,*puVar4,*puVar6,uVar16);
                iVar11 = FUN_0171a550(*puVar9,*puVar8,*param_4,uVar16);
                FUN_01714e04(*puVar8,iVar10 - iVar11,*puVar8,*puVar9,uVar16);
                FUN_01714e04(*puVar4,iVar1,*puVar8,*puVar4,uVar16);
                FUN_01714e04(*puVar6,iVar20,*puVar8,*puVar6,uVar16);
                FUN_0171a054(*puVar8,*puVar5,*puVar7,uVar14);
                FUN_0171a550(*puVar9,*puVar8,*param_3,uVar14);
                FUN_01714e04(*puVar8,iVar10 - iVar11,*puVar8,*puVar9,uVar14);
                FUN_01714e04(*puVar5,iVar1,*puVar8,*puVar5,uVar14);
                FUN_01714e04(*puVar7,iVar20,*puVar8,*puVar7,uVar14);
                puVar15 = (uint *)*puVar2;
                if (((*puVar15 ^ *(uint *)*puVar3) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_016d2c94("constant_time_declassify_int(u_is_even != v_is_even)",
                               "/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x119,
                               "aws_lc_0_39_0_bn_mod_inverse_consttime");
                }
                uVar17 = (*puVar15 & 1) - 1;
                uVar18 = (*(uint *)*puVar3 & 1) - 1;
                uVar12 = *puVar8;
                FUN_0171f268(uVar12,puVar15,uVar16);
                FUN_01714e04(puVar15,uVar17,uVar12,puVar15,uVar16);
                uVar19 = (int)((*(uint *)*puVar4 | *(uint *)*puVar5) << 0x1f) >> 0x1f & uVar17;
                uVar12 = FUN_0171a3ec((uint *)*puVar4,uVar19,*param_4,*puVar8,uVar16);
                uVar13 = FUN_0171a3ec(*puVar5,uVar19,*param_3,*puVar8,uVar14);
                FUN_0171f2e8(*puVar4,uVar12,uVar17,*puVar8,uVar16);
                FUN_0171f2e8(*puVar5,uVar13,uVar17,*puVar8,uVar14);
                uVar12 = *puVar8;
                uVar13 = *puVar3;
                FUN_0171f268(uVar12,uVar13,uVar16);
                FUN_01714e04(uVar13,uVar18,uVar12,uVar13,uVar16);
                uVar19 = (int)((*(uint *)*puVar6 | *(uint *)*puVar7) << 0x1f) >> 0x1f & uVar18;
                uVar12 = FUN_0171a3ec((uint *)*puVar6,uVar19,*param_4,*puVar8,uVar16);
                uVar13 = FUN_0171a3ec(*puVar7,uVar19,*param_3,*puVar8,uVar14);
                FUN_0171f2e8(*puVar6,uVar12,uVar18,*puVar8,uVar16);
                FUN_0171f2e8(*puVar7,uVar13,uVar18,*puVar8,uVar14);
              }
              iVar1 = FUN_01717e5c(puVar3);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_016d2c94("constant_time_declassify_int(aws_lc_0_39_0_BN_is_zero(v))",
                             "/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x131,
                             "aws_lc_0_39_0_bn_mod_inverse_consttime");
              }
              iVar1 = FUN_01718124(puVar2);
              if (iVar1 == 0) {
                *param_2 = 1;
                FUN_016e9cd0(3,0,0x70,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x137);
              }
              else {
                iVar1 = FUN_017147ac(param_1,puVar4);
                bVar21 = iVar1 != 0;
              }
            }
          }
        }
        FUN_01718904(param_5);
        return bVar21;
      }
      uVar12 = 0xbc;
    }
    else {
      iVar1 = FUN_01718124(param_4);
      if (iVar1 != 0) {
        FUN_01714350(param_1);
        return true;
      }
      uVar12 = 0xac;
    }
    *param_2 = 1;
    FUN_016e9cd0(3,0,0x70,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",uVar12);
  }
  else {
    FUN_016e9cd0(3,0,0x6b,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0xa3);
  }
  return false;
}

