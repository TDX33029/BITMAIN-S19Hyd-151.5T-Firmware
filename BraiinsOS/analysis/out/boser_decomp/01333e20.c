// FUN_01333e20 @ 01333e20 size=304 calls_out=3 calls_in=1
// strings: 

void FUN_01333e20(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_28;
  code *local_24;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x24);
  uVar5 = 0xffffffff;
  do {
    if (iVar4 + uVar5 == -1) {
      uVar5 = *(uint *)(param_1 + 8);
      if (uVar5 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_2,uVar5,&DAT_01ce65ac);
      }
      uVar7 = *(uint *)(*(int *)(param_1 + 4) + param_2 * 4);
      if (uVar6 == *(uint *)(param_1 + 0x18)) {
        FUN_015f5ab8(param_1 + 0x18);
        uVar5 = *(uint *)(param_1 + 8);
        iVar2 = *(int *)(param_1 + 0x1c);
        iVar4 = *(int *)(param_1 + 0x24);
      }
      puVar3 = (uint *)(iVar2 + uVar6 * 8);
      *puVar3 = param_2;
      puVar3[1] = uVar7;
      *(uint *)(param_1 + 0x20) = uVar6 + 1;
      *(int *)(param_1 + 0x24) = iVar4 + 1;
      if (uVar5 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_2,uVar5,&DAT_01ce65bc);
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        return;
      }
      local_24 = FUN_0133c484;
      local_28 = param_1;
      FUN_019a7988(&DAT_005ab067,&local_28);
      return;
    }
    if (!CARRY4(uVar6,uVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6 + uVar5,uVar6,&DAT_01ce65cc);
    }
    iVar1 = uVar5 * 8;
    uVar5 = uVar5 - 1;
  } while (*(uint *)(iVar2 + uVar6 * 8 + iVar1) != param_2);
  if (*(uint *)(param_1 + 8) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 8),&DAT_01ce65dc);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}

