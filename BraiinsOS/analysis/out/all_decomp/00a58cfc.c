// FUN_00a58cfc @ 00a58cfc size=1212 calls_out=14 calls_in=1
// strings: 

void FUN_00a58cfc(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  code *pcVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 *puVar16;
  short sVar17;
  char cVar18;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  undefined2 uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  undefined4 *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1c)) {
  case 0:
    uVar3 = *param_2;
    param_2[3] = uVar3;
    uVar7 = 1;
    param_2[4] = uVar3;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = 1;
    *(undefined1 *)(param_2 + 0xd) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186cb2c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186cb2c);
  case 3:
    puVar22 = param_2 + 3;
    uVar4 = (&switchD_00a58d80::switchdataD_00a58d84)[*(byte *)(param_2 + 0xd)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0xd)) {
    case 0:
      uVar3 = param_2[3];
      uVar7 = param_2[7];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187a1dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187a1dc);
    case 3:
      goto switchD_00a58d80_caseD_3;
    case 4:
      goto switchD_00a58d80_caseD_4;
    }
  }
  puVar22 = param_2 + 3;
  param_2[8] = uVar3;
  param_2[9] = uVar7;
  param_2[10] = param_2[4];
  param_2[0xb] = param_2[5];
  param_2[0xc] = param_2[6];
  do {
    param_2[0xe] = uVar3;
    param_2[0xf] = uVar7;
    *(undefined1 *)(param_2 + 0x1b) = 0;
switchD_00a58d80_caseD_3:
    local_68 = param_2 + 0xd;
    uVar19 = 0x8e14;
    FUN_00a59a78(&local_60,param_2 + 0xe,param_3);
    puVar16 = local_58;
    puVar13 = local_5c;
    uVar10 = local_60;
    if (local_60 == 2) {
      *(undefined1 *)local_68 = 3;
      goto LAB_00a59154;
    }
    uVar4 = (uint)*(byte *)(param_2 + 0x1b);
    bVar20 = uVar4 == 3;
    if (bVar20) {
      uVar4 = (uint)*(byte *)(param_2 + 0x1a);
    }
    uVar15 = extraout_r12;
    if (bVar20 && uVar4 == 3) {
      iVar12 = param_2[0x12];
      pcVar14 = (char *)(iVar12 + 0xc);
      if (*pcVar14 == '\0') {
        bVar20 = (bool)hasExclusiveAccess(pcVar14);
        if (!bVar20) goto LAB_00a58fe4;
        *pcVar14 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00a58fe4:
        FUN_01280da8(pcVar14);
      }
      FUN_0128236c(pcVar14);
      piVar5 = param_2 + 0x13;
      if (*piVar5 == 0) {
        if (*(int **)(iVar12 + 0x10) == piVar5) {
          piVar8 = (int *)param_2[0x14];
          *(int **)(iVar12 + 0x10) = piVar8;
          goto joined_r0x00a59044;
        }
      }
      else {
        piVar8 = (int *)param_2[0x14];
        *(int **)(*piVar5 + 4) = piVar8;
joined_r0x00a59044:
        if (piVar8 == (int *)0x0) {
          if (*(int **)(iVar12 + 0x14) != piVar5) goto LAB_00a59054;
          *(int *)(iVar12 + 0x14) = *piVar5;
        }
        else {
          *piVar8 = *piVar5;
        }
        param_2[0x13] = 0;
        param_2[0x14] = 0;
      }
LAB_00a59054:
      uVar19 = 0x905c;
      FUN_01282570(pcVar14);
      if (*pcVar14 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar20 = (bool)hasExclusiveAccess(pcVar14);
          if (bVar20) {
            *pcVar14 = '\0';
            uVar15 = extraout_r12_00;
            goto LAB_00a59094;
          }
        } while (*pcVar14 == '\x01');
      }
      ClearExclusiveLocal();
      uVar19 = 0x9094;
      FUN_01280a5c(pcVar14);
      uVar15 = extraout_r12_01;
LAB_00a59094:
      uVar4 = 0;
      if (param_2[0x15] != 0) {
        uVar19 = 0x90ac;
        uVar4 = (**(code **)(param_2[0x15] + 0xc))(param_2[0x16]);
        uVar15 = extraout_r12_02;
      }
    }
    if ((uVar10 & 1) != 0) {
      sVar17 = 2;
      goto LAB_00a590e8;
    }
    param_2[0xe] = puVar13;
    param_2[0xf] = puVar16;
