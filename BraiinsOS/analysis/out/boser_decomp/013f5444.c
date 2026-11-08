// FUN_013f5444 @ 013f5444 size=504 calls_out=7 calls_in=1
// strings: 

int * FUN_013f5444(int param_1)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [120];
  undefined4 *local_30;
  undefined4 *local_2c;
  
  puVar15 = *(undefined4 **)(param_1 + 4);
  puVar5 = *(undefined4 **)(param_1 + 8);
  uVar18 = *puVar5;
  uVar6 = puVar5[1];
  FUN_013f1684(auStack_120,*(undefined4 *)(param_1 + 0xc));
  puVar11 = *(undefined4 **)(param_1 + 0x14);
  piVar13 = (int *)*puVar15;
  uVar16 = *puVar11;
  uVar12 = **(undefined4 **)(param_1 + 0x10);
  uVar17 = (*(undefined4 **)(param_1 + 0x10))[1];
  do {
    iVar7 = *piVar13;
    bVar4 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar4);
  *piVar13 = iVar7 + 1;
  if (-1 < iVar7) {
    puVar8 = (undefined4 *)thunk_FUN_01be5118(0x40);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x40);
    }
    puVar8[2] = uVar18;
    puVar8[3] = uVar6;
    puVar8[6] = uVar12;
    puVar8[7] = uVar17;
    puVar8[8] = uVar12;
    puVar8[9] = uVar17;
    puVar8[10] = 0xffffffff;
    puVar8[0xb] = 0xffffffff;
    puVar8[0xd] = 1;
    *puVar8 = 1;
    puVar8[4] = piVar13;
    *(undefined1 *)(puVar8 + 0xe) = 0;
    puVar8[0xc] = uVar16;
    uVar3 = *(undefined2 *)(puVar8 + 0xd);
    DataMemoryBarrier(0xb);
    puVar9 = (undefined4 *)thunk_FUN_01be5118(0x14);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *puVar9 = 1;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *(undefined1 *)(puVar9 + 1) = 0;
    FUN_01bed4e2(auStack_a8,auStack_120,0x78);
    local_30 = puVar8;
    local_2c = puVar9;
    piVar13 = (int *)FUN_01406ea8(auStack_a8);
    uVar12 = *puVar5;
    uVar16 = puVar5[1];
    piVar14 = (int *)*puVar15;
    uVar6 = *puVar11;
    do {
      iVar7 = *piVar14;
      bVar4 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar4);
    *piVar14 = iVar7 + 1;
    if (-1 < iVar7) {
      do {
        iVar7 = *piVar13;
        bVar4 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar4);
      *piVar13 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0197a954();
      }
      pcVar10 = (char *)(**(int **)(param_1 + 0x18) + 8);
      do {
        cVar2 = *pcVar10;
        bVar4 = (bool)hasExclusiveAccess(pcVar10);
      } while (!bVar4);
      *pcVar10 = cVar2 + '\x01';
      pcVar10 = *(char **)(param_1 + 0x1c);
      if (*(short *)(pcVar10 + 8) != 2) {
        FUN_013f49a4();
      }
      pcVar10[8] = '\0';
      pcVar10[9] = '\0';
      pcVar10[0xc] = '\0';
      pcVar10[0xd] = '\0';
      pcVar10[0xe] = '\0';
      pcVar10[0xf] = '\0';
      *(undefined2 *)(pcVar10 + 10) = uVar3;
      *(undefined4 *)(pcVar10 + 0x10) = uVar6;
      *(int **)(pcVar10 + 0x14) = piVar13;
      *(undefined4 *)(pcVar10 + 0x18) = uVar12;
      *(undefined4 *)(pcVar10 + 0x1c) = uVar16;
      *pcVar10 = cVar2;
      *(int **)(pcVar10 + 0x20) = piVar14;
      return piVar13;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x13f5638);
  (*pcVar1)();
}

