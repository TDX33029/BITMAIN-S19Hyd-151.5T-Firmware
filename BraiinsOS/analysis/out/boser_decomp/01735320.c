// FUN_01735320 @ 01735320 size=144 calls_out=4 calls_in=2
// strings: 

int FUN_01735320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_2a0 [240];
  undefined1 auStack_1b0 [152];
  undefined1 auStack_118 [248];
  undefined1 local_20;
  
  FUN_017435fc(auStack_2a0,param_1);
  FUN_01bed4e2(auStack_118,param_1,0xf0);
  FUN_01bed4e2(param_1,auStack_2a0,0xf0);
  FUN_01bed4e2(auStack_1b0,param_2,0x98);
  local_20 = 0;
  iVar1 = thunk_FUN_01be5118(0x198);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x198);
  }
  FUN_01bed4e2(iVar1,auStack_1b0,0x198);
  return iVar1;
}

