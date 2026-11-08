// FUN_016ebb58 @ 016ebb58 size=184 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_016ebb58(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0x800;
    puVar1[1] = 0x100;
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    puVar4 = *(undefined4 **)(param_2 + 0x14);
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      uVar5 = *puVar4;
      puVar1[3] = puVar4[3];
      puVar1[1] = uVar2;
      *puVar1 = uVar5;
      puVar1[2] = uVar3;
      return 1;
    }
  }
  return 0;
}

