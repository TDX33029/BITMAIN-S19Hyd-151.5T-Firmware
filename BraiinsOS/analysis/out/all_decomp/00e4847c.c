// FUN_00e4847c @ 00e4847c size=716 calls_out=8 calls_in=3
// strings: 

void FUN_00e4847c(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_250 [70];
  int *local_138;
  undefined1 local_134;
  
  if ((param_1[9] != 0x80000000) && (uVar6 = param_1[8], param_1[3] < uVar6 + param_2)) {
    do {
      if (param_1[0xc] == 0) {
        return;
      }
      uVar3 = param_1[0xb] + 1;
      puVar7 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar8 = (int *)*puVar7;
      iVar12 = puVar7[1];
      uVar4 = uVar3 - param_1[9];
      if (uVar3 < param_1[9]) {
        uVar4 = uVar3;
      }
      param_1[0xb] = uVar4;
      uVar3 = *(uint *)(iVar12 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar4 = uVar3;
      if (uVar3 < 9) {
        uVar4 = 8;
      }
      uVar4 = uVar4 - 1 & 0xfffffff8;
      puVar9 = (uint *)((int)piVar8 + uVar4 + 8);
      if ((*puVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      piVar11 = (int *)((int)piVar8 + uVar4 + 0x10);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar11);
          goto LAB_00e4855c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
LAB_00e4855c:
      uVar10 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)((int)piVar8 + uVar4 + 0x14);
      }
      else {
        uVar10 = FUN_015bf3f8();
        uVar10 = uVar10 ^ 1;
        cVar1 = *(char *)((int)piVar8 + uVar4 + 0x14);
      }
      if (cVar1 != '\0') {
        local_134 = (undefined1)uVar10;
        local_138 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_138,&DAT_0187a7b0,&DAT_01886a94);
      }
      iVar13 = *(int *)((int)piVar8 + uVar4 + 0x18);
      *(undefined4 *)((int)piVar8 + uVar4 + 0x18) = 3;
      if (iVar13 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      FUN_016dd1aa(&local_138,(int)piVar8 + uVar4 + 0x1c,0x114);
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)((int)piVar8 + uVar4 + 0x14) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      local_250[0] = iVar13;
      FUN_016dd1aa((uint)local_250 | 4,&local_138,0x114);
      (**(code **)(iVar12 + 0xc))((int)puVar9 + (uVar3 - 1 & 0xfffffed8) + 0x128);
      uVar4 = *param_1;
      uVar3 = param_1[3];
      if (uVar3 == uVar4) {
        FUN_00aa2c5c(param_1);
        uVar4 = *param_1;
        uVar3 = param_1[3];
      }
      uVar10 = param_1[2] + uVar3;
      param_1[3] = uVar3 + 1;
      uVar3 = uVar10 - uVar4;
      if (uVar10 < uVar4) {
        uVar3 = uVar10;
      }
      FUN_016dd1aa(uVar3 * 0x118 + param_1[1],local_250,0x118);
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac364(piVar8,iVar12);
      }
    } while (param_1[3] < uVar6 + param_2);
  }
  return;
}

