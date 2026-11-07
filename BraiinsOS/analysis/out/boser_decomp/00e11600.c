// FUN_00e11600 @ 00e11600 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e11600(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_1b0 [192];
  undefined4 local_f0;
  undefined1 local_bc;
  
  local_f0 = param_1;
  FUN_01bed4e2(auStack_1b0,param_2,0x58);
  local_bc = 0;
  iVar1 = thunk_FUN_01be5118(0x1a0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1a0);
  }
  FUN_01bed4e2(iVar1,auStack_1b0,0x1a0);
  return iVar1;
}

