// FUN_01757bf4 @ 01757bf4 size=240 calls_out=5 calls_in=11
// strings: 

void FUN_01757bf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined1 auStack_1a8 [388];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_01757774(auStack_1a8,0x88,&PTR_018bc3f4,0);
  if (((iVar1 == 0) || (iVar1 = FUN_01757884(auStack_1a8,param_1,param_2), iVar1 == 0)) ||
     (iVar1 = FUN_01757ab0(param_3,auStack_1a8,param_4), iVar1 == 0)) {
    FUN_0177aaa0(auStack_1a8,0x180);
    param_3 = 0;
    uVar2 = extraout_r1;
  }
  else {
    FUN_0177aaa0(auStack_1a8,0x180);
    uVar2 = extraout_r1_00;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(param_3,uVar2,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

