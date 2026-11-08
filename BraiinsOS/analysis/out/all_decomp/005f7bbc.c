// FUN_005f7bbc @ 005f7bbc size=3544 calls_out=12 calls_in=2
// strings: 

void FUN_005f7bbc(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  bool bVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  uint *puVar29;
  int iVar30;
  code *pcVar31;
  undefined4 uVar32;
  byte bVar33;
  uint uVar34;
  undefined1 uVar35;
  uint uVar36;
  int *in_r12;
  byte *pbVar37;
  int *extraout_r12;
  int *extraout_r12_00;
  int *extraout_r12_01;
  int *extraout_r12_02;
  int *piVar38;
  bool bVar39;
  undefined8 uVar40;
  int local_100;
  undefined *local_fc;
  uint local_e8;
  byte local_e4;
  code *local_e0;
  uint local_d8 [2];
  int *piStack_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  byte *local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined3 uStack_34;
  bool local_2a;
  undefined1 local_29 [5];
  
  if (*(char *)((int)param_2 + 0x17d) == '\0') {
    *param_1 = 0;
    return;
  }
  iVar10 = param_2[0x5f];
  piVar21 = (int *)0x0;
  if ((char)iVar10 == '\0') {
    if (*param_2 != -0x80000000) {
      if (param_2[3] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&DAT_00568c80,param_2 + 3,0);
      }
      uVar8 = param_2[2];
      pbVar37 = (byte *)param_2[1];
      if (uVar8 == 0) {
        bVar33 = 0;
        local_4c = 0;
        iVar10 = 1;
        pcVar31 = (code *)0x0;
        uVar35 = 0;
        uVar17 = 0;
        iVar30 = 1;
        local_e0 = (code *)&LAB_005fcd8c;
        uStack_34 = 0;
        local_e8 = 0;
        uStack_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        local_50 = 0;
        local_e4 = 0;
      }
      else {
        bVar33 = *pbVar37;
        uVar34 = (uint)bVar33;
        if (uVar8 != 1) {
          uVar18 = (uint)pbVar37[1];
          iVar30 = uVar8 - 2;
          uVar17 = uVar18 + uVar34 * 2;
          if (iVar30 == 0) {
            iVar10 = 2;
          }
          else {
            iVar10 = 2;
            pbVar16 = pbVar37 + 2;
            do {
              iVar30 = iVar30 + -1;
              iVar10 = iVar10 << 1;
              uVar17 = (uint)*pbVar16 + uVar17 * 2;
              pbVar16 = pbVar16 + 1;
            } while (iVar30 != 0);
          }
          local_29[0] = (byte)(&DAT_003cf239)[uVar34] <= (byte)(&DAT_003cf239)[uVar18];
          if ((bool)local_29[0]) {
            uVar22 = uVar34;
          }
          else {
            uVar22 = uVar18;
            uVar18 = uVar34;
          }
          local_2a = !(bool)local_29[0];
          uVar34 = (uint)(byte)local_29[0];
          uVar36 = (uint)!(bool)local_29[0];
          local_7c = 0xff;
          local_80 = 0;
          local_88 = pbVar37;
          local_84 = pbVar37 + uVar8;
LAB_005f8528:
          local_78 = 0;
          uVar40 = FUN_005fca50(&local_88);
          uVar4 = uVar22;
          pbVar7 = local_88;
          pbVar16 = (byte *)((ulonglong)uVar40 >> 0x20);
          do {
            local_88 = pbVar7;
            if (pbVar16 == (byte *)0x0) {
LAB_005f8648:
              if (uVar36 == uVar34) {
                FUN_005ff99c(&local_2a,local_29,&DAT_01892af0);
                goto LAB_005f8934;
              }
              if (uVar8 <= uVar36) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar36,uVar8,&DAT_01892b30);
              }
              local_e4 = pbVar37[uVar36];
              if ((byte)(&DAT_003cf239)[local_e4] < 0xfb) {
                if (uVar8 <= uVar34) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar34,uVar8,&DAT_01892b40);
                }
                bVar33 = pbVar37[uVar34];
                FUN_005fcaf0(&local_88,pbVar37,uVar8);
                local_e0 = FUN_012676bc;
                local_e8 = (uint)local_e4 << 0x10 | (uint)bVar33 << 0x18 | uVar34 << 8 | uVar36;
              }
              else {
                FUN_005fcaf0(&local_88,pbVar37,uVar8);
                local_e0 = FUN_01266eec;
              }
              bVar33 = (byte)local_88;
              FUN_016dd1aa(&local_48,(uint)&local_88 | 1,0x17);
              goto LAB_005f86fc;
            }
            uVar15 = (uint)uVar40;
            uVar3 = CONCAT44(local_88,local_80);
            uVar12 = (uint)*(byte *)((ulonglong)uVar40 >> 0x20);
            if ((byte)(&DAT_003cf239)[uVar12] < (byte)(&DAT_003cf239)[uVar4]) {
              local_29[0] = (undefined1)uVar36;
              uVar22 = uVar12;
              uVar18 = uVar4;
              uVar6 = uVar15;
              uVar34 = uVar36;
              uVar35 = (char)uVar40;
              uVar1 = local_29[0];
              if (0xff < uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b8,&DAT_01857358,&DAT_01892b10);
              }
            }
            else {
              uVar22 = uVar4;
              uVar6 = uVar36;
              uVar35 = local_2a;
              uVar1 = local_29[0];
              if (uVar12 != uVar4) {
                if ((byte)(&DAT_003cf239)[uVar12] < (byte)(&DAT_003cf239)[uVar18]) {
                  uVar18 = uVar12;
                  uVar34 = uVar15;
                  uVar1 = (char)uVar40;
                  if (0xff < uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b8,&DAT_01857358,&DAT_01892b00);
                  }
                }
              }
            }
            local_29[0] = uVar1;
            local_2a = (bool)uVar35;
            uVar36 = uVar6;
            if (local_78 != 0) goto LAB_005f8528;
            if ((local_7c == 0) || (local_7c = local_7c + -1, local_88 == local_84))
            goto LAB_005f8648;
            local_80 = local_80 + 1;
            uVar4 = uVar22;
            pbVar7 = local_88 + 1;
            uVar40 = uVar3;
            pbVar16 = local_88;
          } while( true );
        }
        iVar10 = 1;
        uVar36 = 0;
        local_e0 = (code *)&LAB_0126734c;
        uVar17 = uVar34;
