// FUN_0194e8a8 @ 0194e8a8 size=700 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_0194e8a8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar4 = param_1[5];
  uVar5 = (uint)*(ushort *)(iVar4 + 0xb8a);
  uVar8 = param_2 + uVar5;
  if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar10 = param_1[3];
  uVar6 = (uint)*(ushort *)(iVar10 + 0xb8a);
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar9 = uVar6 - param_2;
  *(ushort *)(iVar10 + 0xb8a) = (ushort)iVar9;
  *(ushort *)(iVar4 + 0xb8a) = (ushort)uVar8;
  FUN_01bed864(iVar4 + param_2 * 0x10,iVar4,uVar5 << 4);
  iVar1 = iVar4 + 0xb4;
  FUN_01bed864(iVar1 + param_2 * 0xfc,iVar1,uVar5 * 0xfc);
  iVar2 = iVar9 + 1;
  iVar3 = uVar6 - iVar2;
  if (iVar3 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar4,iVar10 + iVar2 * 0x10,iVar3 * 0x10);
  FUN_01bed4e2(iVar1,iVar10 + 0xb4 + iVar2 * 0xfc,iVar3 * 0xfc);
  FUN_01bed4e2(auStack_340,iVar10 + 0xb4 + iVar9 * 0xfc,0xfc);
  iVar11 = *param_1;
  iVar12 = param_1[2];
  iVar7 = iVar11 + iVar12 * 0x10;
  FUN_01bed4e2(&local_240,iVar7,0x10);
  FUN_01bed864(iVar7,iVar10 + iVar9 * 0x10,0x10);
  iVar9 = iVar11 + iVar12 * 0xfc + 0xb4;
  FUN_01bed4e2(auStack_230,iVar9,0xfc);
  FUN_01bed4e2(iVar9,auStack_340,0xfc);
  local_130 = local_240;
  uStack_12c = uStack_23c;
  uStack_128 = uStack_238;
  uStack_124 = uStack_234;
  FUN_01bed4e2(auStack_120,auStack_230,0xfc);
  FUN_01bed4e2(iVar4 + iVar3 * 0x10,&local_130,0x10);
  FUN_01bed4e2(iVar1 + iVar3 * 0xfc,auStack_120,0xfc);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0194eb4c;
  }
  else {
    if (param_1[6] == 0) {
LAB_0194eb4c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar1 = iVar4 + 0xb8c;
    FUN_01bed864(iVar1 + param_2 * 4,iVar1,uVar5 * 4 + 4);
    FUN_01bed4e2(iVar1,iVar10 + iVar2 * 4 + 0xb8c,param_2 << 2);
    iVar10 = 0;
    do {
      iVar2 = *(int *)(iVar1 + iVar10 * 4);
      *(short *)(iVar2 + 0xb88) = (short)iVar10;
      iVar10 = iVar10 + 1;
      *(int *)(iVar2 + 0xb0) = iVar4;
    } while (uVar8 + 1 != iVar10);
  }
  return;
}

