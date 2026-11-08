// FUN_011d97e8 @ 011d97e8 size=84 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d97e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = 1;
  puVar1[3] = &DAT_01c220b8;
  return;
}

