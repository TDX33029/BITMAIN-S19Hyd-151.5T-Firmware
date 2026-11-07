// FUN_01b34550 @ 01b34550 size=788 calls_out=13 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | bn_gcd_consttime | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c | constant_time_declassify_int(!(u_is_odd & v_is_odd)) | bn_gcd_consttime | /aws-lc/crypto/fipsmodule/bn/gcd_extra.c

undefined4 FUN_01b34550(undefined4 param_1,uint *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_2c;
  
  uVar12 = *(uint *)(param_4 + 4);
  if ((int)*(uint *)(param_4 + 4) < (int)*(uint *)(param_3 + 4)) {
    uVar12 = *(uint *)(param_3 + 4);
  }
  if (uVar12 == 0) {
    *param_2 = 0;
    FUN_01b2af70();
    return 1;
  }
  FUN_01b2e894(param_5);
  piVar4 = (int *)FUN_01b2e970(param_5);
  piVar5 = (int *)FUN_01b2e970(param_5);
  puVar6 = (undefined4 *)FUN_01b2e970(param_5);
  if ((((puVar6 != (undefined4 *)0x0 && (piVar5 != (int *)0x0 && piVar4 != (int *)0x0)) &&
       (iVar7 = FUN_01b2b33c(piVar4,param_3), iVar7 != 0)) &&
      (iVar7 = FUN_01b2b33c(piVar5,param_4), iVar7 != 0)) &&
     (((iVar7 = FUN_01b2b700(piVar4,uVar12), iVar7 != 0 &&
       (iVar7 = FUN_01b2b700(piVar5,uVar12), iVar7 != 0)) &&
      (iVar7 = FUN_01b2b700(puVar6,uVar12), iVar7 != 0)))) {
    uVar1 = *(int *)(param_4 + 4) * 0x20;
    uVar2 = *(int *)(param_3 + 4) * 0x20;
    if (!CARRY4(uVar2,uVar1)) {
      uVar14 = 0;
      uVar17 = uVar14;
      for (local_2c = 0; local_2c != uVar2 + uVar1; local_2c = local_2c + 1) {
        uVar15 = *(uint *)*piVar4;
        uVar10 = *(uint *)*piVar5;
        iVar7 = FUN_01b30578(*puVar6,(uint *)*piVar4,(uint *)*piVar5,uVar12);
        uVar10 = uVar15 & uVar10 & 1;
        FUN_01b2b82c(*piVar4,uVar10 * (iVar7 + -1),*puVar6,*piVar4,uVar12);
        FUN_01b30578(*puVar6,*piVar5,*piVar4,uVar12);
        FUN_01b2b82c(*piVar5,-(uVar10 * iVar7),*puVar6,*piVar5,uVar12);
        uVar10 = *(uint *)*piVar4;
        uVar16 = *(uint *)*piVar5 & 1;
        uVar15 = (int)(uVar10 << 0x1f) >> 0x1f;
        if (uVar15 * uVar16 != 0) {
          uVar13 = 0x55;
          pcVar9 = "constant_time_declassify_int(!(u_is_odd & v_is_odd))";
          goto LAB_01b3478c;
        }
        uVar17 = uVar17 + (uVar16 - 1 & ~uVar15 & 1);
        FUN_01b344e0((uint *)*piVar4,(uVar10 & 1) - 1,*puVar6,uVar12);
        FUN_01b344e0(*piVar5,uVar16 - 1,*puVar6,uVar12);
      }
      iVar7 = FUN_01b2e300(piVar4);
      iVar8 = FUN_01b2e300(piVar5);
      if (iVar7 == 0 && iVar8 == 0) {
        uVar13 = 0x62;
        pcVar9 = 
        "constant_time_declassify_int(aws_lc_0_39_0_BN_is_zero(u) | aws_lc_0_39_0_BN_is_zero(v))";
LAB_01b3478c:
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(pcVar9,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",uVar13,"bn_gcd_consttime");
      }
      iVar7 = *piVar5;
      iVar8 = *piVar4;
      puVar11 = (uint *)(iVar7 + -4);
      do {
        iVar3 = uVar14 * 4;
        uVar14 = uVar14 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar11 | *(uint *)(iVar8 + iVar3);
      } while (uVar14 < uVar12);
      *param_2 = uVar17;
      uVar13 = FUN_01b2b55c(param_1,iVar7,uVar12);
      goto LAB_01b346bc;
    }
    FUN_01b053d4(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/gcd_extra.c",0x43);
  }
  uVar13 = 0;
LAB_01b346bc:
  FUN_01b2ebbc(param_5);
  return uVar13;
}

