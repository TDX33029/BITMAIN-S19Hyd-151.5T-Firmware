// FUN_0074ad08 @ 0074ad08 size=596 calls_out=1 calls_in=9
// strings: 

void FUN_0074ad08(undefined4 *param_1,undefined4 *param_2)

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
  int iVar27;
  int *piVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
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
  uVar34 = param_2[1];
  uVar32 = param_2[2];
  uVar33 = param_2[0x11];
  uVar29 = param_2[0xd];
  uVar30 = param_2[9];
  uVar31 = param_2[5];
  piVar28 = (int *)param_2[0x17];
  uVar10 = *(undefined1 *)((int)param_2 + 0x75);
  uVar25 = param_2[0x19];
  uVar26 = param_2[0x18];
  do {
    iVar27 = *piVar28;
    bVar13 = (bool)hasExclusiveAccess(piVar28);
  } while (!bVar13);
  *piVar28 = iVar27 + 1;
  if (iVar27 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x74af58);
    (*pcVar1)();
  }
  uVar11 = *(undefined1 *)((int)param_2 + 0x76);
  uVar12 = *(undefined1 *)((int)param_2 + 0x77);
  if (param_2[0x14] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_015e8ad4(&local_30,param_2[0x15],param_2[0x16]);
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
  param_1[2] = uVar32;
  param_1[1] = uVar34;
  param_1[5] = uVar31;
  param_1[9] = uVar30;
  param_1[0xd] = uVar29;
  param_1[0x11] = uVar33;
  param_1[0x17] = piVar28;
  *(undefined1 *)((int)param_1 + 0x75) = uVar10;
  *(undefined1 *)((int)param_1 + 0x77) = uVar12;
  *(undefined1 *)((int)param_1 + 0x76) = uVar11;
  param_1[0x14] = local_30;
  param_1[0x15] = uStack_2c;
  param_1[0x16] = uStack_28;
  return;
}

