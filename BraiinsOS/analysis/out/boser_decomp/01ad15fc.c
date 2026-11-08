// FUN_01ad15fc @ 01ad15fc size=716 calls_out=3 calls_in=2
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_01ad15fc(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
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
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar4 = param_1[5];
  uVar13 = (uint)*(ushort *)(iVar4 + 0x5b2);
  uVar9 = param_2 + uVar13;
  if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar11 = param_1[3];
  uVar5 = (uint)*(ushort *)(iVar11 + 0x5b2);
  if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar3 = iVar4 + 0x52c;
  iVar8 = uVar5 - param_2;
  *(ushort *)(iVar11 + 0x5b2) = (ushort)iVar8;
  *(ushort *)(iVar4 + 0x5b2) = (ushort)uVar9;
  FUN_01bed864(iVar3 + param_2 * 0xc,iVar3,uVar13 * 0xc);
  FUN_01bed864(iVar4 + param_2 * 0x78,iVar4,uVar13 * 0x78);
  iVar7 = iVar8 + 1;
  iVar6 = uVar5 - iVar7;
  if (iVar6 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar3,iVar11 + 0x52c + iVar7 * 0xc,iVar6 * 0xc);
  FUN_01bed4e2(iVar4,iVar11 + iVar7 * 0x78,iVar6 * 0x78);
  FUN_01bed4e2(auStack_1b0,iVar11 + iVar8 * 0x78,0x78);
  iVar12 = param_1[2];
  iVar10 = *param_1;
  iVar1 = iVar10 + iVar12 * 0xc;
  local_138 = *(undefined4 *)(iVar1 + 0x52c);
  uStack_134 = *(undefined4 *)(iVar1 + 0x530);
  uStack_130 = *(undefined4 *)(iVar1 + 0x534);
  FUN_01bed864((undefined4 *)(iVar1 + 0x52c),iVar11 + 0x52c + iVar8 * 0xc,0xc);
  iVar10 = iVar10 + iVar12 * 0x78;
  FUN_01bed4e2(auStack_128,iVar10,0x78);
  FUN_01bed4e2(iVar10,auStack_1b0,0x78);
  local_b0 = local_138;
  uStack_ac = uStack_134;
  uStack_a8 = uStack_130;
  FUN_01bed4e2(auStack_a0,auStack_128,0x78);
  puVar2 = (undefined4 *)(iVar3 + iVar6 * 0xc);
  *puVar2 = local_b0;
  puVar2[1] = uStack_ac;
  puVar2[2] = uStack_a8;
  FUN_01bed4e2(iVar4 + iVar6 * 0x78,auStack_a0,0x78);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_01ad18b0;
  }
  else {
    if (param_1[6] == 0) {
LAB_01ad18b0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar3 = iVar4 + 0x5b8;
    FUN_01bed864(iVar3 + param_2 * 4,iVar3,uVar13 * 4 + 4);
    FUN_01bed4e2(iVar3,iVar11 + iVar7 * 4 + 0x5b8,param_2 << 2);
    iVar11 = 0;
    do {
      iVar6 = *(int *)(iVar3 + iVar11 * 4);
      *(short *)(iVar6 + 0x5b0) = (short)iVar11;
      iVar11 = iVar11 + 1;
      *(int *)(iVar6 + 0x528) = iVar4;
    } while (uVar9 + 1 != iVar11);
  }
  return;
}

