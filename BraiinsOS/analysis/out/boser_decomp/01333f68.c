// FUN_01333f68 @ 01333f68 size=280 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01333f68(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  code *local_1c;
  
  local_28 = (undefined1 *)&pcStack_30;
  iVar8 = *(int *)(param_1 + 0x24);
  if (iVar8 != 0) {
    iVar9 = *(int *)(param_1 + 0x20);
    iVar6 = -iVar9;
    iVar3 = iVar9 * -8 + 4;
    do {
      iVar6 = iVar6 + 1;
      if (iVar6 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce658c);
      }
      iVar9 = iVar9 + -1;
      *(int *)(param_1 + 0x20) = iVar9;
      uVar5 = *(uint *)(*(int *)(param_1 + 0x1c) + iVar6 * -8);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) - iVar3);
      if (*(uint *)(param_1 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,*(uint *)(param_1 + 8),&DAT_01ce659c);
      }
      iVar3 = iVar3 + 8;
      iVar8 = iVar8 + -1;
      *(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4) = *puVar1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce657c);
  }
  iVar8 = *(int *)(param_1 + 0x14) + -1;
  puVar4 = (undefined8 *)(*(int *)(param_1 + 0x10) + iVar8 * 0xc);
  uVar2 = *puVar4;
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(int *)(param_1 + 0x14) = iVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  pcStack_30 = "pop";
  uStack_2c = 3;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    local_20 = param_1 + 0xc;
    local_1c = FUN_0133c540;
    local_24 = &LAB_018a13b8;
    FUN_019a7988(&DAT_005bd369,&local_28);
  }
  return uVar2;
}

