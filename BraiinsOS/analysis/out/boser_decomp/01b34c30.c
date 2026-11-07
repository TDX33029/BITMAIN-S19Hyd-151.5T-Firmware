// FUN_01b34c30 @ 01b34c30 size=1816 calls_out=20 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | aws_lc_0_39_0_bn_mod_inverse_consttime | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | constant_time_declassify_int(u_is_even != v_is_even)

bool FUN_01b34c30(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
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
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined4 uVar21;
  uint local_4c;
  
  *param_2 = 0;
  iVar1 = FUN_01b2b230(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_01b2be1c(param_3,param_4), iVar1 < 0)) {
    iVar1 = FUN_01b2e300(param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_01b2e5fc(param_3);
      if ((iVar1 != 0) || (iVar1 = FUN_01b2e5fc(param_4), iVar1 != 0)) {
        uVar14 = param_4[1];
        uVar15 = param_3[1];
        FUN_01b2e894(param_5);
        puVar2 = (undefined4 *)FUN_01b2e970(param_5);
        puVar3 = (undefined4 *)FUN_01b2e970(param_5);
        puVar4 = (undefined4 *)FUN_01b2e970(param_5);
        puVar5 = (undefined4 *)FUN_01b2e970(param_5);
        puVar6 = (undefined4 *)FUN_01b2e970(param_5);
        puVar7 = (undefined4 *)FUN_01b2e970(param_5);
        puVar8 = (undefined4 *)FUN_01b2e970(param_5);
        puVar9 = (undefined4 *)FUN_01b2e970(param_5);
        bVar20 = false;
        if (((((puVar3 != (undefined4 *)0x0 && puVar2 != (undefined4 *)0x0) &&
              (((puVar5 != (undefined4 *)0x0 && puVar4 != (undefined4 *)0x0 &&
                (puVar7 != (undefined4 *)0x0 && puVar6 != (undefined4 *)0x0)) &&
               (puVar9 != (undefined4 *)0x0 && puVar8 != (undefined4 *)0x0)))) &&
             (((iVar1 = FUN_01b2b33c(puVar2,param_3), iVar1 != 0 &&
               (iVar1 = FUN_01b2b33c(puVar3,param_4), iVar1 != 0)) &&
              (iVar1 = FUN_01b2b544(puVar4), iVar1 != 0)))) &&
            ((iVar1 = FUN_01b2b544(puVar7), iVar1 != 0 &&
             (iVar1 = FUN_01b2b700(puVar2,uVar14), iVar1 != 0)))) &&
           ((iVar1 = FUN_01b2b700(puVar3,uVar14), iVar1 != 0 &&
            ((iVar1 = FUN_01b2b700(puVar4,uVar14), iVar1 != 0 &&
             (iVar1 = FUN_01b2b700(puVar6,uVar14), iVar1 != 0)))))) {
          if (uVar14 <= uVar15) {
            uVar15 = uVar14;
          }
          iVar1 = FUN_01b2b700(puVar5,uVar15);
          if ((((iVar1 != 0) && (iVar1 = FUN_01b2b700(puVar7,uVar15), iVar1 != 0)) &&
              (iVar1 = FUN_01b2b700(puVar8,uVar14), iVar1 != 0)) &&
             (iVar1 = FUN_01b2b700(puVar9,uVar14), iVar1 != 0)) {
            local_4c = (uint)CARRY4(uVar15 * 0x20,uVar14 * 0x20);
            if (local_4c == 0) {
              for (; local_4c != uVar15 * 0x20 + uVar14 * 0x20; local_4c = local_4c + 1) {
                uVar13 = *(uint *)*puVar3;
                uVar17 = *(uint *)*puVar2;
                iVar1 = FUN_01b30578(*puVar8,(uint *)*puVar3,(uint *)*puVar2,uVar14);
                uVar13 = uVar17 & uVar13 & 1;
                iVar16 = uVar13 * iVar1;
                iVar18 = uVar13 * (iVar1 + -1);
                FUN_01b2b82c(*puVar3,iVar18,*puVar8,*puVar3,uVar14);
                FUN_01b30578(*puVar8,*puVar2,*puVar3,uVar14);
                FUN_01b2b82c(*puVar2,-iVar16,*puVar8,*puVar2,uVar14);
                iVar1 = FUN_01b30190(*puVar8,*puVar4,*puVar6,uVar14);
                iVar10 = FUN_01b30578(*puVar9,*puVar8,*param_4,uVar14);
                FUN_01b2b82c(*puVar8,iVar1 - iVar10,*puVar8,*puVar9,uVar14);
                FUN_01b2b82c(*puVar4,-iVar16,*puVar8,*puVar4,uVar14);
                FUN_01b2b82c(*puVar6,iVar18,*puVar8,*puVar6,uVar14);
                FUN_01b30190(*puVar8,*puVar5,*puVar7,uVar15);
                FUN_01b30578(*puVar9,*puVar8,*param_3,uVar15);
                FUN_01b2b82c(*puVar8,iVar1 - iVar10,*puVar8,*puVar9,uVar15);
                FUN_01b2b82c(*puVar5,-iVar16,*puVar8,*puVar5,uVar15);
                FUN_01b2b82c(*puVar7,iVar18,*puVar8,*puVar7,uVar15);
                uVar17 = *(uint *)*puVar2;
                uVar13 = *(uint *)*puVar3;
                if (((uVar17 ^ uVar13) & 1) == 0) {
                  uVar12 = 0x119;
                  pcVar11 = "constant_time_declassify_int(u_is_even != v_is_even)";
                  goto LAB_01b3513c;
                }
                uVar17 = (uVar17 & 1) - 1;
                FUN_01b344e0((uint *)*puVar2,uVar17,*puVar8,uVar14);
                uVar13 = (uVar13 & 1) - 1;
                uVar19 = (int)((*(uint *)*puVar4 | *(uint *)*puVar5) << 0x1f) >> 0x1f;
                uVar12 = FUN_01b303f0((uint *)*puVar4,uVar19 & uVar17,*param_4,*puVar8,uVar14);
                uVar21 = FUN_01b303f0(*puVar5,uVar19 & uVar17,*param_3,*puVar8,uVar15);
                FUN_01b34bac(*puVar4,uVar12,uVar17,*puVar8,uVar14);
                FUN_01b34bac(*puVar5,uVar21,uVar17,*puVar8,uVar15);
                FUN_01b344e0(*puVar3,uVar13,*puVar8,uVar14);
                uVar17 = (int)((*(uint *)*puVar6 | *(uint *)*puVar7) << 0x1f) >> 0x1f;
                uVar12 = FUN_01b303f0((uint *)*puVar6,uVar17 & uVar13,*param_4,*puVar8,uVar14);
                uVar21 = FUN_01b303f0(*puVar7,uVar17 & uVar13,*param_3,*puVar8,uVar15);
                FUN_01b34bac(*puVar6,uVar12,uVar13,*puVar8,uVar14);
                FUN_01b34bac(*puVar7,uVar21,uVar13,*puVar8,uVar15);
              }
              iVar1 = FUN_01b2e300(puVar3);
              if (iVar1 == 0) {
                uVar12 = 0x131;
                pcVar11 = "constant_time_declassify_int(aws_lc_0_39_0_BN_is_zero(v))";
LAB_01b3513c:
                    /* WARNING: Subroutine does not return */
                FUN_01be3310(pcVar11,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",uVar12,
                             "aws_lc_0_39_0_bn_mod_inverse_consttime");
              }
              iVar1 = FUN_01b2e54c(puVar2);
              if (iVar1 != 0) {
                iVar1 = FUN_01b2b33c(param_1,puVar4);
                bVar20 = iVar1 != 0;
                goto LAB_01b34f50;
              }
              *param_2 = 1;
              uVar21 = 0x137;
              uVar12 = 0x70;
            }
            else {
              uVar21 = 0xed;
              uVar12 = 0x66;
            }
            FUN_01b053d4(3,0,uVar12,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",uVar21);
          }
        }
LAB_01b34f50:
        FUN_01b2ebbc(param_5);
        return bVar20;
      }
      *param_2 = 1;
      uVar21 = 0xbc;
    }
    else {
      iVar1 = FUN_01b2e54c(param_4);
      if (iVar1 != 0) {
        FUN_01b2af70(param_1);
        return true;
      }
      *param_2 = 1;
      uVar21 = 0xac;
    }
    uVar12 = 0x70;
  }
  else {
    uVar21 = 0xa3;
    uVar12 = 0x6b;
  }
  FUN_01b053d4(3,0,uVar12,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",uVar21);
  return false;
}

