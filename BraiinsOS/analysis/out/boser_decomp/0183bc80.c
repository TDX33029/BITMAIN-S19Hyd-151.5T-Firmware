// FUN_0183bc80 @ 0183bc80 size=120 calls_out=4 calls_in=2
// strings: 

int FUN_0183bc80(int *param_1)

{
  int iVar1;
  undefined4 local_70 [18];
  undefined2 local_28;
  undefined4 local_14;
  undefined *local_10;
  
  local_14 = 0;
  if (*param_1 != -0x7fffffd7) {
    local_14 = FUN_01753bec();
  }
  local_10 = &DAT_01d1e908;
  local_28 = 0;
  local_70[0] = 2;
  iVar1 = thunk_FUN_01be5118(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,100);
  }
  FUN_01bed4e2(iVar1,local_70,100);
  return iVar1;
}

