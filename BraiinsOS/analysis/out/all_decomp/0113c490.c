// FUN_0113c490 @ 0113c490 size=116 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_0113c490(int param_1)

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
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  if (iVar2 == 2) {
    FUN_0113d66c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_01888770,puVar1);
}

