// FUN_019267a8 @ 019267a8 size=168 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_019267a8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 *unaff_r10;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  if (*(int *)(param_1 + 8) != param_2) {
    iVar5 = *(int *)(param_1 + 4);
    puVar12 = *(undefined4 **)(param_3 + 4);
    puVar13 = *(undefined4 **)(param_3 + 0xc);
    puVar10 = (undefined4 *)(iVar5 + *(int *)(param_1 + 8) * 0x24);
    do {
      bVar14 = puVar12 == puVar13;
      if (!bVar14) {
        unaff_r10 = (undefined1 *)*puVar12;
        *(undefined4 **)(param_3 + 4) = puVar12 + 9;
        puVar12 = puVar12 + 9;
      }
      if (bVar14 || unaff_r10 == &DAT_80000018) {
        return 0;
      }
      uVar1 = puVar12[-8];
      uVar3 = puVar12[-7];
      uVar6 = puVar12[-6];
      uVar8 = puVar12[-5];
      uVar2 = puVar12[-4];
      uVar4 = puVar12[-3];
      uVar7 = puVar12[-2];
      uVar9 = puVar12[-1];
      puVar11 = puVar10 + 9;
      *puVar10 = unaff_r10;
      puVar10[1] = uVar1;
      puVar10[2] = uVar3;
      puVar10[3] = uVar6;
      puVar10[4] = uVar8;
      puVar10[5] = uVar2;
      puVar10[6] = uVar4;
      puVar10[7] = uVar7;
      puVar10[8] = uVar9;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      puVar10 = puVar11;
    } while (puVar11 != (undefined4 *)(iVar5 + param_2 * 0x24));
  }
  return 1;
}

