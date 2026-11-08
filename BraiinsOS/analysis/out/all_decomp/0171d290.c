// FUN_0171d290 @ 0171d290 size=804 calls_out=13 calls_in=1
// strings: bn_mul_impl | /aws-lc/crypto/fipsmodule/bn/mul.c | j <= al || j <= bl | bn_mul_impl | /aws-lc/crypto/fipsmodule/bn/mul.c | al >= j && bl >= j

undefined8
FUN_0171d290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  
  iVar8 = param_2[1];
  iVar9 = param_3[1];
  if (iVar9 == 0 || iVar8 == 0) {
    FUN_01714350();
    goto LAB_0171d474;
  }
  FUN_017185b4(param_4);
  if (param_1 == param_3 || param_1 == param_2) {
    puVar3 = (undefined4 *)FUN_017186b0(param_4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0171d3b8;
  }
  else {
    puVar3 = param_1;
  }
  puVar3[3] = param_2[3] ^ param_3[3];
  iVar7 = iVar8 - iVar9;
  if (iVar7 == 0) {
    if (iVar8 == 8) {
      iVar8 = FUN_0171464c(puVar3,0x10);
      if (iVar8 == 0) goto LAB_0171d3b8;
      uVar6 = *param_3;
      uVar4 = *param_2;
      puVar3[1] = 0x10;
      FUN_01719074(*puVar3,uVar4,uVar6);
    }
    else {
      iVar7 = iVar8;
      if (0xf < iVar8) {
        iVar7 = iVar9;
      }
      if (iVar7 < 0x10) goto LAB_0171d400;
LAB_0171d318:
      iVar7 = FUN_0171429c(iVar8);
LAB_0171d320:
      local_2c = iVar8 + iVar9;
      uVar5 = iVar7 - 1;
      iVar7 = 1 << (uVar5 & 0xff);
      if (iVar8 < iVar9) {
        iVar2 = iVar9;
      }
      else {
        iVar2 = iVar8;
      }
      if (iVar2 < iVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("j <= al || j <= bl","/aws-lc/crypto/fipsmodule/bn/mul.c",0x199,"bn_mul_impl");
      }
      puVar1 = (undefined4 *)FUN_017186b0(param_4);
      if (puVar1 == (undefined4 *)0x0) goto LAB_0171d3b8;
      if (iVar7 < iVar2) {
        if (iVar8 < iVar9) {
          iVar2 = iVar8;
        }
        else {
          iVar2 = iVar9;
        }
        if (iVar2 < iVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("al >= j && bl >= j","/aws-lc/crypto/fipsmodule/bn/mul.c",0x1a5,"bn_mul_impl"
                      );
        }
        iVar2 = FUN_0171464c(puVar1,8 << (uVar5 & 0xff));
        if ((iVar2 == 0) || (iVar2 = FUN_0171464c(puVar3,4 << (uVar5 & 0xff)), iVar2 == 0))
        goto LAB_0171d3b8;
        FUN_0171c348(*puVar3,*param_2,*param_3,iVar7,iVar8 - iVar7,iVar9 - iVar7,*puVar1);
      }
      else {
        iVar2 = FUN_0171464c(puVar1,4 << (uVar5 & 0xff));
        if ((iVar2 == 0) || (iVar2 = FUN_0171464c(puVar3,2 << (uVar5 & 0xff)), iVar2 == 0))
        goto LAB_0171d3b8;
        FUN_0171bd98(*puVar3,*param_2,*param_3,iVar7,iVar8 - iVar7,iVar9 - iVar7,*puVar1);
      }
      puVar3[1] = local_2c;
    }
  }
  else {
    iVar2 = iVar8;
    if (0xf < iVar8) {
      iVar2 = iVar9;
    }
    if ((0xf < iVar2) && (iVar7 + 1U < 3)) {
      if (iVar7 != -1) goto LAB_0171d318;
      iVar7 = FUN_0171429c(iVar9);
      goto LAB_0171d320;
    }
LAB_0171d400:
    local_2c = iVar8 + iVar9;
    iVar7 = FUN_0171464c(puVar3,local_2c);
    if (iVar7 == 0) goto LAB_0171d3b8;
    puVar3[1] = local_2c;
    FUN_01718df4(*puVar3,*param_2,iVar8,*param_3,iVar9);
  }
  if ((param_1 == puVar3) || (iVar8 = FUN_017147ac(param_1,puVar3), iVar8 != 0)) {
    FUN_01718904(param_4);
LAB_0171d474:
    FUN_01714f48(param_1);
    return 1;
  }
LAB_0171d3b8:
  FUN_01718904(param_4);
  return 0;
}

