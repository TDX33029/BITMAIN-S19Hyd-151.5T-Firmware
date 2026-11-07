// FUN_01408efc @ 01408efc size=144 calls_out=4 calls_in=2
// strings: 

int FUN_01408efc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_270 [216];
  undefined1 auStack_198 [152];
  undefined1 auStack_100 [224];
  undefined1 local_20;
  
  FUN_0142c098(auStack_270,param_1);
  FUN_016dd1aa(auStack_100,param_1,0xd8);
  FUN_016dd1aa(param_1,auStack_270,0xd8);
  FUN_016dd1aa(auStack_198,param_2,0x98);
  local_20 = 0;
  iVar1 = thunk_FUN_016d4a50(0x180);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x180);
  }
  FUN_016dd1aa(iVar1,auStack_198,0x180);
  return iVar1;
}

