// FUN_013eb018 @ 013eb018 size=2388 calls_out=13 calls_in=2
// strings: 

void FUN_013eb018(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 *puVar8;
  char cVar9;
  char cVar10;
  int *piVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  uint uVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  char cVar22;
  char cVar23;
  uint uVar24;
  uint *puVar25;
  char cVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  char cVar30;
  undefined1 *puVar31;
  char cVar32;
  char cVar33;
  uint local_b4;
  uint *local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  uint local_9c;
  uint *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint local_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_94 = 0;
  local_a0 = (uint *)0x0;
  local_8c = 0;
  local_98 = (uint *)0x0;
  local_90 = 4;
  local_9c = 4;
  local_b4 = 4;
  local_ac = param_2;
  uStack_a8 = param_3;
  uStack_a4 = param_4;
LAB_013eb088:
  puVar29 = local_98;
  uVar24 = *param_5;
  puVar27 = (uint *)param_5[1];
  switch(uVar24) {
  case 7:
    if (((byte)param_2[5] == 2) || (((byte)param_2[5] & 1) != 0)) {
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      FUN_013f9dd4(&local_84,&local_40);
      local_88 = 9;
      FUN_013eece4(param_2,&local_88);
    }
    else {
      local_38 = 0;
      local_3c = 1;
      local_40 = 0;
      FUN_013f9ed8(&local_84);
      local_88 = 10;
      FUN_013eece4(param_2,&local_88);
    }
    break;
  case 8:
    local_88 = 0xb;
    FUN_013eece4(param_2,&local_88);
    break;
  case 9:
    if (*puVar27 == 0x80000002) {
      cVar17 = (char)param_2[4];
      cVar19 = *(char *)((int)param_2 + 0x11);
      cVar33 = *(char *)((int)param_2 + 0x12);
      cVar23 = *(char *)((int)param_2 + 0x13);
      cVar7 = *(char *)((int)param_2 + 0x15);
      cVar2 = (char)param_2[5];
      cVar6 = cVar2;
      cVar30 = cVar7;
      cVar14 = cVar23;
      cVar20 = cVar33;
      cVar13 = cVar19;
      cVar10 = cVar17;
      if (puVar27[3] != 0) {
        cVar3 = '\x02';
        iVar5 = puVar27[3] * 0x1c;
        cVar22 = '\x01';
        cVar32 = '\x02';
        cVar9 = '\x02';
        cVar12 = '\x02';
        cVar16 = '\x02';
        cVar26 = '\x02';
        puVar31 = (undefined1 *)(puVar27[2] + 0x18);
        do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*puVar31) {
          case 0:
            cVar26 = cVar22;
            break;
          case 1:
            cVar16 = cVar22;
            break;
          case 2:
            cVar12 = cVar22;
            break;
          case 3:
            cVar9 = cVar22;
            break;
          case 4:
            cVar32 = cVar22;
            break;
          case 5:
            cVar3 = cVar22;
            break;
          case 7:
            cVar22 = '\0';
          }
          iVar5 = iVar5 + -0x1c;
          puVar31 = puVar31 + 0x1c;
        } while (iVar5 != 0);
        if (cVar3 != '\x02') {
          cVar30 = cVar3;
        }
        if (cVar32 != '\x02') {
          cVar6 = cVar32;
        }
        if (cVar9 != '\x02') {
          cVar14 = cVar9;
        }
        if (cVar12 != '\x02') {
          cVar20 = cVar12;
        }
        if (cVar16 != '\x02') {
          cVar13 = cVar16;
        }
        if (cVar26 != '\x02') {
          cVar10 = cVar26;
        }
      }
      *(char *)(param_2 + 5) = cVar6;
      *(char *)((int)param_2 + 0x15) = cVar30;
      *(char *)((int)param_2 + 0x13) = cVar14;
      *(char *)((int)param_2 + 0x12) = cVar20;
      *(char *)((int)param_2 + 0x11) = cVar13;
      *(char *)(param_2 + 4) = cVar10;
    }
    else {
      cVar17 = (char)param_2[4];
      cVar19 = *(char *)((int)param_2 + 0x11);
      cVar33 = *(char *)((int)param_2 + 0x12);
      cVar23 = *(char *)((int)param_2 + 0x13);
      cVar7 = *(char *)((int)param_2 + 0x15);
      cVar2 = (char)param_2[5];
    }
    local_80 = CONCAT31(CONCAT21(local_80._2_2_,cVar7),cVar2);
    local_84 = CONCAT31(CONCAT21(CONCAT11(cVar23,cVar33),cVar19),cVar17);
    local_88 = 0xc;
    FUN_013eece4(param_2,&local_88);
    break;
  case 10:
    local_88 = 0xe;
    FUN_013eece4(param_2,&local_88);
    if (puVar27[2] != 0) {
      local_88 = 0xf;
      FUN_013eece4(param_2,&local_88);
    }
    break;
  case 0xb:
    local_88 = 0xd;
    FUN_013eece4(param_2,&local_88);
    break;
  default:
    goto switchD_013eb0a4_default;
  }
  uVar24 = *param_5;
  puVar27 = (uint *)param_5[1];
