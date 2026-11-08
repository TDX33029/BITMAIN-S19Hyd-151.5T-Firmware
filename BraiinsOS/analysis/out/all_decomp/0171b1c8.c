// FUN_0171b1c8 @ 0171b1c8 size=936 calls_out=14 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/div.c | /aws-lc/crypto/fipsmodule/bn/div.c | aws_lc_0_39_0_bn_div_consttime | /aws-lc/crypto/fipsmodule/bn/div.c | constant_time_declassify_int(divisor_min_bits <= aws_lc_0_39_0_BN_num_bits(divisor))

bool FUN_0171b1c8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  
  iVar3 = FUN_0171462c(param_3);
  if ((iVar3 == 0) && (iVar3 = FUN_0171462c(param_4), iVar3 == 0)) {
    iVar3 = FUN_01717e5c(param_4);
    if (iVar3 == 0) {
      FUN_017185b4(param_6);
      if (param_3 == param_1 || (param_4 == param_1 || param_1 == (uint *)0x0)) {
        puVar4 = (uint *)FUN_017186b0(param_6);
        bVar14 = puVar4 == (uint *)0x0;
      }
      else {
        bVar14 = false;
        puVar4 = param_1;
      }
      if (param_3 == param_2 || (param_4 == param_2 || param_2 == (uint *)0x0)) {
        puVar5 = (uint *)FUN_017186b0(param_6);
        bVar13 = puVar5 == (uint *)0x0;
      }
      else {
        bVar13 = false;
        puVar5 = param_2;
      }
      puVar6 = (undefined4 *)FUN_017186b0(param_6);
      bVar14 = (bool)(bVar14 | bVar13);
      if (puVar6 == (undefined4 *)0x0) {
        bVar14 = true;
      }
      bVar13 = false;
      if ((((!bVar14) && (iVar3 = FUN_0171464c(puVar4,param_3[1]), iVar3 != 0)) &&
          (iVar3 = FUN_0171464c(puVar5,param_4[1]), iVar3 != 0)) &&
         (iVar3 = FUN_0171464c(puVar6,param_4[1]), iVar3 != 0)) {
        uVar11 = param_3[1];
        if ((uVar11 & 0x3fffffff) != 0) {
          FUN_016dd606(*puVar4,0);
          uVar11 = param_3[1];
        }
        puVar4[1] = uVar11;
        puVar4[3] = 0;
        uVar11 = param_4[1];
        if ((uVar11 & 0x3fffffff) != 0) {
          FUN_016dd606(*puVar5);
          uVar11 = param_4[1];
        }
        puVar5[1] = uVar11;
        puVar5[3] = 0;
        uVar11 = FUN_01714eb4(param_4);
        if (uVar11 < param_5) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("constant_time_declassify_int(divisor_min_bits <= aws_lc_0_39_0_BN_num_bits(divisor))"
                       ,"/aws-lc/crypto/fipsmodule/bn/div.c",0x1c6,"aws_lc_0_39_0_bn_div_consttime")
          ;
        }
        uVar11 = param_3[1];
        if (param_5 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = param_5 - 1 >> 5;
          if ((int)uVar11 <= (int)uVar10) {
            uVar10 = uVar11;
          }
          iVar3 = uVar10 * 4;
          if (iVar3 != 0) {
            uVar7 = *puVar5;
            uVar11 = *param_3 + (uVar11 - uVar10) * 4;
            if (uVar7 < uVar11) {
              if (uVar11 < uVar7 + iVar3) {
LAB_0171b54c:
                    /* WARNING: Does not return */
                pcVar2 = (code *)software_udf(0,0x171b54c);
                (*pcVar2)();
              }
            }
            else if ((uVar7 != uVar11) && (uVar7 < uVar11 + iVar3)) goto LAB_0171b54c;
            FUN_016dd1aa();
            uVar11 = param_3[1];
          }
        }
        iVar3 = (uVar11 - 1) - uVar10;
        if (-1 < iVar3) {
          do {
            iVar1 = iVar3 * 4;
            uVar11 = 0x1f;
            do {
              uVar10 = *puVar5;
              uVar8 = FUN_0171a054(uVar10,uVar10,uVar10,param_4[1]);
              puVar9 = (uint *)*puVar5;
              uVar12 = *puVar6;
              *puVar9 = *puVar9 | *(uint *)(*param_3 + iVar1) >> (uVar11 & 0xff) & 1;
              uVar7 = FUN_0171ae58(puVar9,uVar8,*param_4,uVar12,param_4[1]);
              uVar10 = uVar11 & 0xff;
              bVar14 = uVar11 != 0;
              uVar11 = uVar11 - 1;
              *(uint *)(*puVar4 + iVar1) = *(uint *)(*puVar4 + iVar1) | (~uVar7 & 1) << uVar10;
            } while (bVar14);
            bVar14 = iVar3 != 0;
            iVar3 = iVar3 + -1;
          } while (bVar14);
        }
        if ((param_1 == (uint *)0x0) || (iVar3 = FUN_017147ac(param_1,puVar4), iVar3 != 0)) {
          if (param_2 == (uint *)0x0) {
            bVar13 = true;
          }
          else {
            iVar3 = FUN_017147ac(param_2,puVar5);
            bVar13 = iVar3 != 0;
          }
        }
      }
      FUN_01718904(param_6);
      return bVar13;
    }
    FUN_016e9cd0(3,0,0x69,"/aws-lc/crypto/fipsmodule/bn/div.c",0x19c);
  }
  else {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/div.c",0x198);
  }
  return false;
}

