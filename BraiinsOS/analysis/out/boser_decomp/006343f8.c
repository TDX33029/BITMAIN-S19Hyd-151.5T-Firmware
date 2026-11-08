// FUN_006343f8 @ 006343f8 size=120 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_006343f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x18);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  *puVar1 = *(undefined4 *)(param_1 + 0x20);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&UNK_01c02d18,puVar1);
}

