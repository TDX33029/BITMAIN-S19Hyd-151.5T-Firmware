// FUN_01ac814c @ 01ac814c size=2888 calls_out=16 calls_in=20
// strings: 

void FUN_01ac814c(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *extraout_r3;
  byte *extraout_r3_00;
  byte *extraout_r3_01;
  byte *pbVar13;
  byte *extraout_r3_02;
  byte *extraout_r3_03;
  byte *extraout_r3_04;
  int iVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 uVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  bool bVar26;
  byte *local_d0;
  byte *local_cc;
  byte *local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  int local_b4;
  uint local_b0;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  byte *local_90;
  int local_8c;
  uint uStack_88;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte *pbStack_68;
  int iStack_64;
  uint uStack_60;
  undefined1 local_59 [17];
  byte *local_48;
  byte *local_44;
  byte *local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  byte *pbStack_30;
  int iStack_2c;
  uint uStack_28;
  
  uVar15 = 0;
  if ((int)param_4 < 0) {
LAB_01ac8168:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar15,param_4);
  }
  if (param_4 == (byte *)0x0) {
    pbVar5 = &DAT_00000001;
    local_d0 = (byte *)0x0;
  }
  else {
    uVar15 = 1;
    pbVar5 = (byte *)FUN_01298504(param_4,1);
    local_d0 = param_4;
    if (pbVar5 == (byte *)0x0) goto LAB_01ac8168;
  }
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  pbVar16 = (byte *)param_2[2];
  pbVar8 = param_3 + (int)param_4;
  iVar14 = param_2[3];
  local_c4 = param_2[4];
  local_b0 = local_b0 & 0xffffff00;
  local_c8 = (byte *)0x0;
  pbVar22 = param_3;
  pbVar25 = (byte *)0x0;
  do {
    if (pbVar22 == pbVar8) {
      pbVar18 = (byte *)0x0;
      pbVar10 = pbVar8;
      pbVar21 = pbVar25;
      pbVar25 = (byte *)0x0;
      break;
    }
    pbVar10 = pbVar22 + 1;
    uVar17 = (uint)*pbVar22;
    if (0x7fffffff < (uint)(int)(char)*pbVar22) {
      if (uVar17 < 0xe0) {
        uVar17 = pbVar22[1] & 0x3f | (uVar17 & 0x1f) << 6;
        pbVar10 = pbVar22 + 2;
      }
      else {
        uVar20 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
        if (uVar17 < 0xf0) {
          uVar17 = uVar20 | (uVar17 & 0x1f) << 0xc;
          pbVar10 = pbVar22 + 3;
        }
        else {
          uVar17 = pbVar22[3] & 0x3f | uVar20 << 6 | (uVar17 & 7) << 0x12;
          pbVar10 = pbVar22 + 4;
        }
      }
    }
    pbVar21 = pbVar25 + ((int)pbVar10 - (int)pbVar22);
    pbVar18 = pbVar25;
    pbVar22 = pbVar10;
    pbVar25 = pbVar21;
  } while (uVar17 < 0x21);
  do {
    pbVar22 = pbVar8;
    if (pbVar10 == pbVar22) goto LAB_01ac8310;
    pbVar8 = pbVar22 + -1;
    uVar17 = (uint)(char)*pbVar8;
    if (0x7fffffff < uVar17) {
      pbVar8 = pbVar22 + -2;
      bVar1 = *pbVar8;
      if ((char)bVar1 < -0x40) {
        pbVar8 = pbVar22 + -3;
        bVar2 = *pbVar8;
        if ((char)bVar2 < -0x40) {
          pbVar8 = pbVar22 + -4;
          uVar20 = (int)(char)bVar2 & 0x3fU | (*pbVar8 & 7) << 6;
        }
        else {
          uVar20 = bVar2 & 0xf;
        }
        uVar20 = (int)(char)bVar1 & 0x3fU | uVar20 << 6;
      }
      else {
        uVar20 = bVar1 & 0x1f;
      }
      uVar17 = uVar17 & 0x3f | uVar20 << 6;
    }
  } while (uVar17 < 0x21);
  pbVar25 = pbVar22 + ((int)pbVar21 - (int)pbVar10);
