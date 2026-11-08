// FUN_017f08c0 @ 017f08c0 size=104 calls_out=4 calls_in=1
// strings: 

int FUN_017f08c0(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_60 [18];
  undefined2 local_18;
  undefined4 local_14;
  undefined *local_10;
  
  local_14 = FUN_017be3e0(param_2);
  local_60[0] = 2;
  local_10 = &DAT_01d1c08c;
  local_18 = param_1;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_60,0x54);
  return iVar1;
}

