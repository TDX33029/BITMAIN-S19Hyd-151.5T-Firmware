// FUN_01b31670 @ 01b31670 size=868 calls_out=10 calls_in=3
// strings: bn_mul_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n2 != 0 && (n2 & (n2 - 1)) == 0 | bn_mul_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | -BN_MUL_RECURSIVE_SIZE_NORMAL/2 <= dna && dna <= 0

undefined4
FUN_01b31670(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  if ((param_4 == 0) || ((param_4 - 1 & param_4) != 0)) {
    uVar4 = 0x9d;
    pcVar1 = "n2 != 0 && (n2 & (n2 - 1)) == 0";
  }
  else if (param_5 + 8U < 9) {
    if (param_6 + 8U < 9) {
      if (param_4 == 8 && param_5 == 0) {
        if (param_6 == 0) {
          uVar4 = FUN_01b2f234();
          return uVar4;
        }
      }
      else if (0xf < (int)param_4) {
        iVar9 = (int)param_4 >> 1;
        iVar5 = param_2 + iVar9 * 4;
        iVar10 = param_7 + param_4 * 4;
        uVar2 = FUN_01b315d4(param_7,param_2,iVar5,param_5 + iVar9,-param_5,iVar10);
        iVar6 = param_7 + iVar9 * 4;
        iVar7 = param_3 + iVar9 * 4;
        uVar3 = FUN_01b315d4(iVar6,iVar7,param_3,param_6 + iVar9,param_6,iVar10);
        if (iVar9 == 8 && (param_5 == 0 && param_6 == 0)) {
          FUN_01b2f234(iVar10,param_7,iVar6);
          FUN_01b2f234(param_1,param_2,param_3);
          FUN_01b2f234(param_1 + param_4 * 4,iVar5,iVar7);
        }
        else {
          FUN_01b31670(iVar10,param_7,iVar6,iVar9,0,0,iVar10 + param_4 * 4);
          FUN_01b31670(param_1,param_2,param_3,iVar9,0,0,iVar10 + param_4 * 4);
          FUN_01b31670(param_1 + param_4 * 4,iVar5,iVar7,iVar9,param_5,param_6,iVar10 + param_4 * 4)
          ;
        }
        iVar5 = FUN_01b30190(param_7,param_1,param_1 + param_4 * 4,param_4);
        iVar6 = FUN_01b30578(iVar10 + param_4 * 4,param_7,iVar10,param_4);
        iVar7 = FUN_01b30190(iVar10,param_7,iVar10,param_4);
        FUN_01b2b82c(iVar10,uVar2 ^ uVar3,iVar10 + param_4 * 4,iVar10,param_4);
        iVar5 = FUN_01b0c6a4(uVar2 ^ uVar3,iVar5 - iVar6,iVar7 + iVar5);
        iVar6 = param_1 + iVar9 * 4;
        iVar9 = param_4 + iVar9;
        iVar6 = FUN_01b30190(iVar6,iVar6,iVar10,param_4);
        uVar2 = iVar5 + iVar6;
        puVar8 = (uint *)(param_1 + iVar9 * 4);
        for (; iVar9 < (int)(param_4 * 2); iVar9 = iVar9 + 1) {
          uVar3 = *puVar8;
          *puVar8 = uVar2 + uVar3;
          uVar2 = (uint)CARRY4(uVar2,uVar3);
          puVar8 = puVar8 + 1;
        }
        if (uVar2 == 0) {
          return 0;
        }
        uVar4 = 0xf3;
        pcVar1 = "constant_time_declassify_int(c == 0)";
        goto LAB_01b316c8;
      }
      FUN_01b2f018(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
      param_5 = param_5 + param_6;
      if (param_5 == 0) {
        return 0;
      }
      uVar4 = FUN_01b257dc(param_1 + (param_5 + param_4 * 2) * 4,0,param_5 * -4);
      return uVar4;
    }
    uVar4 = 0xa0;
    pcVar1 = "-BN_MUL_RECURSIVE_SIZE_NORMAL/2 <= dnb && dnb <= 0";
  }
  else {
    uVar4 = 0x9f;
    pcVar1 = "-BN_MUL_RECURSIVE_SIZE_NORMAL/2 <= dna && dna <= 0";
  }
LAB_01b316c8:
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/bn/mul.c",uVar4,"bn_mul_recursive");
}

