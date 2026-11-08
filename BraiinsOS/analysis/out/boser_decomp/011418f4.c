// FUN_011418f4 @ 011418f4 size=176 calls_out=5 calls_in=2
// strings: assertion failed: size <= proto::MAX_WINDOW_SIZE

void FUN_011418f4(int param_1,int param_2)

{
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: size <= proto::MAX_WINDOW_SIZE",0x30,&DAT_01c20a0c);
  }
  FUN_01933ff0(&local_24,param_1 + 8);
  if (local_24 == 1) {
    local_14 = local_1c;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01c1810c,&DAT_01d2c928);
  }
  FUN_0135bf1c(local_20 + 0x38,param_2,local_20 + 0xe0);
  FUN_011967dc(local_20,local_1c);
  return;
}