switchD_013eb0a4_default:
  switch(uVar24) {
  case 7:
    puVar28 = puVar27 + 1;
    if (*puVar27 != 0x110008) {
      puVar28 = puVar27;
    }
    uVar24 = (uint)(*puVar27 == 0x110008);
    do {
      if (uVar24 == 0) {
        if (*puVar28 == 0x110006) {
          if (((byte)param_2[5] == 2) || (((byte)param_2[5] & 1) != 0)) {
            local_38 = 0;
            local_3c = 4;
            local_40 = 0;
            FUN_013f9dd4(&local_84,&local_40);
            local_88 = 9;
            FUN_013eece4(param_2,&local_88);
          }
          else {
            local_38 = 0;
            local_3c = 1;
            local_40 = 0;
            FUN_013f9ed8(&local_84,&local_40);
            local_88 = 10;
            FUN_013eece4(param_2,&local_88);
          }
        }
        iVar5 = 2;
        if (0x10ffff < *puVar28) {
          iVar5 = *puVar28 - 0x110000;
        }
        if (iVar5 == 7) {
          if (puVar28[3] == 0) goto LAB_013eb614;
          puVar27 = (uint *)puVar28[2];
          local_b4 = puVar28[3] - 1;
          puVar29 = puVar27 + 0x16;
        }
        else {
          if (iVar5 != 6) goto LAB_013eb614;
          puVar27 = (uint *)puVar28[1];
          if (*puVar27 == 0x110008) {
            puVar27 = puVar27 + 1;
            uVar18 = 1;
            uVar21 = 1;
            puVar25 = puVar27;
            goto LAB_013eb5f8;
          }
          puVar29 = (uint *)&DAT_00000004;
          local_b4 = 0;
        }
        uVar18 = 0;
        uVar21 = 0;
        puVar25 = puVar27;
      }
      else {
        if (((byte)param_2[5] == 2) || (((byte)param_2[5] & 1) != 0)) {
          local_38 = 0;
          local_3c = 4;
          local_40 = 0;
          FUN_013f9dd4(&local_84,&local_40);
          local_88 = 9;
          FUN_013eece4(param_2,&local_88);
        }
        else {
          local_38 = 0;
          local_3c = 1;
          local_40 = 0;
          FUN_013f9ed8(&local_84,&local_40);
          local_88 = 10;
          FUN_013eece4(param_2,&local_88);
        }
        puVar29 = (uint *)*puVar28;
        local_b4 = puVar28[1];
        uVar18 = 2;
        puVar27 = puVar29 + 1;
        if (*puVar29 != 0x110008) {
          puVar27 = puVar29;
        }
        uVar21 = (uint)(*puVar29 == 0x110008);
        puVar25 = puVar28;
      }
LAB_013eb5f8:
      iVar5 = local_8c;
      if (local_8c == local_94) {
        FUN_01401818(&local_94);
      }
      puVar4 = (uint *)(local_90 + iVar5 * 0x18);
      *puVar4 = uVar24;
      puVar4[2] = uVar18;
      puVar4[3] = (uint)puVar25;
      puVar4[4] = (uint)puVar29;
      puVar4[1] = (uint)puVar28;
      puVar4[5] = local_b4;
      local_8c = iVar5 + 1;
      puVar28 = puVar27;
      uVar24 = uVar21;
    } while( true );
  case 8:
    puVar28 = (uint *)puVar27[9];
    puVar25 = (uint *)0x0;
    iVar5 = 0;
    uVar21 = 0;
    if (puVar29 == local_a0) goto LAB_013ec074;
LAB_013ec034:
    goto LAB_013ec088;
  case 9:
    puVar28 = (uint *)puVar27[0xb];
    puVar25 = (uint *)0x0;
    uVar21 = 1;
    iVar5 = 0;
joined_r0x013ec070:
    if (puVar29 != local_a0) goto LAB_013ec034;
LAB_013ec074:
    FUN_01401454(&local_a0);
    local_b4 = local_9c;
    goto LAB_013ec088;
  case 10:
    uVar24 = puVar27[2];
    if (uVar24 != 0) {
      puVar28 = (uint *)puVar27[1];
      uVar21 = 3;
LAB_013ec060:
      iVar5 = uVar24 - 1;
      puVar25 = puVar28 + 2;
      puVar27 = puVar28;
      goto joined_r0x013ec070;
    }
    break;
  case 0xb:
    uVar24 = puVar27[2];
    if (uVar24 != 0) {
      puVar28 = (uint *)puVar27[1];
      uVar21 = 2;
      goto LAB_013ec060;
    }
  }
  goto switchD_013eb390_default;
