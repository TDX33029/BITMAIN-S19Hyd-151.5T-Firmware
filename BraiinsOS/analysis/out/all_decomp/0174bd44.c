// FUN_0174bd44 @ 0174bd44 size=508 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/random.c | /aws-lc/crypto/fipsmodule/bn/random.c | /aws-lc/crypto/fipsmodule/bn/random.c

undefined4 FUN_0174bd44(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = param_3 + 1;
    bVar8 = param_3 != 1;
    uVar4 = param_3;
    if (bVar8) {
      uVar4 = uVar3;
    }
    bVar7 = uVar4 != 0;
    bVar9 = uVar3 != 1;
    if (bVar7 && (bVar8 && bVar9)) {
      uVar3 = 1;
    }
    if (!bVar7 || (!bVar8 || !bVar9)) {
      uVar3 = 0;
    }
    if (bVar7 && (bVar8 && bVar9)) {
      FUN_016e9cd0(3,0,0x42,"/aws-lc/crypto/fipsmodule/bn/random.c",0x19);
    }
    else if (param_4 < 2) {
      if (param_2 == 0) {
        FUN_01714350();
        return 1;
      }
      if (param_2 < 0x7fffffe1) {
        iVar1 = param_2 + 0x1f;
        if (iVar1 < 0) {
          iVar1 = param_2 + 0x3e;
        }
        uVar5 = param_2 - 1U & 0x1f;
        iVar1 = iVar1 >> 5;
        uVar4 = -(param_2 - 1U);
        uVar3 = uVar5;
        if (-1 < (int)uVar4) {
          uVar3 = -(uVar4 & 0x1f);
        }
        if (uVar3 == 0x1f) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = ~(-1 << (uVar3 + 1 & 0xff));
        }
        iVar2 = FUN_0171464c(param_1,iVar1);
        if (iVar2 != 0) {
          iVar2 = FUN_0174bccc(*param_1);
          if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2c24();
          }
          puVar6 = (uint *)*param_1;
          uVar4 = uVar4 & puVar6[iVar1 + -1];
          if (param_3 == 0xffffffff) {
            puVar6[iVar1 + -1] = uVar4;
          }
          else {
            if (param_2 < 2) {
              param_3 = 0;
            }
            else {
              param_3 = param_3 & 1;
            }
            if (param_3 == 0) {
              puVar6[iVar1 + -1] = uVar4 | 1 << uVar5;
            }
            else if (uVar5 == 0) {
              puVar6[iVar1 + -1] = uVar4 | 1;
              puVar6[iVar1 + -2] = puVar6[iVar1 + -2] | 0x80000000;
            }
            else {
              puVar6[iVar1 + -1] = uVar4 | 3 << (uVar3 - 1 & 0xff);
            }
          }
          if (param_4 == 1) {
            *puVar6 = *puVar6 | 1;
          }
          param_1[1] = iVar1;
          param_1[3] = 0;
          return 1;
        }
      }
      else {
        FUN_016e9cd0(3,uVar3,0x66,"/aws-lc/crypto/fipsmodule/bn/random.c",0x28);
      }
    }
    else {
      FUN_016e9cd0(3,uVar3,0x42,"/aws-lc/crypto/fipsmodule/bn/random.c",0x1e);
    }
  }
  return 0;
}

