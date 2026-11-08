// FUN_00e9dd6c @ 00e9dd6c size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e9dd6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_1b0 [408];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_1b0,param_2,0x80);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x1a0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1a0);
  }
  FUN_01bed4e2(iVar1,auStack_1b0,0x1a0);
  return iVar1;
}

