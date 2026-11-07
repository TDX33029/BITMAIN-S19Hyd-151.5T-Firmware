// FUN_00e3df40 @ 00e3df40 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_00e3df40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_808 [360];
  undefined4 local_6a0;
  undefined1 local_69c;
  
  local_6a0 = param_1;
  FUN_01bed4e2(auStack_808,param_2,0x80);
  local_69c = 0;
  iVar1 = thunk_FUN_01be5118(0x7f8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x7f8);
  }
  FUN_01bed4e2(iVar1,auStack_808,0x7f8);
  return iVar1;
}

