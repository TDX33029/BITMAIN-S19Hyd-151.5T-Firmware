// FUN_005d6024 @ 005d6024 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_005d6024(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_990 [208];
  undefined4 local_8c0;
  undefined1 local_8ac;
  
  local_8c0 = param_1;
  FUN_01bed4e2(auStack_990,param_2,0x68);
  local_8ac = 0;
  iVar1 = thunk_FUN_01be5118(0x980);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x980);
  }
  FUN_01bed4e2(iVar1,auStack_990,0x980);
  return iVar1;
}

