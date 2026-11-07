// FUN_0130a890 @ 0130a890 size=68 calls_out=2 calls_in=4
// strings: 

undefined4 * FUN_0130a890(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_016c90b4();
  puVar1[0xd] = param_1;
  *(undefined2 *)((int)puVar1 + 0x32) = 0;
  *puVar1 = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  *param_1 = puVar1;
  return puVar1;
}

