// FUN_0173b4a4 @ 0173b4a4 size=308 calls_out=6 calls_in=0
// strings: hexkey

undefined4 FUN_0173b4a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_016dd818(param_2,&DAT_005a16d0,&PTR_018bc3f4,0);
    if (iVar1 == 0) {
      uVar2 = FUN_0177b1cc(param_3,0x7fff);
      uVar2 = FUN_0173b2fc(param_1,0x357,4,0x1016,uVar2,param_3);
    }
    else {
      iVar1 = FUN_016dd818(param_2,"hexkey");
      if (iVar1 == 0) {
        local_20 = iVar1;
        iVar1 = FUN_0177b34c(param_3,&local_20);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = FUN_0173b2fc(param_1,0x357,4,0x1016,local_20,iVar1);
          FUN_0177aafc(iVar1);
        }
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
  }
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

