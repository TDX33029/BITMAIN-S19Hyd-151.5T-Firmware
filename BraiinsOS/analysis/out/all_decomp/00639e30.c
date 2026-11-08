// FUN_00639e30 @ 00639e30 size=652 calls_out=3 calls_in=2
// strings: 

void FUN_00639e30(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined1 uVar11;
  byte bVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  int *piVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  
  uVar14 = *param_2;
  uVar15 = param_2[4];
  uVar16 = param_2[0x10];
  uVar17 = param_2[0xc];
  uVar18 = param_2[0xe];
  uVar19 = param_2[8];
  uVar20 = param_2[10];
  uVar2 = *(undefined1 *)((int)param_2 + 0x79);
  uVar3 = *(undefined1 *)(param_2 + 0x1d);
  uVar4 = *(undefined1 *)((int)param_2 + 0x73);
  uVar21 = param_2[0x1b];
  uVar22 = param_2[0x12];
  uVar23 = param_2[6];
  uVar5 = *(undefined1 *)(param_2 + 0x1e);
  uVar24 = param_2[0x1a];
  uVar6 = *(undefined1 *)((int)param_2 + 0x7a);
  uVar7 = *(undefined1 *)((int)param_2 + 0x72);
  uVar8 = *(undefined1 *)((int)param_2 + 0x71);
  uVar9 = *(undefined1 *)(param_2 + 0x1c);
  uVar37 = param_2[1];
  uVar35 = param_2[2];
  uVar30 = param_2[0x11];
  uVar38 = param_2[0xd];
  uVar33 = param_2[9];
  uVar36 = param_2[5];
  piVar28 = (int *)param_2[0x17];
  bVar10 = *(byte *)((int)param_2 + 0x75);
  uVar29 = (uint)bVar10;
  uVar25 = param_2[0x19];
  uVar26 = param_2[0x18];
  do {
    iVar27 = *piVar28;
    bVar13 = (bool)hasExclusiveAccess(piVar28);
  } while (!bVar13);
  *piVar28 = iVar27 + 1;
  if (iVar27 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x639f60);
    (*pcVar1)();
  }
  uVar11 = *(undefined1 *)((int)param_2 + 0x77);
  bVar12 = *(byte *)((int)param_2 + 0x76);
  uVar32 = (uint)bVar12;
  if (param_2[0x14] == -0x80000000) {
    uVar34 = 0x80000000;
  }
  else {
    uVar32 = param_2[0x16];
    if ((int)uVar32 < 0) {
      uVar14 = 0;
LAB_00639f58:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar14,uVar32);
    }
    uVar31 = param_2[0x15];
    if (uVar32 == 0) {
      uVar29 = 1;
      uVar34 = 0;
    }
    else {
      uVar29 = thunk_FUN_016d4a50(uVar32);
      if (uVar29 == 0) {
        uVar14 = 1;
        goto LAB_00639f58;
      }
      uVar34 = uVar32;
    }
    FUN_016dd1aa(uVar29,uVar31,uVar32);
  }
  *param_1 = uVar14;
  param_1[4] = uVar15;
  param_1[8] = uVar19;
  param_1[0xc] = uVar17;
  param_1[0x10] = uVar16;
  *(undefined1 *)((int)param_1 + 0x7a) = uVar6;
  *(undefined1 *)((int)param_1 + 0x72) = uVar7;
  *(undefined1 *)((int)param_1 + 0x71) = uVar8;
  *(undefined1 *)(param_1 + 0x1c) = uVar9;
  param_1[0x19] = uVar25;
  param_1[0x18] = uVar26;
  *(undefined1 *)(param_1 + 0x1e) = uVar5;
  param_1[0x1a] = uVar24;
  param_1[6] = uVar23;
  param_1[10] = uVar20;
  param_1[0xe] = uVar18;
  *(undefined1 *)((int)param_1 + 0x79) = uVar2;
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  *(undefined1 *)((int)param_1 + 0x73) = uVar4;
  param_1[0x1b] = uVar21;
  param_1[0x12] = uVar22;
  param_1[9] = uVar33;
  *(byte *)((int)param_1 + 0x75) = bVar10;
  param_1[0x15] = uVar29;
  param_1[2] = uVar35;
  param_1[1] = uVar37;
  param_1[5] = uVar36;
  param_1[0xd] = uVar38;
  param_1[0x11] = uVar30;
  param_1[0x17] = piVar28;
  *(undefined1 *)((int)param_1 + 0x77) = uVar11;
  *(byte *)((int)param_1 + 0x76) = bVar12;
  param_1[0x14] = uVar34;
  param_1[0x16] = uVar32;
  return;
}

