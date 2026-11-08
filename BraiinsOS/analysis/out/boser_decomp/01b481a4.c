// FUN_01b481a4 @ 01b481a4 size=304 calls_out=6 calls_in=0
// strings: hexkey

undefined4 FUN_01b481a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_01bedb50(param_2,&DAT_0058bca4,param_3,0);
    if (iVar1 == 0) {
      uVar2 = FUN_01b6b78c(param_3,0x7fff);
      uVar2 = FUN_01b48030(param_1,0x357,4,0x1016,uVar2,param_3);
    }
    else {
      iVar1 = FUN_01bedb50(param_2,"hexkey");
      if (iVar1 == 0) {
        local_20 = iVar1;
        iVar1 = FUN_01b6b8b8(param_3,&local_20);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = FUN_01b48030(param_1,0x357,4,0x1016,local_20,iVar1);
          FUN_01b6b1c4(iVar1);
        }
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

