// FUN_00648fd8 @ 00648fd8 size=436 calls_out=7 calls_in=5
// strings: 

void FUN_00648fd8(int param_1)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(*(undefined4 *)(param_1 + 0x20));
    }
    piVar3 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if ((*(char *)(param_1 + 0x6c) == '\x03') && (uVar2 = *(ushort *)(param_1 + 0x4c), uVar2 != 4)
         ) {
        bVar9 = uVar2 == 3;
        if (bVar9) {
          uVar2 = (ushort)*(byte *)(param_1 + 0x50);
        }
        if (bVar9 && uVar2 == 3) {
          puVar6 = *(undefined4 **)(param_1 + 0x54);
          uVar7 = *puVar6;
          puVar8 = (undefined4 *)puVar6[1];
          pcVar5 = (code *)*puVar8;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar7);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(uVar7);
          }
          thunk_FUN_016d3fb4(puVar6);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x84);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x48);
      }
      if (bVar9 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x80);
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x7c);
        }
        if (bVar9 && cVar1 == '\x03') {
          FUN_0163aa10(param_1 + 0x5c);
          if (*(int *)(param_1 + 0x68) != 0) {
            (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
          }
        }
      }
      FUN_005e6cdc(param_1 + 0x88);
      if (*(int *)(param_1 + 0x94) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 0x88);
    }
    piVar3 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(*(undefined4 *)(param_1 + 0x20));
    }
    piVar3 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f120(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}

