// FUN_0123bfcc @ 0123bfcc size=3984 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0123bfcc(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 uVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  bool bVar23;
  int local_c0;
  int local_bc;
  uint local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  uint local_a4;
  int local_a0;
  int local_98;
  undefined4 *local_94;
  uint local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int local_78;
  char *local_74;
  uint local_70;
  int local_6c;
  undefined4 *local_68;
  uint local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 *puStack_50;
  uint uStack_4c;
  int local_48;
  undefined4 *local_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined4 *local_2c;
  uint local_28;
  
  local_94 = (undefined4 *)&LAB_00fb1f30;
  local_98 = param_2;
  FUN_00600d2c(&local_78,&DAT_003b5298,&local_98);
  pcVar3 = local_74;
  uVar22 = 0;
  if (local_70 == 0) {
    bVar23 = false;
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
    bVar23 = *local_74 == '-';
    if (!bVar23) {
      uVar9 = (uint)(*local_74 == '+');
    }
  }
LAB_0123c05c:
  do {
    uVar17 = local_70 - uVar22;
    pcVar14 = local_74 + uVar22;
    if (uVar17 < 8) {
      if (local_70 == uVar22) goto LAB_0123c224;
      uVar10 = 0;
      while (pcVar14[uVar10] != '.') {
        uVar10 = uVar10 + 1;
        if (uVar17 == uVar10) goto LAB_0123c224;
      }
    }
    else {
      uVar12 = ((uint)(pcVar14 + 3) & 0xfffffffc) - (int)pcVar14;
      if (uVar12 == 0) {
        uVar12 = 0;
        goto LAB_0123c0f0;
      }
      uVar10 = 0;
      do {
        if (pcVar14[uVar10] == '.') goto LAB_0123c170;
        uVar10 = uVar10 + 1;
      } while (uVar12 != uVar10);
      for (; uVar12 <= uVar17 - 8; uVar12 = uVar12 + 8) {
LAB_0123c0f0:
        uVar8 = *(uint *)(pcVar14 + uVar12);
        uVar10 = *(uint *)((int)(pcVar14 + uVar12) + 4) ^ 0x2e2e2e2e;
        if (((0x1010100 - (uVar8 ^ 0x2e2e2e2e) | uVar8) & 0x80808080 & (0x1010100 - uVar10 | uVar10)
            ) != 0x80808080) break;
      }
      if (uVar17 == uVar12) goto LAB_0123c224;
      iVar15 = 0;
      while (pcVar14[iVar15 + uVar12] != '.') {
        iVar15 = iVar15 + 1;
        if ((local_70 - uVar12) - uVar22 == iVar15) goto LAB_0123c224;
      }
      uVar10 = iVar15 + uVar12;
    }
LAB_0123c170:
    uVar10 = uVar10 + uVar22;
    uVar22 = uVar10 + 1;
    if (local_70 <= uVar10) {
      if (local_70 < uVar22) goto LAB_0123c224;
      goto LAB_0123c05c;
    }
    if ((local_70 < uVar22) || (local_74[uVar10] == '.')) goto LAB_0123c1a4;
  } while( true );
LAB_0123c354:
  if (local_74[uVar10] != '/') {
LAB_0123c3f8:
    if (uVar9 != 0) {
      if (local_70 < 2) {
        if (local_70 != 1) {
          puVar6 = &DAT_0188ab48;
          goto LAB_0123cf0c;
        }
      }
      else if (local_74[1] < -0x40) {
        puVar6 = &DAT_0188ab48;
        uVar10 = local_70;
        goto LAB_0123cf10;
      }
    }
    FUN_01274538(&local_98,local_74 + uVar9,local_70 - uVar9);
    if (local_98 == -0x80000000) goto LAB_0123c4a0;
    local_30 = local_98;
    local_2c = local_94;
    local_28 = local_90;
    local_44 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *local_44 = 1;
    local_40 = 1;
    local_48 = 1;
    FUN_0123d084(&local_98,&local_30,&local_48);
LAB_0123c48c:
    local_80 = CONCAT31(local_80._1_3_,bVar23);
    goto LAB_0123c494;
  }
  puVar6 = &DAT_0188ab28;
  if (uVar10 < uVar9) goto LAB_0123cf0c;
  if ((uVar9 != 0) && (local_74[1] < -0x40)) goto LAB_0123cf10;
  FUN_01274538(&local_98,local_74 + uVar9,uVar10 - uVar9);
  uVar22 = local_90;
  local_b4 = local_94;
  iVar15 = local_98;
  if (local_98 != -0x80000000) {
    uVar10 = uVar10 + 1;
    if ((uVar10 < local_70) && (pcVar3[uVar10] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pcVar3,local_70,uVar10,local_70,&DAT_0188ab38);
    }
    FUN_01274538(&local_30,pcVar3 + uVar10,local_70 - uVar10);
    uVar9 = local_28;
    if (local_30 != -0x80000000) {
      local_28 = uVar22;
      local_48 = local_30;
      local_44 = local_2c;
      local_40 = uVar9;
      local_2c = local_b4;
      local_30 = iVar15;
      FUN_0123d084(&local_98,&local_30,&local_48);
      goto LAB_0123c48c;
    }
    local_98 = -0x7ffffffe;
    local_94 = (undefined4 *)CONCAT31(local_94._1_3_,1);
    if (iVar15 == 0) goto LAB_0123c4a0;
LAB_0123c71c:
    thunk_FUN_016d3fb4(local_b4);
    goto LAB_0123c494;
  }
  goto LAB_0123c4a0;
