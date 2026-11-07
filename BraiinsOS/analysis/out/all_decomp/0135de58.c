// FUN_0135de58 @ 0135de58 size=488 calls_out=3 calls_in=1
// strings: 

void FUN_0135de58(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  iVar7 = param_1[5];
  uVar16 = (uint)*(ushort *)(iVar7 + 0x8a);
  uVar1 = param_2 + uVar16;
  if (0xb < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b38,0x33,&DAT_01892420);
  }
  iVar9 = param_1[3];
  uVar14 = (uint)*(ushort *)(iVar9 + 0x8a);
  if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
  }
  iVar11 = iVar7 + 0x5c;
  iVar13 = uVar14 - param_2;
  *(short *)(iVar9 + 0x8a) = (short)iVar13;
  *(short *)(iVar7 + 0x8a) = (short)uVar1;
  FUN_016dd52c(iVar11 + param_2 * 4,iVar11);
  FUN_016dd52c(iVar7 + param_2 * 8,iVar7,uVar16 << 3);
  iVar17 = iVar13 + 1;
  iVar15 = uVar14 - iVar17;
  if (iVar15 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
  }
  FUN_016dd1aa(iVar11,iVar9 + 0x5c + iVar17 * 4,iVar15 * 4);
  FUN_016dd1aa(iVar7,iVar9 + iVar17 * 8,iVar15 * 8);
  iVar8 = param_1[2];
  iVar10 = *param_1;
  puVar2 = (undefined4 *)(iVar9 + iVar13 * 8);
  uVar4 = *puVar2;
  iVar12 = iVar10 + iVar8 * 4;
  iVar18 = param_1[6];
  uVar6 = puVar2[1];
  uVar3 = *(undefined4 *)(iVar12 + 0x5c);
  *(undefined4 *)(iVar12 + 0x5c) = *(undefined4 *)(iVar9 + 0x5c + iVar13 * 4);
  puVar2 = (undefined4 *)(iVar10 + iVar8 * 8);
  uVar5 = *puVar2;
  iVar13 = param_1[4];
  *puVar2 = uVar4;
  uVar4 = puVar2[1];
  puVar2[1] = uVar6;
  *(undefined4 *)(iVar11 + iVar15 * 4) = uVar3;
  puVar2 = (undefined4 *)(iVar7 + iVar15 * 8);
  *puVar2 = uVar5;
  puVar2[1] = uVar4;
  if (iVar13 == 0) {
    if (iVar18 != 0) goto LAB_0135e028;
  }
  else {
    if (iVar18 == 0) {
LAB_0135e028:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01892430);
    }
    iVar11 = iVar7 + 0x8c;
    FUN_016dd52c(iVar11 + param_2 * 4,iVar11,uVar16 * 4 + 4);
    FUN_016dd1aa(iVar11,iVar9 + iVar17 * 4 + 0x8c,param_2 << 2);
    iVar9 = 0;
    do {
      iVar11 = *(int *)(iVar7 + iVar9 * 4 + 0x8c);
      *(short *)(iVar11 + 0x88) = (short)iVar9;
      iVar9 = iVar9 + 1;
      *(int *)(iVar11 + 0x58) = iVar7;
    } while (uVar1 + 1 != iVar9);
  }
  return;
}

