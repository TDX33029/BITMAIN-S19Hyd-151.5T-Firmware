// FUN_01a3c89c @ 01a3c89c size=116 calls_out=3 calls_in=2
// strings: 

undefined1 FUN_01a3c89c(int param_1)

{
  undefined1 uVar1;
  int local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  
  FUN_01656cb0(&local_1c,param_1 + 0x18);
  if (local_1c == 1) {
    local_c = local_14;
    local_10 = local_18;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_10,&DAT_01d2bd10,&DAT_01d2bc00);
  }
  uVar1 = *(undefined1 *)(local_18 + 0x20);
  FUN_00a97e8c(local_18,local_14);
  return uVar1;
}

