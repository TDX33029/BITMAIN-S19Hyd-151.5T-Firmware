// FUN_00f870a4 @ 00f870a4 size=88 calls_out=3 calls_in=0
// strings: 

int FUN_00f870a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_188 [312];
  undefined4 local_50;
  undefined1 local_30;
  
  local_50 = param_1;
  FUN_01bed4e2(auStack_188,param_2,0x90);
  local_30 = 0;
  iVar1 = thunk_FUN_01be5118(0x178);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x178);
  }
  FUN_01bed4e2(iVar1,auStack_188,0x178);
  return iVar1;
}

