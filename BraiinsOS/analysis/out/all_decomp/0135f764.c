// FUN_0135f764 @ 0135f764 size=656 calls_out=3 calls_in=1
// strings: 

void FUN_0135f764(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar10 = param_1[3];
  uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (0xb < param_2 + uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b6b,0x32,&DAT_01892440);
  }
  iVar11 = param_1[5];
  if (*(ushort *)(iVar11 + 0xb6) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b9d,0x28,&DAT_01892450);
  }
  iVar12 = *(ushort *)(iVar11 + 0xb6) - param_2;
  *(short *)(iVar10 + 0xb6) = (short)(param_2 + uVar1);
  iVar14 = iVar11 + 0x30;
  iVar6 = param_1[2];
  iVar4 = param_2 * 0xc + -0xc;
  iVar2 = *param_1;
  *(short *)(iVar11 + 0xb6) = (short)iVar12;
  puVar7 = (undefined4 *)(iVar14 + iVar4);
  uVar13 = *puVar7;
  iVar5 = iVar2 + iVar6 * 4;
  uVar15 = puVar7[2];
  uVar8 = puVar7[1];
  uVar17 = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar11 + param_2 * 4);
  iVar2 = iVar2 + iVar6 * 0xc;
  uVar16 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar2 + 0x30) = uVar13;
  uVar9 = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x38) = uVar15;
  iVar5 = iVar10 + uVar1 * 0xc;
  iVar6 = iVar11 + 4;
  uVar13 = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(iVar2 + 0x34) = uVar8;
  *(undefined4 *)(iVar5 + 0x30) = uVar16;
  iVar2 = uVar1 + 1;
  *(undefined4 *)(iVar10 + 4 + uVar1 * 4) = uVar17;
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  *(undefined4 *)(iVar5 + 0x38) = uVar9;
  FUN_016dd1aa(iVar10 + 4 + iVar2 * 4,iVar6,(param_2 - 1) * 4);
  FUN_016dd1aa(iVar5 + 0x3c,iVar14,iVar4);
  FUN_016dd52c(iVar6,iVar6 + param_2 * 4,iVar12 * 4);
  FUN_016dd52c(iVar14,iVar14 + param_2 * 0xc,iVar12 * 0xc);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0135f9dc;
  }
  else {
    if (param_1[6] == 0) {
LAB_0135f9dc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01892460);
    }
    iVar4 = iVar11 + 0xb8;
    iVar5 = iVar10 + 0xb8;
    FUN_016dd1aa(iVar5 + iVar2 * 4,iVar4,param_2 << 2);
    FUN_016dd52c(iVar4,iVar4 + param_2 * 4,iVar12 * 4 + 4);
    piVar3 = *(int **)(iVar5 + iVar2 * 4);
    *piVar3 = iVar10;
    *(short *)(piVar3 + 0x2d) = (short)iVar2;
    if (param_2 != 1) {
      piVar3 = *(int **)(iVar5 + (uVar1 + 2) * 4);
      *(short *)(piVar3 + 0x2d) = (short)(uVar1 + 2);
      *piVar3 = iVar10;
      if (param_2 != 2) {
        piVar3 = *(int **)(iVar5 + (uVar1 + 3) * 4);
        *(short *)(piVar3 + 0x2d) = (short)(uVar1 + 3);
        *piVar3 = iVar10;
        if (param_2 != 3) {
          piVar3 = *(int **)(iVar5 + (uVar1 + 4) * 4);
          *(short *)(piVar3 + 0x2d) = (short)(uVar1 + 4);
          *piVar3 = iVar10;
          if (param_2 != 4) {
            piVar3 = *(int **)(iVar5 + (uVar1 + 5) * 4);
            *(short *)(piVar3 + 0x2d) = (short)(uVar1 + 5);
            *piVar3 = iVar10;
          }
        }
      }
    }
    iVar10 = 0;
    do {
      piVar3 = *(int **)(iVar11 + iVar10 * 4 + 0xb8);
      *(short *)(piVar3 + 0x2d) = (short)iVar10;
      iVar10 = iVar10 + 1;
      *piVar3 = iVar11;
    } while (iVar12 + 1 != iVar10);
  }
  return;
}

