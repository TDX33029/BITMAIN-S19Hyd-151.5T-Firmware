// FUN_00fef4d8 @ 00fef4d8 size=352 calls_out=3 calls_in=1
// strings: 

void FUN_00fef4d8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iStack_20;
  code *pcStack_1c;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar3 = 0xffffffff;
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x24);
  do {
    if (iVar2 + uVar3 == -1) {
      uVar3 = *(uint *)(param_1 + 8);
      if (uVar3 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_2,uVar3,&DAT_01881c08);
      }
      uVar4 = *(uint *)(*(int *)(param_1 + 4) + param_2 * 4);
      if (uVar5 == *(uint *)(param_1 + 0x18)) {
        FUN_010004e0(param_1 + 0x18);
        uVar3 = *(uint *)(param_1 + 8);
        iVar6 = *(int *)(param_1 + 0x1c);
        iVar2 = *(int *)(param_1 + 0x24);
      }
      puVar7 = (uint *)(iVar6 + uVar5 * 8);
      *puVar7 = param_2;
      puVar7[1] = uVar4;
      *(uint *)(param_1 + 0x20) = uVar5 + 1;
      *(int *)(param_1 + 0x24) = iVar2 + 1;
      if (uVar3 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_2,uVar3,&DAT_01881c18);
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        return;
      }
      pcStack_1c = FUN_00835564;
      iStack_20 = param_1;
      FUN_015ef1b0(&DAT_00582a4d,&iStack_20);
      return;
    }
    if (!CARRY4(uVar5,uVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5 + uVar3,uVar5,&DAT_01881c28);
    }
    iVar1 = uVar3 * 8;
    uVar3 = uVar3 - 1;
  } while (*(uint *)(iVar6 + uVar5 * 8 + iVar1) != param_2);
  if (*(uint *)(param_1 + 8) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_2,*(uint *)(param_1 + 8),&DAT_01881c38);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}

