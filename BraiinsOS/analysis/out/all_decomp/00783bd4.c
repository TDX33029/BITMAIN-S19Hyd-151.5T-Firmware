// FUN_00783bd4 @ 00783bd4 size=120 calls_out=2 calls_in=5
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00783bd4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 uStack_9;
  
  local_10 = 0;
  local_14 = 1;
  local_18 = 0;
  iVar1 = FUN_01668a24(param_2,&local_18,&DAT_0185c0a4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                 &DAT_0185c0cc);
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}

