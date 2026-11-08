// FUN_00c79104 @ 00c79104 size=136 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00c79104(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  puVar2 = (undefined1 *)thunk_FUN_016d4a50(0x18);
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  iVar6 = *(int *)(param_1 + 4);
  *puVar2 = uVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_1 + 0x21);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  puVar2[3] = uVar1;
  *(undefined4 *)(puVar2 + 4) = uVar7;
  *(undefined4 *)(puVar2 + 8) = uVar8;
  *(undefined4 *)(puVar2 + 0xc) = uVar3;
  *(undefined4 *)(puVar2 + 0x10) = uVar4;
  *(undefined4 *)(puVar2 + 0x14) = uVar5;
  if (iVar6 == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0187477c,puVar2);
}

