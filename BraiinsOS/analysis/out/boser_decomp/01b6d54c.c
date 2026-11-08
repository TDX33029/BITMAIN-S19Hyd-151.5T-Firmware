// FUN_01b6d54c @ 01b6d54c size=188 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b6d54c(int *param_1)

{
  undefined1 auStack_28 [8];
  undefined1 *local_20;
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01bed93e(auStack_28,0,0x10,0);
  local_20 = (undefined1 *)(*param_1 * 10);
  if (0x3b9ac9fe < *param_1 * 10) {
    local_20 = &DAT_3b9ac9ff;
  }
  *param_1 = (int)local_20;
  FUN_01bf01aa(auStack_28);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

