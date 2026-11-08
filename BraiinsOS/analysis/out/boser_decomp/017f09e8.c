// FUN_017f09e8 @ 017f09e8 size=120 calls_out=4 calls_in=1
// strings: 

int FUN_017f09e8(char *param_1)

{
  int iVar1;
  undefined4 local_60 [18];
  undefined2 local_18;
  undefined4 local_14;
  undefined *local_10;
  
  local_14 = 0;
  if (*param_1 != '\x14') {
    local_14 = FUN_017be484();
  }
  local_10 = &DAT_01d1c140;
  local_18 = 0;
  local_60[0] = 2;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_60,0x54);
  return iVar1;
}

