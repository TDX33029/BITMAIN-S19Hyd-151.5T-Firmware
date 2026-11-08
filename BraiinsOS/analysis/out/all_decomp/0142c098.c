// FUN_0142c098 @ 0142c098 size=1076 calls_out=1 calls_in=4
// strings: 

void FUN_0142c098(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int *piVar17;
  int *extraout_r2;
  int *extraout_r3;
  int *piVar18;
  undefined4 uVar19;
  int *piVar20;
  undefined4 uVar21;
  int *piVar22;
  int *piVar23;
  int **ppiVar24;
  undefined4 uVar25;
  int *piVar26;
  int iVar27;
  undefined8 uVar28;
  undefined4 local_114;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  int *local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  
  piVar20 = (int *)param_2[0x28];
  ppiVar24 = &local_70;
  do {
    iVar9 = *piVar20;
    bVar8 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar8);
  *piVar20 = iVar9 + 1;
  if (-1 < iVar9) {
    uVar10 = param_2[0x29];
    uVar11 = param_2[0x2c];
    uVar12 = param_2[0x2d];
    uVar13 = param_2[0x2e];
    uVar14 = param_2[0x2f];
    uVar25 = param_2[0x2a];
    uVar21 = param_2[0x2b];
    uVar2 = *(undefined1 *)((int)param_2 + 0xca);
    uVar3 = *(undefined1 *)(param_2 + 0x32);
    uVar4 = *(undefined1 *)((int)param_2 + 0xc9);
    piVar17 = (int *)param_2[0x18];
    uVar5 = *(undefined1 *)(param_2 + 0x30);
    uVar16 = param_2[0x31];
    uVar15 = param_2[0x19];
    local_a0._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0xc1);
    local_a0._3_1_ = (undefined1)uVar16;
    do {
      iVar9 = *piVar17;
      bVar8 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar8);
    *piVar17 = iVar9 + 1;
    if (-1 < iVar9) {
      piVar22 = (int *)param_2[0x1a];
      if (piVar22 != (int *)0x0) {
        do {
          iVar9 = *piVar22;
          bVar8 = (bool)hasExclusiveAccess(piVar22);
        } while (!bVar8);
        *piVar22 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_0142c4c8;
        local_114 = param_2[0x1b];
      }
      local_98 = *param_2;
      local_94 = param_2[1];
      local_90 = param_2[2];
      local_8c = param_2[3];
      local_88 = param_2[4];
      local_84 = param_2[5];
      local_80 = param_2[6];
      local_7c = param_2[7];
      local_58 = param_2[0x10];
      local_50 = param_2[0x12];
      local_4c = param_2[0x13];
      local_48 = param_2[0x14];
      local_44 = param_2[0x15];
      local_40 = param_2[0x16];
      local_3c = *(undefined2 *)(param_2 + 0x17);
      piVar26 = (int *)param_2[10];
      local_60 = param_2[0xe];
      local_6c = param_2[0xb];
      local_5c = param_2[0xf];
      local_2c = local_114;
      iVar9 = param_2[0x1e];
      local_68 = param_2[0xc];
      uVar19 = param_2[8];
      local_74 = param_2[9];
      local_78 = uVar19;
      local_38 = piVar17;
      local_34 = uVar15;
      local_30 = piVar22;
      local_70 = piVar26;
      if (iVar9 == 0x3b9aca01) {
        piVar17 = (int *)0x142c300;
        uVar28 = (**(code **)(param_2[0x1d] + 0x14))(param_2[0x1c]);
        piVar23 = (int *)param_2[0x33];
        piVar22 = extraout_r2;
        piVar18 = extraout_r3;
      }
      else {
        piVar17 = (int *)param_2[0x22];
        do {
          iVar27 = *piVar17;
          bVar8 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar8);
        *piVar17 = iVar27 + 1;
        if (iVar27 < 0) goto LAB_0142c4c8;
        piVar22 = (int *)param_2[0x23];
        ppiVar24 = (int **)param_2[0x24];
        do {
          iVar27 = *piVar22;
          bVar8 = (bool)hasExclusiveAccess(piVar22);
        } while (!bVar8);
        *piVar22 = iVar27 + 1;
        if (iVar27 < 0) goto LAB_0142c4c8;
        piVar18 = (int *)param_2[0x25];
        do {
          iVar27 = *piVar18;
          bVar8 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar8);
        *piVar18 = iVar27 + 1;
        if (iVar27 < 0) goto LAB_0142c4c8;
        piVar26 = (int *)param_2[0x20];
        bVar6 = *(byte *)(param_2 + 0x26);
        if (piVar26 == (int *)0x0) {
          piVar23 = (int *)param_2[0x33];
          uVar19 = 0;
        }
        else {
          do {
            iVar27 = *piVar26;
            bVar8 = (bool)hasExclusiveAccess(piVar26);
          } while (!bVar8);
          *piVar26 = iVar27 + 1;
          if (iVar27 < 0) goto LAB_0142c4c8;
          uVar19 = param_2[0x21];
          piVar23 = (int *)param_2[0x33];
        }
        uVar28 = *(undefined8 *)(param_2 + 0x1c);
        uVar15 = (uint)bVar6;
      }
      if (piVar23 != (int *)0x0) {
        do {
          iVar27 = *piVar23;
          bVar8 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar8);
        *piVar23 = iVar27 + 1;
        if (iVar27 < 0) goto LAB_0142c4c8;
      }
      *(undefined1 *)(param_1 + 0xc0) = uVar5;
      *(undefined4 *)(param_1 + 0xa4) = uVar10;
      *(undefined4 *)(param_1 + 0xa8) = uVar25;
      *(int **)(param_1 + 0x8c) = piVar22;
      *(undefined4 *)(param_1 + 0xac) = uVar21;
      *(int ***)(param_1 + 0x90) = ppiVar24;
      uVar7 = *(undefined2 *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0xb0) = uVar11;
      *(undefined2 *)(param_1 + 0xd0) = uVar7;
      *(undefined8 *)(param_1 + 0x70) = uVar28;
      *(int *)(param_1 + 0x78) = iVar9;
      *(undefined4 *)(param_1 + 0xb4) = uVar12;
      *(undefined1 *)(param_1 + 200) = uVar3;
      *(undefined4 *)(param_1 + 0xb8) = uVar13;
      *(undefined1 *)(param_1 + 0xc9) = uVar4;
      *(undefined4 *)(param_1 + 0xc4) = uVar16;
      *(undefined4 *)(param_1 + 0xbc) = uVar14;
      *(int **)(param_1 + 0x94) = piVar18;
      uVar3 = *(undefined1 *)((int)param_2 + 0xd2);
      *(undefined1 *)(param_1 + 0xca) = uVar2;
      *(undefined4 *)(param_1 + 0xc1) = local_a0;
      *(int **)(param_1 + 0xa0) = piVar20;
      *(char *)(param_1 + 0x98) = (char)uVar15;
      *(int **)(param_1 + 0x80) = piVar26;
      *(undefined4 *)(param_1 + 0x84) = uVar19;
      *(int **)(param_1 + 0x88) = piVar17;
      *(undefined1 *)(param_1 + 0xd2) = uVar3;
      FUN_016dd1aa(param_1,&local_98,0x70);
      *(int **)(param_1 + 0xcc) = piVar23;
      return;
    }
  }
LAB_0142c4c8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x142c4c8);
  (*pcVar1)();
}

