// FUN_00a8dea4 @ 00a8dea4 size=700 calls_out=7 calls_in=3
// strings: 

void FUN_00a8dea4(uint *param_1,int param_2)

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
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_1[9] != 0x80000000) && (uVar7 = param_1[8], param_1[3] < uVar7 + param_2)) {
    puVar3 = (undefined4 *)((uint)&local_50 | 4);
    do {
      if (param_1[0xc] == 0) {
        return;
      }
      uVar4 = param_1[0xb] + 1;
      puVar8 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar9 = (int *)*puVar8;
      iVar12 = puVar8[1];
      uVar5 = uVar4 - param_1[9];
      if (uVar4 < param_1[9]) {
        uVar5 = uVar4;
      }
      param_1[0xb] = uVar5;
      uVar4 = *(uint *)(iVar12 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar5 = uVar4;
      if (uVar4 < 5) {
        uVar5 = 4;
      }
      uVar5 = uVar5 - 1 & 0xfffffff8;
      piVar10 = (int *)((int)piVar9 + uVar5 + 8);
      if (*piVar10 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      piVar11 = (int *)((int)piVar9 + uVar5 + 0xc);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar11);
          goto LAB_00a8df80;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
LAB_00a8df80:
      uVar14 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)((int)piVar9 + uVar5 + 0x10);
      }
      else {
        uVar14 = FUN_015bf3f8();
        uVar14 = uVar14 ^ 1;
        cVar1 = *(char *)((int)piVar9 + uVar5 + 0x10);
      }
      if (cVar1 != '\0') {
        uVar7 = (uint)local_34 >> 8;
        local_34 = CONCAT31((int3)uVar7,(char)uVar14);
        local_38 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0186dc08,&DAT_01886a94);
      }
      iVar13 = *(int *)((int)piVar9 + uVar5 + 0x14);
      *(undefined4 *)((int)piVar9 + uVar5 + 0x14) = 0;
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      local_38 = *(int **)((int)piVar9 + uVar5 + 0x18);
      local_34 = *(undefined4 *)((int)piVar9 + uVar5 + 0x1c);
      uStack_30 = *(undefined4 *)((int)piVar9 + uVar5 + 0x20);
      uStack_2c = *(undefined4 *)((int)piVar9 + uVar5 + 0x24);
      if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)((int)piVar9 + uVar5 + 0x10) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      *puVar3 = local_38;
      puVar3[1] = local_34;
      puVar3[2] = uStack_30;
      puVar3[3] = uStack_2c;
      local_50 = iVar13;
      (**(code **)(iVar12 + 0xc))((int)piVar10 + (uVar4 - 1 & 0xffffffe0) + 0x20);
      uVar5 = *param_1;
      uVar4 = param_1[3];
      if (uVar4 == uVar5) {
        FUN_00aa28b4(param_1);
        uVar5 = *param_1;
        uVar4 = param_1[3];
      }
      uVar14 = param_1[2] + uVar4;
      param_1[3] = uVar4 + 1;
      uVar4 = uVar14 - uVar5;
      if (uVar14 < uVar5) {
        uVar4 = uVar14;
      }
      piVar10 = (int *)(param_1[1] + uVar4 * 0x14);
      *piVar10 = local_50;
      piVar10[1] = iStack_4c;
      piVar10[2] = iStack_48;
      piVar10[3] = iStack_44;
      piVar10[4] = iStack_40;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aace1c(piVar9,iVar12);
      }
    } while (param_1[3] < uVar7 + param_2);
  }
  return;
}

