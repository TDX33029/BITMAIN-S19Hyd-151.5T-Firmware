// FUN_0164df60 @ 0164df60 size=812 calls_out=6 calls_in=3
// strings: driver missing | core missing | core missing

int FUN_0164df60(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_48 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = 3;
  if (local_48 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("driver missing",0xe,&DAT_018acbb0);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  puVar3 = (undefined4 *)((uint)&local_48 | 4);
  *puVar3 = *(undefined4 *)(param_2 + 0x44);
  puVar3[1] = uVar5;
  puVar3[2] = uVar9;
  puVar3[3] = uVar11;
  uVar5 = *(undefined4 *)(param_2 + 0x58);
  uVar9 = *(undefined4 *)(param_2 + 0x5c);
  uVar11 = *(undefined4 *)(param_2 + 0x60);
  puVar3[4] = *(undefined4 *)(param_2 + 0x54);
  puVar3[5] = uVar5;
  puVar3[6] = uVar9;
  puVar3[7] = uVar11;
  iVar6 = *(int *)(param_3 + 200);
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018acbe0);
    }
    iVar12 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_3 + 0xcc);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (iVar12 == 0) {
      iVar12 = 0;
    }
    else {
      FUN_0164c578(iVar12);
      thunk_FUN_016d3fb4(iVar12);
      iVar12 = *(int *)(param_1 + 4) + 1;
    }
    iVar2 = *(int *)(iVar10 + 8);
    pcVar4 = *(code **)(iVar10 + 0x14);
    *(int *)(param_1 + 4) = iVar12;
    *(int *)(param_1 + 8) = param_2;
    (*pcVar4)(iVar6 + (iVar2 - 1U & 0xfffffff8) + 8);
    if (*(int *)(param_1 + 4) != 0) goto LAB_0164e220;
    param_2 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    iVar6 = *(uint *)(param_2 + 0x18) + 1;
    iVar10 = *(int *)(param_2 + 0x1c) + (uint)(0xfffffffe < *(uint *)(param_2 + 0x18));
    iVar12 = *(uint *)(param_2 + 0x20) + 1;
    iVar2 = *(int *)(param_2 + 0x24) + (uint)(0xfffffffe < *(uint *)(param_2 + 0x20));
    puVar3 = (undefined4 *)(param_3 + 0x10);
    *(int *)(param_2 + 0x18) = iVar6;
    *(int *)(param_2 + 0x1c) = iVar10;
    *(int *)(param_2 + 0x20) = iVar12;
    *(int *)(param_2 + 0x24) = iVar2;
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_3 + 0x14) = uVar5;
    piVar8 = (int *)(param_3 + 0x18);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar6;
    *(int *)(param_3 + 0x1c) = iVar10;
    piVar7 = (int *)(param_3 + 0x20);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar12;
    *(int *)(param_3 + 0x24) = iVar2;
    param_2 = FUN_0164dd24(param_1,param_2,param_3,&local_48,&DAT_3b9aca00);
    iVar6 = *(uint *)(param_2 + 0x20) + 1;
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    iVar10 = *(int *)(param_2 + 0x24) + (uint)(0xfffffffe < *(uint *)(param_2 + 0x20));
    *(int *)(param_2 + 0x20) = iVar6;
    *(int *)(param_2 + 0x24) = iVar10;
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_3 + 0x14) = uVar5;
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_3 + 0x1c) = uVar5;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar6;
    *(int *)(param_3 + 0x24) = iVar10;
    iVar6 = *(int *)(param_3 + 0xd0);
  }
  else {
    iVar6 = *(int *)(param_3 + 0xd0);
  }
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018acbe0);
    }
    iVar12 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_3 + 0xd4);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (iVar12 == 0) {
      iVar12 = 0;
    }
    else {
      FUN_0164c578(iVar12);
      thunk_FUN_016d3fb4(iVar12);
      iVar12 = *(int *)(param_1 + 4) + 1;
    }
    iVar2 = *(int *)(iVar10 + 8);
    pcVar4 = *(code **)(iVar10 + 0x14);
    *(int *)(param_1 + 4) = iVar12;
    *(int *)(param_1 + 8) = param_2;
    (*pcVar4)(iVar6 + (iVar2 - 1U & 0xfffffff8) + 8);
    if (*(int *)(param_1 + 4) != 0) {
LAB_0164e220:
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018acbd0);
    }
    param_2 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar8 = (int *)(param_2 + 0x40);
  if (*piVar8 != 3) {
    FUN_0164bf84(piVar8);
  }
  *piVar8 = local_48;
  *(undefined4 *)(param_2 + 0x44) = uStack_44;
  *(undefined4 *)(param_2 + 0x48) = uStack_40;
  *(undefined4 *)(param_2 + 0x4c) = uStack_3c;
  *(undefined4 *)(param_2 + 0x50) = local_38;
  *(undefined4 *)(param_2 + 0x54) = uStack_34;
  *(undefined4 *)(param_2 + 0x58) = uStack_30;
  *(undefined4 *)(param_2 + 0x5c) = uStack_2c;
  *(undefined4 *)(param_2 + 0x60) = uStack_28;
  return param_2;
}

