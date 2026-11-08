// FUN_00c0d1cc @ 00c0d1cc size=436 calls_out=5 calls_in=3
// strings: 

void FUN_00c0d1cc(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_240;
  undefined1 auStack_238 [224];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  undefined2 local_144;
  undefined1 auStack_140 [224];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  FUN_00c0d3dc(auStack_140,param_2 + 0xe);
  uVar7 = *(undefined2 *)(param_2 + 0x4b);
  piVar11 = (int *)param_2[0x49];
  uVar15 = param_2[0x4a];
  do {
    iVar8 = *piVar11;
    bVar16 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar16);
  *piVar11 = iVar8 + 1;
  if (iVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0xc0d278);
    (*pcVar2)();
  }
  FUN_00ccd934(&local_60,param_2[0x47],param_2[0x48]);
  FUN_016dd1aa(auStack_238,auStack_140,0xe0);
  local_158 = local_60;
  uStack_154 = uStack_5c;
  uStack_150 = uStack_58;
  uVar9 = 0;
  uVar12 = param_2[0x4e];
  bVar17 = 0x1ffffffe < uVar12;
  bVar16 = uVar12 == 0x1fffffff;
  uVar1 = uVar12 * 8;
  if (uVar12 < 0x20000000) {
    bVar17 = 0x7ffffffb < uVar1;
    bVar16 = uVar1 == 0x7ffffffc;
  }
  piStack_14c = piVar11;
  uStack_148 = uVar15;
  local_144 = uVar7;
  if (!bVar17 || bVar16) {
    uVar15 = param_2[0x4d];
    uVar3 = *(undefined1 *)(param_2 + 0x51);
    if (uVar1 == 0) {
      iVar8 = 4;
      local_240 = 0;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(uVar1);
      local_240 = uVar12;
      if (iVar8 == 0) {
        uVar9 = 4;
        goto LAB_00c0d270;
      }
    }
    FUN_016dd1aa(iVar8,uVar15,uVar1);
    uVar15 = param_2[0x4f];
    uVar4 = *(undefined1 *)(param_2 + 0x50);
    uVar9 = param_2[4];
    uVar10 = param_2[5];
    uVar19 = *(undefined8 *)(param_2 + 6);
    uVar20 = *(undefined8 *)(param_2 + 8);
    uVar21 = *(undefined8 *)(param_2 + 10);
    uVar22 = *(undefined8 *)(param_2 + 0xc);
    uVar18 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined1 *)((int)param_2 + 0x143);
    uVar6 = *(undefined1 *)((int)param_2 + 0x145);
    uVar14 = *param_2;
    uVar13 = param_2[1];
    uVar7 = *(undefined2 *)((int)param_2 + 0x141);
    FUN_016dd1aa(param_1 + 0xe,auStack_238,0xf8);
    *(undefined2 *)((int)param_1 + 0x141) = uVar7;
    *(undefined1 *)(param_1 + 0x51) = uVar3;
    *param_1 = uVar14;
    *(undefined8 *)(param_1 + 6) = uVar19;
    *(undefined8 *)(param_1 + 8) = uVar20;
    *(undefined8 *)(param_1 + 10) = uVar21;
    *(undefined8 *)(param_1 + 0xc) = uVar22;
    param_1[4] = uVar9;
    param_1[5] = uVar10;
    *(undefined1 *)(param_1 + 0x50) = uVar4;
    param_1[0x4c] = local_240;
    param_1[0x4d] = iVar8;
    param_1[1] = uVar13;
    *(undefined1 *)((int)param_1 + 0x145) = uVar6;
    *(undefined1 *)((int)param_1 + 0x143) = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar18;
    param_1[0x4e] = uVar12;
    param_1[0x4f] = uVar15;
    return;
  }
LAB_00c0d270:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar9,uVar1);
}

