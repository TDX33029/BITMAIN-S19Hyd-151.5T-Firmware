// FUN_0128b2ac @ 0128b2ac size=108 calls_out=2 calls_in=1
// strings: `NaiveDateTime - TimeDelta` overflowed

void FUN_0128b2ac(int *param_1)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_0128f970(&local_20,param_1,1,0,0);
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("`NaiveDateTime - TimeDelta` overflowed",0x26,&DAT_01c261b8);
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}

