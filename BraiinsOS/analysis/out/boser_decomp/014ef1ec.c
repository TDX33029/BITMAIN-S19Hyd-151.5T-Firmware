// FUN_014ef1ec @ 014ef1ec size=100 calls_out=4 calls_in=3
// strings: 

int FUN_014ef1ec(void)

{
  int iVar1;
  undefined4 local_60 [18];
  undefined2 local_18;
  undefined4 local_14;
  undefined *local_10;
  
  local_14 = FUN_01969590();
  local_18 = 5;
  local_60[0] = 2;
  local_10 = &DAT_01d27384;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_60,0x54);
  return iVar1;
}

