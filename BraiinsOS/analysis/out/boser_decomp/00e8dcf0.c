// FUN_00e8dcf0 @ 00e8dcf0 size=88 calls_out=3 calls_in=2
// strings: 

int FUN_00e8dcf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_180 [144];
  undefined4 local_f0;
  undefined1 local_ec;
  
  local_f0 = param_1;
  FUN_01bed4e2(auStack_180,param_2,0x48);
  local_ec = 0;
  iVar1 = thunk_FUN_01be5118(0x170);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x170);
  }
  FUN_01bed4e2(iVar1,auStack_180,0x170);
  return iVar1;
}

