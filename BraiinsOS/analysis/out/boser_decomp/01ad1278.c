// FUN_01ad1278 @ 01ad1278 size=696 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | assertion failed: old_left_len + count <= CAPACITY | assertion failed: old_right_len >= count | internal error: entered unreachable code

void FUN_01ad1278(int *param_1,uint param_2)

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
  undefined1 auStack_120 [72];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [72];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [76];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff50);
  }
  iVar9 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar9 + 0x3a2);
  if (0xb < param_2 + uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_left_len + count <= CAPACITY",0x32,&DAT_01d2ff60);
  }
  iVar7 = param_1[5];
  uVar6 = (uint)*(ushort *)(iVar7 + 0x3a2);
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: old_right_len >= count",0x28,&DAT_01d2ff70);
  }
  *(ushort *)(iVar9 + 0x3a2) = (ushort)(param_2 + uVar8);
  iVar2 = uVar6 - param_2;
  *(ushort *)(iVar7 + 0x3a2) = (ushort)iVar2;
  iVar3 = param_2 * 0x48 + -0x48;
  FUN_01bed4e2(auStack_120,iVar7 + iVar3,0x48);
  iVar11 = param_1[2];
  iVar10 = *param_1;
  iVar12 = param_2 * 0xc + -0xc;
  iVar4 = iVar10 + iVar11 * 0xc;
  local_d8 = *(undefined4 *)(iVar4 + 0x31c);
  uStack_d4 = *(undefined4 *)(iVar4 + 800);
  uStack_d0 = *(undefined4 *)(iVar4 + 0x324);
  iVar5 = iVar7 + 0x31c;
  FUN_01bed864((undefined4 *)(iVar4 + 0x31c),iVar5 + iVar12,0xc);
  iVar10 = iVar10 + iVar11 * 0x48;
  FUN_01bed4e2(auStack_c8,iVar10,0x48);
  FUN_01bed4e2(iVar10,auStack_120,0x48);
  local_80 = local_d8;
  uStack_7c = uStack_d4;
  uStack_78 = uStack_d0;
  FUN_01bed4e2(auStack_70,auStack_c8,0x48);
  iVar10 = iVar9 + uVar8 * 0xc;
  *(undefined4 *)(iVar10 + 0x31c) = local_80;
  *(undefined4 *)(iVar10 + 800) = uStack_7c;
  *(undefined4 *)(iVar10 + 0x324) = uStack_78;
  iVar4 = iVar9 + uVar8 * 0x48;
  FUN_01bed4e2(iVar4,auStack_70,0x48);
  FUN_01bed4e2(iVar10 + 0x328,iVar5,iVar12);
  FUN_01bed4e2(iVar4 + 0x48,iVar7,iVar3);
  FUN_01bed864(iVar5,iVar5 + param_2 * 0xc,iVar2 * 0xc);
  FUN_01bed864(iVar7,iVar7 + param_2 * 0x48,iVar2 * 0x48);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_01ad1518;
  }
  else {
    if (param_1[6] == 0) {
LAB_01ad1518:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ff80);
    }
    iVar3 = iVar7 + 0x3a8;
    FUN_01bed4e2(iVar9 + (uVar8 + 1) * 4 + 0x3a8,iVar3,param_2 << 2);
    FUN_01bed864(iVar3,iVar3 + param_2 * 4,iVar2 * 4 + 4);
    iVar3 = uVar8 + 0xeb;
    do {
      iVar4 = *(int *)(iVar9 + iVar3 * 4);
      sVar1 = (short)iVar3;
      iVar3 = iVar3 + 1;
      param_2 = param_2 - 1;
      *(short *)(iVar4 + 0x3a0) = sVar1 + -0xea;
      *(int *)(iVar4 + 0x318) = iVar9;
    } while (param_2 != 0);
    iVar9 = 0;
    do {
      iVar3 = *(int *)(iVar7 + iVar9 * 4 + 0x3a8);
      *(short *)(iVar3 + 0x3a0) = (short)iVar9;
      iVar9 = iVar9 + 1;
      *(int *)(iVar3 + 0x318) = iVar7;
    } while (iVar2 + 1 != iVar9);
  }
  return;
}

