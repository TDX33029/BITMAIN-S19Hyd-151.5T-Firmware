// FUN_00e48968 @ 00e48968 size=88 calls_out=3 calls_in=2
// strings: 

int FUN_00e48968(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_140 [296];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_140,param_2,0x48);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x130);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x130);
  }
  FUN_01bed4e2(iVar1,auStack_140,0x130);
  return iVar1;
}