LAB_013eb614:
  FUN_013f13a4(&local_88,&local_ac,puVar28);
  if (local_88 != -0x80000000) {
    local_40 = local_74;
    local_3c = iStack_70;
    local_38 = iStack_6c;
    iStack_34 = iStack_68;
    iStack_30 = iStack_64;
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = local_80;
    param_1[3] = iStack_7c;
    param_1[4] = iStack_78;
    param_1[5] = local_74;
    param_1[6] = iStack_70;
    param_1[7] = iStack_6c;
    param_1[8] = iStack_68;
    param_1[9] = iStack_64;
    goto LAB_013ec258;
  }
  if (local_8c != 0) {
    local_8c = local_8c + -1;
                    /* WARNING: Could not recover jumptable at 0x013eb680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_013eb684 +
              *(int *)(&DAT_013eb684 + *(int *)(local_90 + local_8c * 0x18 + 8) * 4)))();
    return;
  }
switchD_013eb390_default:
  FUN_013ec7ac(&local_88,&local_ac,*param_5,param_5[1]);
  local_b4 = local_9c;
  if (local_88 != -0x80000000) {
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = local_80;
    param_1[3] = iStack_7c;
    param_1[4] = iStack_78;
    param_1[5] = local_74;
    param_1[6] = iStack_70;
    param_1[7] = iStack_6c;
    param_1[8] = iStack_68;
    param_1[9] = iStack_64;
    goto LAB_013ec258;
  }
  if (local_98 == (uint *)0x0) goto LAB_013ec1cc;
  iVar15 = (int)local_98 * 0x14;
  puVar29 = local_98;
LAB_013ec0f0:
  iVar5 = local_b4 + iVar15;
  puVar29 = (uint *)((int)puVar29 + -1);
  param_5 = *(uint **)(iVar5 + -0x14);
  uVar21 = *(uint *)(iVar5 + -0x10);
  if (1 < uVar21) {
    puVar28 = *(uint **)(iVar5 + -8);
    iVar5 = *(int *)(iVar5 + -4);
    if (uVar21 == 2) {
      if (iVar5 != 0) goto LAB_013ec19c;
    }
    else if (iVar5 != 0) {
      local_88 = 0xf;
      local_98 = puVar29;
      FUN_013eece4(param_2,&local_88);
LAB_013ec19c:
      iVar5 = iVar5 + -1;
      puVar25 = puVar28 + 2;
      puVar27 = puVar28;
LAB_013ec088:
      local_98 = (uint *)((int)puVar29 + 1);
      puVar8 = (undefined4 *)(local_b4 + (int)puVar29 * 0x14);
      *puVar8 = param_5;
      puVar8[1] = uVar21;
      puVar8[2] = puVar27;
      puVar8[3] = puVar25;
      puVar8[4] = iVar5;
      param_5 = puVar28;
      goto LAB_013eb088;
    }
  }
  FUN_013ec7ac(&local_88,&local_ac,*param_5,param_5[1]);
  if (local_88 != -0x80000000) {
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = local_80;
    param_1[3] = iStack_7c;
    param_1[4] = iStack_78;
    param_1[5] = local_74;
    param_1[6] = iStack_70;
    param_1[7] = iStack_6c;
    param_1[8] = iStack_68;
    param_1[9] = iStack_64;
    goto LAB_013ec258;
  }
  iVar15 = iVar15 + -0x14;
  if (puVar29 == (uint *)0x0) {
    local_98 = (uint *)0x0;
    goto LAB_013ec1cc;
  }
  goto LAB_013ec0f0;
LAB_013ec1cc:
  uVar24 = *param_2;
  if (0x7ffffffe < uVar24) {
    FUN_00fb71b0(&DAT_0189de20);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13ec570);
    (*pcVar1)();
  }
  local_50[0] = param_2[3];
  *param_2 = uVar24 + 1;
  if (local_50[0] != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,local_50,&DAT_00568c80,0);
  }
  *param_2 = uVar24;
  if (uVar24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0189db90);
  }
  piVar11 = (int *)param_2[2];
  param_2[3] = 0;
  *param_2 = 0xffffffff;
  iVar5 = *piVar11;
  local_40 = piVar11[1];
  local_3c = piVar11[2];
  local_38 = piVar11[3];
  iStack_34 = piVar11[4];
  iStack_30 = piVar11[5];
  iStack_2c = piVar11[6];
  *param_2 = 0;
  if (iVar5 == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0189de30);
  }
  local_88 = iVar5;
  local_84 = local_40;
  local_80 = local_3c;
  FUN_013f0d90(param_1 + 1,&local_88);
  *param_1 = -0x80000000;
LAB_013ec258:
  if (local_a0 != (uint *)0x0) {
    thunk_FUN_016d3fb4(local_9c);
  }
  if (local_94 != 0) {
    thunk_FUN_016d3fb4(local_90);
  }
  return;
}

