// FUN_011e50c8 @ 011e50c8 size=656 calls_out=11 calls_in=7
// strings: properties

void FUN_011e50c8(uint *param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_1b0;
  int *local_1ac;
  uint local_1a8;
  undefined1 auStack_1a0 [148];
  uint local_10c [3];
  int local_100;
  uint local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  undefined1 auStack_e8 [136];
  undefined1 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  uint local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar8 = param_3[2];
  local_1b0 = 0;
  bVar11 = 0x7fffffe < uVar8;
  bVar10 = uVar8 == 0x7ffffff;
  uVar9 = uVar8 * 0x20;
  if (uVar8 < 0x8000000) {
    bVar11 = 0x7ffffffb < uVar9;
    bVar10 = uVar9 == 0x7ffffffc;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar9);
  }
  if (uVar9 == 0) {
    piVar2 = (int *)&DAT_00000004;
  }
  else {
    piVar2 = (int *)thunk_FUN_016d4a50(uVar9);
    local_1b0 = uVar8;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9);
    }
  }
  local_1a8 = 0;
  local_1ac = piVar2;
  FUN_0119d4b4(auStack_1a0,param_2,"properties",10);
  local_10c[2] = *param_3;
  local_100 = param_3[1];
  uVar9 = 0;
  if (local_10c[2] == 0) {
    uVar8 = 0;
  }
  local_10c[0] = (uint)(local_10c[2] != 0);
  local_f8 = 0;
  local_10c[1] = 0;
  local_fc = local_10c[0];
  local_f4 = local_10c[2];
  local_f0 = local_100;
  local_ec = uVar8;
  while( true ) {
    uVar12 = FUN_00f45584(local_10c);
    uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar7 = (int)uVar12;
    if (iVar7 == 0) {
      *param_1 = local_1b0;
      param_1[1] = (uint)local_1ac;
      param_1[2] = local_1a8;
      FUN_01161600(auStack_1a0);
      return;
    }
    FUN_0119d4b4(auStack_e8,auStack_1a0,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
    uVar5 = *(undefined4 *)(iVar7 + 4);
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar7 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar7);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar7);
      }
    }
    FUN_016dd1aa(iVar3,uVar5,iVar7);
    uVar1 = FUN_01352d48(local_60,uVar4);
    FUN_0125acb4(&local_38,auStack_e8,uVar4,uVar1);
    if (local_38 == 0) break;
    local_44 = local_30;
    iStack_40 = iStack_2c;
    iStack_3c = iStack_28;
    local_48 = local_34;
    local_4c = local_38;
    local_58 = iVar7;
    local_54 = iVar3;
    local_50 = iVar7;
    if (uVar9 == local_1b0) {
      FUN_011cf65c(&local_1b0);
      piVar2 = local_1ac;
    }
    piVar6 = piVar2 + uVar9 * 8;
    uVar9 = uVar9 + 1;
    *piVar6 = local_58;
    piVar6[1] = local_54;
    piVar6[2] = local_50;
    piVar6[3] = local_4c;
    piVar6[4] = local_48;
    piVar6[5] = local_44;
    piVar6[6] = iStack_40;
    piVar6[7] = iStack_3c;
    local_1a8 = uVar9;
    FUN_01161600(auStack_e8);
  }
  *param_1 = 0x80000000;
  param_1[1] = local_34;
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  FUN_01161600(auStack_e8);
  FUN_01161600(auStack_1a0);
  piVar6 = piVar2;
  for (iVar7 = uVar9 + 1; iVar7 != 1; iVar7 = iVar7 + -1) {
    if (*piVar6 != 0) {
      thunk_FUN_016d3fb4(piVar6[1]);
    }
    FUN_0115ccf0(piVar6 + 3);
    piVar6 = piVar6 + 8;
  }
  if (local_1b0 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(piVar2);
  return;
}

