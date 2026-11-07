// FUN_016ea834 @ 016ea834 size=112 calls_out=1 calls_in=0
// strings: 

bool FUN_016ea834(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0x800;
    puVar1[2] = 2;
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    *puVar1 = **(undefined4 **)(param_2 + 0x14);
  }
  return puVar1 != (undefined4 *)0x0;
}

