// FUN_00e38760 @ 00e38760 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e38760(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_1e0 [448];
  undefined4 local_20;
  undefined1 local_14;
  
  local_20 = param_1;
  FUN_01bed4e2(auStack_1e0,param_2,0x50);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x1d0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1d0);
  }
  FUN_01bed4e2(iVar1,auStack_1e0,0x1d0);
  return iVar1;
}

