// FUN_01b45774 @ 01b45774 size=408 calls_out=10 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined4 FUN_01b45774(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_01b3d61c();
  if (iVar1 != 0) {
    FUN_01b053d4(0xf,0,0x84,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x144);
    return 0;
  }
  iVar1 = FUN_01b455d0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar6 = (int *)*puVar7;
  uVar2 = FUN_01b3e7b4(piVar6);
  iVar1 = FUN_01b3ffb0(piVar6,uVar2,puVar7 + 0x23);
  if (iVar1 == 0) {
    return 1;
  }
  uVar3 = FUN_01b2adb8();
  uVar4 = FUN_01b2adb8();
  uVar2 = 0;
  if (*(int *)(*piVar6 + 0x34) == 0) {
    uVar8 = 0x158;
    uVar5 = 0x42;
  }
  else {
    iVar1 = FUN_01b3eaa4(piVar6,uVar3,puVar7 + 1);
    if ((iVar1 == 0) || (iVar1 = FUN_01b3eaa4(piVar6,uVar4,puVar7 + 0x12), iVar1 == 0))
    goto LAB_01b45860;
    iVar1 = FUN_01b2b230(uVar3);
    if ((iVar1 == 0) &&
       (((iVar1 = FUN_01b2b230(uVar4), iVar1 == 0 &&
         (iVar1 = FUN_01b2be38(uVar3,piVar6 + 0x46), iVar1 < 0)) &&
        (iVar1 = FUN_01b2be38(uVar4,piVar6 + 0x46), iVar1 < 0)))) {
      uVar2 = 1;
      goto LAB_01b45860;
    }
    uVar8 = 0x161;
    uVar5 = 0x65;
  }
  FUN_01b053d4(0xf,0,uVar5,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",uVar8);
LAB_01b45860:
  FUN_01b1f904(uVar3);
  FUN_01b1f904(uVar4);
  return uVar2;
}

