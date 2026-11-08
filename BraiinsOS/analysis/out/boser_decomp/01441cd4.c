// FUN_01441cd4 @ 01441cd4 size=252 calls_out=8 calls_in=0
// strings: 

void FUN_01441cd4(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if ((*param_1 & 7) == 3) {
    uVar8 = param_1[2];
    if (uVar8 != 0) {
      puVar9 = (undefined4 *)param_1[3];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_01be4678(uVar8);
      }
    }
    FUN_017ccbf4(param_1 + 4);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  if (param_1[7] != 0) {
    thunk_FUN_01be4678(param_1[6]);
  }
  uVar8 = param_1[9];
  FUN_01410ec8(uVar8,param_1[10]);
  FUN_0134aee0(param_1[8],uVar8,4,0x34);
  FUN_008e0ddc(param_1 + 0xb);
  FUN_0178e884(param_1[0x10]);
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  if ((char)param_1[0x12] != '\x01') {
    piVar3 = (int *)param_1[0x13];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(param_1[0x13]);
      }
    }
    FUN_0137fc14();
    FUN_01383f10();
    piVar3 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01381a18(param_1[0x14]);
      return;
    }
    return;
  }
  uVar8 = param_1[0x14];
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(uVar8 + 8);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 0;
  DataMemoryBarrier(0xb);
  if (iVar6 != 0) {
    puVar4 = (uint *)(uVar8 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar6 = *(int *)(uVar8 + 0xc);
      *(undefined4 *)(uVar8 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(uVar8 + 0x10));
      }
    }
  }
  piVar3 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[0x14]);
  }
  FUN_01a69470(param_1 + 0x13);
  piVar3 = (int *)param_1[0x15];
  FUN_01437370();
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar3[2] != 3 || piVar3[3] != 0) {
    if (piVar3[9] != 0) {
      thunk_FUN_01be4678(piVar3[8]);
    }
    iVar6 = piVar3[0xb];
    FUN_01410ec8(iVar6,piVar3[0xc]);
    FUN_0134aee0(piVar3[10],iVar6,4,0x34);
    FUN_008e0ddc(piVar3 + 0xd);
  }
  if (piVar3[0x14] != 0) {
    (**(code **)(piVar3[0x14] + 0xc))(piVar3[0x15]);
  }
  if (piVar3[0x17] != 0) {
    (**(code **)(piVar3[0x17] + 0xc))(piVar3[0x18]);
  }
  if (piVar3 != (int *)&DAT_ffffffff) {
    piVar2 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar3);
      return;
    }
  }
  return;
}