LAB_005f86fc:
        uVar35 = (undefined1)uVar36;
        iVar30 = thunk_FUN_016d4a50(uVar8);
        if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,uVar8);
        }
        pcVar31 = FUN_012674c8;
      }
      FUN_016dd1aa(iVar30,pbVar37,uVar8);
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x50);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x50);
      }
      *(byte *)(puVar11 + 2) = bVar33;
      *puVar11 = 1;
      puVar11[1] = 1;
      FUN_016dd1aa((int)puVar11 + 9,&local_48,0x17);
      *(byte *)(puVar11 + 10) = local_e4;
      puVar11[8] = pcVar31;
      puVar11[9] = local_e8;
      puVar11[0xe] = local_e0;
      *(undefined1 *)((int)puVar11 + 0x29) = uVar35;
      puVar11[0x10] = 1;
      puVar11[0x11] = iVar30;
      puVar11[0x12] = uVar8;
      puVar11[0xc] = uVar17;
      puVar11[0xd] = iVar10;
      *param_1 = puVar11;
      param_1[1] = &DAT_01857228;
      param_1[2] = uVar8;
      *(undefined4 *)((int)puVar11 + 0x2a) = local_50;
      *(undefined2 *)((int)puVar11 + 0x2e) = local_4c;
      return;
    }
    piVar20 = (int *)0x0;
    iVar30 = param_2[0x4f];
    *param_1 = 0;
    if (iVar30 == -0x80000000) {
      uVar17 = 0;
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = param_2[0x51];
      uVar17 = param_2[0x55];
      FUN_005fd574(&local_b8,param_2 + 0x4f);
      in_r12 = extraout_r12;
      if (local_b8 != 0x80000000) {
        iVar30 = *(int *)(local_a0 + 0x10);
        local_fc = *(undefined **)(local_a0 + 0x1c);
        iVar13 = *(int *)(local_a0 + 0x24);
        iVar14 = *(int *)(local_ac + 0x10);
        local_80 = local_b8;
        local_7c = local_b4;
        local_74 = local_ac;
        local_64 = local_9c;
        local_70 = local_a8;
        local_84 = &DAT_00000001;
        local_88 = &DAT_00000001;
        local_6c = iStack_a4;
        local_58 = local_90;
        iStack_54 = local_8c;
        local_78 = local_b0;
        local_60 = local_98;
        local_5c = local_94;
        local_68 = local_a0;
        piVar20 = (int *)thunk_FUN_016d4a50(0x38);
        if (piVar20 == (int *)0x0) {
LAB_005f8934:
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x38);
        }
        *piVar20 = (int)local_88;
        piVar20[1] = (int)local_84;
        piVar20[2] = local_80;
        piVar20[3] = local_7c;
        piVar20[4] = local_78;
        piVar20[5] = local_74;
        piVar20[6] = local_70;
        piVar20[7] = local_6c;
        piVar20[8] = local_68;
        in_r12 = piVar20 + 9;
        *in_r12 = local_64;
        piVar20[10] = local_60;
        piVar20[0xb] = local_5c;
        piVar20[0xc] = local_58;
        piVar20[0xd] = iStack_54;
        local_94 = local_94 + (int)local_fc * 4;
        if (local_9c == 0) {
          local_94 = (int)local_fc << 2;
        }
        local_100 = local_94 + iVar13 + (iVar30 + local_b0) * 0xc + iVar14 * 8;
      }
    }
    bVar23 = 1 < uVar17;
    bVar33 = 0;
    if (uVar8 < 0x11) {
      bVar33 = 1;
    }
  }
  else {
    piVar20 = (int *)0x0;
    bVar23 = false;
    bVar33 = 0;
  }
  uVar8 = param_2[0x5d];
  if (uVar8 < 4) {
    iVar30 = param_2[0x5b];
    piVar21 = (int *)0x0;
    piVar38 = (int *)param_2[0x5c];
    puVar9 = &DAT_01857304;
    piVar25 = (int *)0x0;
    do {
      piVar24 = piVar25;
      if (piVar24 == (int *)&DAT_00000100) goto LAB_005f7ee8;
      if (piVar38 == piVar24) {
        in_r12 = piVar38;
        goto LAB_005f897c;
      }
      piVar25 = (int *)((int)piVar24 + 1);
    } while (*(char *)(iVar30 + (int)piVar24) != '\x01');
    if (piVar24 < &DAT_00000080) {
      in_r12 = piVar38;
      if (piVar38 < piVar25) {
        in_r12 = piVar25;
      }
      do {
        piVar26 = piVar25;
        if (piVar26 == (int *)&DAT_00000100) {
          piVar21 = (int *)thunk_FUN_016d4a50(0xc);
          if (piVar21 == (int *)0x0) goto LAB_005f8944;
          *(char *)(piVar21 + 2) = (char)piVar24;
          local_fc = &DAT_018572c8;
          *piVar21 = 1;
          piVar21[1] = 1;
          in_r12 = extraout_r12_00;
          goto LAB_005f7ee8;
        }
        if (in_r12 == piVar26) goto LAB_005f8978;
        piVar25 = (int *)((int)piVar26 + 1);
      } while (*(char *)(iVar30 + (int)piVar26) != '\x01');
      if (piVar26 < &DAT_00000080) {
        in_r12 = piVar38;
        if (piVar38 < piVar25) {
          in_r12 = piVar25;
        }
        do {
          piVar27 = piVar25;
          if (piVar27 == (int *)&DAT_00000100) {
            piVar21 = (int *)thunk_FUN_016d4a50(0xc);
            if (piVar21 == (int *)0x0) goto LAB_005f8944;
            *(char *)((int)piVar21 + 9) = (char)piVar26;
            local_fc = &DAT_018572dc;
            in_r12 = extraout_r12_01;
            goto LAB_005f87f4;
          }
          if (in_r12 == piVar27) goto LAB_005f8978;
          piVar25 = (int *)((int)piVar27 + 1);
        } while (*(char *)(iVar30 + (int)piVar27) != '\x01');
        if (piVar27 < &DAT_00000080) {
          pcVar19 = (char *)(iVar30 + (int)piVar25);
          in_r12 = piVar38;
          if (piVar38 < piVar25) {
            in_r12 = piVar25;
          }
LAB_005f8818:
          piVar28 = piVar25;
          if (piVar28 == (int *)&DAT_00000100) {
            piVar21 = (int *)thunk_FUN_016d4a50(0xc);
            if (piVar21 == (int *)0x0) {
LAB_005f8944:
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            *(char *)((int)piVar21 + 10) = (char)piVar27;
            local_fc = &DAT_018572f0;
            *(char *)((int)piVar21 + 9) = (char)piVar26;
            in_r12 = extraout_r12_02;
LAB_005f87f4:
            *(char *)(piVar21 + 2) = (char)piVar24;
            *piVar21 = 1;
            piVar21[1] = 1;
            goto LAB_005f7ee8;
          }
          if (in_r12 != piVar28) goto code_r0x005f882c;
LAB_005f8978:
          goto LAB_005f897c;
        }
      }
    }
  }
LAB_005f7ee8:
  uVar17 = param_2[0x4c];
  if ((*(char *)((int)param_2 + 0x137) == '\x01') && (uVar17 < 4)) {
    piVar25 = param_2 + 4;
    uVar18 = 0;
    local_88 = (byte *)((uint)local_88 & 0xff000000);
    uVar34 = 0;
    do {
      puVar29 = (uint *)((int)param_2 + (uVar34 >> 3 & 0xfffffff0) + 0x110);
      in_r12 = (int *)puVar29[2];
      local_cc = puVar29[3];
      local_d8[0] = *puVar29;
      local_d8[1] = puVar29[1];
      piStack_d0 = in_r12;
      local_bc = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
      if ((*(uint *)((int)local_d8 + ((uVar34 & 0x60) >> 3)) >> (uVar34 & 0x1f) & 1) != 0) {
        if (2 < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar18,3,&DAT_018572a8);
        }
        local_29[uVar18 - 0x5f] = (char)uVar34;
        uVar18 = uVar18 + 1;
      }
      bVar39 = uVar34 != 0xff;
      uVar34 = uVar34 + 1;
    } while (bVar39);
    uVar35 = (undefined1)local_88;
    uVar1 = local_88._1_1_;
    switch(uVar18) {
    case 0:
      goto switchD_005f7fcc_caseD_0;
    case 1:
      uVar32 = 0xc;
      uVar1 = *(undefined1 *)((int)piVar25 + ((uint)local_88 & 0xff));
      piVar38 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar38 == (int *)0x0) {
LAB_005f88bc:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar32);
      }
      *(undefined1 *)((int)piVar38 + 9) = uVar1;
      *(undefined1 *)(piVar38 + 2) = uVar35;
      in_r12 = (int *)&UNK_0185725c;
      *piVar38 = 1;
      piVar38[1] = 1;
      break;
    case 2:
      uVar32 = 0x10c;
      piVar38 = (int *)thunk_FUN_016d4a50(0x10c);
      if (piVar38 == (int *)0x0) goto LAB_005f88bc;
      *piVar38 = 1;
      piVar38[1] = 1;
      FUN_016dd1aa(piVar38 + 2,piVar25,0x100);
      *(undefined1 *)((int)piVar38 + 0x109) = uVar1;
      in_r12 = (int *)&UNK_01857270;
      *(undefined1 *)(piVar38 + 0x42) = uVar35;
      break;
    case 3:
      uVar32 = 0x10c;
      uVar5 = local_88._2_1_;
      piVar38 = (int *)thunk_FUN_016d4a50(0x10c);
      if (piVar38 == (int *)0x0) goto LAB_005f88bc;
      *piVar38 = 1;
      piVar38[1] = 1;
      FUN_016dd1aa(piVar38 + 2,piVar25,0x100);
      *(undefined1 *)((int)piVar38 + 0x10a) = uVar5;
      in_r12 = (int *)&DAT_01857284;
      *(undefined1 *)((int)piVar38 + 0x109) = uVar1;
      *(undefined1 *)(piVar38 + 0x42) = uVar35;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01857298);
    }
  }
  else {
switchD_005f7fcc_caseD_0:
    piVar38 = (int *)0x0;
  }
  if (piVar21 == (int *)0x0) {
    if (piVar38 == (int *)0x0) {
      if ((char)iVar10 == '\0') {
        *param_1 = piVar20;
        param_1[1] = &DAT_01857324;
        param_1[2] = local_100;
        return;
      }
      *param_1 = 0;
    }
    else {
      if (((bool)(bVar23 & bVar33)) && (2 < uVar17)) {
        *param_1 = piVar20;
        param_1[1] = &DAT_01857324;
        param_1[2] = local_100;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar38;
          bVar23 = (bool)hasExclusiveAccess(piVar38);
        } while (!bVar23);
        *piVar38 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar38,in_r12);
          return;
        }
        return;
      }
      *param_1 = piVar38;
      param_1[1] = in_r12;
      param_1[2] = 0;
    }
    if (piVar20 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar20;
      bVar23 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar23);
    *piVar20 = iVar10 + -1;
  }
  else {
    bVar23 = (bool)(bVar33 & 2 < uVar8 & bVar23);
    if (piVar38 == (int *)0x0) {
      if (bVar23) {
        *param_1 = piVar20;
        param_1[1] = &DAT_01857324;
        param_1[2] = local_100;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar21;
          bVar23 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar23);
        *piVar21 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar21,local_fc);
          return;
        }
        return;
      }
      *param_1 = piVar21;
      param_1[1] = local_fc;
      param_1[2] = 0;
    }
    else {
      if ((bool)(bVar23 & 2 < uVar17)) {
        *param_1 = piVar20;
        param_1[1] = &DAT_01857324;
        param_1[2] = local_100;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar38;
          bVar23 = (bool)hasExclusiveAccess(piVar38);
        } while (!bVar23);
        *piVar38 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar38,in_r12);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar21;
          bVar23 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar23);
        *piVar21 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar21,local_fc);
          return;
        }
        return;
      }
      if ((uVar8 < uVar17) ||
         (*(ushort *)(param_2 + 0x5e) <= (ushort)((short)param_2[0x4d] + 0x32U))) {
        *param_1 = piVar21;
        param_1[1] = local_fc;
        param_1[2] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar38;
          bVar23 = (bool)hasExclusiveAccess(piVar38);
        } while (!bVar23);
        *piVar38 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar38,in_r12);
        }
      }
      else {
        *param_1 = piVar38;
        param_1[1] = in_r12;
        param_1[2] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar21;
          bVar23 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar23);
        *piVar21 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(piVar21,local_fc);
        }
      }
    }
    if (piVar20 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar20;
      bVar23 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar23);
    *piVar20 = iVar10 + -1;
  }
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(piVar20,&DAT_01857324);
    return;
  }
  return;
code_r0x005f882c:
  cVar2 = *pcVar19;
  pcVar19 = pcVar19 + 1;
  piVar25 = (int *)((int)piVar28 + 1);
  if (cVar2 == '\x01') goto code_r0x005f883c;
  goto LAB_005f8818;
code_r0x005f883c:
  if (piVar28 < &DAT_00000080) {
    piVar38 = (int *)0x3;
    puVar9 = &DAT_01857314;
    in_r12 = (int *)0x3;
LAB_005f897c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(in_r12,piVar38,puVar9);
  }
  goto LAB_005f7ee8;
}

