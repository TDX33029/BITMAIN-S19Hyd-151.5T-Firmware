// FUN_01b3af48 @ 01b3af48 size=508 calls_out=13 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/dh/dh.c | /aws-lc/crypto/fipsmodule/dh/dh.c | /aws-lc/crypto/fipsmodule/dh/dh.c | /aws-lc/crypto/fipsmodule/dh/dh.c

undefined4
FUN_01b3af48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b3acd4();
  if (iVar1 != 0) {
    if (param_1[4] == 0) {
      uVar4 = 0x129;
      uVar3 = 0x67;
    }
    else {
      iVar1 = FUN_01b3ae00(param_1,param_3,&local_28);
      if ((iVar1 != 0) && (local_28 == 0)) {
        FUN_01b2e894(param_4);
        iVar1 = FUN_01b2e970(param_4);
        uVar3 = 0;
        if ((iVar1 != 0) &&
           (iVar2 = FUN_01b355d8(param_1 + 0xe,param_1 + 6,*param_1,param_4), iVar2 != 0)) {
          iVar2 = FUN_01b36698(param_2,param_3,param_1[4],*param_1,param_4,param_1[0xe]);
          if (((iVar2 == 0) || (iVar2 = FUN_01b2b33c(iVar1,*param_1), iVar2 == 0)) ||
             (iVar2 = FUN_01b2e358(iVar1,1), iVar2 == 0)) {
            uVar5 = 0x141;
            uVar4 = 3;
          }
          else {
            iVar2 = FUN_01b2e238(param_2,1);
            if ((0 < iVar2) && (iVar1 = FUN_01b2be38(param_2,iVar1), iVar1 != 0)) {
              uVar3 = 1;
              goto LAB_01b3b0a8;
            }
            uVar5 = 0x148;
            uVar4 = 0x65;
          }
          FUN_01b053d4(5,0,uVar4,"/aws-lc/crypto/fipsmodule/dh/dh.c",uVar5);
        }
LAB_01b3b0a8:
        FUN_01b2ebbc(param_4);
        goto LAB_01b3afc4;
      }
      uVar4 = 0x12f;
      uVar3 = 0x65;
    }
    FUN_01b053d4(5,0,uVar3,"/aws-lc/crypto/fipsmodule/dh/dh.c",uVar4);
  }
  uVar3 = 0;
LAB_01b3afc4:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

