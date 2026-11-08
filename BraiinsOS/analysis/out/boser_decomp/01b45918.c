// FUN_01b45918 @ 01b45918 size=480 calls_out=12 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdh/ecdh.c | /aws-lc/crypto/fipsmodule/ecdh/ecdh.c | /aws-lc/crypto/fipsmodule/ecdh/ecdh.c | /aws-lc/crypto/fipsmodule/ecdh/ecdh.c

undefined4 FUN_01b45918(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [204];
  int local_2c;
  
  iVar6 = *(int *)(param_4 + 8);
  local_2c = DAT_01d53560;
  if (iVar6 == 0) {
    uVar7 = 0x20;
    uVar4 = 0x65;
    uVar1 = 0x1b;
  }
  else {
    uVar1 = FUN_01b3d638(param_4,&PTR_01d3b2b0,0);
    iVar2 = FUN_01b44b4c(uVar1,*param_3,0);
    if (iVar2 == 0) {
      iVar2 = FUN_01b3d7ac();
      uVar5 = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_01b451a8(iVar2,uVar1);
        if (((iVar3 == 0) || (iVar3 = FUN_01b452b8(iVar2,param_3), iVar3 == 0)) ||
           (iVar3 = FUN_01b45774(iVar2), iVar3 == 0)) {
          uVar7 = 0x3b;
          uVar4 = 0x84;
          uVar1 = 0xf;
        }
        else {
          iVar6 = FUN_01b44610(uVar1,auStack_f8,param_3 + 1,iVar6 + 0x14);
          if (iVar6 != 0) {
            iVar6 = FUN_01b3e854(uVar1,param_1,param_2,*param_2,auStack_f8);
            if (iVar6 != 0) {
              uVar5 = 1;
              goto LAB_01b45a30;
            }
          }
          uVar7 = 0x43;
          uVar4 = 0x66;
          uVar1 = 0x1b;
        }
        FUN_01b053d4(uVar1,0,uVar4,"/aws-lc/crypto/fipsmodule/ecdh/ecdh.c",uVar7);
      }
LAB_01b45a30:
      FUN_01b6b174(auStack_f8,0xcc);
      if (iVar2 != 0) {
        FUN_01b3d538(iVar2);
      }
      goto LAB_01b45988;
    }
    uVar7 = 0x26;
    uVar4 = 0x6a;
    uVar1 = 0xf;
  }
  uVar5 = 0;
  FUN_01b053d4(uVar1,0,uVar4,"/aws-lc/crypto/fipsmodule/ecdh/ecdh.c",uVar7);
LAB_01b45988:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar5;
}

