// FUN_01960938 @ 01960938 size=68 calls_out=2 calls_in=3
// strings: 

undefined4 * FUN_01960938(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_016c9094();
  puVar1[0x23] = param_1;
  *(undefined2 *)((int)puVar1 + 0x8a) = 0;
  *puVar1 = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + 0x22) = 0;
  *param_1 = puVar1;
  return puVar1;
}

