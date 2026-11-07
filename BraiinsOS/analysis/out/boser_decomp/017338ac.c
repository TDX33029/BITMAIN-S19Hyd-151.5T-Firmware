// FUN_017338ac @ 017338ac size=148 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_017338ac(int param_1)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  
  FUN_01933ff0(&local_1c,param_1 + 8);
  if (local_1c == 1) {
    local_c = local_14;
    local_10 = local_18;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_10,&DAT_01d194ac,&DAT_01d2c918);
  }
  uVar1 = 1;
  if (*(int *)(local_18 + 0x14) == 0 && *(int *)(local_18 + 0x1c) == 0) {
    uVar1 = 0;
    if (1 < *(uint *)(local_18 + 0x1a0)) {
      uVar1 = 1;
    }
  }
  FUN_00a97e8c(local_18,local_14);
  return uVar1;
}

