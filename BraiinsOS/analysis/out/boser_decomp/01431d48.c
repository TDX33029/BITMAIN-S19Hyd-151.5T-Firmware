// FUN_01431d48 @ 01431d48 size=200 calls_out=5 calls_in=2
// strings: 

int * FUN_01431d48(int param_1)

{
  int *piVar1;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_01933ff0(&local_2c,param_1 + 8);
    if (local_2c == 1) {
      local_1c = local_24;
      local_20 = local_28;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01cf5538,&DAT_01cf5800);
    }
    piVar1 = (int *)0x0;
    if (*(char *)(local_28 + 0x44) == '\x01') {
      piVar1 = (int *)FUN_0143b8e8(0xb);
      if (*piVar1 != 0) {
        FUN_00f80320(*piVar1,piVar1[1]);
      }
      *piVar1 = 1;
      piVar1[1] = (int)&DAT_01cf5ed0;
    }
    FUN_00a97e8c(local_28,local_24);
  }
  return piVar1;
}

