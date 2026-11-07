// FUN_006b3c20 @ 006b3c20 size=672 calls_out=3 calls_in=6
// strings: 

void FUN_006b3c20(undefined4 *param_1,undefined4 *param_2)

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
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
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
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  int unaff_r5;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  int local_90;
  
  uVar14 = *param_2;
  uVar15 = param_2[4];
  uVar16 = param_2[0x11];
  uVar17 = param_2[0x10];
  uVar18 = param_2[0xc];
  uVar19 = param_2[0xe];
  uVar20 = param_2[8];
  uVar21 = param_2[10];
  uVar2 = *(undefined1 *)((int)param_2 + 0x79);
  uVar3 = *(undefined1 *)(param_2 + 0x1d);
  uVar4 = *(undefined1 *)((int)param_2 + 0x73);
  uVar22 = param_2[0x1b];
  uVar23 = param_2[0x12];
  uVar24 = param_2[6];
  uVar5 = *(undefined1 *)(param_2 + 0x1e);
  uVar25 = param_2[0x1a];
  uVar6 = *(undefined1 *)((int)param_2 + 0x7a);
  uVar7 = *(undefined1 *)((int)param_2 + 0x72);
  uVar8 = *(undefined1 *)((int)param_2 + 0x71);
  uVar9 = *(undefined1 *)(param_2 + 0x1c);
  uVar34 = param_2[1];
  uVar31 = param_2[2];
  uVar35 = param_2[0xd];
  uVar32 = param_2[9];
  uVar33 = param_2[5];
  piVar30 = (int *)param_2[0x17];
  uVar10 = *(undefined1 *)((int)param_2 + 0x75);
  uVar26 = param_2[0x19];
  uVar27 = param_2[0x18];
  do {
    iVar28 = *piVar30;
    bVar13 = (bool)hasExclusiveAccess(piVar30);
  } while (!bVar13);
  *piVar30 = iVar28 + 1;
  if (iVar28 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6b3d54);
    (*pcVar1)();
  }
  uVar11 = *(undefined1 *)((int)param_2 + 0x77);
  uVar12 = *(undefined1 *)((int)param_2 + 0x76);
  if (param_2[0x14] == -0x80000000) {
    iVar28 = -0x80000000;
  }
  else {
    unaff_r5 = param_2[0x16];
    uVar29 = 0;
    if (unaff_r5 < 0) {
LAB_006b3d48:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar29,unaff_r5);
    }
    uVar29 = param_2[0x15];
    if (unaff_r5 == 0) {
      local_90 = 1;
      iVar28 = 0;
    }
    else {
      local_90 = thunk_FUN_016d4a50(unaff_r5);
      if (local_90 == 0) {
        uVar29 = 1;
        goto LAB_006b3d48;
      }
      iVar28 = unaff_r5;
    }
    FUN_016dd1aa(local_90,uVar29,unaff_r5);
  }
  param_1[0xe] = uVar19;
  param_1[4] = uVar15;
  *(undefined1 *)((int)param_1 + 0x79) = uVar2;
  param_1[8] = uVar20;
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  param_1[0xc] = uVar18;
  *(undefined1 *)((int)param_1 + 0x73) = uVar4;
  param_1[0x10] = uVar17;
  param_1[0x1b] = uVar22;
  *(undefined1 *)((int)param_1 + 0x7a) = uVar6;
  param_1[2] = uVar31;
  param_1[5] = uVar33;
  *(undefined1 *)((int)param_1 + 0x72) = uVar7;
  param_1[0x18] = uVar27;
  param_1[9] = uVar32;
  *(undefined1 *)((int)param_1 + 0x71) = uVar8;
  *(undefined1 *)(param_1 + 0x1e) = uVar5;
  param_1[0x11] = uVar16;
  *(undefined1 *)(param_1 + 0x1c) = uVar9;
  param_1[0x1a] = uVar25;
  *(undefined1 *)((int)param_1 + 0x77) = uVar11;
  *param_1 = uVar14;
  param_1[0x19] = uVar26;
  param_1[6] = uVar24;
  param_1[10] = uVar21;
  param_1[0x12] = uVar23;
  param_1[1] = uVar34;
  param_1[0x17] = piVar30;
  *(undefined1 *)((int)param_1 + 0x75) = uVar10;
  *(undefined1 *)((int)param_1 + 0x76) = uVar12;
  param_1[0x14] = iVar28;
  param_1[0x15] = local_90;
  param_1[0xd] = uVar35;
  param_1[0x16] = unaff_r5;
  return;
}

