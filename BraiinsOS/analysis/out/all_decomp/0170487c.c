// FUN_0170487c @ 0170487c size=100 calls_out=1 calls_in=0
// strings: 

bool FUN_0170487c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    uVar2 = (*(undefined4 **)(param_2 + 0x14))[1];
    *puVar1 = **(undefined4 **)(param_2 + 0x14);
    puVar1[1] = uVar2;
  }
  return puVar1 != (undefined4 *)0x0;
}

