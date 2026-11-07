// FUN_00e2e1f8 @ 00e2e1f8 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e2e1f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_e8 [144];
  undefined4 local_58;
  undefined1 local_50;
  
  local_58 = param_1;
  FUN_01bed4e2(auStack_e8,param_2,0x48);
  local_50 = 0;
  iVar1 = thunk_FUN_01be5118(0xe0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xe0);
  }
  FUN_01bed4e2(iVar1,auStack_e8,0xe0);
  return iVar1;
}

