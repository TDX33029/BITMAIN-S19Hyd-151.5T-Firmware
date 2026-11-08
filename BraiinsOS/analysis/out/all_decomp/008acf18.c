// FUN_008acf18 @ 008acf18 size=760 calls_out=7 calls_in=2
// strings: 

void FUN_008acf18(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((param_1[9] != 0x80000000) && (uVar7 = param_1[8], param_1[3] < uVar7 + param_2)) {
    puVar3 = (undefined4 *)((uint)&local_60 | 4);
    do {
      if (param_1[0xc] == 0) {
        return;
      }
      uVar4 = param_1[0xb] + 1;
      puVar8 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar9 = (int *)*puVar8;
      iVar11 = puVar8[1];
      uVar5 = uVar4 - param_1[9];
      if (uVar4 < param_1[9]) {
        uVar5 = uVar4;
      }
      param_1[0xb] = uVar5;
      uVar4 = *(uint *)(iVar11 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar5 = uVar4;
      if (uVar4 < 9) {
        uVar5 = 8;
      }
      uVar5 = uVar5 - 1 & 0xfffffff8;
      puVar13 = (uint *)((int)piVar9 + uVar5 + 8);
      if ((*puVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      piVar10 = (int *)((int)piVar9 + uVar5 + 0x10);
      do {
        if (*piVar10 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar10);
          goto LAB_008acff4;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = 1;
      DataMemoryBarrier(0xb);
LAB_008acff4:
      uVar14 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)((int)piVar9 + uVar5 + 0x14);
      }
      else {
        uVar14 = FUN_015bf3f8();
        uVar14 = uVar14 ^ 1;
        cVar1 = *(char *)((int)piVar9 + uVar5 + 0x14);
      }
      if (cVar1 != '\0') {
        uVar7 = (uint)local_3c >> 8;
        local_3c = CONCAT31((int3)uVar7,(char)uVar14);
        local_40 = piVar10;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01863b4c,&DAT_01886a94);
      }
      iVar12 = *(int *)((int)piVar9 + uVar5 + 0x18);
      *(undefined4 *)((int)piVar9 + uVar5 + 0x18) = 4;
      if (iVar12 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      local_40 = *(int **)((int)piVar9 + uVar5 + 0x1c);
      local_3c = *(undefined4 *)((int)piVar9 + uVar5 + 0x20);
      uStack_38 = *(undefined4 *)((int)piVar9 + uVar5 + 0x24);
      local_34 = *(undefined4 *)((int)piVar9 + uVar5 + 0x28);
      uStack_30 = *(undefined4 *)((int)piVar9 + uVar5 + 0x2c);
      uStack_2c = *(undefined4 *)((int)piVar9 + uVar5 + 0x30);
      uStack_28 = *(undefined4 *)((int)piVar9 + uVar5 + 0x34);
      if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)((int)piVar9 + uVar5 + 0x14) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar10,0x81,1);
      }
      *puVar3 = local_40;
      puVar3[1] = local_3c;
      puVar3[2] = uStack_38;
      puVar3[3] = local_34;
      puVar3[4] = uStack_30;
      puVar3[5] = uStack_2c;
      puVar3[6] = uStack_28;
      local_60 = iVar12;
      (**(code **)(iVar11 + 0xc))((int)puVar13 + (uVar4 - 1 & 0xffffffd0) + 0x30);
      uVar5 = *param_1;
      uVar4 = param_1[3];
      if (uVar4 == uVar5) {
        FUN_008ac0b8(param_1);
        uVar5 = *param_1;
        uVar4 = param_1[3];
      }
      uVar14 = param_1[2] + uVar4;
      param_1[3] = uVar4 + 1;
      uVar4 = uVar14 - uVar5;
      if (uVar14 < uVar5) {
        uVar4 = uVar14;
      }
      piVar10 = (int *)(param_1[1] + uVar4 * 0x20);
      *piVar10 = local_60;
      piVar10[1] = iStack_5c;
      piVar10[2] = iStack_58;
      piVar10[3] = iStack_54;
      piVar10[4] = local_50;
      piVar10[5] = iStack_4c;
      piVar10[6] = iStack_48;
      piVar10[7] = iStack_44;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089e6a8(piVar9,iVar11);
      }
    } while (param_1[3] < uVar7 + param_2);
  }
  return;
}

