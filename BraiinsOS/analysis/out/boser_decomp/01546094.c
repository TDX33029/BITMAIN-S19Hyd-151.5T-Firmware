// FUN_01546094 @ 01546094 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_01546094(undefined4 param_1)

{
  int iVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [120];
  
  local_84 = 1;
  local_88 = 1;
  FUN_01bed4e2(auStack_80,param_1,0x74);
  iVar1 = thunk_FUN_01be5118(0x7c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x7c);
  }
  FUN_01bed4e2(iVar1,&local_88,0x7c);
  return iVar1;
}

