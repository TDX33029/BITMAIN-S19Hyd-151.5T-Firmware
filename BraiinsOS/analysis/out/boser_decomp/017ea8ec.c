// FUN_017ea8ec @ 017ea8ec size=84 calls_out=3 calls_in=2
// strings: 

int FUN_017ea8ec(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_60 [18];
  undefined2 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_60[0] = 2;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_60,0x54);
  return iVar1;
}

