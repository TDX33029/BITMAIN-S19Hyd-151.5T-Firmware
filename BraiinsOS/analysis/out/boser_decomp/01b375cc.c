// FUN_01b375cc @ 01b375cc size=520 calls_out=12 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/jacobi.c | /aws-lc/crypto/fipsmodule/bn/jacobi.c

int FUN_01b375cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_01b2e5fc(param_2);
  if (iVar1 == 0) {
    uVar9 = 0x18;
    uVar6 = 0x68;
  }
  else {
    iVar1 = FUN_01b2b230(param_2);
    if (iVar1 == 0) {
      FUN_01b2e894(param_3);
      puVar2 = (undefined4 *)FUN_01b2e970(param_3);
      puVar3 = (undefined4 *)FUN_01b2e970(param_3);
      if (((puVar3 == (undefined4 *)0x0) || (iVar1 = FUN_01b2b33c(puVar2,param_1), iVar1 == 0)) ||
         (iVar1 = FUN_01b2b33c(puVar3,param_2), iVar1 == 0)) {
LAB_01b377cc:
        iVar4 = -2;
      }
      else {
        iVar1 = 1;
        while( true ) {
          puVar8 = puVar2;
          iVar4 = FUN_01b2e300(puVar8);
          uVar7 = 0;
          if (iVar4 != 0) break;
          while (iVar4 = FUN_01b35f4c(puVar8,uVar7), iVar4 == 0) {
            uVar7 = uVar7 + 1;
          }
          iVar4 = FUN_01b33c8c(puVar8,puVar8,uVar7);
          if (iVar4 == 0) goto LAB_01b377cc;
          if ((uVar7 & 1) != 0) {
            if (puVar3[1] == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(uint *)*puVar3 & 7;
            }
            iVar1 = *(int *)(&DAT_0053a534 + uVar7 * 4) * iVar1;
          }
          if (puVar8[3] == 0) {
            if (puVar8[1] != 0) {
              uVar7 = *(uint *)*puVar8;
              goto LAB_01b3776c;
            }
          }
          else {
            if (puVar8[1] == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = ~*(uint *)*puVar8;
            }
LAB_01b3776c:
            if ((puVar3[1] != 0) && ((uVar7 & *(uint *)*puVar3 & 2) != 0)) {
              iVar1 = -iVar1;
            }
          }
          iVar4 = FUN_01b341a0(puVar3,puVar3,puVar8,param_3);
          if (iVar4 == 0) goto LAB_01b377cc;
          puVar8[3] = 0;
          puVar2 = puVar3;
          puVar3 = puVar8;
        }
        iVar5 = FUN_01b2e54c(puVar3);
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = iVar1;
        }
      }
      FUN_01b2ebbc(param_3);
      return iVar4;
    }
    uVar9 = 0x1e;
    uVar6 = 0x6d;
  }
  FUN_01b053d4(3,0,uVar6,"/aws-lc/crypto/fipsmodule/bn/jacobi.c",uVar9);
  return -2;
}

