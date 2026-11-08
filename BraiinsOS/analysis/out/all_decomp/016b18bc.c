// FUN_016b18bc @ 016b18bc size=4884 calls_out=17 calls_in=11
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_016b18bc(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte *extraout_r3;
  byte *extraout_r3_00;
  byte *extraout_r3_01;
  byte *extraout_r3_02;
  byte *extraout_r3_03;
  byte *extraout_r3_04;
  int unaff_r4;
  int iVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  undefined1 uVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  undefined *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint *puVar26;
  bool bVar27;
  undefined4 uVar28;
  int *local_d8;
  byte *local_d0;
  int *local_cc;
  byte *local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  int local_b4;
  uint local_b0;
  byte *local_a8;
  int *local_a4;
  byte *local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  byte *local_90;
  int local_8c;
  uint uStack_88;
  byte *local_80;
  int *local_7c;
  byte *local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte *local_68;
  int local_64;
  uint local_60;
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
  
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == (byte *)0x0) {
    local_d8 = (int *)&DAT_00000001;
    local_d0 = (byte *)0x0;
  }
  else {
    local_d8 = (int *)thunk_FUN_016d4a50(param_4);
    local_d0 = param_4;
    if (local_d8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  iVar14 = param_2[3];
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  pbVar25 = (byte *)param_2[2];
  iVar9 = param_2[4];
  pbVar5 = param_3 + (int)param_4;
  local_b0 = local_b0 & 0xffffff00;
  local_c8 = (byte *)0x0;
  pbVar22 = param_3;
  pbVar20 = (byte *)0x0;
  do {
    pbVar6 = pbVar20;
    if (pbVar22 == pbVar5) {
      pbVar20 = (byte *)0x0;
      pbVar24 = (byte *)0x0;
      pbVar10 = pbVar5;
      pbVar16 = pbVar6;
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
        uVar21 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
        if (uVar17 < 0xf0) {
          uVar17 = uVar21 | (uVar17 & 0x1f) << 0xc;
          pbVar10 = pbVar22 + 3;
        }
        else {
          uVar17 = pbVar22[3] & 0x3f | uVar21 << 6 | (uVar17 & 7) << 0x12;
          pbVar10 = pbVar22 + 4;
        }
      }
    }
    pbVar20 = pbVar6 + ((int)pbVar10 - (int)pbVar22);
    pbVar22 = pbVar10;
    pbVar16 = pbVar20;
    pbVar24 = pbVar6;
  } while (uVar17 < 0x21);
  do {
    pbVar22 = pbVar5;
    if (pbVar10 == pbVar22) goto LAB_016b1a88;
    pbVar5 = pbVar22 + -1;
    uVar17 = (uint)(char)*pbVar5;
    if (0x7fffffff < uVar17) {
      pbVar5 = pbVar22 + -2;
      bVar1 = *pbVar5;
      if ((char)bVar1 < -0x40) {
        pbVar5 = pbVar22 + -3;
        bVar2 = *pbVar5;
        if ((char)bVar2 < -0x40) {
          pbVar5 = pbVar22 + -4;
          uVar21 = (int)(char)bVar2 & 0x3fU | (*pbVar5 & 7) << 6;
        }
        else {
          uVar21 = bVar2 & 0xf;
        }
        uVar21 = (int)(char)bVar1 & 0x3fU | uVar21 << 6;
      }
      else {
        uVar21 = bVar1 & 0x1f;
      }
      uVar17 = uVar17 & 0x3f | uVar21 << 6;
    }
  } while (uVar17 < 0x21);
  pbVar20 = pbVar22 + ((int)pbVar16 - (int)pbVar10);
LAB_016b1a88:
  pbVar5 = param_3 + (int)pbVar24;
  local_cc = local_d8;
  local_c4 = iVar9;
  pbStack_b8 = pbVar25;
  local_b4 = iVar14;
  if (pbVar25 != (byte *)0x0) {
    if (pbVar20 + -(int)pbVar24 < param_4) {
      (**(code **)(iVar14 + 0x14))(pbVar25,1);
    }
    pbVar22 = pbVar5;
    do {
      if (pbVar22 == param_3 + (int)pbVar20) goto LAB_016b1b88;
      puVar13 = (undefined1 *)(uint)*pbVar22;
      pbVar6 = pbVar22 + 1;
      if ((char)*pbVar22 < '\0') {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar6 = pbVar22 + 2;
        }
        else {
          uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar6 = pbVar22 + 3;
          }
          else {
            puVar13 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
            if (puVar13 == &DAT_00110000) goto LAB_016b1b88;
            pbVar6 = pbVar22 + 4;
          }
        }
      }
      pbVar22 = pbVar6;
    } while (((undefined1 *)0xd < puVar13) || ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0));
    (**(code **)(iVar14 + 0x14))(pbVar25,9);
  }