LAB_01ac8310:
  pbVar8 = param_3 + (int)pbVar18;
  local_cc = pbVar5;
  pbStack_b8 = pbVar16;
  local_b4 = iVar14;
  if (pbVar16 != (byte *)0x0) {
    if (pbVar25 + -(int)pbVar18 < param_4) {
      (**(code **)(iVar14 + 0x14))(pbVar16,1);
    }
    pbVar22 = pbVar8;
    do {
      if (pbVar22 == param_3 + (int)pbVar25) goto LAB_01ac83f4;
      pbVar18 = pbVar22 + 1;
      puVar12 = (undefined1 *)(uint)*pbVar22;
      if (0x7fffffff < (uint)(int)(char)*pbVar22) {
        if (puVar12 < (undefined1 *)0xe0) {
          puVar12 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
          pbVar18 = pbVar22 + 2;
        }
        else {
          uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
          if (puVar12 < (undefined1 *)0xf0) {
            puVar12 = (undefined1 *)(uVar17 | ((uint)puVar12 & 0x1f) << 0xc);
            pbVar18 = pbVar22 + 3;
          }
          else {
            puVar12 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar12 & 7) << 0x12);
            if (puVar12 == &DAT_00110000) goto LAB_01ac83f4;
            pbVar18 = pbVar22 + 4;
          }
        }
      }
      pbVar22 = pbVar18;
    } while (((undefined1 *)0xd < puVar12) || ((1 << ((uint)puVar12 & 0xff) & 0x2600U) == 0));
    (**(code **)(iVar14 + 0x14))(pbVar16,9);
  }
