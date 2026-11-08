// FUN_006b16d4 @ 006b16d4 size=716 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_006b16d4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
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
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar6 = param_1[5];
  uVar9 = (uint)*(ushort *)(iVar6 + 0x81a);
  uVar10 = param_2 + uVar9;
  if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar7 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar7 + 0x81a);
  if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar12 = uVar8 - param_2;
  *(ushort *)(iVar7 + 0x81a) = (ushort)iVar12;
  *(ushort *)(iVar6 + 0x81a) = (ushort)uVar10;
  iVar2 = iVar6 + 0x794;
  FUN_01bed864(iVar2 + param_2 * 0xc,iVar2,uVar9 * 0xc);
  FUN_01bed864(param_2 * 0xb0 + iVar6,iVar6,uVar9 * 0xb0);
  iVar3 = iVar12 + 1;
  iVar5 = uVar8 - iVar3;
  if (iVar5 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar2,iVar7 + 0x794 + iVar3 * 0xc,iVar5 * 0xc);
  FUN_01bed4e2(iVar6,iVar3 * 0xb0 + iVar7,iVar5 * 0xb0);
  FUN_01bed4e2(auStack_258,iVar12 * 0xb0 + iVar7,0xb0);
  iVar13 = *param_1;
  iVar11 = param_1[2];
  iVar1 = iVar13 + iVar11 * 0xc;
  local_1a8 = *(undefined4 *)(iVar1 + 0x794);
  uStack_1a4 = *(undefined4 *)(iVar1 + 0x798);
  uStack_1a0 = *(undefined4 *)(iVar1 + 0x79c);
  FUN_01bed864((undefined4 *)(iVar1 + 0x794),iVar7 + 0x794 + iVar12 * 0xc,0xc);
  iVar13 = iVar11 * 0xb0 + iVar13;
  FUN_01bed4e2(auStack_198,iVar13,0xb0);
  FUN_01bed4e2(iVar13,auStack_258,0xb0);
  local_e8 = local_1a8;
  uStack_e4 = uStack_1a4;
  uStack_e0 = uStack_1a0;
  FUN_01bed4e2(auStack_d8,auStack_198,0xb0);
  puVar4 = (undefined4 *)(iVar2 + iVar5 * 0xc);
  *puVar4 = local_e8;
  puVar4[1] = uStack_e4;
  puVar4[2] = uStack_e0;
  FUN_01bed4e2(iVar5 * 0xb0 + iVar6,auStack_d8,0xb0);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_006b1988;
  }
  else {
    if (param_1[6] == 0) {
LAB_006b1988:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar2 = iVar6 + 0x820;
    FUN_01bed864(iVar2 + param_2 * 4,iVar2,uVar9 * 4 + 4);
    FUN_01bed4e2(iVar2,iVar7 + iVar3 * 4 + 0x820,param_2 << 2);
    iVar7 = 0;
    do {
      iVar2 = *(int *)(iVar6 + iVar7 * 4 + 0x820);
      *(short *)(iVar2 + 0x818) = (short)iVar7;
      iVar7 = iVar7 + 1;
      *(int *)(iVar2 + 0x790) = iVar6;
    } while (uVar10 + 1 != iVar7);
  }
  return;
}

