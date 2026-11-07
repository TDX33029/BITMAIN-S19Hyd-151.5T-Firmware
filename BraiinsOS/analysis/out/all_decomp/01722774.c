// FUN_01722774 @ 01722774 size=956 calls_out=20 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/gcd.c | /aws-lc/crypto/fipsmodule/bn/gcd.c | /aws-lc/crypto/fipsmodule/bn/gcd.c

bool FUN_01722774(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  *param_2 = 0;
  iVar1 = FUN_017181d4(param_4);
  if (iVar1 == 0) {
    FUN_016e9cd0(3,0,0x68,"/aws-lc/crypto/fipsmodule/bn/gcd.c",0x11);
  }
  else {
    iVar1 = FUN_0171462c(param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_01715760(param_3,param_4), iVar1 < 0)) {
      FUN_017185b4(param_5);
      iVar1 = FUN_017186b0(param_5);
      uVar2 = FUN_017186b0(param_5);
      uVar3 = FUN_017186b0(param_5);
      iVar4 = FUN_017186b0(param_5);
      bVar7 = false;
      if (iVar4 != 0) {
        FUN_01714350();
        iVar5 = FUN_01714ab0(uVar3);
        if (((iVar5 != 0) && (iVar5 = FUN_017147ac(uVar2,param_3), iVar5 != 0)) &&
           (iVar5 = FUN_017147ac(iVar1,param_4), iVar5 != 0)) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          while (iVar5 = FUN_01717e5c(uVar2), iVar5 == 0) {
            iVar5 = 0;
            while (iVar6 = FUN_0172135c(uVar2,iVar5), iVar6 == 0) {
              iVar6 = FUN_017181d4(uVar3);
              if ((iVar6 != 0) && (iVar6 = FUN_0171a398(uVar3,uVar3,param_4), iVar6 == 0))
              goto LAB_01722a0c;
              iVar6 = FUN_0172030c(uVar3,uVar3);
              iVar5 = iVar5 + 1;
              if (iVar6 == 0) goto LAB_01722a0c;
            }
            if ((0 < iVar5) && (iVar5 = FUN_0171ea08(uVar2,uVar2,iVar5), iVar5 == 0))
            goto LAB_01722a0c;
            iVar5 = 0;
            while (iVar6 = FUN_0172135c(iVar1,iVar5), iVar6 == 0) {
              iVar6 = FUN_017181d4(iVar4);
              if ((iVar6 != 0) && (iVar6 = FUN_0171a398(iVar4,iVar4,param_4), iVar6 == 0))
              goto LAB_01722a0c;
              iVar6 = FUN_0172030c(iVar4,iVar4);
              iVar5 = iVar5 + 1;
              if (iVar6 == 0) goto LAB_01722a0c;
            }
            if ((0 < iVar5) && (iVar5 = FUN_0171ea08(iVar1,iVar1,iVar5), iVar5 == 0))
            goto LAB_01722a0c;
            iVar5 = FUN_01715744(uVar2,iVar1);
            if (iVar5 < 0) {
              iVar5 = FUN_0171a398(iVar4,iVar4,uVar3);
              if (iVar5 == 0) goto LAB_01722a0c;
              iVar5 = FUN_0171a8e0(iVar1,iVar1,uVar2);
            }
            else {
              iVar5 = FUN_0171a398(uVar3,uVar3,iVar4);
              if (iVar5 == 0) goto LAB_01722a0c;
              iVar5 = FUN_0171a8e0(uVar2,uVar2,iVar1);
            }
            if (iVar5 == 0) goto LAB_01722a0c;
          }
          iVar1 = FUN_01718124(iVar1);
          if (iVar1 == 0) {
            *param_2 = 1;
            FUN_016e9cd0(3,0,0x70,"/aws-lc/crypto/fipsmodule/bn/gcd.c",0x90);
          }
          else {
            iVar1 = FUN_0171aa2c(iVar4,param_4,iVar4);
            if ((iVar1 != 0) &&
               (((*(int *)(iVar4 + 0xc) == 0 && (iVar1 = FUN_01715744(iVar4,param_4), iVar1 < 0)) ||
                (iVar1 = FUN_0171ef88(iVar4,iVar4,param_4,param_5), iVar1 != 0)))) {
              iVar1 = FUN_017147ac(param_1,iVar4);
              bVar7 = iVar1 != 0;
            }
          }
        }
      }
LAB_01722a0c:
      FUN_01718904(param_5);
      return bVar7;
    }
    FUN_016e9cd0(3,0,0x6b,"/aws-lc/crypto/fipsmodule/bn/gcd.c",0x16);
  }
  return false;
}

