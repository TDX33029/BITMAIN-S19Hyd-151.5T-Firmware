// FUN_01b370f0 @ 01b370f0 size=884 calls_out=20 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/gcd.c | /aws-lc/crypto/fipsmodule/bn/gcd.c | /aws-lc/crypto/fipsmodule/bn/gcd.c

bool FUN_01b370f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  *param_2 = 0;
  iVar1 = FUN_01b2e5fc(param_4);
  if (iVar1 == 0) {
    uVar8 = 0x11;
    uVar6 = 0x68;
  }
  else {
    iVar1 = FUN_01b2b230(param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_01b2be38(param_3,param_4), iVar1 < 0)) {
      FUN_01b2e894(param_5);
      iVar1 = FUN_01b2e970(param_5);
      iVar2 = FUN_01b2e970(param_5);
      uVar6 = FUN_01b2e970(param_5);
      iVar3 = FUN_01b2e970(param_5);
      bVar7 = false;
      if (iVar3 != 0) {
        FUN_01b2af70();
        iVar4 = FUN_01b2b544(uVar6);
        if (((iVar4 != 0) && (iVar4 = FUN_01b2b33c(iVar2,param_3), iVar4 != 0)) &&
           (iVar4 = FUN_01b2b33c(iVar1,param_4), iVar4 != 0)) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          while (iVar4 = FUN_01b2e300(iVar2), iVar4 == 0) {
            iVar4 = 0;
            while (iVar5 = FUN_01b35f4c(iVar2,iVar4), iVar5 == 0) {
              iVar5 = FUN_01b2e5fc(uVar6);
              if ((iVar5 != 0) && (iVar5 = FUN_01b3039c(uVar6,uVar6,param_4), iVar5 == 0))
              goto LAB_01b37234;
              iVar5 = FUN_01b35374(uVar6,uVar6);
              iVar4 = iVar4 + 1;
              if (iVar5 == 0) goto LAB_01b37234;
            }
            iVar5 = 0;
            if (iVar4 < 1) goto LAB_01b3729c;
            iVar4 = FUN_01b33c8c(iVar2,iVar2,iVar4);
            while( true ) {
              if (iVar4 == 0) goto LAB_01b37234;
LAB_01b3729c:
              iVar4 = FUN_01b35f4c(iVar1,iVar5);
              if (iVar4 != 0) break;
              iVar4 = FUN_01b2e5fc(iVar3);
              if ((iVar4 != 0) && (iVar4 = FUN_01b3039c(iVar3,iVar3,param_4), iVar4 == 0))
              goto LAB_01b37234;
              iVar5 = iVar5 + 1;
              iVar4 = FUN_01b35374(iVar3,iVar3);
            }
            if ((0 < iVar5) && (iVar4 = FUN_01b33c8c(iVar1,iVar1,iVar5), iVar4 == 0))
            goto LAB_01b37234;
            iVar4 = FUN_01b2be1c(iVar2,iVar1);
            if (iVar4 < 0) {
              iVar4 = FUN_01b3039c(iVar3,iVar3,uVar6);
              if (iVar4 == 0) goto LAB_01b37234;
              iVar4 = iVar1;
              iVar5 = iVar2;
            }
            else {
              iVar4 = FUN_01b3039c(uVar6,uVar6,iVar3);
              if (iVar4 == 0) goto LAB_01b37234;
              iVar4 = iVar2;
              iVar5 = iVar1;
            }
            iVar4 = FUN_01b307c8(iVar4,iVar4,iVar5);
            if (iVar4 == 0) goto LAB_01b37234;
          }
          iVar1 = FUN_01b2e54c(iVar1);
          if (iVar1 == 0) {
            *param_2 = 1;
            FUN_01b053d4(3,0,0x70,"/aws-lc/crypto/fipsmodule/bn/gcd.c",0x90);
          }
          else {
            iVar1 = FUN_01b30908(iVar3,param_4,iVar3);
            if ((iVar1 != 0) &&
               (((*(int *)(iVar3 + 0xc) == 0 && (iVar1 = FUN_01b2be1c(iVar3,param_4), iVar1 < 0)) ||
                (iVar1 = FUN_01b341a0(iVar3,iVar3,param_4,param_5), iVar1 != 0)))) {
              iVar1 = FUN_01b2b33c(param_1,iVar3);
              bVar7 = iVar1 != 0;
            }
          }
        }
      }
LAB_01b37234:
      FUN_01b2ebbc(param_5);
      return bVar7;
    }
    uVar8 = 0x16;
    uVar6 = 0x6b;
  }
  FUN_01b053d4(3,0,uVar6,"/aws-lc/crypto/fipsmodule/bn/gcd.c",uVar8);
  return false;
}

