// FUN_0067dc1c @ 0067dc1c size=96 calls_out=3 calls_in=2
// strings: 

undefined4 * FUN_0067dc1c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x140);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x140);
  }
  puVar1[0x44] = param_1;
  *(undefined2 *)((int)puVar1 + 0x10e) = 0;
  puVar2 = param_1;
  if (param_2 != -1) {
    puVar2 = param_1 + 0x43;
    *param_1 = puVar1;
  }
  *puVar1 = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)puVar2 = 0;
  return puVar1;
}

