// FUN_006f5d1c @ 006f5d1c size=592 calls_out=4 calls_in=22
// strings: 

void FUN_006f5d1c(uint *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *local_2c;
  undefined1 local_28;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  puVar8 = param_1 + 1;
  do {
    if (*puVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar8);
      goto LAB_006f5d54;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar2);
  *puVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_006f5d54:
  uVar9 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[2];
  }
  else {
    uVar9 = FUN_015bf3f8();
    uVar9 = uVar9 ^ 1;
    cVar1 = (char)param_1[2];
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar9;
    local_2c = puVar8;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01859134,&DAT_0187a790);
  }
  if (param_1[5] <= param_2) {
LAB_006f5f58:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00412edc,0xb,&DAT_0187a7a0);
  }
  uVar12 = param_1[7];
  puVar7 = (uint *)(param_1[4] + param_2 * 0xc);
  uVar10 = *puVar7;
  uVar11 = puVar7[1];
  uVar4 = puVar7[2];
  *puVar7 = 0;
  puVar7[1] = uVar12;
  if ((uVar10 & 1) == 0) {
    puVar7[1] = uVar11;
    goto LAB_006f5f58;
  }
  uVar10 = param_1[6] - 1;
  param_1[6] = uVar10;
  param_1[7] = param_2;
  if ((param_3 == 0) || (uVar11 != 0)) {
    if (uVar11 == 0) goto LAB_006f5e48;
    (**(code **)(uVar11 + 0xc))(uVar4);
  }
  else {
    iVar6 = param_1[5] * 0xc;
    piVar3 = (int *)(param_1[4] - 0xc);
    do {
      piVar5 = piVar3;
      if (iVar6 == 0) goto LAB_006f5e44;
      iVar6 = iVar6 + -0xc;
      piVar3 = piVar5 + 3;
    } while (piVar5[3] == 0);
    iVar6 = piVar5[4];
    piVar5[4] = 0;
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 4))(piVar5[5]);
    }
  }
LAB_006f5e44:
  uVar10 = param_1[6];
LAB_006f5e48:
  if (uVar10 == 0) {
    do {
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = *param_1 & 0xfffffffd;
  }
  if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar8;
    bVar2 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar2);
  *puVar8 = 0;
  if (uVar9 == 2) {
    software_interrupt(0);
    FUN_016d3496(puVar8,0x81,1,param_5);
    return;
  }
  return;
}

