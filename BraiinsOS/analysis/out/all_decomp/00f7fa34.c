// FUN_00f7fa34 @ 00f7fa34 size=148 calls_out=2 calls_in=1
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f7fa34(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 uStack_9;
  
  local_18 = &DAT_01880404;
  local_1c = &local_28;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_24 = 1;
  local_14 = &DAT_60000020;
  iVar1 = FUN_00f9d654(param_2,&local_1c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                 &DAT_0188041c);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  return;
}

