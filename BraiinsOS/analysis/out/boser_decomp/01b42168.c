// FUN_01b42168 @ 01b42168 size=304 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

undefined4
FUN_01b42168(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  local_2c = 0;
  iVar1 = FUN_01b03abc(param_4,param_5);
  if (iVar1 != 0) {
    iVar2 = FUN_01b03cb4(&local_2c,&local_28,iVar1);
    if (((iVar2 != 0) && (local_28 == param_5)) &&
       (iVar2 = FUN_01b20118(param_4,local_2c), iVar2 == 0)) {
      uVar3 = FUN_01b42154(param_2,param_3,iVar1,param_6);
      goto LAB_01b42224;
    }
    FUN_01b053d4(0x1a,0,0x44,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x17c);
  }
  uVar3 = 0;
LAB_01b42224:
  FUN_01b6b1c4(local_2c);
  FUN_01b3cb34(iVar1);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

