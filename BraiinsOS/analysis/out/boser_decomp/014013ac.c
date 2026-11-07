// FUN_014013ac @ 014013ac size=152 calls_out=4 calls_in=2
// strings: 

void FUN_014013ac(undefined4 param_1)

{
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  FUN_01656cb0(&local_24,param_1);
  if (local_24 == 1) {
    local_14 = local_1c;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01cf3758,&DAT_01cf36f8);
  }
  if (*(char *)(local_20 + 0x38) == '\0') {
    *(undefined1 *)(local_20 + 0x38) = 1;
    FUN_0140147c(local_20 + 8);
    FUN_0140147c(local_20 + 0x20);
  }
  FUN_00a97e8c(local_20,local_1c);
  return;
}

