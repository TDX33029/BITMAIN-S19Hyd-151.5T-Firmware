// FUN_00ab3338 @ 00ab3338 size=392 calls_out=5 calls_in=5
// strings: 

void FUN_00ab3338(int param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  char cVar15;
  
  iVar9 = param_1 + 0x98;
  FUN_00a981d4(iVar9);
  uVar12 = *param_2;
  uVar8 = *(uint *)(param_1 + 0xa0);
  uVar11 = param_2[1];
  uVar13 = param_2[2];
  iVar14 = param_2[3];
  pcVar10 = (char *)param_2[4];
  iVar6 = 3;
  if ((uint)(uVar8 < 3) <= (uint)-*(int *)(param_1 + 0xa4)) {
    iVar6 = uVar8 - 3;
  }
  if (iVar6 == 3) {
    iVar6 = thunk_FUN_01bed842(param_1 + 0xb8,iVar14 + 4,0x10);
    if ((iVar6 != 0) || (cVar15 = *(char *)(param_1 + 0xca), cVar15 != *(char *)(iVar14 + 0x14)))
    goto LAB_00ab34a4;
    cVar5 = *(char *)(param_1 + 200);
    cVar4 = *(char *)(param_1 + 0xc9);
  }
  else {
    if (((iVar6 != 4) || (iVar6 = thunk_FUN_01bed842(param_1 + 0xa9,iVar14 + 4,0x10), iVar6 != 0))
       || (cVar15 = *(char *)(param_1 + 0xa8), cVar15 != *(char *)(iVar14 + 0x14))) {
LAB_00ab34a4:
      FUN_019bb7e0(uVar12,uVar11);
      FUN_009dd354(iVar9);
      return;
    }
    cVar5 = '\x01';
    cVar4 = '\x02';
  }
  cVar1 = *pcVar10;
  *(uint *)(param_1 + 0xa0) = 9;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = uVar12;
  *(undefined4 *)(param_1 + 0xac) = uVar11;
  *(undefined4 *)(param_1 + 0xb0) = uVar13;
  cVar2 = pcVar10[1];
  uVar11 = *(undefined4 *)(iVar14 + 8);
  uVar12 = *(undefined4 *)(iVar14 + 0xc);
  uVar13 = *(undefined4 *)(iVar14 + 0x10);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar14 + 4);
  *(undefined4 *)(param_1 + 0xb8) = uVar11;
  *(undefined4 *)(param_1 + 0xbc) = uVar12;
  *(undefined4 *)(param_1 + 0xc0) = uVar13;
  *(char *)(param_1 + 0xc6) = cVar15;
  if (cVar1 != '\x04') {
    cVar4 = cVar2;
    cVar5 = cVar1;
  }
  *(char *)(param_1 + 0xc5) = cVar4;
  *(char *)(param_1 + 0xc4) = cVar5;
  piVar7 = (int *)(param_1 + 0xd0);
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = *piVar7 + 2;
  FUN_009dd354(iVar9);
  iVar6 = 0;
  do {
    FUN_019e03e8(param_1 + 8 + iVar6);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 != 0x80);
  return;
}

