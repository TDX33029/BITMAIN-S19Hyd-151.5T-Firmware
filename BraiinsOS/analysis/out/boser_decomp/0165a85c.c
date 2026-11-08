// FUN_0165a85c @ 0165a85c size=92 calls_out=3 calls_in=1
// strings: 

undefined4 * FUN_0165a85c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x90);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x90);
  }
  puVar1[0x18] = param_1;
  *(undefined2 *)((int)puVar1 + 0x5e) = 0;
  *puVar1 = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + 0x17) = 0;
  *param_1 = puVar1;
  return puVar1;
}

