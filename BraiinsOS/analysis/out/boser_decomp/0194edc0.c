// FUN_0194edc0 @ 0194edc0 size=668 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_0194edc0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_340 [256];
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 auStack_230 [256];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [252];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar9 = param_1[3];
  uVar11 = (uint)*(ushort *)(iVar9 + 0xb8a);
  if (0xb < param_2 + uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar6 = param_1[5];
  uVar5 = (uint)*(ushort *)(iVar6 + 0xb8a);
  if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  *(ushort *)(iVar9 + 0xb8a) = (ushort)(param_2 + uVar11);
  iVar1 = uVar5 - param_2;
  *(ushort *)(iVar6 + 0xb8a) = (ushort)iVar1;
  iVar4 = param_2 * 0xfc + -0xfc;
  iVar2 = iVar6 + 0xb4;
  FUN_01bed4e2(auStack_340,iVar2 + iVar4,0xfc);
  iVar8 = param_1[2];
  iVar7 = *param_1;
  iVar10 = iVar7 + iVar8 * 0x10;
  FUN_01bed4e2(&local_240,iVar10,0x10);
  iVar3 = param_2 * 0x10 + -0x10;
  FUN_01bed864(iVar10,iVar6 + iVar3,0x10);
  iVar7 = iVar7 + iVar8 * 0xfc + 0xb4;
  FUN_01bed4e2(auStack_230,iVar7,0xfc);
  FUN_01bed4e2(iVar7,auStack_340,0xfc);
  local_130 = local_240;
  uStack_12c = uStack_23c;
  uStack_128 = uStack_238;
  uStack_124 = uStack_234;
  FUN_01bed4e2(auStack_120,auStack_230,0xfc);
  FUN_01bed4e2(iVar9 + uVar11 * 0x10,&local_130,0x10);
  iVar7 = iVar9 + uVar11 * 0xfc;
  FUN_01bed4e2(iVar7 + 0xb4,auStack_120,0xfc);
  FUN_01bed4e2(iVar9 + (uVar11 + 1) * 0x10,iVar6,iVar3);
  FUN_01bed4e2(iVar7 + 0x1b0,iVar2,iVar4);
  FUN_01bed864(iVar6,iVar6 + param_2 * 0x10,iVar1 * 0x10);
  FUN_01bed864(iVar2,iVar2 + param_2 * 0xfc,iVar1 * 0xfc);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0194f044;
  }
  else {
    if (param_1[6] == 0) {
LAB_0194f044:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar2 = iVar6 + 0xb8c;
    FUN_01bed4e2(iVar9 + (uVar11 + 1) * 4 + 0xb8c,iVar2,param_2 << 2);
    FUN_01bed864(iVar2,iVar2 + param_2 * 4,iVar1 * 4 + 4);
    do {
      iVar3 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      param_2 = param_2 - 1;
      iVar3 = *(int *)(iVar9 + iVar3 + 0xb90);
      *(short *)(iVar3 + 0xb88) = (short)uVar11;
      *(int *)(iVar3 + 0xb0) = iVar9;
    } while (param_2 != 0);
    iVar9 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar9 * 4);
      *(short *)(iVar3 + 0xb88) = (short)iVar9;
      iVar9 = iVar9 + 1;
      *(int *)(iVar3 + 0xb0) = iVar6;
    } while (iVar1 + 1 != iVar9);
  }
  return;
}