LAB_01ac83f4:
  param_3 = param_3 + (int)pbVar25;
  local_80 = pbVar8;
  local_7c = param_3;
  local_48 = pbVar8;
  local_44 = param_3;
  puVar12 = (undefined1 *)FUN_01ac9ff4(&local_48);
  if (puVar12 == &DAT_00110000) {
LAB_01ac8570:
    iVar14 = local_c4;
    if (local_c4 == 0) {
      uVar19 = 6;
      goto LAB_01ac8664;
    }
    local_48 = pbVar8;
    local_44 = param_3;
    iVar6 = FUN_01ac9ff4(&local_48);
    if (iVar6 == 0x23) {
      local_48 = local_d0;
      local_44 = local_cc;
      local_40 = local_c8;
      iStack_3c = local_c4;
      local_38 = local_c0;
      uStack_34 = uStack_bc;
      pbStack_30 = pbStack_b8;
      iStack_2c = local_b4;
      uStack_28 = local_b0;
      FUN_01acec04(param_1,&local_48,iVar14,pbVar8,param_3);
      return;
    }
    uVar17 = *(uint *)(iVar14 + 0x20);
    iVar6 = *(int *)(iVar14 + 0x14);
    uVar20 = *(uint *)(iVar14 + 0x18);
    uVar11 = uVar17 + 1;
    if (uVar17 != 0xffffffff) {
      if (uVar11 < uVar20) {
        if (*(char *)(iVar6 + uVar11) < -0x40) goto LAB_01ac8600;
      }
      else if (uVar11 != uVar20) {
LAB_01ac8600:
        puVar23 = &DAT_01d2fcf8;
        uVar17 = uVar20;
        goto LAB_01ac8658;
      }
    }
    uVar19 = 7;
    if ((uVar20 == uVar11) || (*(char *)(iVar6 + uVar11) != '/')) {
LAB_01ac8664:
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = uVar19;
      FUN_019bb7e0(local_d0,pbVar5);
      return;
    }
    if (uVar17 != 0) {
      if (uVar17 < uVar20) {
        if (*(char *)(iVar6 + uVar17) < -0x40) goto LAB_01ac864c;
      }
      else if (uVar17 != uVar20) {
LAB_01ac864c:
        uVar11 = 0;
        puVar23 = &DAT_01d2fde8;
LAB_01ac8658:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar6,uVar20,uVar11,uVar17,puVar23);
      }
    }
    cVar4 = FUN_01acedfc(iVar6,uVar17);
    pbVar16 = pbVar8;
    pbVar18 = param_3;
    if (cVar4 == '\0') {
      local_48 = local_d0;
      local_44 = local_cc;
      local_40 = local_c8;
      iStack_3c = local_c4;
      local_38 = local_c0;
      uStack_34 = uStack_bc;
      pbStack_30 = pbStack_b8;
      iStack_2c = local_b4;
      uStack_28 = local_b0;
      goto LAB_01ac895c;
    }
    local_48 = local_d0;
    local_44 = local_cc;
    local_40 = local_c8;
    iStack_3c = local_c4;
    local_38 = local_c0;
    uStack_34 = uStack_bc;
    pbStack_30 = pbStack_b8;
    iStack_2c = local_b4;
    uStack_28 = local_b0;
    goto LAB_01ac8928;
  }
  local_48 = pbVar8;
  local_44 = param_3;
  uVar17 = FUN_01ac9ff4(&local_48);
  if (0x19 < (uVar17 & 0xffffffdf) - 0x41) goto LAB_01ac8570;
  pbVar22 = (byte *)0x0;
  while( true ) {
    puVar12 = (undefined1 *)FUN_01ac9ff4(&local_80);
    pbVar18 = local_7c;
    pbVar16 = local_80;
    pbVar25 = local_c8;
    if (puVar12 == &DAT_00110000) break;
    if ((undefined1 *)0x19 < puVar12 + -0x61 && (undefined1 *)0x19 < puVar12 + -0x41) {
      puVar9 = puVar12 + -0x30;
      bVar26 = (undefined1 *)0x9 < puVar9;
      if (bVar26) {
        puVar9 = puVar12 + -0x2d;
      }
      if ((bVar26 && (undefined1 *)0x1 < puVar9) && (puVar12 != (undefined1 *)0x2b)) {
        if (puVar12 == (undefined1 *)0x3a) goto LAB_01ac84ec;
        goto LAB_01ac8564;
      }
    }
    if (puVar12 + -0x41 < (undefined1 *)0x1a) {
      puVar12 = (undefined1 *)((uint)puVar12 | 0x20);
    }
    pbVar25 = pbVar22;
    if (pbVar22 == local_d0) {
      FUN_01af7b44(&local_d0,pbVar22,1,1,1);
      pbVar25 = local_c8;
      pbVar5 = local_cc;
    }
    pbVar5[(int)pbVar25] = (byte)puVar12;
    pbVar22 = pbVar22 + 1;
    local_c8 = pbVar22;
  }
  if ((char)local_b0 != '\x01') {
LAB_01ac8564:
    local_c8 = (byte *)0x0;
    goto LAB_01ac8570;
  }
