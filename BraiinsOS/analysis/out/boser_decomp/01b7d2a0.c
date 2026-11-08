// FUN_01b7d2a0 @ 01b7d2a0 size=288 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01b7d2a0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint local_38 [2];
  int local_30;
  int local_24;
  
  local_24 = DAT_01d53560;
  lVar1 = 0;
  iVar2 = FUN_01bf0028(0,local_38);
  if (iVar2 == 0) {
    lVar1 = (ulonglong)local_38[0] * 1000000000 + (longlong)local_30;
  }
  *param_1 = lVar1;
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