LAB_016b1b88:
  param_3 = param_3 + (int)pbVar20;
  if (pbVar20 == pbVar24) {
  }
  else {
    pbVar22 = pbVar5;
    do {
      pbVar20 = pbVar22 + 1;
      puVar13 = (undefined1 *)(uint)*pbVar22;
      if (0x7fffffff < (uint)(int)(char)*pbVar22) {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar20 = pbVar22 + 2;
        }
        else {
          uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar20 = pbVar22 + 3;
          }
          else {
            puVar13 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
            if (puVar13 == &DAT_00110000) break;
            pbVar20 = pbVar22 + 4;
          }
        }
      }
      if ((((undefined1 *)0xd < puVar13) || ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0)) &&
         (puVar13 != &DAT_00110000)) {
        pbVar22 = pbVar5;
        goto LAB_016b1e58;
      }
      pbVar22 = pbVar20;
    } while (pbVar20 != param_3);
  }
LAB_016b1b9c:
  if (iVar9 == 0) {
    uVar19 = 6;
    goto LAB_016b1e10;
  }
  pbVar22 = pbVar5;
  do {
    while( true ) {
      if (pbVar22 == param_3) goto LAB_016b1d74;
      puVar13 = (undefined1 *)(uint)*pbVar22;
      pbVar20 = pbVar22 + 1;
      if (-1 < (char)*pbVar22) break;
      if (puVar13 < (undefined1 *)0xe0) {
        puVar13 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
        pbVar20 = pbVar22 + 2;
        break;
      }
      uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
      if (&DAT_000000f0 <= puVar13) {
        puVar13 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
        if (puVar13 != &DAT_00110000) {
          pbVar22 = pbVar22 + 4;
          if (puVar13 <= &DAT_0000000d) goto LAB_016b1be8;
          goto LAB_016b1bb4;
        }
        goto LAB_016b1d74;
      }
      puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
      pbVar22 = pbVar22 + 3;
      if (&DAT_0000000e <= puVar13) goto LAB_016b1bb4;
LAB_016b1be8:
      puVar15 = &DAT_00110000;
      if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
        puVar15 = puVar13;
      }
      if (puVar15 != &DAT_00110000) goto LAB_016b1d34;
    }
    pbVar22 = pbVar20;
    if (puVar13 < &DAT_0000000e) goto LAB_016b1be8;
LAB_016b1bb4:
    puVar15 = puVar13;
  } while (puVar13 == &DAT_00110000);
LAB_016b1d34:
  if (puVar15 == (undefined1 *)0x23) {
    local_48 = local_d0;
    local_44 = (byte *)local_cc;
    local_40 = local_c8;
    iStack_3c = local_c4;
    local_38 = local_c0;
    uStack_34 = uStack_bc;
    pbStack_30 = pbStack_b8;
    iStack_2c = local_b4;
    uStack_28 = local_b0;
    FUN_016ba67c(param_1,&local_48,iVar9,pbVar5,param_3);
    return;
  }
