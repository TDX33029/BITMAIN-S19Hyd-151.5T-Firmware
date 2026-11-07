// FUN_01a63640 @ 01a63640 size=116 calls_out=3 calls_in=6
// strings: 

undefined4 FUN_01a63640(undefined4 param_1)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  
  FUN_01933ff0(&local_1c,param_1);
  if (local_1c == 1) {
    local_c = local_14;
    local_10 = local_18;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_10,&DAT_01d2cac8,&DAT_01d2c858);
  }
  uVar1 = *(undefined4 *)(local_18 + 0xb8);
  FUN_00a97e8c(local_18,local_14);
  return uVar1;
}

