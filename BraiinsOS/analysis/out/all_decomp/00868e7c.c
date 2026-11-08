// FUN_00868e7c @ 00868e7c size=72 calls_out=2 calls_in=0
// strings: 

void FUN_00868e7c(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 in_d0;
  
  puVar1 = (undefined8 *)thunk_FUN_016d4a50(0x58);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x58);
  }
  *(undefined1 *)((int)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 10) = param_1;
  *puVar1 = in_d0;
  return;
}

