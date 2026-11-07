// FUN_016d2df0 @ 016d2df0 size=556 calls_out=4 calls_in=0
// strings: 

void FUN_016d2df0(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int local_68 [17];
  
  iVar17 = *(int *)(param_2 + 4);
  uVar3 = *(uint *)(iVar17 + 0x1c);
  if (param_4 <= *(uint *)(iVar17 + 0x1c)) {
    uVar3 = param_4;
  }
  if (uVar3 == 0) {
    uVar13 = 0;
  }
  else {
    pbVar7 = (byte *)(param_3 + 1);
    uVar13 = 0;
    do {
      uVar10 = *(int *)(iVar17 + 0x18) + uVar13 * 0x10;
      if (*(char *)(uVar10 + 0xc) != '\x01') goto LAB_016d2e70;
      uVar8 = (uint)*(byte *)(uVar10 + 0xd);
      bVar18 = uVar8 != pbVar7[-1];
      if (!bVar18) {
        uVar8 = (uint)*pbVar7;
        uVar10 = (uint)*(byte *)(uVar10 + 0xe);
      }
      if (bVar18 || uVar10 != uVar8) goto LAB_016d2e70;
      uVar13 = uVar13 + 1;
      pbVar7 = pbVar7 + 2;
    } while (uVar3 != uVar13);
    uVar13 = uVar3;
  }
LAB_016d2e70:
  if (param_4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004cfc24,0x2b,&DAT_01d09ae8);
  }
  FUN_016d343c(local_68,param_2,uVar13);
  if (local_68[0] == 0x2a) {
    if (*(int *)(iVar17 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_004cfbd9,0xf,&DAT_01d09aa8);
    }
    iVar5 = *(int *)(iVar17 + 0x18) + *(int *)(iVar17 + 0x1c) * 0x10;
    if (*(char *)(iVar5 + -4) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_004cfbe8,0x3c,&DAT_01d09ab8);
    }
    puVar11 = (undefined2 *)(param_3 + uVar13 * 2);
    *(undefined1 *)(iVar5 + -4) = 1;
    *(undefined2 *)(iVar5 + -3) = *puVar11;
    if (param_4 - uVar13 != 1) {
      iVar5 = *(int *)(iVar17 + 0x1c);
      iVar15 = 8;
      iVar16 = 0;
      do {
        puVar12 = puVar11 + iVar16 + 1;
        uVar1 = *(undefined1 *)puVar12;
        iVar14 = iVar5 + iVar16;
        uVar2 = *(undefined1 *)((int)puVar12 + 1);
        if (iVar14 == *(int *)(iVar17 + 0x14)) {
          FUN_018fa978();
        }
        iVar9 = *(int *)(iVar17 + 0x18) + iVar5 * 0x10;
        *(undefined4 *)(iVar9 + iVar15 + -8) = 0;
        iVar6 = iVar9 + iVar16 * 0x10;
        iVar16 = iVar16 + 1;
        *(undefined4 *)(iVar6 + 4) = 4;
        *(undefined4 *)(iVar9 + iVar15) = 0;
        iVar15 = iVar15 + 0x10;
        *(undefined1 *)(iVar6 + 0xe) = uVar2;
        *(undefined1 *)(iVar6 + 0xc) = 1;
        *(undefined1 *)(iVar6 + 0xd) = uVar1;
        *(int *)(iVar17 + 0x1c) = iVar14 + 1;
      } while (puVar12 + 1 != puVar11 + (param_4 - uVar13));
    }
    local_68[0] = 0x2a;
  }
  else {
    piVar4 = (int *)((uint)local_68 | 4);
    iVar17 = piVar4[1];
    iVar5 = piVar4[2];
    iVar15 = piVar4[3];
    iVar16 = piVar4[4];
    param_1[1] = *piVar4;
    param_1[2] = iVar17;
    param_1[3] = iVar5;
    param_1[4] = iVar15;
    param_1[5] = iVar16;
    iVar17 = piVar4[6];
    iVar5 = piVar4[7];
    iVar15 = piVar4[8];
    iVar16 = piVar4[9];
    param_1[6] = piVar4[5];
    param_1[7] = iVar17;
    param_1[8] = iVar5;
    param_1[9] = iVar15;
    param_1[10] = iVar16;
    iVar17 = piVar4[0xb];
    iVar5 = piVar4[0xc];
    iVar15 = piVar4[0xd];
    iVar16 = piVar4[0xe];
    param_1[0xb] = piVar4[10];
    param_1[0xc] = iVar17;
    param_1[0xd] = iVar5;
    param_1[0xe] = iVar15;
    param_1[0xf] = iVar16;
  }
  *param_1 = local_68[0];
  return;
}

