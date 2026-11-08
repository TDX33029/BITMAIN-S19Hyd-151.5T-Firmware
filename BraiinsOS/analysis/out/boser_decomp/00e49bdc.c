// FUN_00e49bdc @ 00e49bdc size=96 calls_out=3 calls_in=1
// strings: 

int FUN_00e49bdc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_748 [1840];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_748,param_2,0x48);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x738);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x738);
  }
  FUN_01bed4e2(iVar1,auStack_748,0x738);
  return iVar1;
}

