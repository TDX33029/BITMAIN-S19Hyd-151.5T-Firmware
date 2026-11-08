// FUN_00e2e980 @ 00e2e980 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e2e980(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_120 [144];
  undefined4 local_90;
  undefined1 local_88;
  
  local_90 = param_1;
  FUN_01bed4e2(auStack_120,param_2,0x48);
  local_88 = 0;
  iVar1 = thunk_FUN_01be5118(0x110);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x110);
  }
  FUN_01bed4e2(iVar1,auStack_120,0x110);
  return iVar1;
}

