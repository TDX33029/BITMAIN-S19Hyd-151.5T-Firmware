// FUN_013cec10 @ 013cec10 size=88 calls_out=3 calls_in=2
// strings: 

int FUN_013cec10(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_80 [116];
  undefined4 local_c;
  
  FUN_01bed4e2(auStack_80,param_1,0x74);
  local_c = 0;
  iVar1 = thunk_FUN_01be5118(0x78);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x78);
  }
  FUN_01bed4e2(iVar1,auStack_80,0x78);
  return iVar1;
}