LAB_01ac84ec:
  local_a8 = local_d0;
  local_a4 = local_cc;
  local_a0 = local_c8;
  local_9c = local_c4;
  local_98 = local_c0;
  uStack_94 = uStack_bc;
  local_90 = pbStack_b8;
  local_8c = local_b4;
  uStack_88 = local_b0;
  pbVar8 = pbStack_b8;
  switch(pbVar22) {
  case (byte *)0x2:
    if (*(short *)pbVar5 != 0x7377) goto switchD_01ac8530_default;
LAB_01ac8714:
    iVar14 = 1;
    break;
  case (byte *)0x3:
    iVar14 = thunk_FUN_01bed842(pbVar5,&DAT_00532790,3);
    pbVar8 = extraout_r3_00;
    if (iVar14 == 0) goto LAB_01ac8714;
    uVar15 = 3;
    puVar23 = &DAT_00532793;
    goto LAB_01ac8700;
  case (byte *)0x4:
    if (*(int *)pbVar5 == 0x70747468) goto LAB_01ac8714;
    iVar6 = thunk_FUN_01bed842(pbVar5,&DAT_0056edac,4);
    iVar14 = 0;
    pbVar8 = extraout_r3;
    if (iVar6 != 0) {
      iVar14 = 2;
    }
    break;
  case (byte *)0x5:
    uVar15 = 5;
    puVar23 = &DAT_0053278b;
LAB_01ac8700:
    iVar6 = thunk_FUN_01bed842(pbVar5,puVar23,uVar15);
    iVar14 = 2;
    pbVar8 = extraout_r3_01;
    if (iVar6 == 0) {
      iVar14 = 1;
    }
    break;
  default:
switchD_01ac8530_default:
    iVar14 = 2;
  }
  pbVar5 = pbVar25;
  if (local_a8 == pbVar25) {
    FUN_01af7b44(&local_a8,pbVar25,1,1,1);
    pbVar5 = local_a0;
    pbVar8 = extraout_r3_04;
  }
  iVar6 = local_8c;
  pbVar10 = local_90;
  pbVar22 = local_a4;
  pbVar21 = pbVar25 + 1;
  local_a4[(int)pbVar5] = 0x3a;
  local_a0 = pbVar21;
  if (iVar14 == 0) {
    if (local_90 != (byte *)0x0) {
      local_44 = pbVar18;
      local_48 = pbVar16;
      iVar14 = FUN_01acbbe8(&DAT_005327bf,2,&local_48);
      pbVar8 = extraout_r3_02;
      if (iVar14 == 0) {
        (**(code **)(iVar6 + 0x14))(pbVar10,4);
        pbVar8 = extraout_r3_03;
      }
    }
    iVar6 = local_9c;
    iVar14 = 0;
    if (local_9c != 0) {
      pbVar8 = *(byte **)(local_9c + 0x20);
    }
    if (local_9c != 0 && pbVar8 != (byte *)0x0) {
      pbVar5 = *(byte **)(local_9c + 0x14);
      pbVar10 = *(byte **)(local_9c + 0x18);
      if (pbVar8 < pbVar10) {
        if ((char)pbVar5[(int)pbVar8] < -0x40) goto LAB_01ac8c9c;
      }
      else if (pbVar8 != pbVar10) {
LAB_01ac8c9c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar5,pbVar10,0);
      }
      if (pbVar8 == &SUB_00000004) {
        iVar7 = thunk_FUN_01bed842(pbVar5,&DAT_0056edac,4);
        iVar14 = iVar6;
        if (iVar7 != 0) {
          iVar14 = 0;
        }
      }
    }
    local_a0 = (byte *)0x0;
    local_48 = local_a8;
    local_44 = local_a4;
    local_40 = (byte *)0x0;
    iStack_3c = local_9c;
    local_38 = local_98;
    uStack_34 = uStack_94;
    pbStack_30 = local_90;
    iStack_2c = local_8c;
    uStack_28 = uStack_88;
