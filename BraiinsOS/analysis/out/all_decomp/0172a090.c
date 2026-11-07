// FUN_0172a090 @ 0172a090 size=532 calls_out=13 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/dh/dh.c | /aws-lc/crypto/fipsmodule/dh/dh.c | /aws-lc/crypto/fipsmodule/dh/dh.c | /aws-lc/crypto/fipsmodule/dh/dh.c

undefined4
FUN_0172a090(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_01729e04();
  if (iVar1 != 0) {
    if (param_1[4] == 0) {
      FUN_016e9cd0(5,0,0x67,"/aws-lc/crypto/fipsmodule/dh/dh.c",0x129);
    }
    else {
      iVar1 = FUN_01729f28(param_1,param_3,&local_28);
      if ((iVar1 != 0) && (local_28 == 0)) {
        FUN_017185b4(param_4);
        iVar1 = FUN_017186b0(param_4);
        uVar3 = 0;
        if ((iVar1 != 0) &&
           (iVar2 = FUN_017205f4(param_1 + 0xe,param_1 + 6,*param_1,param_4), iVar2 != 0)) {
          iVar2 = FUN_01721bd8(param_2,param_3,param_1[4],*param_1,param_4,param_1[0xe]);
          if ((iVar2 == 0) ||
             ((iVar2 = FUN_017147ac(iVar1,*param_1), iVar2 == 0 ||
              (iVar2 = FUN_01717ee0(iVar1,1), iVar2 == 0)))) {
            FUN_016e9cd0(5,0,3,"/aws-lc/crypto/fipsmodule/dh/dh.c",0x141);
          }
          else {
            iVar2 = FUN_01717d9c(param_2,1);
            if ((iVar2 < 1) || (iVar1 = FUN_01715760(param_2,iVar1), iVar1 == 0)) {
              FUN_016e9cd0(5,0,0x65,"/aws-lc/crypto/fipsmodule/dh/dh.c",0x148);
            }
            else {
              uVar3 = 1;
            }
          }
        }
        FUN_01718904(param_4);
        goto LAB_0172a1f4;
      }
      FUN_016e9cd0(5,0,0x65,"/aws-lc/crypto/fipsmodule/dh/dh.c",0x12f);
    }
  }
  uVar3 = 0;
LAB_0172a1f4:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

