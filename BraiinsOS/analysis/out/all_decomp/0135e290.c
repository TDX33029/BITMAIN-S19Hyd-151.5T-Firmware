// FUN_0135e290 @ 0135e290 size=540 calls_out=3 calls_in=1
// strings: 

void FUN_0135e290(int *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar14 = param_1[3];
  uVar11 = (uint)*(ushort *)(iVar14 + 0x8a);
  if (0xb < param_2 + uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b6b,0x32,&DAT_01892440);
  }
  iVar9 = param_1[5];
  uVar1 = *(ushort *)(iVar9 + 0x8a);
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b9d,0x28,&DAT_01892450);
  }
  iVar10 = param_2 - 1;
  *(short *)(iVar14 + 0x8a) = (short)(param_2 + uVar11);
  iVar8 = param_1[2];
  iVar5 = uVar1 - param_2;
  puVar2 = (undefined4 *)(iVar9 + iVar10 * 8);
  uVar16 = *puVar2;
  iVar4 = *param_1;
  iVar12 = iVar9 + 0x5c;
  uVar15 = puVar2[1];
  *(short *)(iVar9 + 0x8a) = (short)iVar5;
  iVar6 = iVar4 + iVar8 * 4;
  uVar13 = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(iVar12 + iVar10 * 4);
  puVar2 = (undefined4 *)(iVar4 + iVar8 * 8);
  uVar3 = *puVar2;
  uVar7 = puVar2[1];
  *puVar2 = uVar16;
  puVar2[1] = uVar15;
  *(undefined4 *)(iVar14 + 0x5c + uVar11 * 4) = uVar13;
  iVar4 = uVar11 + 1;
  puVar2 = (undefined4 *)(iVar14 + uVar11 * 8);
  *puVar2 = uVar3;
  puVar2[1] = uVar7;
  FUN_016dd1aa(iVar14 + 0x5c + iVar4 * 4,iVar12,iVar10 * 4);
  FUN_016dd1aa(iVar14 + iVar4 * 8,iVar9,iVar10 * 8);
  FUN_016dd52c(iVar12,iVar12 + param_2 * 4,iVar5 * 4);
  FUN_016dd52c(iVar9,iVar9 + param_2 * 8,iVar5 * 8);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0135e494;
  }
  else {
    if (param_1[6] == 0) {
LAB_0135e494:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01892460);
    }
    iVar8 = iVar14 + 0x8c;
    iVar6 = iVar9 + 0x8c;
    FUN_016dd1aa(iVar8 + iVar4 * 4,iVar6,param_2 << 2);
    FUN_016dd52c(iVar6,iVar6 + param_2 * 4,iVar5 * 4 + 4);
    iVar6 = *(int *)(iVar8 + iVar4 * 4);
    *(int *)(iVar6 + 0x58) = iVar14;
    *(short *)(iVar6 + 0x88) = (short)iVar4;
    if (param_2 != 1) {
      iVar4 = *(int *)(iVar8 + (uVar11 + 2) * 4);
      *(short *)(iVar4 + 0x88) = (short)(uVar11 + 2);
      *(int *)(iVar4 + 0x58) = iVar14;
      if (param_2 != 2) {
        iVar4 = *(int *)(iVar8 + (uVar11 + 3) * 4);
        *(short *)(iVar4 + 0x88) = (short)(uVar11 + 3);
        *(int *)(iVar4 + 0x58) = iVar14;
        if (param_2 != 3) {
          iVar4 = *(int *)(iVar8 + (uVar11 + 4) * 4);
          *(short *)(iVar4 + 0x88) = (short)(uVar11 + 4);
          *(int *)(iVar4 + 0x58) = iVar14;
          if (param_2 != 4) {
            iVar4 = *(int *)(iVar8 + (uVar11 + 5) * 4);
            *(short *)(iVar4 + 0x88) = (short)(uVar11 + 5);
            *(int *)(iVar4 + 0x58) = iVar14;
          }
        }
      }
    }
    iVar14 = 0;
    do {
      iVar4 = *(int *)(iVar9 + iVar14 * 4 + 0x8c);
      *(short *)(iVar4 + 0x88) = (short)iVar14;
      iVar14 = iVar14 + 1;
      *(int *)(iVar4 + 0x58) = iVar9;
    } while (iVar5 + 1 != iVar14);
  }
  return;
}

