// FUN_00e93fb0 @ 00e93fb0 size=88 calls_out=3 calls_in=2
// strings: 

int FUN_00e93fb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_188 [368];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_188,param_2,0x58);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x178);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x178);
  }
  FUN_01bed4e2(iVar1,auStack_188,0x178);
  return iVar1;
}

