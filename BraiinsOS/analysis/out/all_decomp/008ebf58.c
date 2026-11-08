// FUN_008ebf58 @ 008ebf58 size=840 calls_out=5 calls_in=7
// strings: BUG: poisoned lock | BUG: poisoned lock

void FUN_008ebf58(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *local_2c;
  undefined1 local_28;
  
  piVar6 = (int *)(param_1 + 0x3d0);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_008ebf88;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_008ebf88:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_1 + 0x3d4) != '\0') {
      uVar10 = 0;
LAB_008ec1dc:
      local_4c = CONCAT31(local_4c._1_3_,(char)uVar10);
      local_50 = piVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: poisoned lock",0x12,&local_50,&DAT_018667e4,&DAT_01866760);
    }
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar7 = param_2[3];
    iVar9 = param_2[4];
    *(int *)(param_1 + 0x3d8) = *param_2;
    *(int *)(param_1 + 0x3dc) = iVar4;
    *(int *)(param_1 + 0x3e0) = iVar5;
    *(int *)(param_1 + 0x3e4) = iVar7;
    *(int *)(param_1 + 1000) = iVar9;
LAB_008ebfbc:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(param_1 + 0x3d4) = 1;
    }
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    if (*(char *)(param_1 + 0x3d4) != '\0') goto LAB_008ec1dc;
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar7 = param_2[3];
    iVar9 = param_2[4];
    *(int *)(param_1 + 0x3d8) = *param_2;
    *(int *)(param_1 + 0x3dc) = iVar4;
    *(int *)(param_1 + 0x3e0) = iVar5;
    *(int *)(param_1 + 0x3e4) = iVar7;
    *(int *)(param_1 + 1000) = iVar9;
    if (uVar10 == 0) goto LAB_008ebfbc;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
  }
  iVar4 = DAT_018d8060;
  DataMemoryBarrier(0xb);
  iVar5 = *param_2;
  if (DAT_018d8068 == 0) {
    do {
      bVar2 = (bool)hasExclusiveAccess((int *)(DAT_018d8060 + 8));
    } while (!bVar2);
    *(int *)(DAT_018d8060 + 8) = iVar5;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  if (iVar5 == 0 || iVar5 == 7) {
    return;
  }
  piVar6 = (int *)(param_1 + 0x390);
  local_50 = (int *)CONCAT31(local_50._1_3_,9);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_008ec064;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_008ec064:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0x394);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar1 = *(char *)(param_1 + 0x394);
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar10;
    local_2c = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: poisoned lock",0x12,&local_2c,&DAT_018667d4,&DAT_01866770);
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x398);
  if (uVar3 < 10) {
    if ((1 << uVar3 & 0x27dU) != 0) goto LAB_008ec128;
    if (uVar3 != 1) goto LAB_008ec0b0;
    iVar4 = *(int *)(param_1 + 0x3a0);
    puVar8 = (undefined4 *)(iVar4 + 4);
    for (iVar5 = *(int *)(param_1 + 0x3a4); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    if (*(int *)(param_1 + 0x39c) == 0) goto LAB_008ec128;
  }
  else {
LAB_008ec0b0:
    if (*(int *)(param_1 + 0x39c) == 0) goto LAB_008ec128;
    iVar4 = *(int *)(param_1 + 0x3a0);
  }
  thunk_FUN_016d3fb4(iVar4);
LAB_008ec128:
  *(int **)(param_1 + 0x398) = local_50;
  *(undefined4 *)(param_1 + 0x39c) = local_4c;
  *(undefined4 *)(param_1 + 0x3a0) = uStack_48;
  *(undefined4 *)(param_1 + 0x3a4) = uStack_44;
  *(undefined4 *)(param_1 + 0x3a8) = local_40;
  *(undefined4 *)(param_1 + 0x3ac) = uStack_3c;
  *(undefined4 *)(param_1 + 0x3b0) = uStack_38;
  *(undefined4 *)(param_1 + 0x3b4) = uStack_34;
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_1 + 0x394) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar4 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar6,0x81,1,param_5);
    return;
  }
  return;
}

