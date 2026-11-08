// FUN_0171d5cc @ 0171d5cc size=976 calls_out=13 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/bn/mul.c | bn_mul_impl | /aws-lc/crypto/fipsmodule/bn/mul.c | al >= j && bl >= j | bn_mul_impl | /aws-lc/crypto/fipsmodule/bn/mul.c

undefined4
FUN_0171d5cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *local_30;
  
  if ((param_2[3] != 0) || (param_3[3] != 0)) {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/mul.c",0x1d8);
    return 0;
  }
  iVar5 = param_3[1];
  iVar8 = param_2[1];
  if (iVar5 == 0 || iVar8 == 0) {
    FUN_01714350();
    return 1;
  }
  FUN_017185b4(param_4);
  uVar3 = 0;
  if (param_3 == param_1 || param_2 == param_1) {
    local_30 = (undefined4 *)FUN_017186b0(param_4);
    if (local_30 == (undefined4 *)0x0) goto LAB_0171d724;
  }
  else {
    local_30 = param_1;
  }
  local_30[3] = param_2[3] ^ param_3[3];
  iVar6 = iVar8 - iVar5;
  if (iVar6 == 0) {
    if (iVar8 != 8) {
      iVar6 = iVar8;
      if (0xf < iVar8) {
        iVar6 = iVar5;
      }
      if (0xf < iVar6) goto LAB_0171d768;
      goto LAB_0171d6c4;
    }
    iVar5 = FUN_0171464c(local_30,0x10);
    if (iVar5 == 0) goto LAB_0171d724;
    uVar7 = *param_3;
    uVar3 = *param_2;
    local_30[1] = 0x10;
    FUN_01719074(*local_30,uVar3,uVar7);
  }
  else {
    iVar2 = iVar8;
    if (0xf < iVar8) {
      iVar2 = iVar5;
    }
    if ((iVar2 < 0x10) || (2 < iVar6 + 1U)) {
LAB_0171d6c4:
      iVar6 = FUN_0171464c(local_30,iVar8 + iVar5);
      if (iVar6 == 0) goto LAB_0171d724;
      uVar3 = *param_2;
      uVar7 = *param_3;
      local_30[1] = iVar8 + iVar5;
      FUN_01718df4(*local_30,uVar3,iVar8,uVar7,iVar5);
    }
    else {
      if (iVar6 == -1) {
        iVar6 = FUN_0171429c(iVar5);
      }
      else {
LAB_0171d768:
        iVar6 = FUN_0171429c(iVar8);
      }
      uVar4 = iVar6 - 1;
      iVar6 = 1 << (uVar4 & 0xff);
      if (iVar8 < iVar5) {
        iVar2 = iVar5;
      }
      else {
        iVar2 = iVar8;
      }
      if (iVar2 < iVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("j <= al || j <= bl","/aws-lc/crypto/fipsmodule/bn/mul.c",0x199,"bn_mul_impl");
      }
      puVar1 = (undefined4 *)FUN_017186b0(param_4);
      if (puVar1 == (undefined4 *)0x0) goto LAB_0171d724;
      if (iVar6 < iVar2) {
        iVar2 = iVar5;
        if (iVar8 < iVar5) {
          iVar2 = iVar8;
        }
        if (iVar2 < iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("al >= j && bl >= j","/aws-lc/crypto/fipsmodule/bn/mul.c",0x1a5,"bn_mul_impl"
                      );
        }
        iVar2 = FUN_0171464c(puVar1,8 << (uVar4 & 0xff));
        if ((iVar2 == 0) || (iVar2 = FUN_0171464c(local_30,4 << (uVar4 & 0xff)), iVar2 == 0))
        goto LAB_0171d724;
        FUN_0171c348(*local_30,*param_2,*param_3,iVar6,iVar8 - iVar6,iVar5 - iVar6,*puVar1);
      }
      else {
        iVar2 = FUN_0171464c(puVar1,4 << (uVar4 & 0xff));
        if ((iVar2 == 0) || (iVar2 = FUN_0171464c(local_30,2 << (uVar4 & 0xff)), iVar2 == 0))
        goto LAB_0171d724;
        FUN_0171bd98(*local_30,*param_2,*param_3,iVar6,iVar8 - iVar6,iVar5 - iVar6,*puVar1);
      }
      local_30[1] = iVar8 + iVar5;
    }
  }
  if (param_1 == local_30) {
    uVar3 = 1;
  }
  else {
    iVar5 = FUN_017147ac(param_1);
    uVar3 = 0;
    if (iVar5 != 0) {
      uVar3 = 1;
    }
  }
LAB_0171d724:
  FUN_01718904(param_4);
  return uVar3;
}

