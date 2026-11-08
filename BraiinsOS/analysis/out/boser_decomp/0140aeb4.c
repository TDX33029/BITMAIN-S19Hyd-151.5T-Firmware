// FUN_0140aeb4 @ 0140aeb4 size=96 calls_out=3 calls_in=5
// strings: 

int FUN_0140aeb4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [232];
  
  local_fc = 1;
  local_100 = 1;
  FUN_01bed4e2(auStack_f8,param_1,0xe8);
  iVar1 = thunk_FUN_01be5118(0xf0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xf0);
  }
  FUN_01bed4e2(iVar1,&local_100,0xf0);
  return iVar1;
}

