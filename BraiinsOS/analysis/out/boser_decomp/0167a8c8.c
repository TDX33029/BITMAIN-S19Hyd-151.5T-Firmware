// FUN_0167a8c8 @ 0167a8c8 size=488 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_0167a8c8(int *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar10 = param_1[3];
  uVar3 = (uint)*(ushort *)(iVar10 + 0x8a);
  if (0xb < param_2 + uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar9 = param_1[5];
  uVar1 = *(ushort *)(iVar9 + 0x8a);
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  iVar11 = param_2 - 1;
  *(short *)(iVar10 + 0x8a) = (short)(param_2 + uVar3);
  iVar8 = param_1[2];
  iVar14 = uVar1 - param_2;
  puVar4 = (undefined4 *)(iVar9 + iVar11 * 8);
  uVar16 = *puVar4;
  iVar6 = *param_1;
  iVar12 = iVar9 + 0x5c;
  uVar15 = puVar4[1];
  uVar5 = *(undefined4 *)(iVar12 + iVar11 * 4);
  iVar7 = iVar6 + iVar8 * 4;
  *(short *)(iVar9 + 0x8a) = (short)iVar14;
  uVar13 = *(undefined4 *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar7 + 0x5c) = uVar5;
  puVar4 = (undefined4 *)(iVar6 + iVar8 * 8);
  uVar5 = *puVar4;
  *puVar4 = uVar16;
  uVar16 = puVar4[1];
  puVar4[1] = uVar15;
  *(undefined4 *)(iVar10 + 0x5c + uVar3 * 4) = uVar13;
  iVar6 = uVar3 + 1;
  puVar4 = (undefined4 *)(iVar10 + uVar3 * 8);
  *puVar4 = uVar5;
  puVar4[1] = uVar16;
  FUN_01bed4e2(iVar10 + 0x5c + iVar6 * 4,iVar12,iVar11 * 4);
  FUN_01bed4e2(iVar10 + iVar6 * 8,iVar9,iVar11 * 8);
  FUN_01bed864(iVar12,iVar12 + param_2 * 4,iVar14 * 4);
  FUN_01bed864(iVar9,iVar9 + param_2 * 8,iVar14 * 8);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0167aa98;
  }
  else {
    if (param_1[6] == 0) {
LAB_0167aa98:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar7 = iVar9 + 0x8c;
    FUN_01bed4e2(iVar10 + iVar6 * 4 + 0x8c,iVar7,param_2 << 2);
    FUN_01bed864(iVar7,iVar7 + param_2 * 4,iVar14 * 4 + 4);
    iVar6 = uVar3 + 0x24;
    do {
      iVar7 = *(int *)(iVar10 + iVar6 * 4);
      sVar2 = (short)iVar6;
      iVar6 = iVar6 + 1;
      param_2 = param_2 - 1;
      *(short *)(iVar7 + 0x88) = sVar2 + -0x23;
      *(int *)(iVar7 + 0x58) = iVar10;
    } while (param_2 != 0);
    iVar10 = 0;
    do {
      iVar6 = *(int *)(iVar9 + iVar10 * 4 + 0x8c);
      *(short *)(iVar6 + 0x88) = (short)iVar10;
      iVar10 = iVar10 + 1;
      *(int *)(iVar6 + 0x58) = iVar9;
    } while (iVar14 + 1 != iVar10);
  }
  return;
}

