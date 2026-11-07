// FUN_00843ea4 @ 00843ea4 size=532 calls_out=5 calls_in=0
// strings: BUG: failed to lock glitch monitor

void FUN_00843ea4(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *local_2c;
  undefined1 local_28;
  
  piVar7 = (int *)(param_2 + 0x158);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_00843ed0;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_00843ed0:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0x15c);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar1 = *(char *)(param_2 + 0x15c);
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar10;
    local_2c = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: failed to lock glitch monitor",0x22,&local_2c,&DAT_018610f8,&DAT_0186097c);
  }
  iVar5 = *(int *)(param_2 + 0x160);
  iVar15 = *(int *)(param_2 + 0x168);
  iVar16 = *(int *)(param_2 + 0x16c);
  iVar13 = *(int *)(param_2 + 0x170);
  iVar9 = *(int *)(iVar5 + 0x10);
  *(int *)(param_2 + 0x168) = iVar9;
  iVar11 = *(int *)(iVar5 + 0x18);
  *(int *)(param_2 + 0x16c) = iVar11;
  iVar12 = *(int *)(iVar5 + 0x20);
  iVar14 = *(int *)(iVar5 + 0x28);
  iVar8 = *(int *)(iVar5 + 0x30);
  iVar6 = *(int *)(iVar5 + 0x38);
  iVar5 = *(int *)(param_2 + 0x174);
  iVar3 = *(int *)(param_2 + 0x178);
  iVar4 = *(int *)(param_2 + 0x17c);
  *(int *)(param_2 + 0x170) = iVar12;
  *(int *)(param_2 + 0x174) = iVar14;
  *(int *)(param_2 + 0x178) = iVar8;
  *(int *)(param_2 + 0x17c) = iVar6;
  if (3 < *(int *)(param_2 + 0x580) - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005668b0,0x41,&DAT_01860ff8);
  }
  iVar12 = iVar12 - iVar13;
  switch(*(int *)(param_2 + 0x580)) {
  case 2:
    iVar12 = iVar14 - iVar5;
    break;
  case 3:
    iVar12 = iVar8 - iVar3;
    break;
  case 4:
    iVar12 = iVar6 - iVar4;
  }
  *param_1 = iVar11 - iVar16;
  param_1[1] = iVar9 - iVar15;
  param_1[2] = iVar12;
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(param_2 + 0x15c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
    return;
  }
  return;
}

