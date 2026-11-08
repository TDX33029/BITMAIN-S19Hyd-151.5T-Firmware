// FUN_01b83930 @ 01b83930 size=440 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b83930(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint *puVar18;
  bool bVar19;
  
  if (param_3 - param_2 < 8) {
    param_1 = param_1 + param_2 * 8;
    iVar10 = param_1;
    for (iVar16 = 1; iVar16 < (param_3 - param_2) + 1; iVar16 = iVar16 + 1) {
      uVar13 = *(uint *)(iVar10 + 8);
      iVar12 = iVar16 + -1;
      uVar3 = *(undefined2 *)(iVar10 + 0xc);
      uVar1 = *(undefined1 *)(iVar10 + 0xe);
      uVar2 = *(undefined1 *)(iVar10 + 0xf);
      do {
        if (uVar13 <= *(uint *)(param_1 + iVar12 * 8)) break;
        puVar5 = (undefined4 *)(param_1 + iVar12 * 8);
        puVar15 = (undefined4 *)(param_1 + 8 + iVar12 * 8);
        bVar19 = iVar12 != 0;
        iVar12 = iVar12 + -1;
        uVar6 = puVar5[1];
        *puVar15 = *puVar5;
        puVar15[1] = uVar6;
      } while (bVar19);
      iVar10 = iVar10 + 8;
      iVar7 = param_1 + (iVar12 + 1) * 8;
      *(uint *)(param_1 + (iVar12 + 1) * 8) = uVar13;
      *(undefined2 *)(iVar7 + 4) = uVar3;
      *(undefined1 *)(iVar7 + 6) = uVar1;
      *(undefined1 *)(iVar7 + 7) = uVar2;
    }
  }
  else {
    while (param_2 < param_3) {
      puVar5 = (undefined4 *)(param_1 + param_3 * 8);
      iVar16 = param_2 + -1;
      uVar13 = *(uint *)(param_1 + param_3 * 8);
      puVar11 = (uint *)(param_1 + param_2 * 8);
      for (iVar10 = param_2; iVar12 = iVar16 + 1, param_3 != iVar10; iVar10 = iVar10 + 1) {
        if (uVar13 < *puVar11) {
          puVar18 = (uint *)(param_1 + iVar12 * 8);
          uVar8 = *(uint *)(param_1 + iVar12 * 8);
          uVar9 = puVar11[1];
          uVar4 = puVar18[1];
          uVar1 = *(undefined1 *)((int)puVar18 + 6);
          *puVar18 = *puVar11;
          puVar18[1] = uVar9;
          *(undefined1 *)((int)puVar11 + 7) = *(undefined1 *)((int)puVar18 + 7);
          *puVar11 = uVar8;
          *(short *)(puVar11 + 1) = (short)uVar4;
          *(undefined1 *)((int)puVar11 + 6) = uVar1;
          iVar16 = iVar12;
        }
        puVar11 = puVar11 + 2;
      }
      puVar15 = (undefined4 *)(param_1 + iVar12 * 8);
      uVar14 = *(undefined4 *)(param_1 + iVar12 * 8);
      uVar6 = puVar5[1];
      uVar17 = puVar15[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar6;
      *(undefined4 *)(param_1 + param_3 * 8) = uVar14;
      puVar5[1] = uVar17;
      if (iVar12 - param_2 < param_3 - iVar12) {
        FUN_01b83930(param_1,param_2,iVar16);
        param_2 = iVar16 + 2;
      }
      else {
        FUN_01b83930(param_1,iVar16 + 2,param_3);
        param_3 = iVar16;
      }
    }
  }
  return 0;
}

