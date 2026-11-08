// FUN_01737690 @ 01737690 size=444 calls_out=10 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined4 FUN_01737690(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = FUN_0172ca68();
  if (iVar1 != 0) {
    FUN_016e9cd0(0xf,0,0x84,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x144);
    return 0;
  }
  iVar1 = FUN_017374c4(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar6 = *(int **)(param_1 + 4);
  piVar7 = (int *)*piVar6;
  uVar2 = FUN_0172e71c(piVar7);
  iVar1 = FUN_017303ac(piVar7,uVar2,piVar6 + 0x23);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_017141d0();
  uVar3 = FUN_017141d0();
  if (*(int *)(*piVar7 + 0x34) == 0) {
    uVar4 = 0x158;
    uVar5 = 0x42;
  }
  else {
    iVar1 = FUN_0172ea24(piVar7,uVar2,piVar6 + 1);
    if ((iVar1 == 0) || (iVar1 = FUN_0172ea24(piVar7,uVar3,piVar6 + 0x12), iVar1 == 0))
    goto LAB_01737788;
    iVar1 = FUN_0171462c(uVar2);
    if ((iVar1 == 0) && (iVar1 = FUN_0171462c(uVar3), iVar1 == 0)) {
      iVar1 = FUN_01715760(uVar2);
      if ((iVar1 < 0) && (iVar1 = FUN_01715760(uVar3,piVar7 + 0x46), iVar1 < 0)) {
        FUN_017046e0(uVar2);
        FUN_017046e0(uVar3);
        return 1;
      }
    }
    uVar5 = 0x65;
    uVar4 = 0x161;
  }
  FUN_016e9cd0(0xf,0,uVar5,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",uVar4);
LAB_01737788:
  FUN_017046e0(uVar2);
  FUN_017046e0(uVar3);
  return 0;
}

