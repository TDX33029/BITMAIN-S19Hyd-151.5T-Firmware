// FUN_00e4529c @ 00e4529c size=296 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_00e4529c(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *local_2c;
  undefined1 uStack_25;
  
  iVar8 = *(int *)(param_2 + 4);
  puVar9 = *(undefined4 **)(param_2 + 8);
  uVar1 = -(int)puVar9;
  uVar2 = ((uint)((int)puVar9 + 7) & uVar1) + iVar8;
  puVar5 = puVar9;
  if (puVar9 < &DAT_00000005) {
    puVar5 = (undefined4 *)&DAT_00000004;
  }
  if (0x80000000U - (int)puVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018574d8,&DAT_01857540);
  }
  puVar7 = (undefined4 *)((uint)((int)puVar5 + (uVar2 - 1)) & -(int)puVar5);
  if (puVar7 == (undefined4 *)0x0) {
    puVar4 = puVar5;
  }
  else {
    bVar11 = &DAT_00000007 < puVar9;
    bVar10 = puVar9 == (undefined4 *)&DAT_00000008;
    if (puVar9 < &DAT_00000009) {
      bVar11 = puVar7 <= puVar5;
      bVar10 = puVar5 == puVar7;
    }
    if (!bVar11 || bVar10) {
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(puVar7);
    }
    else {
      local_2c = (undefined4 *)0x0;
      iVar3 = FUN_016d51b0(&local_2c,puVar5,puVar7);
      if (iVar3 != 0) goto LAB_00e453bc;
      puVar4 = local_2c;
    }
    if (puVar4 == (undefined4 *)0x0) {
LAB_00e453bc:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(puVar5,puVar7);
    }
  }
  puVar6 = (undefined1 *)((int)puVar9 + -1);
  *puVar4 = 1;
  puVar4[1] = 1;
  FUN_016dd1aa((undefined1 *)((int)puVar4 + ((uint)puVar6 & 0xfffffff8) + 8),param_1,iVar8);
  if (((uint)(puVar6 + ((uint)(puVar6 + iVar8) & uVar1)) & uVar1) != 0) {
    thunk_FUN_016d3fb4(param_1);
  }
  return CONCAT44(param_2,puVar4);
}

