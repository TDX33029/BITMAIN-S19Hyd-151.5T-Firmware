// FUN_016df13c @ 016df13c size=128 calls_out=4 calls_in=4
// strings: 

undefined4 * FUN_016df13c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte local_1c [12];
  
  FUN_012fbd94(local_1c,param_1,param_2);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *puVar1 = 1;
  puVar1[1] = param_2;
  puVar1[2] = 1;
  puVar1[4] = 1;
  puVar1[3] = param_2;
  FUN_01bed93e(puVar1 + 5,0,0x1c);
  *(undefined2 *)((int)puVar1 + 0x31) = 0x101;
  *(byte *)(puVar1 + 0xc) = local_1c[0] ^ 1;
  return puVar1;
}

