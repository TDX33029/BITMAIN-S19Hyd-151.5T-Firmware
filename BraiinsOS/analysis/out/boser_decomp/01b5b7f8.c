// FUN_01b5b7f8 @ 01b5b7f8 size=236 calls_out=5 calls_in=10
// strings: 

void FUN_01b5b7f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  bool bVar2;
  undefined1 auStack_1a8 [388];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b5b4e4(auStack_1a8,0x88,&PTR_01d3b2b0,0);
  if ((iVar1 == 0) || (iVar1 = FUN_01b5b638(auStack_1a8,param_1,param_2), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_01b5b704(param_3,auStack_1a8,param_4);
    bVar2 = iVar1 != 0;
  }
  FUN_01b6b174(auStack_1a8,0x180);
  if (!bVar2) {
    param_3 = 0;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(param_3,extraout_r1,local_24 ^ DAT_01d53560,0);
  }
  return;
}

