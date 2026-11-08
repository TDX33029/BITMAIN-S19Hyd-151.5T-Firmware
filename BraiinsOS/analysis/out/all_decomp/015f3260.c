// FUN_015f3260 @ 015f3260 size=712 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015f3260(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  
  iVar18 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar18 + 0x13a);
  if (0xb < param_2 + uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b6b,0x32,&DAT_018ab3a8);
  }
  iVar11 = param_1[5];
  uVar2 = (uint)*(ushort *)(iVar11 + 0x13a);
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b9d,0x28,&DAT_018ab3b8);
  }
  iVar3 = uVar2 - param_2;
  *(ushort *)(iVar18 + 0x13a) = (ushort)(param_2 + uVar8);
  *(ushort *)(iVar11 + 0x13a) = (ushort)iVar3;
  iVar9 = param_2 * 4 + -4;
  iVar4 = iVar11 + 0x10c;
  iVar5 = param_2 * 0x18 + -0x18;
  puVar23 = (undefined4 *)(iVar11 + iVar5);
  uVar1 = *puVar23;
  uVar6 = puVar23[1];
  uVar12 = puVar23[2];
  uVar14 = puVar23[3];
  uVar16 = puVar23[4];
  uVar21 = puVar23[5];
  iVar7 = *param_1 + param_1[2] * 4;
  puVar23 = (undefined4 *)(*param_1 + param_1[2] * 0x18);
  uVar17 = *(undefined4 *)(iVar7 + 0x10c);
  *(undefined4 *)(iVar7 + 0x10c) = *(undefined4 *)(iVar4 + iVar9);
  uVar10 = *puVar23;
  uVar13 = puVar23[1];
  uVar15 = puVar23[2];
  uVar19 = puVar23[3];
  uVar20 = puVar23[4];
  uVar22 = puVar23[5];
  *puVar23 = uVar1;
  puVar23[1] = uVar6;
  puVar23[2] = uVar12;
  puVar23[3] = uVar14;
  puVar23[4] = uVar16;
  puVar23[5] = uVar21;
  *(undefined4 *)(iVar18 + 0x10c + uVar8 * 4) = uVar17;
  puVar23 = (undefined4 *)(iVar18 + uVar8 * 0x18);
  *puVar23 = uVar10;
  puVar23[1] = uVar13;
  puVar23[2] = uVar15;
  puVar23[3] = uVar19;
  puVar23[4] = uVar20;
  puVar23[5] = uVar22;
  iVar7 = uVar8 + 1;
  FUN_016dd1aa(iVar18 + 0x10c + iVar7 * 4,iVar4,iVar9);
  FUN_016dd1aa(puVar23 + 6,iVar11,iVar5);
  FUN_016dd52c(iVar4,iVar4 + param_2 * 4,iVar3 * 4);
  FUN_016dd52c(iVar11,iVar11 + param_2 * 0x18,iVar3 * 0x18);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_015f3510;
  }
  else {
    if (param_1[6] == 0) {
LAB_015f3510:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ab3c8);
    }
    iVar5 = iVar18 + 0x140;
    iVar4 = iVar11 + 0x140;
    FUN_016dd1aa(iVar5 + iVar7 * 4,iVar4,param_2 << 2);
    FUN_016dd52c(iVar4,iVar4 + param_2 * 4,iVar3 * 4 + 4);
    iVar4 = *(int *)(iVar5 + iVar7 * 4);
    *(short *)(iVar4 + 0x138) = (short)iVar7;
    *(int *)(iVar4 + 0x108) = iVar18;
    if (param_2 != 1) {
      iVar4 = *(int *)(iVar5 + (uVar8 + 2) * 4);
      *(short *)(iVar4 + 0x138) = (short)(uVar8 + 2);
      *(int *)(iVar4 + 0x108) = iVar18;
      if (param_2 != 2) {
        iVar4 = *(int *)(iVar5 + (uVar8 + 3) * 4);
        *(short *)(iVar4 + 0x138) = (short)(uVar8 + 3);
        *(int *)(iVar4 + 0x108) = iVar18;
        if (param_2 != 3) {
          iVar4 = *(int *)(iVar5 + (uVar8 + 4) * 4);
          *(short *)(iVar4 + 0x138) = (short)(uVar8 + 4);
          *(int *)(iVar4 + 0x108) = iVar18;
          if (param_2 != 4) {
            iVar4 = *(int *)(iVar5 + (uVar8 + 5) * 4);
            *(short *)(iVar4 + 0x138) = (short)(uVar8 + 5);
            *(int *)(iVar4 + 0x108) = iVar18;
          }
        }
      }
    }
    iVar18 = 0;
    do {
      iVar4 = *(int *)(iVar11 + iVar18 * 4 + 0x140);
      *(short *)(iVar4 + 0x138) = (short)iVar18;
      iVar18 = iVar18 + 1;
      *(int *)(iVar4 + 0x108) = iVar11;
    } while (iVar3 + 1 != iVar18);
  }
  return;
}

