// FUN_014b64c8 @ 014b64c8 size=116 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_014b64c8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  if (iVar2 == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&UNK_01cf99c0,puVar1);
}

