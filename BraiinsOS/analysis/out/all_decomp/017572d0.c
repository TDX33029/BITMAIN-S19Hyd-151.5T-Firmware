// FUN_017572d0 @ 017572d0 size=232 calls_out=5 calls_in=15
// strings: 

void FUN_017572d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined1 auStack_1a0 [388];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_01756d78(auStack_1a0,0x100,&PTR_018bc3f4,0);
  if (((iVar1 == 0) || (iVar1 = FUN_01756f0c(auStack_1a0,param_1,param_2), iVar1 == 0)) ||
     (iVar1 = FUN_01757168(param_3,auStack_1a0), iVar1 == 0)) {
    FUN_0177aaa0(auStack_1a0,0x180);
    param_3 = 0;
    uVar2 = extraout_r1;
  }
  else {
    FUN_0177aaa0(auStack_1a0,0x180);
    uVar2 = extraout_r1_00;
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(param_3,uVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

