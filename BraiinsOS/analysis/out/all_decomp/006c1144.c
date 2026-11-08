// FUN_006c1144 @ 006c1144 size=536 calls_out=9 calls_in=1
// strings: 

void FUN_006c1144(uint *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int *local_2c;
  undefined1 local_28;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(uVar3 + 0x1c)) {
      puVar6 = (uint *)(uVar3 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar2);
      *puVar6 = *puVar6 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    while (piVar4 = (int *)FUN_00d3f614(uVar3 + 0x10), piVar4 != (int *)0x0) {
      piVar8 = piVar4 + 2;
      do {
        if (*piVar8 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar8);
          goto LAB_006c11d0;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 1;
      DataMemoryBarrier(0xb);
LAB_006c11d0:
      uVar7 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar4[3];
      }
      else {
        uVar7 = FUN_015bf3f8();
        uVar7 = uVar7 ^ 1;
        cVar1 = (char)piVar4[3];
      }
      if (cVar1 != '\0') {
        local_28 = (undefined1)uVar7;
        local_2c = piVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01858988,&DAT_018a4b20);
      }
      iVar5 = piVar4[4];
      *(undefined1 *)(piVar4 + 6) = 0;
      piVar4[4] = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(piVar4[5]);
      }
      if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar8,0x81,1);
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
    for (uVar3 = *param_1; uVar3 != 0; uVar3 = uVar3 & 1) {
      while (uVar3 = FUN_006b2698(param_1), (uVar3 & 0xff) == 2) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a4cc8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x1c) == 0) {
          return;
        }
        FUN_016da3a8();
      }
    }
  }
  return;
}

