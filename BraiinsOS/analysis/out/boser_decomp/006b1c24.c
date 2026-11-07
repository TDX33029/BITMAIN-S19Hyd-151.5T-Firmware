// FUN_006b1c24 @ 006b1c24 size=700 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_006b1c24(int *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_258 [176];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [176];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [180];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar9 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar9 + 0x81a);
  if (0xb < param_2 + uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar7 = param_1[5];
  uVar6 = (uint)*(ushort *)(iVar7 + 0x81a);
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  *(ushort *)(iVar9 + 0x81a) = (ushort)(param_2 + uVar8);
  iVar2 = uVar6 - param_2;
  *(ushort *)(iVar7 + 0x81a) = (ushort)iVar2;
  iVar3 = param_2 * 0xb0 + -0xb0;
  FUN_01bed4e2(auStack_258,iVar7 + iVar3,0xb0);
  iVar11 = param_1[2];
  iVar10 = *param_1;
  iVar12 = param_2 * 0xc + -0xc;
  iVar4 = iVar10 + iVar11 * 0xc;
  local_1a8 = *(undefined4 *)(iVar4 + 0x794);
  uStack_1a4 = *(undefined4 *)(iVar4 + 0x798);
  uStack_1a0 = *(undefined4 *)(iVar4 + 0x79c);
  iVar5 = iVar7 + 0x794;
  FUN_01bed864((undefined4 *)(iVar4 + 0x794),iVar5 + iVar12,0xc);
  iVar10 = iVar11 * 0xb0 + iVar10;
  FUN_01bed4e2(auStack_198,iVar10,0xb0);
  FUN_01bed4e2(iVar10,auStack_258,0xb0);
  local_e8 = local_1a8;
  uStack_e4 = uStack_1a4;
  uStack_e0 = uStack_1a0;
  FUN_01bed4e2(auStack_d8,auStack_198,0xb0);
  iVar10 = iVar9 + uVar8 * 0xc;
  *(undefined4 *)(iVar10 + 0x794) = local_e8;
  *(undefined4 *)(iVar10 + 0x798) = uStack_e4;
  *(undefined4 *)(iVar10 + 0x79c) = uStack_e0;
  iVar4 = uVar8 * 0xb0 + iVar9;
  FUN_01bed4e2(iVar4,auStack_d8,0xb0);
  FUN_01bed4e2(iVar10 + 0x7a0,iVar5,iVar12);
  FUN_01bed4e2(iVar4 + 0xb0,iVar7,iVar3);
  FUN_01bed864(iVar5,iVar5 + param_2 * 0xc,iVar2 * 0xc);
  FUN_01bed864(iVar7,param_2 * 0xb0 + iVar7,iVar2 * 0xb0);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_006b1ec8;
  }
  else {
    if (param_1[6] == 0) {
LAB_006b1ec8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar3 = iVar7 + 0x820;
    FUN_01bed4e2(iVar9 + (uVar8 + 1) * 4 + 0x820,iVar3,param_2 << 2);
    FUN_01bed864(iVar3,iVar3 + param_2 * 4,iVar2 * 4 + 4);
    iVar3 = uVar8 + 0x209;
    do {
      iVar4 = *(int *)(iVar9 + iVar3 * 4);
      sVar1 = (short)iVar3;
      iVar3 = iVar3 + 1;
      param_2 = param_2 - 1;
      *(short *)(iVar4 + 0x818) = sVar1 + -0x208;
      *(int *)(iVar4 + 0x790) = iVar9;
    } while (param_2 != 0);
    iVar9 = 0;
    do {
      iVar3 = *(int *)(iVar7 + iVar9 * 4 + 0x820);
      *(short *)(iVar3 + 0x818) = (short)iVar9;
      iVar9 = iVar9 + 1;
      *(int *)(iVar3 + 0x790) = iVar7;
    } while (iVar2 + 1 != iVar9);
  }
  return;
}

