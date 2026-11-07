// FUN_00764694 @ 00764694 size=436 calls_out=7 calls_in=1
// strings: 

void FUN_00764694(int param_1)

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
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(*(undefined4 *)(param_1 + 0x28));
    }
    piVar3 = *(int **)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if ((*(char *)(param_1 + 0x74) == '\x03') && (uVar2 = *(ushort *)(param_1 + 0x54), uVar2 != 4)
         ) {
        bVar9 = uVar2 == 3;
        if (bVar9) {
          uVar2 = (ushort)*(byte *)(param_1 + 0x58);
        }
        if (bVar9 && uVar2 == 3) {
          puVar6 = *(undefined4 **)(param_1 + 0x5c);
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
      cVar1 = *(char *)(param_1 + 0x8c);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x50);
      }
      if (bVar9 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x88);
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x84);
        }
        if (bVar9 && cVar1 == '\x03') {
          FUN_0163aa10(param_1 + 100);
          if (*(int *)(param_1 + 0x70) != 0) {
            (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
          }
        }
      }
      FUN_005e6cdc(param_1 + 0x90);
      if (*(int *)(param_1 + 0x9c) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 0x90);
    }
    piVar3 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(*(undefined4 *)(param_1 + 0x28));
    }
    piVar3 = *(int **)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f120(*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

