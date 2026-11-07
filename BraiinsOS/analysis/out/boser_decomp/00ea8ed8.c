// FUN_00ea8ed8 @ 00ea8ed8 size=144 calls_out=4 calls_in=2
// strings: 

void FUN_00ea8ed8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_2c,param_2 + 8);
  if (local_2c == 1) {
    local_1c = local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01c1810c,&DAT_01d2c8d8);
  }
  FUN_01359a84(param_1,local_28 + 0x38,param_3,local_28 + 0x158);
  FUN_011967dc(local_28,local_24);
  return;
}

