// FUN_00e4810c @ 00e4810c size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e4810c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_740 [1832];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_740,param_2,0x58);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x730);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x730);
  }
  FUN_01bed4e2(iVar1,auStack_740,0x730);
  return iVar1;
}

