// FUN_00c7ad44 @ 00c7ad44 size=112 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00c7ad44(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar3;
  puVar1[1] = uVar6;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if (iVar2 == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_01874670,puVar1);
}

