// FUN_00b6c8d0 @ 00b6c8d0 size=84 calls_out=3 calls_in=2
// strings: 

int FUN_00b6c8d0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_300 [740];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  local_12 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_11 = param_3;
  iVar1 = thunk_FUN_01be5118(0x2f0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2f0);
  }
  FUN_01bed4e2(iVar1,auStack_300,0x2f0);
  return iVar1;
}

