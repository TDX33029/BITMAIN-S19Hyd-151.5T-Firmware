// FUN_00e4ecf0 @ 00e4ecf0 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e4ecf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_258 [408];
  undefined4 local_c0;
  undefined1 local_ac;
  
  local_c0 = param_1;
  FUN_01bed4e2(auStack_258,param_2,0x48);
  local_ac = 0;
  iVar1 = thunk_FUN_01be5118(0x248);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x248);
  }
  FUN_01bed4e2(iVar1,auStack_258,0x248);
  return iVar1;
}

