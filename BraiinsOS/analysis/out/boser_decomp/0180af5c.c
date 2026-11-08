// FUN_0180af5c @ 0180af5c size=536 calls_out=4 calls_in=4
// strings: 

int * FUN_0180af5c(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_38 [20];
  
  piVar3 = (int *)*param_1;
  do {
    if (*piVar3 != 1) {
      bVar18 = false;
      ClearExclusiveLocal();
      goto LAB_0180af9c;
    }
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = 0;
  DataMemoryBarrier(0xb);
  bVar18 = true;
LAB_0180af9c:
  piVar3 = (int *)*param_1;
  if (bVar18) {
    if (piVar3[1] == 1) {
      DataMemoryBarrier(0xb);
      *piVar3 = 1;
      piVar10 = piVar3;
    }
    else {
      piVar16 = piVar3 + 1;
      piVar10 = (int *)FUN_01436834();
      FUN_01bed4e2(piVar10 + 2,piVar3 + 2,0x60);
      *param_1 = piVar10;
      if (piVar3 != (int *)&DAT_ffffffff) {
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar16;
          bVar18 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar18);
        *piVar16 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          thunk_FUN_01be4678(piVar3);
        }
      }
    }
  }
  else {
    piVar10 = (int *)FUN_01436834();
    iVar4 = piVar3[6];
    iVar12 = piVar3[7];
    iVar5 = piVar3[10];
    iVar13 = piVar3[0xb];
    iVar6 = piVar3[0xe];
    iVar14 = piVar3[0xf];
    iVar7 = piVar3[0xc];
    iVar8 = piVar3[0x10];
    uVar9 = *(undefined4 *)((int)piVar3 + 0x4a);
    iVar17 = piVar3[8];
    uVar1 = *(undefined1 *)((int)piVar3 + 0x49);
    iVar11 = piVar3[0x12];
    bVar18 = *(char *)((int)piVar3 + 0x4e) == '\x01';
    if (bVar18) {
      FUN_01bed4e2(auStack_38,(undefined1 *)((int)piVar3 + 0x4f),0x10);
    }
    uVar2 = *(undefined2 *)((int)piVar3 + 0x5f);
    piVar10[10] = iVar5;
    piVar10[0xb] = iVar13;
    iVar5 = piVar3[3];
    iVar13 = piVar3[4];
    iVar15 = piVar3[5];
    piVar10[0xe] = iVar6;
    piVar10[0xf] = iVar14;
    piVar10[3] = iVar5;
    piVar10[4] = iVar13;
    piVar10[5] = iVar15;
    *(undefined4 *)((int)piVar10 + 0x4a) = uVar9;
    *(undefined1 *)((int)piVar10 + 0x49) = uVar1;
    *(char *)(piVar10 + 0x12) = (char)iVar11;
    piVar10[0xc] = iVar7;
    piVar10[0x10] = iVar8;
    iVar11 = piVar3[2];
    piVar10[6] = iVar4;
    piVar10[7] = iVar12;
    piVar10[2] = iVar11;
    piVar10[8] = iVar17;
    *(bool *)((int)piVar10 + 0x4e) = bVar18;
    FUN_01bed4e2((undefined1 *)((int)piVar10 + 0x4f),auStack_38,0x10);
    *(undefined2 *)((int)piVar10 + 0x5f) = uVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*param_1);
    }
    *param_1 = piVar10;
  }
  return piVar10 + 2;
}

