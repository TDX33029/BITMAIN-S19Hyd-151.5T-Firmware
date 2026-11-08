// FUN_00e35ea0 @ 00e35ea0 size=88 calls_out=3 calls_in=3
// strings: 

int FUN_00e35ea0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_750 [1848];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_750,param_2,0x60);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x740);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x740);
  }
  FUN_01bed4e2(iVar1,auStack_750,0x740);
  return iVar1;
}

