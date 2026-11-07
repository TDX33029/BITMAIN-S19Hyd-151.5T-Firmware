// FUN_0145db88 @ 0145db88 size=144 calls_out=4 calls_in=2
// strings: 

int FUN_0145db88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_2a0 [240];
  undefined1 auStack_1b0 [152];
  undefined1 auStack_118 [248];
  undefined1 local_20;
  
  FUN_01475d88(auStack_2a0,param_1);
  FUN_016dd1aa(auStack_118,param_1,0xf0);
  FUN_016dd1aa(param_1,auStack_2a0,0xf0);
  FUN_016dd1aa(auStack_1b0,param_2,0x98);
  local_20 = 0;
  iVar1 = thunk_FUN_016d4a50(0x198);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x198);
  }
  FUN_016dd1aa(iVar1,auStack_1b0,0x198);
  return iVar1;
}

