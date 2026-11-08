// FUN_00e157dc @ 00e157dc size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e157dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_1b8 [192];
  undefined4 local_f8;
  undefined1 local_b8;
  
  local_f8 = param_1;
  FUN_01bed4e2(auStack_1b8,param_2,0x58);
  local_b8 = 0;
  iVar1 = thunk_FUN_01be5118(0x1a8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1a8);
  }
  FUN_01bed4e2(iVar1,auStack_1b8,0x1a8);
  return iVar1;
}