LAB_016b1d74:
  uVar17 = *(uint *)(iVar9 + 0x20);
  iVar14 = *(int *)(iVar9 + 0x14);
  uVar21 = *(uint *)(iVar9 + 0x18);
  uVar11 = uVar17 + 1;
  if (uVar17 != 0xffffffff) {
    if (uVar11 < uVar21) {
      if (*(char *)(iVar14 + uVar11) < -0x40) goto LAB_016b1da0;
    }
    else if (uVar11 != uVar21) {
LAB_016b1da0:
      puVar23 = &DAT_018af080;
      uVar17 = uVar21;
      goto LAB_016b1e00;
    }
  }
  uVar19 = 7;
  if ((uVar21 == uVar11) || (*(char *)(iVar14 + uVar11) != '/')) {
LAB_016b1e10:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = uVar19;
    if (local_d0 == (byte *)0x0) {
      return;
    }
    if (local_d8 == (int *)0x0) {
      return;
    }
    iVar9 = FUN_016d3bc8();
    uVar17 = *(byte *)((int)local_d8 + -3) & 0x1f;
    if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
       (uVar21 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar14 = uVar21 - 0x10, uVar21 == 0)) {
      iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar21 = (uint)(*(byte *)((int)local_d8 + -3) >> 5);
    iVar18 = *(int *)(iVar9 + 8) + 0x10;
    iVar7 = iVar14 * uVar17 + iVar14 + -4;
    iVar14 = iVar18 + iVar7;
    if (4 < uVar21) {
      if (uVar21 != 5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar3)();
      }
      uVar21 = *(uint *)(iVar14 + -4);
      if (uVar21 < 5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar3)();
      }
      if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar3)();
      }
    }
    if ((uint)(iVar14 - (int)local_d8) < uVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar3)();
    }
    if (*(char *)(iVar14 - uVar21) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar3)();
    }
    if (*(char *)(iVar18 + iVar7) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar3)();
    }
    bVar1 = *(byte *)(iVar9 + 0x14);
    uVar21 = 1 << uVar17;
    *(undefined1 *)((int)local_d8 + -3) = 0xff;
    *(short *)((int)local_d8 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar9 + 0x10);
      uVar11 = *(uint *)(iVar9 + 0xc) | uVar12;
      if ((uVar21 & uVar11) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar3)();
      }
      if ((uVar12 == 0) || (uVar11 + uVar21 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar9,uVar17);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar8 = (undefined4 *)FUN_016d2bc8();
        uVar28 = *puVar8;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar8 = uVar28;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar9 + 0x10) = uVar21 + uVar12;
        return;
      }
      puVar26 = (uint *)(iVar9 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar26);
        uVar11 = *puVar26;
        if (uVar12 != uVar11) goto LAB_016d409c;
        bVar27 = (bool)hasExclusiveAccess(puVar26);
      } while (!bVar27);
      *puVar26 = uVar21 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar11) {
        return;
      }
    } while( true );
  }
  if (uVar17 == 0) {
LAB_016b20f8:
    cVar4 = FUN_016ba950(iVar14,uVar17);
    if (cVar4 == '\0') {
      local_48 = local_d0;
      local_44 = (byte *)local_cc;
      local_40 = local_c8;
      iStack_3c = local_c4;
      local_38 = local_c0;
      uStack_34 = uStack_bc;
      pbStack_30 = pbStack_b8;
      iStack_2c = local_b4;
      uStack_28 = local_b0;
      FUN_016b7fcc(param_1,&local_48,pbVar5,param_3,iVar9);
      return;
    }
    local_48 = local_d0;
    local_44 = (byte *)local_cc;
    local_40 = local_c8;
    iStack_3c = local_c4;
    local_38 = local_c0;
    uStack_34 = uStack_bc;
    pbStack_30 = pbStack_b8;
    iStack_2c = local_b4;
    uStack_28 = local_b0;
    FUN_016b9818(param_1,&local_48,pbVar5,param_3,cVar4,iVar9);
    return;
  }
  if (uVar17 < uVar21) {
    if (-0x41 < *(char *)(iVar14 + uVar17)) goto LAB_016b20f8;
  }
  else if (uVar17 == uVar21) goto LAB_016b20f8;
  uVar11 = 0;
  puVar23 = &DAT_018af070;
