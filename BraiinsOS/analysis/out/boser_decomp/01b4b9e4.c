// FUN_01b4b9e4 @ 01b4b9e4 size=316 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/hkdf/hkdf.c

undefined4
FUN_01b4b9e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_70;
  undefined1 auStack_6c [64];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b3b6a4(param_3,param_2,&PTR_01d3b2b0,0);
  if ((uVar1 & 4) == 0) {
    local_70 = uVar1 & 4;
    iVar2 = FUN_01b4b880(auStack_6c,&local_70,param_3,param_4,param_5,param_6,param_7);
    uVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_01b4b480(param_1,param_2,param_3,auStack_6c,local_70,param_8,param_9);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = 1;
      }
    }
    FUN_01b6b174(auStack_6c,0x40);
  }
  else {
    uVar3 = 0;
    FUN_01b053d4(0x1f,0,0x65,"/aws-lc/crypto/fipsmodule/hkdf/hkdf.c",0x18);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

