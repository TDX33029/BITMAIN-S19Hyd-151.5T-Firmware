// FUN_01ad1b54 @ 01ad1b54 size=708 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_01ad1b54(int *param_1,uint param_2)

{
  int iVar1;
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
  undefined1 auStack_1b0 [120];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_128 [120];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [124];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar9 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar9 + 0x5b2);
  if (0xb < param_2 + uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar7 = param_1[5];
  uVar6 = (uint)*(ushort *)(iVar7 + 0x5b2);
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  *(ushort *)(iVar9 + 0x5b2) = (ushort)(param_2 + uVar8);
  iVar1 = uVar6 - param_2;
  *(ushort *)(iVar7 + 0x5b2) = (ushort)iVar1;
  iVar2 = param_2 * 0x78 + -0x78;
  FUN_01bed4e2(auStack_1b0,iVar7 + iVar2,0x78);
  iVar10 = param_1[2];
  iVar11 = param_2 * 0xc + -0xc;
  iVar4 = *param_1;
  iVar3 = iVar4 + iVar10 * 0xc;
  local_138 = *(undefined4 *)(iVar3 + 0x52c);
  uStack_134 = *(undefined4 *)(iVar3 + 0x530);
  uStack_130 = *(undefined4 *)(iVar3 + 0x534);
  iVar5 = iVar7 + 0x52c;
  FUN_01bed864((undefined4 *)(iVar3 + 0x52c),iVar5 + iVar11,0xc);
  iVar4 = iVar4 + iVar10 * 0x78;
  FUN_01bed4e2(auStack_128,iVar4,0x78);
  FUN_01bed4e2(iVar4,auStack_1b0,0x78);
  local_b0 = local_138;
  uStack_ac = uStack_134;
  uStack_a8 = uStack_130;
  FUN_01bed4e2(auStack_a0,auStack_128,0x78);
  iVar4 = iVar9 + uVar8 * 0xc;
  *(undefined4 *)(iVar4 + 0x52c) = local_b0;
  *(undefined4 *)(iVar4 + 0x530) = uStack_ac;
  *(undefined4 *)(iVar4 + 0x534) = uStack_a8;
  iVar3 = iVar9 + uVar8 * 0x78;
  FUN_01bed4e2(iVar3,auStack_a0,0x78);
  FUN_01bed4e2(iVar4 + 0x538,iVar5,iVar11);
  FUN_01bed4e2(iVar3 + 0x78,iVar7,iVar2);
  FUN_01bed864(iVar5,iVar5 + param_2 * 0xc,iVar1 * 0xc);
  FUN_01bed864(iVar7,iVar7 + param_2 * 0x78,iVar1 * 0x78);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_01ad1e00;
  }
  else {
    if (param_1[6] == 0) {
LAB_01ad1e00:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar2 = iVar7 + 0x5b8;
    FUN_01bed4e2(iVar9 + (uVar8 + 1) * 4 + 0x5b8,iVar2,param_2 << 2);
    FUN_01bed864(iVar2,iVar2 + param_2 * 4,iVar1 * 4 + 4);
    do {
      iVar3 = *(int *)(iVar9 + 0x5bc + uVar8 * 4);
      uVar8 = uVar8 + 1;
      param_2 = param_2 - 1;
      *(short *)(iVar3 + 0x5b0) = (short)uVar8;
      *(int *)(iVar3 + 0x528) = iVar9;
    } while (param_2 != 0);
    iVar9 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar9 * 4);
      *(short *)(iVar3 + 0x5b0) = (short)iVar9;
      iVar9 = iVar9 + 1;
      *(int *)(iVar3 + 0x528) = iVar7;
    } while (iVar1 + 1 != iVar9);
  }
  return;
}

