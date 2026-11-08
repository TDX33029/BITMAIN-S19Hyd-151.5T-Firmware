// FUN_01b31e68 @ 01b31e68 size=748 calls_out=12 calls_in=2
// strings: bn_mul_impl | /aws-lc/crypto/fipsmodule/bn/mul.c | j <= al || j <= bl | bn_mul_impl | /aws-lc/crypto/fipsmodule/bn/mul.c | al >= j && bl >= j

bool FUN_01b31e68(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  iVar8 = param_2[1];
  iVar9 = param_3[1];
  if (iVar9 == 0 || iVar8 == 0) {
    FUN_01b2af70();
    return true;
  }
  FUN_01b2e894(param_4);
  if (param_3 == param_1 || param_2 == param_1) {
    puVar2 = (undefined4 *)FUN_01b2e970(param_4);
    if (puVar2 != (undefined4 *)0x0) goto LAB_01b31f08;
  }
  else {
    puVar2 = param_1;
LAB_01b31f08:
    iVar6 = iVar8 - iVar9;
    puVar2[3] = param_2[3] ^ param_3[3];
    if (iVar8 == 8 && iVar6 == 0) {
      iVar8 = FUN_01b2b248(puVar2,0x10);
      if (iVar8 != 0) {
        uVar7 = *param_3;
        uVar5 = *param_2;
        puVar2[1] = 0x10;
        FUN_01b2f234(*puVar2,uVar5,uVar7);
LAB_01b31f64:
        if (puVar2 == param_1) {
          bVar11 = true;
        }
        else {
          iVar8 = FUN_01b2b33c(param_1,puVar2);
          bVar11 = iVar8 != 0;
        }
        goto LAB_01b31efc;
      }
    }
    else {
      iVar1 = iVar8;
      if (0xf < iVar8) {
        iVar1 = iVar9;
      }
      if ((iVar1 < 0x10) || (2 < iVar6 + 1U)) {
        iVar6 = FUN_01b2b248(puVar2,iVar8 + iVar9);
        if (iVar6 != 0) {
          puVar2[1] = iVar8 + iVar9;
          FUN_01b2f018(*puVar2,*param_2,iVar8,*param_3,iVar9);
          goto LAB_01b31f64;
        }
      }
      else {
        if (iVar6 == -1) {
          iVar6 = iVar9;
        }
        else {
          iVar6 = iVar8;
        }
        iVar6 = FUN_01b2aec4(iVar6);
        uVar10 = iVar6 - 1;
        if (iVar8 < iVar9) {
          iVar6 = iVar9;
        }
        else {
          iVar6 = iVar8;
        }
        iVar1 = 1 << (uVar10 & 0xff);
        if (iVar6 < 1 << (uVar10 & 0xff)) {
          uVar5 = 0x199;
          pcVar3 = "j <= al || j <= bl";
LAB_01b31ff8:
                    /* WARNING: Subroutine does not return */
          FUN_01be3310(pcVar3,"/aws-lc/crypto/fipsmodule/bn/mul.c",uVar5,"bn_mul_impl");
        }
        puVar4 = (undefined4 *)FUN_01b2e970(param_4);
        if (puVar4 != (undefined4 *)0x0) {
          if (iVar1 < iVar6) {
            if (iVar8 < iVar9) {
              iVar6 = iVar8;
            }
            else {
              iVar6 = iVar9;
            }
            if (iVar6 < iVar1) {
              uVar5 = 0x1a5;
              pcVar3 = "al >= j && bl >= j";
              goto LAB_01b31ff8;
            }
            iVar6 = FUN_01b2b248(puVar4,8 << (uVar10 & 0xff));
            if ((iVar6 != 0) && (iVar6 = FUN_01b2b248(puVar2,4 << (uVar10 & 0xff)), iVar6 != 0)) {
              FUN_01b31a04(*puVar2,*param_2,*param_3,iVar1,iVar8 - iVar1,iVar9 - iVar1,*puVar4);
              goto LAB_01b320b0;
            }
          }
          else {
            iVar6 = FUN_01b2b248(puVar4,4 << (uVar10 & 0xff));
            if ((iVar6 != 0) && (iVar6 = FUN_01b2b248(puVar2,2 << (uVar10 & 0xff)), iVar6 != 0)) {
              FUN_01b31670(*puVar2,*param_2,*param_3,iVar1,iVar8 - iVar1,iVar9 - iVar1,*puVar4);
LAB_01b320b0:
              puVar2[1] = iVar8 + iVar9;
              goto LAB_01b31f64;
            }
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_01b31efc:
  FUN_01b2ebbc(param_4);
  return bVar11;
}

