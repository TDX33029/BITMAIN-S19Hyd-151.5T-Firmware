// FUN_01496cfc @ 01496cfc size=124 calls_out=2 calls_in=2
// strings: 

undefined4 * FUN_01496cfc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined2 *)(puVar1 + 2) = 1;
  *puVar1 = 0;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar2 = param_1;
  *puVar1 = puVar2;
  puVar1[1] = &DAT_018a5090;
  return puVar1;
}