switchD_00a58d80_caseD_4:
    local_68 = param_2 + 0xd;
    uVar21 = thunk_FUN_016de0ee(uVar4,0x40);
    iVar12 = (int)uVar21 + (int)((ulonglong)uVar21 >> 0x20);
    puVar13 = (undefined4 *)*param_3;
    if (*(char *)(iVar12 + 0x38) == '\x01') {
LAB_00a58e94:
      cVar6 = *(char *)(iVar12 + 0x31);
      cVar18 = *(char *)(iVar12 + 0x30);
      cVar2 = cVar6;
      if (cVar18 == '\x01') {
        if (cVar6 == '\0') {
          FUN_016455a4(*puVar13,puVar13[1]);
          *(undefined1 *)local_68 = 4;
LAB_00a59154:
          *(undefined2 *)(param_1 + 1) = 3;
          *(undefined2 *)(param_1 + 1) = 3;
          *(undefined1 *)(param_2 + 0x1c) = 3;
          return;
        }
        cVar2 = cVar6 + -1;
      }
      *(char *)(iVar12 + 0x31) = cVar2;
    }
    else {
      cVar18 = '\0';
      cVar6 = '\0';
      if (*(char *)(iVar12 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar12,FUN_00a303f4);
        *(undefined1 *)(iVar12 + 0x38) = 1;
        goto LAB_00a58e94;
      }
    }
    if (*(int *)(param_2[10] + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ad11c);
    }
    FUN_0126db34(&local_60,*(int *)(param_2[10] + 0xc),param_2[0xb],param_2[0xc],puVar22);
    sVar17 = (short)local_5c;
    if (((short)local_5c != 2) || (cVar2 = FUN_00a59714(&local_58), cVar2 != '\r')) {
      local_38 = local_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      puVar16 = local_54;
      puVar13 = local_58;
      uVar15 = local_60;
      uVar19 = local_5c._2_2_;
LAB_00a590e8:
      local_68 = param_2 + 0xd;
      param_1[2] = (uint)puVar13;
      *(undefined2 *)((int)param_1 + 6) = uVar19;
      *(short *)(param_1 + 1) = sVar17;
      *param_1 = uVar15;
      param_1[3] = (uint)puVar16;
      param_1[4] = local_38;
      param_1[5] = uStack_34;
      param_1[6] = uStack_30;
      param_1[7] = uStack_2c;
      param_1[8] = uStack_28;
      *(undefined1 *)local_68 = 1;
      *(undefined1 *)(param_2 + 0x1c) = 1;
      return;
    }
    uVar10 = param_2[0xe];
    bVar1 = *(byte *)(param_2 + 0xf);
    puVar11 = (uint *)(*(int *)(param_2[8] + 8) + 0x28);
    DataMemoryBarrier(0xb);
    uVar4 = *(uint *)(*(int *)(param_2[8] + 8) + 0x28);
    do {
      while( true ) {
        if ((uint)bVar1 != (uVar4 & 0xffffff) >> 0x10) goto LAB_00a58f8c;
        uVar15 = *puVar11;
        if (uVar15 == uVar4) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar4 = uVar15;
      }
      DataMemoryBarrier(0xb);
      bVar20 = (bool)hasExclusiveAccess(puVar11);
      if (bVar20) {
        *puVar11 = uVar4 & (uVar10 & 0x33 ^ 0xff003f);
      }
      DataMemoryBarrier(0xb);
      uVar4 = uVar15;
    } while (!bVar20);
LAB_00a58f8c:
    if (cVar18 == '\0') {
LAB_00a58fa8:
      puVar13 = local_54;
    }
    else {
      if (*(char *)(iVar12 + 0x38) != '\x01') {
        if (*(char *)(iVar12 + 0x38) == '\x02') goto LAB_00a58fa8;
        FUN_015e8e6c(iVar12,FUN_01655ec4);
        *(undefined1 *)(iVar12 + 0x38) = 1;
      }
      *(char *)(iVar12 + 0x31) = cVar6;
      *(undefined1 *)(iVar12 + 0x30) = 1;
      puVar13 = local_54;
    }
    local_54 = puVar13;
    if ((char)local_58 == '\x03') {
      uVar3 = *puVar13;
      puVar16 = (undefined4 *)puVar13[1];
      pcVar9 = (code *)*puVar16;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar3);
      }
      if (puVar16[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      thunk_FUN_016d3fb4(puVar13);
    }
    uVar3 = param_2[8];
    uVar7 = param_2[9];
  } while( true );
}

