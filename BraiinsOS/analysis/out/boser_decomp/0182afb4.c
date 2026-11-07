// FUN_0182afb4 @ 0182afb4 size=76 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0182afb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = local_14 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = uStack_18;
  puVar1[3] = local_14;
  return;
}

