// FUN_00e48800 @ 00e48800 size=732 calls_out=8 calls_in=3
// strings: 

void FUN_00e48800(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int local_1c0;
  int local_1bc;
  undefined1 auStack_1b8 [200];
  int *local_f0;
  undefined1 local_ec;
  
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
      uVar4 = 8;
      if (8 < uVar3) {
        uVar4 = uVar3;
      }
      uVar4 = uVar4 - 1 & 0xfffffff8;
      puVar14 = (uint *)((int)piVar8 + uVar4 + 8);
      if ((*puVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      piVar11 = (int *)((int)piVar8 + uVar4 + 0x10);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar11);
          goto LAB_00e488e0;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
LAB_00e488e0:
      uVar9 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)((int)piVar8 + uVar4 + 0x14);
      }
      else {
        uVar9 = FUN_015bf3f8();
        uVar9 = uVar9 ^ 1;
        cVar1 = *(char *)((int)piVar8 + uVar4 + 0x14);
      }
      if (cVar1 != '\0') {
        local_ec = (undefined1)uVar9;
        local_f0 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_0187a7b0,&DAT_01886a94);
      }
      iVar13 = *(int *)((int)piVar8 + uVar4 + 0x18);
      iVar10 = *(int *)((int)piVar8 + uVar4 + 0x1c);
      *(undefined4 *)((int)piVar8 + uVar4 + 0x18) = 8;
      *(undefined4 *)((int)piVar8 + uVar4 + 0x1c) = 0;
      if (iVar13 == 8 && iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      FUN_016dd1aa(&local_f0,(int)piVar8 + uVar4 + 0x20,200);
      if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
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
      local_1c0 = iVar13;
      local_1bc = iVar10;
      FUN_016dd1aa(auStack_1b8,&local_f0,200);
      (**(code **)(iVar12 + 0xc))((int)puVar14 + (uVar3 - 1 & 0xffffff20) + 0xe0);
      uVar4 = *param_1;
      uVar3 = param_1[3];
      if (uVar3 == uVar4) {
        FUN_00aa25c8(param_1);
        uVar4 = *param_1;
        uVar3 = param_1[3];
      }
      uVar9 = param_1[2] + uVar3;
      param_1[3] = uVar3 + 1;
      uVar3 = uVar9 - uVar4;
      if (uVar9 < uVar4) {
        uVar3 = uVar9;
      }
      FUN_016dd1aa(uVar3 * 0xd0 + param_1[1],&local_1c0,0xd0);
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aabde0(piVar8,iVar12);
      }
    } while (param_1[3] < uVar6 + param_2);
  }
  return;
}

