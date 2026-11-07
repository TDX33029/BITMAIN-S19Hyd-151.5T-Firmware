// FUN_00e3c144 @ 00e3c144 size=88 calls_out=3 calls_in=2
// strings: 

int FUN_00e3c144(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_740 [144];
  undefined4 local_6b0;
  undefined1 local_69c;
  
  local_6b0 = param_1;
  FUN_01bed4e2(auStack_740,param_2,0x48);
  local_69c = 0;
  iVar1 = thunk_FUN_01be5118(0x730);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x730);
  }
  FUN_01bed4e2(iVar1,auStack_740,0x730);
  return iVar1;
}

