// FUN_0176196c @ 0176196c size=232 calls_out=5 calls_in=0
// strings: 

void FUN_0176196c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined1 auStack_40 [36];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_0174bccc(auStack_40,0x20,0);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  iVar1 = FUN_0175f830(param_2,param_3,param_4,0x40,0,0,auStack_40,param_1,1);
  FUN_0177aaa0(auStack_40,0x20);
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(iVar1 == 0,extraout_r1,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

