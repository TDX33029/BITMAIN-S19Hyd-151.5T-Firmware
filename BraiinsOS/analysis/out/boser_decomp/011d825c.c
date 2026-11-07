// FUN_011d825c @ 011d825c size=136 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d825c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = puVar1;
  puVar2[3] = &DAT_01c21f60;
  return;
}

