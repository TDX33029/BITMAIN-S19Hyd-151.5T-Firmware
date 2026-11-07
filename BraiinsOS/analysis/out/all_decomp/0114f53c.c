// FUN_0114f53c @ 0114f53c size=112 calls_out=2 calls_in=1
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0114f53c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 uStack_9;
  
  local_10 = 0;
  local_14 = 1;
  local_18 = 0;
  iVar1 = FUN_014f4e40(param_2,&local_18);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                 &DAT_01888af4);
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}