LAB_016b1e00:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(iVar14,uVar21,uVar11,uVar17,puVar23);
LAB_016b2438:
  if ((uVar17 < 2) && (local_9c != 0)) {
    pbVar6 = *(byte **)(local_9c + 0x20);
    iVar7 = *(int *)(local_9c + 0x14);
    if (pbVar6 != (byte *)0x0) {
      pbVar20 = *(byte **)(local_9c + 0x18);
      if (pbVar6 < pbVar20) {
        if ((char)pbVar6[iVar7] < -0x40) goto LAB_016b2b94;
      }
      else if (pbVar6 != pbVar20) goto LAB_016b2b94;
    }
    if ((pbVar25 != (byte *)0x0) && ((char)*(byte *)((int)local_a4 + (int)pbVar25) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_a4,local_a0,0,pbVar25,&DAT_018aef00);
    }
    if ((pbVar6 == pbVar25) && (iVar9 = thunk_FUN_016dd50a(iVar7,local_a4,pbVar25), iVar9 == 0)) {
      local_a0 = (byte *)0x0;
      local_48 = local_a8;
      local_44 = (byte *)local_a4;
      local_40 = (byte *)0x0;
      iStack_3c = local_9c;
      local_38 = local_98;
      uStack_34 = uStack_94;
      pbStack_30 = local_90;
      iStack_2c = local_8c;
      uStack_28 = uStack_88;
      FUN_016b9818(param_1,&local_48,pbVar22,param_3,1,iVar14);
      return;
    }
  }
  iVar9 = local_8c;
  pbVar20 = local_90;
  if (local_90 != (byte *)0x0) {
    pbVar10 = (byte *)0x0;
    pbVar6 = &DAT_00000001;
    local_44 = &DAT_00000001;
    local_48 = (byte *)0x0;
LAB_016b2940:
    while (local_40 = pbVar10, pbVar22 != param_3) {
      pbVar16 = pbVar22 + 1;
      puVar13 = (undefined1 *)(uint)*pbVar22;
      if (0x7fffffff < (uint)(int)(char)*pbVar22) {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar16 = pbVar22 + 2;
        }
        else {
          uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar16 = pbVar22 + 3;
          }
          else {
            puVar13 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
            if (puVar13 == &DAT_00110000) break;
            pbVar16 = pbVar22 + 4;
          }
        }
      }
      pbVar22 = pbVar16;
      if ((undefined1 *)0xd < puVar13) goto LAB_016b29e0;
      puVar15 = &DAT_00110000;
      if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
        puVar15 = puVar13;
      }
      if (puVar15 != &DAT_00110000) goto LAB_016b29f0;
    }
LAB_016b2a44:
    bVar27 = true;
    if ((pbVar10 == (byte *)0x2) && (bVar27 = false, *(short *)local_44 != 0x2f2f)) {
      bVar27 = true;
    }
    if (local_48 != (byte *)0x0) {
      thunk_FUN_016d3fb4();
    }
    if (bVar27) {
      (**(code **)(iVar9 + 0x14))(pbVar20,3);
    }
  }
  uVar28 = 1;
  goto LAB_016b2ac4;
LAB_016b29e0:
  puVar15 = puVar13;
  if (puVar13 != &DAT_00110000) {
LAB_016b29f0:
    if (puVar15 != (undefined1 *)0x5c && puVar15 != (undefined1 *)0x2f) goto LAB_016b2a44;
    if (local_48 == pbVar10) {
      FUN_016bd7fc(&local_48,pbVar10,1,1,1);
      pbVar6 = local_44;
    }
    *(byte *)((int)pbVar6 + (int)local_40) = (byte)puVar15;
    pbVar10 = pbVar10 + 1;
  }
  goto LAB_016b2940;
LAB_016b1e58:
  do {
    if (pbVar22 == param_3) goto LAB_016b1b9c;
    pbVar20 = pbVar22 + 1;
    puVar13 = (undefined1 *)(uint)*pbVar22;
    if (-1 < (char)*pbVar22) {
      pbVar22 = pbVar20;
      if (puVar13 <= &DAT_0000000d) goto LAB_016b1e7c;
LAB_016b1e48:
      puVar15 = puVar13;
      if (puVar13 != &DAT_00110000) break;
      goto LAB_016b1e58;
    }
    if (puVar13 < (undefined1 *)0xe0) {
      puVar13 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
      pbVar22 = pbVar22 + 2;
      if (puVar13 <= &DAT_0000000d) goto LAB_016b1e7c;
      goto LAB_016b1e48;
    }
    uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
    if (puVar13 < (undefined1 *)0xf0) {
      puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
      pbVar22 = pbVar22 + 3;
      if (puVar13 <= &DAT_0000000d) goto LAB_016b1e7c;
      goto LAB_016b1e48;
    }
    puVar13 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
    if (puVar13 == &DAT_00110000) goto LAB_016b1b9c;
    pbVar22 = pbVar22 + 4;
    if (&DAT_0000000e <= puVar13) goto LAB_016b1e48;
LAB_016b1e7c:
    puVar15 = &DAT_00110000;
    if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
      puVar15 = puVar13;
    }
  } while (puVar15 == &DAT_00110000);
  if (0x19 < ((uint)puVar15 & 0xffffffdf) - 0x41) goto LAB_016b1b9c;
  pbVar20 = (byte *)0x0;
  pbVar22 = pbVar5;