LAB_01ac895c:
    FUN_01acd02c(param_1,&local_48,pbVar16,pbVar18,iVar14);
    return;
  }
  if (iVar14 != 1) {
    local_80 = local_a8;
    local_7c = local_a4;
    iStack_74 = local_9c;
    local_70 = local_98;
    uStack_6c = uStack_94;
    pbStack_68 = local_90;
    iStack_64 = local_8c;
    uStack_60 = uStack_88;
    local_44 = pbVar18;
    local_48 = pbVar16;
    local_78 = pbVar21;
    iVar14 = FUN_01acbbe8(&DAT_005327bf,2,&local_48);
    pbVar5 = local_78;
    if (iVar14 == 0) {
      local_59[0] = 0;
      local_44 = pbVar18;
      local_48 = pbVar16;
      iVar14 = FUN_01ac9ff4(&local_48);
      pbVar22 = local_44;
      pbVar8 = local_48;
      if (iVar14 == 0x2f) {
        pbVar16 = pbVar5;
        if (local_80 == pbVar5) {
          FUN_01af7b44(&local_80,pbVar5,1,1,1);
          pbVar16 = local_78;
        }
        local_7c[(int)pbVar16] = 0x2f;
        local_78 = pbVar5 + 1;
        local_48 = (byte *)((uint)local_48 & 0xffffff00);
        FUN_01aca0cc(&local_80,2,&local_48,pbVar5,pbVar8,pbVar22);
      }
      else {
        FUN_01acba34(&local_80,pbVar16,pbVar18);
      }
      local_48 = local_80;
      local_44 = local_7c;
      local_40 = local_78;
      iStack_3c = iStack_74;
      local_38 = local_70;
      uStack_34 = uStack_6c;
      pbStack_30 = pbStack_68;
      iStack_2c = iStack_64;
      uStack_28 = uStack_60;
      FUN_01accbb8(param_1,&local_48,2,pbVar25,pbVar5,pbVar5,pbVar5,local_59,0);
      return;
    }
    uVar15 = 2;
    goto LAB_01ac8bb8;
  }
  uVar17 = 0;
  pbVar8 = pbVar16;
  pbVar24 = pbVar18;
  while( true ) {
    local_48 = pbVar8;
    local_44 = pbVar24;
    iVar6 = FUN_01ac9ff4(&local_48);
    iVar14 = local_9c;
    if (!(iVar6 == 0x5c || iVar6 == 0x2f)) break;
    uVar17 = uVar17 + 1;
    pbVar8 = local_48;
    pbVar24 = local_44;
  }
  if ((uVar17 < 2) && (local_9c != 0)) {
    pbVar13 = *(byte **)(local_9c + 0x20);
    pbVar5 = *(byte **)(local_9c + 0x14);
    if (pbVar13 != (byte *)0x0) {
      pbVar10 = *(byte **)(local_9c + 0x18);
      if (pbVar13 < pbVar10) {
        if ((char)pbVar5[(int)pbVar13] < -0x40) goto LAB_01ac8c9c;
      }
      else if (pbVar13 != pbVar10) goto LAB_01ac8c9c;
    }
    if ((pbVar25 != (byte *)0x0) && ((char)pbVar22[(int)pbVar25] < -0x40)) {
      pbVar5 = pbVar22;
      pbVar10 = pbVar21;
      goto LAB_01ac8c9c;
    }
    if ((pbVar13 == pbVar25) && (iVar6 = thunk_FUN_01bed842(pbVar5,pbVar22,pbVar25), iVar6 == 0)) {
      local_a0 = (byte *)0x0;
      local_48 = local_a8;
      local_44 = local_a4;
      local_40 = (byte *)0x0;
      iStack_3c = local_9c;
      local_38 = local_98;
      uStack_34 = uStack_94;
      pbStack_30 = local_90;
      iStack_2c = local_8c;
      uStack_28 = uStack_88;
      cVar4 = '\x01';
LAB_01ac8928:
      FUN_01ace210(param_1,&local_48,pbVar16,pbVar18,cVar4,iVar14);
      return;
    }
  }
  iVar14 = local_8c;
  pbVar5 = local_90;
  if (local_90 != (byte *)0x0) {
    local_7c = &DAT_00000001;
    pbVar22 = &DAT_00000001;
    local_44 = pbVar18;
    local_78 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_40 = (byte *)((uint)local_40 & 0xffffff00);
    local_48 = pbVar16;
    while( true ) {
      pbVar16 = local_78;
      iVar6 = FUN_01ac9ff4(&local_48);
      if (!(iVar6 == 0x5c || iVar6 == 0x2f)) break;
      pbVar18 = pbVar16;
      if (pbVar16 == local_80) {
        FUN_01af7b44(&local_80,pbVar16,1,1,1);
        pbVar18 = local_78;
        pbVar22 = local_7c;
      }
      pbVar22[(int)pbVar18] = (byte)iVar6;
      local_78 = pbVar16 + 1;
    }
    if (pbVar16 == (byte *)0x2) {
      sVar3 = *(short *)local_7c;
      FUN_019bb7e0(local_80);
      if (sVar3 == 0x2f2f) goto LAB_01ac8b88;
    }
    else {
      FUN_019bb7e0(local_80);
    }
    (**(code **)(iVar14 + 0x14))(pbVar5,3);
  }
LAB_01ac8b88:
  uVar15 = 1;
  local_48 = pbVar8;
  local_44 = pbVar24;
LAB_01ac8bb8:
  pbVar5 = local_48;
  local_48 = local_a8;
  pbVar8 = local_44;
  local_44 = local_a4;
  local_40 = local_a0;
  iStack_3c = local_9c;
  local_38 = local_98;
  uStack_34 = uStack_94;
  pbStack_30 = local_90;
  iStack_2c = local_8c;
  uStack_28 = uStack_88;
  FUN_01acbc90(param_1,&local_48,pbVar5,pbVar8,uVar15,pbVar25);
  return;
}

