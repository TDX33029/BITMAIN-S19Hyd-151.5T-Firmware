// FUN_0147539c @ 0147539c size=688 calls_out=6 calls_in=1
// strings: 

void FUN_0147539c(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  int local_70;
  int iStack_6c;
  
  cVar1 = (char)param_1[0xb];
  if (cVar1 == '\0') {
    iVar2 = *param_1;
    puVar7 = (undefined4 *)param_1[1];
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar2);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    FUN_0146a410(param_1 + 6);
    param_1 = param_1 + 10;
    iVar2 = *param_1;
    if (iVar2 == 0) {
      return;
    }
    puVar4 = (uint *)(iVar2 + 0x70);
    do {
      uVar6 = *puVar4;
      bVar8 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar8);
    *puVar4 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 0x60) + 8))(*(undefined4 *)(iVar2 + 100));
    }
    if ((uVar6 & 2) != 0) {
      FUN_016dd1aa(&local_70,(undefined4 *)(iVar2 + 8),0x58);
      *(undefined4 *)(iVar2 + 8) = 4;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (local_70 != 4 || iStack_6c != 0) {
        FUN_0146b2dc(&local_70);
      }
    }
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar8 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar8);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_014751c4(param_1 + 0xc);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      iVar2 = param_1[0xc];
      if (iVar2 != 0) {
        puVar4 = (uint *)(iVar2 + 0x70);
        do {
          uVar6 = *puVar4;
          bVar8 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar8);
        *puVar4 = uVar6 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar6 & 10) == 8) {
          (**(code **)(*(int *)(iVar2 + 0x60) + 8))(*(undefined4 *)(iVar2 + 100));
        }
        if ((uVar6 & 2) != 0) {
          FUN_016dd1aa(&local_70,(undefined4 *)(iVar2 + 8),0x58);
          *(undefined4 *)(iVar2 + 8) = 4;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          if (local_70 != 4 || iStack_6c != 0) {
            FUN_0146b2dc(&local_70);
          }
        }
        piVar3 = (int *)param_1[0xc];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar8 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar8);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_014a545c(param_1[0xc]);
          }
        }
      }
    }
    bVar8 = *(char *)((int)param_1 + 0x2d) != '\0';
    iVar2 = 0;
    if (bVar8) {
      param_1 = param_1 + 10;
      iVar2 = *param_1;
    }
    if (!bVar8 || iVar2 == 0) {
      return;
    }
    puVar4 = (uint *)(iVar2 + 0x70);
    do {
      uVar6 = *puVar4;
      bVar8 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar8);
    *puVar4 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 0x60) + 8))(*(undefined4 *)(iVar2 + 100));
    }
    if ((uVar6 & 2) != 0) {
      FUN_016dd1aa(&local_70,(undefined4 *)(iVar2 + 8),0x58);
      *(undefined4 *)(iVar2 + 8) = 4;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (local_70 != 4 || iStack_6c != 0) {
        FUN_0146b2dc(&local_70);
      }
    }
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar8 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar8);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a545c(*param_1);
    return;
  }
  return;
}

