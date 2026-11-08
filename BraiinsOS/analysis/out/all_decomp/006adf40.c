// FUN_006adf40 @ 006adf40 size=604 calls_out=10 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x006ae150) */

void FUN_006adf40(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int *local_e8;
  undefined1 local_e4;
  
  iVar7 = *param_1;
  if (iVar7 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar7 + 0x1c)) {
      puVar6 = (uint *)(iVar7 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar2);
      *puVar6 = *puVar6 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    while (piVar3 = (int *)FUN_00d3f614(iVar7 + 0x10), piVar3 != (int *)0x0) {
      piVar8 = piVar3 + 2;
      do {
        if (*piVar8 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar8);
          if ((DAT_018dd988 & 0x7fffffff) == 0) goto LAB_006adfe4;
          goto LAB_006ae08c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 1;
      DataMemoryBarrier(0xb);
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
LAB_006adfe4:
        uVar5 = 0;
        cVar1 = (char)piVar3[3];
      }
      else {
LAB_006ae08c:
        uVar5 = FUN_015bf3f8();
        uVar5 = uVar5 ^ 1;
        cVar1 = (char)piVar3[3];
      }
      if (cVar1 != '\0') {
        local_e4 = (undefined1)uVar5;
        local_e8 = piVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_e8,&DAT_01858988,&DAT_018a4b20);
      }
      iVar4 = piVar3[4];
      *(undefined1 *)(piVar3 + 6) = 0;
      piVar3[4] = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(piVar3[5]);
      }
      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar3 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar8,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar3);
      }
    }
    if (*param_1 != 0) {
LAB_006ae0f4:
      FUN_006ada28(&local_e8,param_1);
      if (local_e8 == (int *)0x80000001) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a4cc8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x1c) != 0) goto code_r0x006ae128;
      }
      else if (local_e8 != (int *)0x80000000) goto LAB_006ae0ec;
    }
  }
  return;
code_r0x006ae128:
  FUN_016da3a8();
  if (-0x7fffffff < (int)local_e8) {
LAB_006ae0ec:
    FUN_006ade10(&local_e8);
  }
  goto LAB_006ae0f4;
}

