// FUN_0167aed8 @ 0167aed8 size=408 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_0167aed8(int *param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar7 = param_1[3];
  uVar11 = (uint)*(ushort *)(iVar7 + 0x32);
  if (0xb < param_2 + uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar8 = param_1[5];
  if (*(ushort *)(iVar8 + 0x32) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  iVar6 = param_1[2];
  iVar10 = *(ushort *)(iVar8 + 0x32) - param_2;
  iVar4 = *param_1;
  *(short *)(iVar7 + 0x32) = (short)(param_2 + uVar11);
  iVar9 = iVar8 + 4;
  uVar2 = *(undefined4 *)(iVar8 + param_2 * 4);
  iVar4 = iVar4 + iVar6 * 4;
  *(short *)(iVar8 + 0x32) = (short)iVar10;
  uVar5 = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(iVar4 + 4) = uVar2;
  *(undefined4 *)(iVar7 + 4 + uVar11 * 4) = uVar5;
  FUN_01bed4e2(iVar7 + 4 + (uVar11 + 1) * 4,iVar9,param_2 * 4 + -4);
  FUN_01bed864(iVar9,iVar9 + param_2 * 4,iVar10 * 4);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0167b058;
  }
  else {
    if (param_1[6] == 0) {
LAB_0167b058:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar4 = iVar8 + 0x34;
    FUN_01bed4e2(iVar7 + 0x34 + (uVar11 + 1) * 4,iVar4,param_2 << 2);
    FUN_01bed864(iVar4,iVar4 + param_2 * 4,iVar10 * 4 + 4);
    iVar4 = uVar11 + 0xe;
    do {
      piVar3 = *(int **)(iVar7 + iVar4 * 4);
      sVar1 = (short)iVar4;
      iVar4 = iVar4 + 1;
      param_2 = param_2 - 1;
      *(short *)(piVar3 + 0xc) = sVar1 + -0xd;
      *piVar3 = iVar7;
    } while (param_2 != 0);
    iVar7 = 0;
    do {
      piVar3 = *(int **)(iVar8 + iVar7 * 4 + 0x34);
      *(short *)(piVar3 + 0xc) = (short)iVar7;
      iVar7 = iVar7 + 1;
      *piVar3 = iVar8;
    } while (iVar10 + 1 != iVar7);
  }
  return;
}

