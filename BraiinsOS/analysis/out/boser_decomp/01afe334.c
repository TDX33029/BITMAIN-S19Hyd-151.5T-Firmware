// FUN_01afe334 @ 01afe334 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_01afe334(undefined4 param_1)

{
  undefined8 uVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_01d53560;
  uVar1 = FUN_01afe0dc(param_1,&local_10,&PTR_01d3b2b0,0);
  if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar1 != 0 && local_10 == 0,(int)((ulonglong)uVar1 >> 0x20),
                 local_c ^ DAT_01d53560,0);
  }
  return;
}

