// FUN_00b6bbb0 @ 00b6bbb0 size=84 calls_out=3 calls_in=0
// strings: 

int FUN_00b6bbb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined1 local_b;
  
  local_b = 0;
  local_30 = param_2;
  local_2c = param_3;
  local_10 = param_1;
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(iVar1,auStack_58,0x50);
  return iVar1;
}

