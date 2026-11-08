// FUN_01afdebc @ 01afdebc size=168 calls_out=2 calls_in=6
// strings: 

void FUN_01afdebc(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_1c = *param_1;
  uStack_18 = param_1[1];
  local_14 = DAT_01d53560;
  uVar1 = FUN_01afd8d0(&local_1c,&local_20,0,0);
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar1 != 0 && local_20 == param_2,(int)((ulonglong)uVar1 >> 0x20),
                 local_14 ^ DAT_01d53560,0);
  }
  return;
}

