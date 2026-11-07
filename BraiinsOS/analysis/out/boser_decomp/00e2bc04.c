// FUN_00e2bc04 @ 00e2bc04 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_00e2bc04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_668 [160];
  undefined4 local_5c8;
  undefined1 local_5c4;
  
  local_5c8 = param_1;
  FUN_01bed4e2(auStack_668,param_2,0x50);
  local_5c4 = 0;
  iVar1 = thunk_FUN_01be5118(0x658);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x658);
  }
  FUN_01bed4e2(iVar1,auStack_668,0x658);
  return iVar1;
}

