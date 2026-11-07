// FUN_019ab8d4 @ 019ab8d4 size=624 calls_out=3 calls_in=1
// strings: assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019ab8d4(int *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  iVar16 = param_1[3];
  uVar2 = (uint)*(ushort *)(iVar16 + 0x13a);
  if (0xb < param_2 + uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d27fa4);
  }
  iVar14 = param_1[5];
  uVar8 = (uint)*(ushort *)(iVar14 + 0x13a);
  if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d27fb4);
  }
  *(ushort *)(iVar16 + 0x13a) = (ushort)(param_2 + uVar2);
  iVar3 = uVar8 - param_2;
  *(ushort *)(iVar14 + 0x13a) = (ushort)iVar3;
  iVar9 = param_2 * 4 + -4;
  iVar4 = iVar14 + 0x10c;
  iVar5 = param_2 * 0x18 + -0x18;
  puVar6 = (undefined4 *)(iVar14 + iVar5);
  uVar10 = *puVar6;
  uVar15 = puVar6[1];
  uVar17 = puVar6[2];
  uVar19 = puVar6[3];
  uVar20 = puVar6[4];
  uVar22 = puVar6[5];
  iVar11 = *param_1 + param_1[2] * 4;
  puVar6 = (undefined4 *)(*param_1 + param_1[2] * 0x18);
  uVar18 = *(undefined4 *)(iVar11 + 0x10c);
  *(undefined4 *)(iVar11 + 0x10c) = *(undefined4 *)(iVar4 + iVar9);
  uVar7 = *puVar6;
  uVar12 = puVar6[1];
  uVar13 = puVar6[2];
  uVar21 = puVar6[3];
  uVar23 = puVar6[4];
  uVar24 = puVar6[5];
  *puVar6 = uVar10;
  puVar6[1] = uVar15;
  puVar6[2] = uVar17;
  puVar6[3] = uVar19;
  puVar6[4] = uVar20;
  puVar6[5] = uVar22;
  *(undefined4 *)(iVar16 + 0x10c + uVar2 * 4) = uVar18;
  puVar6 = (undefined4 *)(iVar16 + uVar2 * 0x18);
  *puVar6 = uVar7;
  puVar6[1] = uVar12;
  puVar6[2] = uVar13;
  puVar6[3] = uVar21;
  puVar6[4] = uVar23;
  puVar6[5] = uVar24;
  FUN_01bed4e2(iVar16 + 0x10c + (uVar2 + 1) * 4,iVar4,iVar9);
  FUN_01bed4e2(puVar6 + 6,iVar14,iVar5);
  FUN_01bed864(iVar4,iVar4 + param_2 * 4,iVar3 * 4);
  FUN_01bed864(iVar14,iVar14 + param_2 * 0x18,iVar3 * 0x18);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_019abb2c;
  }
  else {
    if (param_1[6] == 0) {
LAB_019abb2c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d27fc4);
    }
    iVar4 = iVar14 + 0x140;
    FUN_01bed4e2(iVar16 + (uVar2 + 1) * 4 + 0x140,iVar4,param_2 << 2);
    FUN_01bed864(iVar4,iVar4 + param_2 * 4,iVar3 * 4 + 4);
    iVar4 = uVar2 + 0x51;
    do {
      iVar5 = *(int *)(iVar16 + iVar4 * 4);
      sVar1 = (short)iVar4;
      iVar4 = iVar4 + 1;
      param_2 = param_2 - 1;
      *(short *)(iVar5 + 0x138) = sVar1 + -0x50;
      *(int *)(iVar5 + 0x108) = iVar16;
    } while (param_2 != 0);
    iVar16 = 0;
    do {
      iVar4 = *(int *)(iVar14 + iVar16 * 4 + 0x140);
      *(short *)(iVar4 + 0x138) = (short)iVar16;
      iVar16 = iVar16 + 1;
      *(int *)(iVar4 + 0x108) = iVar14;
    } while (iVar3 + 1 != iVar16);
  }
  return;
}

