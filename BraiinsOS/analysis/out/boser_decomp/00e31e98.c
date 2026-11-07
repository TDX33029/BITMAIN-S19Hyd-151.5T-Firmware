// FUN_00e31e98 @ 00e31e98 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_00e31e98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_658 [144];
  undefined4 local_5c8;
  undefined1 local_5b4;
  
  local_5c8 = param_1;
  FUN_01bed4e2(auStack_658,param_2,0x48);
  local_5b4 = 0;
  iVar1 = thunk_FUN_01be5118(0x648);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x648);
  }
  FUN_01bed4e2(iVar1,auStack_658,0x648);
  return iVar1;
}

