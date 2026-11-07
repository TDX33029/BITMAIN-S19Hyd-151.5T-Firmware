// FUN_00e51c78 @ 00e51c78 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e51c78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_e0 [160];
  undefined4 local_40;
  undefined1 local_2c;
  
  local_40 = param_1;
  FUN_01bed4e2(auStack_e0,param_2,0x50);
  local_2c = 0;
  iVar1 = thunk_FUN_01be5118(0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xd8);
  }
  FUN_01bed4e2(iVar1,auStack_e0,0xd8);
  return iVar1;
}

