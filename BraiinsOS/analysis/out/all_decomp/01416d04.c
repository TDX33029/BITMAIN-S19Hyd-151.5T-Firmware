// FUN_01416d04 @ 01416d04 size=648 calls_out=10 calls_in=1
// strings: 

void FUN_01416d04(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int extraout_r1;
  int iVar8;
  int *piVar9;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar8 = *param_1;
  if (iVar8 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar8 + 0x1c)) {
      puVar7 = (uint *)(iVar8 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = *puVar7 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    while (piVar4 = (int *)FUN_00d3f614(iVar8 + 0x10), piVar4 != (int *)0x0) {
      piVar9 = piVar4 + 2;
      do {
        if (*piVar9 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar9);
          goto joined_r0x01416e4c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 1;
      DataMemoryBarrier(0xb);
joined_r0x01416e4c:
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        uVar6 = 0;
        cVar1 = (char)piVar4[3];
      }
      else {
        uVar6 = FUN_015bf3f8();
        uVar6 = uVar6 ^ 1;
        cVar1 = (char)piVar4[3];
      }
      if (cVar1 != '\0') {
        uVar3 = (uint)local_3c >> 8;
        local_3c = CONCAT31((int3)uVar3,(char)uVar6);
        local_40 = piVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_018a382c,&DAT_018a4b20);
      }
      iVar5 = piVar4[4];
      *(undefined1 *)(piVar4 + 6) = 0;
      piVar4[4] = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(piVar4[5]);
      }
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar9,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar4);
      }
    }
    if (*param_1 != 0) {
LAB_01416ea4:
      FUN_01416ffc(&local_40,param_1);
      if (((uint)local_40 & 1) == 0) {
        iVar8 = extraout_r1;
        if (local_38 != 0) goto LAB_01416f00;
      }
      else {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a4cc8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x1c) != 0) goto code_r0x01416ed8;
        if (local_40 == (int *)0x0 && local_3c == 0) {
          if (local_38 != 0) {
            local_3c = local_34;
          }
          if (local_38 != 0 && local_3c != 0) {
            thunk_FUN_016d3fb4();
            return;
          }
        }
      }
    }
  }
  return;
code_r0x01416ed8:
  FUN_016da3a8();
  iVar8 = local_3c;
  if (local_40 == (int *)0x0 && local_3c == 0) {
LAB_01416f00:
    if (local_38 != 0) {
      iVar8 = local_34;
    }
    if (local_38 != 0 && iVar8 != 0) {
      thunk_FUN_016d3fb4();
    }
  }
  goto LAB_01416ea4;
}

