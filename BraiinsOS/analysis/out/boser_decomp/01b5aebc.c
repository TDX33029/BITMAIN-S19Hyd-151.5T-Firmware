// FUN_01b5aebc @ 01b5aebc size=228 calls_out=5 calls_in=9
// strings: 

void FUN_01b5aebc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  bool bVar2;
  undefined1 auStack_1a0 [388];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b5aa58(auStack_1a0,0x100,&PTR_01d3b2b0,0);
  if ((iVar1 == 0) || (iVar1 = FUN_01b5abec(auStack_1a0,param_1,param_2), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_01b5ad7c(param_3,auStack_1a0);
    bVar2 = iVar1 != 0;
  }
  FUN_01b6b174(auStack_1a0,0x180);
  if (!bVar2) {
    param_3 = 0;
  }
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(param_3,extraout_r1,local_1c ^ DAT_01d53560,0);
  }
  return;
}