LAB_0123c1a4:
  if (local_74[uVar10] != '.') {
LAB_0123c224:
    uVar22 = 0;
LAB_0123c230:
    do {
      uVar17 = local_70 - uVar22;
      pcVar14 = local_74 + uVar22;
      if (uVar17 < 8) {
        if (local_70 == uVar22) goto LAB_0123c3f8;
        uVar10 = 0;
        while (pcVar14[uVar10] != '/') {
          uVar10 = uVar10 + 1;
          if (uVar17 == uVar10) goto LAB_0123c3f8;
        }
      }
      else {
        uVar12 = ((uint)(pcVar14 + 3) & 0xfffffffc) - (int)pcVar14;
        if (uVar12 == 0) {
          uVar12 = 0;
          goto LAB_0123c2ac;
        }
        uVar10 = 0;
        do {
          if (pcVar14[uVar10] == '/') goto LAB_0123c320;
          uVar10 = uVar10 + 1;
        } while (uVar12 != uVar10);
        for (; uVar12 <= uVar17 - 8; uVar12 = uVar12 + 8) {
LAB_0123c2ac:
          uVar8 = *(uint *)(pcVar14 + uVar12);
          uVar10 = *(uint *)((int)(pcVar14 + uVar12) + 4) ^ 0x2f2f2f2f;
          if (((0x1010100 - (uVar8 ^ 0x2f2f2f2f) | uVar8) & 0x80808080 &
              (0x1010100 - uVar10 | uVar10)) != 0x80808080) break;
        }
        if (uVar17 == uVar12) goto LAB_0123c3f8;
        iVar15 = 0;
        while (pcVar14[iVar15 + uVar12] != '/') {
          iVar15 = iVar15 + 1;
          if ((local_70 - uVar12) - uVar22 == iVar15) goto LAB_0123c3f8;
        }
        uVar10 = iVar15 + uVar12;
      }
LAB_0123c320:
      uVar10 = uVar10 + uVar22;
      uVar22 = uVar10 + 1;
      if (local_70 <= uVar10) {
        if (local_70 < uVar22) goto LAB_0123c3f8;
        goto LAB_0123c230;
      }
      if ((local_70 < uVar22) || (local_74[uVar10] == '/')) goto LAB_0123c354;
    } while( true );
  }
  puVar6 = &UNK_0188aaf8;
  if (uVar10 < uVar9) {
LAB_0123cf0c:
    uVar10 = 0;
LAB_0123cf10:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(local_74,local_70,uVar9,uVar10,puVar6);
  }
  if ((uVar9 != 0) && (local_74[1] < -0x40)) goto LAB_0123cf10;
  FUN_01274538(&local_98,local_74 + uVar9,uVar10 - uVar9);
  local_b8 = local_90;
  local_b4 = local_94;
  iVar15 = local_98;
  if (local_98 == -0x80000000) goto LAB_0123c4a0;
  local_a0 = local_98;
  uVar22 = uVar10 + 1;
  pcVar14 = pcVar3 + uVar22;
  if ((uVar22 < local_70) && (*pcVar14 < -0x40)) {
    puVar6 = &DAT_0188ab08;
    uVar9 = local_70;
LAB_0123cf40:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pcVar3,local_70,uVar22,uVar9,puVar6);
  }
  iVar18 = local_70 - uVar22;
  do {
    local_c0 = iVar18;
    if (local_c0 == 0) {
      local_b0 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (local_b0 == (undefined4 *)0x0) goto LAB_0123cec0;
      local_bc = 1;
      *local_b0 = 1;
      puVar20 = (undefined4 *)&DAT_00000004;
      iVar18 = 0;
      uVar13 = 1;
      local_a4 = 0;
      goto LAB_0123c5ac;
    }
    pbVar11 = (byte *)(pcVar14 + local_c0 + -1);
    uVar9 = (uint)(char)*pbVar11;
    if (0x7fffffff < uVar9) {
      pbVar11 = (byte *)(pcVar14 + local_c0 + -2);
      bVar1 = *pbVar11;
      if ((char)bVar1 < -0x40) {
        pbVar11 = (byte *)(pcVar14 + local_c0 + -3);
        bVar2 = *pbVar11;
        if ((char)bVar2 < -0x40) {
          pbVar11 = (byte *)(pcVar14 + local_c0 + -4);
          uVar17 = (int)(char)bVar2 & 0x3fU | (*pbVar11 & 7) << 6;
        }
        else {
          uVar17 = bVar2 & 0xf;
        }
        uVar17 = (int)(char)bVar1 & 0x3fU | uVar17 << 6;
      }
      else {
        uVar17 = bVar1 & 0x1f;
      }
      uVar9 = uVar9 & 0x3f | uVar17 << 6;
    }
    iVar18 = (int)pbVar11 - (int)pcVar14;
  } while (uVar9 == 0x30);
  uVar9 = local_c0 + uVar22;
  puVar6 = &DAT_0188ab18;
  if ((uVar9 <= uVar10) || ((uVar22 < local_70 && (*pcVar14 < -0x40)))) goto LAB_0123cf40;
  if (uVar9 < local_70) {
    if (pcVar3[uVar9] < -0x40) goto LAB_0123cf40;
  }
  else if (uVar9 != local_70) goto LAB_0123cf40;
  FUN_01274538(&local_48,pcVar14,local_c0);
  uVar22 = local_40;
  puVar20 = local_44;
  iVar18 = local_48;
  if (local_48 == -0x80000000) {
    local_98 = -0x7ffffffe;
    local_94 = (undefined4 *)CONCAT31(local_94._1_3_,1);
  }
  else {
    local_a4 = local_40;
    local_b0 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (local_b0 == (undefined4 *)0x0) {
LAB_0123cec0:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *local_b0 = 1;
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *puVar7 = 1;
    FUN_0115c4c4(&local_98,puVar7,1);
    FUN_012742e0(&local_48,&local_98,local_b0,1);
    uVar9 = local_40;
    puVar21 = local_44;
    iVar19 = local_48;
    if (local_48 == -0x80000000) {
      local_bc = 1;
      local_94 = (undefined4 *)((uint)local_94 & 0xffffff00);
LAB_0123cb34:
      local_98 = -0x7ffffffe;
      thunk_FUN_016d3fb4(puVar7);
joined_r0x0123c5f0:
      if (local_bc != 0) {
        thunk_FUN_016d3fb4(local_b0);
      }
    }
    else {
      thunk_FUN_016d3fb4(puVar7);
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar21,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar21,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar5 = local_44;
      iVar16 = local_48;
      local_bc = 1;
      puVar7 = puVar21;
      if (local_48 == -0x80000000) {
LAB_0123cb14:
        local_98 = -0x7ffffffe;
        local_94 = (undefined4 *)((uint)local_94 & 0xffffff00);
        if (iVar19 != 0) goto LAB_0123cb34;
        goto joined_r0x0123c5f0;
      }
      if (iVar19 != 0) {
        thunk_FUN_016d3fb4(puVar21);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar5,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar5,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar7 = local_44;
      iVar19 = local_48;
      if (local_48 == -0x80000000) {
        iVar19 = iVar16;
        puVar7 = puVar5;
        goto LAB_0123cb14;
      }
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(puVar5);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar7,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar7,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar21 = local_44;
      iVar16 = local_48;
      if (local_48 == -0x80000000) goto LAB_0123cb14;
      if (iVar19 != 0) {
        thunk_FUN_016d3fb4(puVar7);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar21,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar21,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar7 = local_44;
      iVar19 = local_48;
      if (local_48 == -0x80000000) {
LAB_0123ca58:
        iVar19 = iVar16;
        puVar7 = puVar21;
        goto LAB_0123cb14;
      }
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(puVar21);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar7,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar7,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar21 = local_44;
      iVar16 = local_48;
      if (local_48 == -0x80000000) goto LAB_0123cb14;
      if (iVar19 != 0) {
        thunk_FUN_016d3fb4(puVar7);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar21,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar21,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar7 = local_44;
      iVar19 = local_48;
      if (local_48 == -0x80000000) goto LAB_0123ca58;
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(puVar21);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar7,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar7,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar21 = local_44;
      iVar16 = local_48;
      if (local_48 == -0x80000000) goto LAB_0123cb14;
      if (iVar19 != 0) {
        thunk_FUN_016d3fb4(puVar7);
      }
      if (uVar9 == 0) {
        FUN_0115c4c4(&local_98,local_b0,1);
        FUN_012742e0(&local_48,&local_98,puVar21,0);
      }
      else {
        FUN_0115c4c4(&local_98,puVar21,uVar9);
        FUN_012742e0(&local_48,&local_98,local_b0,1);
      }
      uVar9 = local_40;
      puVar7 = local_44;
      iVar19 = local_48;
      if (local_48 == -0x80000000) {
        iVar19 = iVar16;
        puVar7 = puVar21;
        goto LAB_0123cb14;
      }
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(puVar21);
      }
      uVar13 = 1;
      do {
        iVar16 = local_bc;
        FUN_0123d870(&local_6c,local_b4,local_b8,puVar7,uVar9);
        iVar4 = local_6c;
        local_a0 = local_6c;
        if (local_6c == -0x80000000) {
          local_bc = iVar16;
          local_a0 = iVar15;
          goto LAB_0123cb14;
        }
        if (iVar15 != 0) {
          thunk_FUN_016d3fb4(local_b4);
        }
        local_b8 = local_64;
        local_b4 = local_68;
        FUN_0123d870(&local_60,local_b0,uVar13,puVar7,uVar9);
        local_bc = local_60;
        if (local_60 == -0x80000000) {
          local_bc = iVar16;
          goto LAB_0123cb14;
        }
        if (iVar16 != 0) {
          thunk_FUN_016d3fb4(local_b0);
        }
        local_b0 = local_5c;
        local_c0 = local_c0 + -1;
        uVar13 = local_58;
        iVar15 = iVar4;
      } while (local_c0 != 0);
      if (iVar19 != 0) {
        thunk_FUN_016d3fb4(puVar7);
      }
      if (local_b8 < uVar22) {
        FUN_0115c4c4(&local_98,puVar20,uVar22);
        FUN_012742e0(&local_48,&local_98,local_b4,local_b8);
      }
      else {
LAB_0123c5ac:
        FUN_0115c4c4(&local_98,local_b4,local_b8);
        FUN_012742e0(&local_48,&local_98,puVar20,local_a4);
      }
      if (local_48 == -0x80000000) {
        local_98 = -0x7ffffffe;
        local_94 = (undefined4 *)((uint)local_94 & 0xffffff00);
        goto joined_r0x0123c5f0;
      }
      local_54 = local_48;
      puStack_50 = local_44;
      uStack_4c = local_40;
      local_98 = local_bc;
      local_94 = local_b0;
      local_90 = uVar13;
      FUN_0123d084(&local_48,&local_54,&local_98);
      local_80 = CONCAT31(local_80._1_3_,bVar23);
      local_98 = local_48;
      local_94 = local_44;
      local_90 = local_40;
      local_8c = iStack_3c;
      iStack_88 = iStack_38;
      iStack_84 = iStack_34;
    }
    if (iVar18 != 0) {
      thunk_FUN_016d3fb4(puVar20);
    }
  }
  if (local_a0 != 0) goto LAB_0123c71c;
LAB_0123c494:
  if (local_98 != -0x7ffffffe) {
    *param_1 = local_98;
    param_1[1] = (int)local_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = iStack_88;
    param_1[5] = iStack_84;
    param_1[6] = local_80;
    goto joined_r0x0123c4b4;
  }
LAB_0123c4a0:
  *param_1 = -0x7fffffff;
joined_r0x0123c4b4:
  if (local_78 != 0) {
    thunk_FUN_016d3fb4(local_74);
  }
  return;
}