joined_r0x016b1f3c:
  if (pbVar22 != param_3) {
    do {
      pbVar25 = pbVar22 + 1;
      puVar13 = (undefined1 *)(uint)*pbVar22;
      if ((uint)(int)(char)*pbVar22 < 0x80000000) {
LAB_016b2030:
        puVar15 = puVar13;
        pbVar22 = pbVar25;
        if (puVar13 < &DAT_0000000e) {
LAB_016b2038:
          puVar15 = &DAT_00110000;
          pbVar22 = pbVar25;
          if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
            puVar15 = puVar13;
          }
        }
      }
      else {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar22[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar25 = pbVar22 + 2;
          goto LAB_016b2030;
        }
        uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
        if ((undefined1 *)0xef < puVar13) {
          pbVar25 = pbVar22 + 4;
          puVar13 = (undefined1 *)(pbVar22[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
          if (puVar13 != &DAT_00110000) goto LAB_016b2030;
          goto LAB_016b1f44;
        }
        puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
        pbVar25 = pbVar22 + 3;
        puVar15 = puVar13;
        pbVar22 = pbVar25;
        if (puVar13 < (undefined1 *)0xe) goto LAB_016b2038;
      }
      if (puVar15 == &DAT_00110000) goto joined_r0x016b1f3c;
      if ((undefined1 *)0x19 < puVar15 + -0x61 && (undefined1 *)0x19 < puVar15 + -0x41) {
        puVar13 = puVar15 + -0x30;
        bVar27 = (undefined1 *)0x9 < puVar13;
        if (bVar27) {
          puVar13 = puVar15 + -0x2d;
        }
        if ((bVar27 && (undefined1 *)0x1 < puVar13) && (puVar15 != (undefined1 *)0x2b)) {
          if (puVar15 == (undefined1 *)0x3a) goto LAB_016b1f50;
          goto LAB_016b2b1c;
        }
      }
      if (puVar15 + -0x41 < (undefined1 *)0x1a) {
        puVar15 = (undefined1 *)((uint)puVar15 | 0x20);
      }
      pbVar25 = pbVar20;
      if (local_d0 == pbVar20) {
        FUN_016bd7fc(&local_d0,pbVar20,1,1,1);
        local_d8 = local_cc;
        pbVar25 = local_c8;
      }
      pbVar20 = pbVar20 + 1;
      *(byte *)((int)local_d8 + (int)pbVar25) = (byte)puVar15;
      local_c8 = pbVar20;
      if (pbVar22 == param_3) break;
    } while( true );
  }
  pbVar25 = param_3;
LAB_016b1f44:
  pbVar22 = pbVar25;
  if ((char)local_b0 != '\x01') {
LAB_016b2b1c:
    local_c8 = (byte *)0x0;
    iVar9 = local_c4;
    goto LAB_016b1b9c;
  }
LAB_016b1f50:
  pbVar25 = local_c8;
  local_a8 = local_d0;
  local_a4 = local_cc;
  local_a0 = local_c8;
  local_9c = local_c4;
  local_98 = local_c0;
  uStack_94 = uStack_bc;
  local_90 = pbStack_b8;
  local_8c = local_b4;
  uStack_88 = local_b0;
  pbVar5 = pbStack_b8;
  switch(pbVar20) {
  case (byte *)0x2:
    if ((short)*local_d8 != 0x7377) goto switchD_016b1f80_default;
LAB_016b2210:
    iVar9 = 1;
    break;
  case (byte *)0x3:
    iVar9 = thunk_FUN_016dd50a(local_d8,&DAT_00418611,3);
    pbVar5 = extraout_r3_00;
    if (iVar9 == 0) goto LAB_016b2210;
    uVar28 = 3;
    puVar23 = &DAT_00418614;
    goto LAB_016b21fc;
  case (byte *)0x4:
    if (*local_d8 == 0x70747468) goto LAB_016b2210;
    iVar14 = thunk_FUN_016dd50a(local_d8,&DAT_00568d08,4);
    iVar9 = 0;
    pbVar5 = extraout_r3;
    if (iVar14 != 0) {
      iVar9 = 2;
    }
    break;
  case (byte *)0x5:
    uVar28 = 5;
    puVar23 = &DAT_0041860c;
LAB_016b21fc:
    iVar14 = thunk_FUN_016dd50a(local_d8,puVar23,uVar28);
    iVar9 = 2;
    pbVar5 = extraout_r3_01;
    if (iVar14 == 0) {
      iVar9 = 1;
    }
    break;
  default:
switchD_016b1f80_default:
    iVar9 = 2;
  }
  pbVar20 = pbVar25;
  if (local_a8 == pbVar25) {
    FUN_016bd7fc(&local_a8,pbVar25,1,1,1);
    pbVar20 = local_a0;
    pbVar5 = extraout_r3_04;
  }
  iVar7 = local_8c;
  pbVar6 = local_90;
  iVar14 = local_9c;
  *(byte *)((int)local_a4 + (int)pbVar20) = 0x3a;
  local_a0 = pbVar25 + 1;
  if (iVar9 != 0) {
    if (iVar9 != 2) {
      uVar17 = 0;
      pbVar5 = pbVar22;
      do {
        pbVar20 = pbVar5;
        do {
          while( true ) {
            if (pbVar20 == param_3) goto LAB_016b2438;
            pbVar6 = pbVar20 + 1;
            puVar13 = (undefined1 *)(uint)*pbVar20;
            if (0x7fffffff < (uint)(int)(char)*pbVar20) {
              if (puVar13 < (undefined1 *)0xe0) {
                puVar13 = (undefined1 *)(pbVar20[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
                pbVar6 = pbVar20 + 2;
              }
              else {
                uVar21 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
                if (puVar13 < (undefined1 *)0xf0) {
                  puVar13 = (undefined1 *)(uVar21 | ((uint)puVar13 & 0x1f) << 0xc);
                  pbVar6 = pbVar20 + 3;
                }
                else {
                  puVar13 = (undefined1 *)
                            (pbVar20[3] & 0x3f | uVar21 << 6 | ((uint)puVar13 & 7) << 0x12);
                  if (puVar13 == &DAT_00110000) goto LAB_016b2438;
                  pbVar6 = pbVar20 + 4;
                }
              }
            }
            pbVar20 = pbVar6;
            if ((undefined1 *)0xd < puVar13) break;
            puVar15 = &DAT_00110000;
            if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
              puVar15 = puVar13;
            }
            if (puVar15 != &DAT_00110000) goto LAB_016b2420;
          }
          puVar15 = puVar13;
        } while (puVar13 == &DAT_00110000);
LAB_016b2420:
        if (puVar15 != (undefined1 *)0x5c && puVar15 != (undefined1 *)0x2f) goto LAB_016b2438;
        uVar17 = uVar17 + 1;
        pbVar5 = pbVar6;
      } while( true );
    }
    local_80 = local_a8;
    local_7c = local_a4;
    iStack_74 = local_9c;
    local_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = local_90;
    local_64 = local_8c;
    local_60 = uStack_88;
    local_78 = local_a0;
    local_48 = pbVar22;
    local_44 = param_3;
    iVar9 = FUN_016b5984(&DAT_00418640,2,&local_48);
    pbVar5 = local_78;
    if (iVar9 == 0) {
      local_59[0] = 0;
      pbVar20 = pbVar22;
      do {
        while( true ) {
          pbVar6 = local_78;
          if (pbVar20 == param_3) goto joined_r0x016b25b0;
          puVar13 = (undefined1 *)(uint)*pbVar20;
          pbVar10 = pbVar20 + 1;
          if (0x7fffffff < (uint)(int)(char)*pbVar20) {
            if (puVar13 < (undefined1 *)0xe0) {
              puVar13 = (undefined1 *)(pbVar20[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
              pbVar10 = pbVar20 + 2;
            }
            else {
              uVar17 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
              if (puVar13 < (undefined1 *)0xf0) {
                puVar13 = (undefined1 *)(uVar17 | ((uint)puVar13 & 0x1f) << 0xc);
                pbVar10 = pbVar20 + 3;
              }
              else {
                puVar13 = (undefined1 *)
                          (pbVar20[3] & 0x3f | uVar17 << 6 | ((uint)puVar13 & 7) << 0x12);
                if (puVar13 == &DAT_00110000) goto joined_r0x016b25b0;
                pbVar10 = pbVar20 + 4;
              }
            }
          }
          pbVar20 = pbVar10;
          if ((undefined1 *)0xd < puVar13) break;
          puVar15 = &DAT_00110000;
          if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
            puVar15 = puVar13;
          }
          puVar13 = puVar15;
          if (puVar15 != &DAT_00110000) goto LAB_016b254c;
        }
      } while (puVar13 == &DAT_00110000);
LAB_016b254c:
      if (puVar13 == (undefined1 *)0x2f) {
        if (local_80 == local_78) {
          FUN_016bd7fc(&local_80,local_78,1,1,1);
        }
        *(byte *)((int)local_7c + (int)local_78) = 0x2f;
        local_78 = pbVar5 + 1;
        local_48 = (byte *)((uint)local_48 & 0xffffff00);
        FUN_016b3bfc(&local_80,2,&local_48,pbVar5,pbVar20,param_3);
      }
      else {
joined_r0x016b25b0:
        pbVar20 = pbVar22;
        if (pbVar20 != param_3) {
          pbVar22 = pbVar20 + 1;
          uVar17 = (uint)*pbVar20;
          if (0x7fffffff < (uint)(int)(char)*pbVar20) {
            if (uVar17 < 0xe0) {
              uVar17 = pbVar20[1] & 0x3f | (uVar17 & 0x1f) << 6;
              pbVar22 = pbVar20 + 2;
            }
            else {
              uVar21 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
              if (uVar17 < 0xf0) {
                uVar17 = uVar21 | (uVar17 & 0x1f) << 0xc;
                pbVar22 = pbVar20 + 3;
              }
              else {
                pbVar22 = pbVar20 + 4;
                uVar17 = pbVar20[3] & 0x3f | uVar21 << 6 | (uVar17 & 7) << 0x12;
              }
            }
          }
          if ((0xd < uVar17) || ((1 << (uVar17 & 0xff) & 0x2600U) == 0)) {
            uVar21 = 1;
            if (0x7f < uVar17) {
              uVar21 = 2;
            }
            if (uVar17 < 0x800) {
              uVar11 = (int)param_3 - (int)pbVar20;
              bVar27 = uVar21 == uVar11;
              if (uVar11 <= uVar21) goto LAB_016b26a0;
LAB_016b2674:
              if ((char)pbVar20[uVar21] < -0x40) {
LAB_016b2bd4:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(pbVar20,uVar11,0,uVar21,&DAT_018aedd8);
              }
            }
            else {
              uVar21 = 4;
              if (uVar17 < 0x10000) {
                uVar21 = 3;
              }
              uVar11 = (int)param_3 - (int)pbVar20;
              bVar27 = uVar21 == uVar11;
              if (uVar21 < uVar11) goto LAB_016b2674;
LAB_016b26a0:
              if (!bVar27) goto LAB_016b2bd4;
            }
            if ((uVar17 == 0x23 || uVar17 == 0x3f) && ((char)local_60 == '\0')) goto LAB_016b280c;
            FUN_016b4e08(local_68,local_64,uVar17,pbVar22,param_3);
            while (uVar21 != 0) {
              pbVar10 = pbVar20 + 1;
              bVar1 = *pbVar20;
              if (((char)bVar1 < '\0') ||
                 ((*(uint *)(&DAT_00564bf0 + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
                uVar17 = uVar21 - 1;
                pbVar20 = (byte *)("%0" + (uint)bVar1 * 3);
                uVar21 = 3;
              }
              else {
                pbVar10 = &DAT_00000001;
                uVar17 = 1;
                do {
                  uVar11 = uVar17;
                  if (uVar21 == uVar11) {
                    uVar17 = 0;
                    goto LAB_016b272c;
                  }
                  uVar12 = (uint)(char)pbVar20[uVar11];
                } while ((-1 < (int)uVar12) &&
                        (uVar17 = uVar11 + 1,
                        (*(uint *)(&DAT_00564bf0 + (uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0))
                ;
                if (uVar21 < uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
                }
                uVar17 = uVar21 - uVar11;
                uVar21 = uVar11;
                pbVar10 = pbVar20 + uVar11;
              }
LAB_016b272c:
              if ((uint)((int)local_80 - (int)pbVar6) < uVar21) {
                FUN_016bd7fc(&local_80,pbVar6,uVar21,1,1);
                pbVar6 = local_78;
              }
              FUN_016dd1aa((byte *)((int)local_7c + (int)pbVar6),pbVar20,uVar21);
              local_78 = pbVar6 + uVar21;
              pbVar20 = pbVar10;
              pbVar6 = local_78;
              uVar21 = uVar17;
            }
          }
          goto joined_r0x016b25b0;
        }
      }
LAB_016b280c:
      local_48 = local_80;
      local_44 = (byte *)local_7c;
      local_40 = local_78;
      iStack_3c = iStack_74;
      local_38 = local_70;
      uStack_34 = uStack_6c;
      pbStack_30 = local_68;
      iStack_2c = local_64;
      uStack_28 = local_60;
      FUN_016b7738(param_1,&local_48,2,pbVar25,pbVar5,pbVar5,pbVar5,local_59,0);
      return;
    }
    uVar28 = 2;
    pbVar5 = local_48;
    param_3 = local_44;
LAB_016b2ac4:
    local_48 = local_a8;
    local_44 = (byte *)local_a4;
    local_40 = local_a0;
    iStack_3c = local_9c;
    local_38 = local_98;
    uStack_34 = uStack_94;
    pbStack_30 = local_90;
    iStack_2c = local_8c;
    uStack_28 = uStack_88;
    FUN_016b5b04(param_1,&local_48,pbVar5,param_3,uVar28,pbVar25);
    return;
  }
  if (local_90 != (byte *)0x0) {
    local_48 = pbVar22;
    local_44 = param_3;
    iVar9 = FUN_016b5984(&DAT_00418640,2,&local_48);
    pbVar5 = extraout_r3_02;
    if (iVar9 == 0) {
      (**(code **)(iVar7 + 0x14))(pbVar6,4);
      pbVar5 = extraout_r3_03;
    }
  }
  iVar9 = local_9c;
  if (local_9c != 0) {
    pbVar5 = *(byte **)(local_9c + 0x20);
  }
  iVar14 = 0;
  if (local_9c != 0 && pbVar5 != (byte *)0x0) {
    pbVar20 = *(byte **)(local_9c + 0x18);
    iVar7 = *(int *)(local_9c + 0x14);
    if (pbVar5 < pbVar20) {
      if ((char)pbVar5[iVar7] < -0x40) goto LAB_016b2b94;
    }
    else if (pbVar5 != pbVar20) {
LAB_016b2b94:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar7,pbVar20,0);
    }
    if (pbVar5 == (byte *)0x4) {
      iVar14 = thunk_FUN_016dd50a(iVar7,&DAT_00568d08,4);
      if (iVar14 != 0) {
        iVar9 = 0;
      }
      iVar14 = iVar9;
    }
  }
  local_a0 = (byte *)0x0;
  local_48 = local_a8;
  local_44 = (byte *)local_a4;
  local_40 = (byte *)0x0;
  iStack_3c = local_9c;
  local_38 = local_98;
  uStack_34 = uStack_94;
  pbStack_30 = local_90;
  iStack_2c = local_8c;
  uStack_28 = uStack_88;
  FUN_016b7fcc(param_1,&local_48,pbVar22,param_3,iVar14);
  return;
}

