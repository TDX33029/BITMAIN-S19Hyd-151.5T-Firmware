// FUN_0195cfa4 @ 0195cfa4 size=3240 calls_out=20 calls_in=3
// strings: filled must not become larger than initialized | filled must not become larger than initialized | filled must not become larger than initialized | filled must not become larger than initialized | MaybeDone polled after value taken | internal error: entered unreachable code

/* WARNING: Type propagation algorithm not settling */

void FUN_0195cfa4(uint *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  uint uVar7;
  code ***pppcVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  code *pcVar15;
  int iVar16;
  code **ppcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  uint unaff_r8;
  int *piVar21;
  code *pcVar22;
  uint local_90;
  code *local_8c;
  code *local_88;
  code *local_84;
  uint local_80;
  code *local_7c;
  code *local_78;
  code *local_74;
  code **local_70;
  code *local_6c;
  int local_68;
  int local_64;
  code ***local_50;
  code *local_4c;
  code *local_48;
  undefined4 local_44;
  code *local_40;
  code *local_3c;
  code **local_38;
  code *local_34;
  code **local_30;
  code *local_2c;
  
  puVar3 = (uint *)(param_2 + 1);
  if (*param_2 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[4]) {
    case '\0':
      piVar21 = (int *)param_2[1];
      param_2[2] = (int)piVar21;
      local_70 = (code **)*piVar21;
      local_6c = (code *)piVar21[1];
      local_68 = piVar21[2];
      local_64 = piVar21[3];
      *piVar21 = 2;
      if (local_70 != (code **)0x2) {
        FUN_019de0e0(&local_70);
        if (local_64 != -1) {
          FUN_01bf01d6();
        }
        FUN_01781558(&local_70);
      }
      piVar21 = (int *)(param_2[2] + 0x30);
      if (*piVar21 != 4) {
        param_2[3] = (int)piVar21;
        goto LAB_0195d080;
      }
      pcVar13 = *(code **)(param_2[2] + 0x34);
LAB_0195d0f4:
      uVar12 = 4;
      *(undefined1 *)(param_2 + 4) = 1;
LAB_0195d100:
      if ((*param_2 == 1) && ((char)*puVar3 != '\x04')) {
        FUN_0069263c((char)*puVar3,param_2[2]);
      }
      *param_2 = 1;
      *puVar3 = uVar12 | unaff_r8 << 8;
      param_2[2] = (int)pcVar13;
      goto LAB_0195d138;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d270e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d270e0);
    case '\x03':
      piVar21 = (int *)param_2[3];
LAB_0195d080:
      FUN_0195df34(&local_70,piVar21,param_3);
      pcVar13 = local_6c;
      if ((char)local_70 != '\x05') {
        unaff_r8 = (uint)local_70 >> 8;
        uVar12 = (uint)local_70 & 0xff;
        if (uVar12 == 4) {
          iVar16 = param_2[2];
          piVar21 = (int *)(iVar16 + 0x30);
          if (*piVar21 != 4) {
            FUN_019eaadc(piVar21);
            FUN_01955dec(piVar21);
            iVar16 = param_2[2];
          }
          *(undefined4 *)(iVar16 + 0x30) = 4;
          *(code **)(iVar16 + 0x34) = pcVar13;
          goto LAB_0195d0f4;
        }
        *(undefined1 *)(param_2 + 4) = 1;
        bVar2 = false;
        if (uVar12 == 5) break;
        goto LAB_0195d100;
      }
      *(undefined1 *)(param_2 + 4) = 3;
      bVar2 = false;
    }
  }
  else {
    if (*param_2 != 1) goto LAB_0195dbdc;
    uVar12 = (uint)*(byte *)(param_2 + 1);
LAB_0195d138:
    bVar2 = true;
    if (uVar12 != 4) {
      *param_2 = 2;
      uVar12 = *puVar3;
      uVar7 = param_2[2];
      if (4 < (uVar12 & 0xff)) goto LAB_0195dc68;
      if ((uVar12 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27010);
      }
      goto LAB_0195d600;
    }
  }
  if (param_2[5] == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xf]) {
    case '\0':
      iVar16 = 0;
      param_2[7] = 0;
      piVar21 = (int *)param_2[6];
      param_2[8] = 1;
      param_2[9] = 0;
      if (*piVar21 != 2) {
        param_2[10] = (int)piVar21;
        param_2[0xb] = (int)(param_2 + 7);
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        goto LAB_0195d294;
      }
      iVar16 = 0;
      uVar12 = param_2[8];
      pcVar20 = (code *)param_2[9];
LAB_0195d1ec:
      *(undefined1 *)(param_2 + 0xf) = 1;
      break;
    case '\x01':
      goto switchD_0195d544_caseD_1;
    case '\x02':
      goto switchD_0195d544_caseD_2;
    case '\x03':
      piVar21 = (int *)param_2[10];
      iVar16 = param_2[0xe];
LAB_0195d294:
      do {
        pcVar13 = (code *)param_2[0xb];
        pcVar18 = *(code **)(pcVar13 + 8);
        if (*(uint *)pcVar13 - (int)pcVar18 < 0x20) {
          if ((param_2[0xd] != *(uint *)pcVar13) || ((uint)param_2[0xd] < 0x20)) {
            param_2[0xc] = (int)pcVar18;
            FUN_0132b898(pcVar13,pcVar18,0x20,1,1);
            pcVar20 = pcVar18;
            pcVar18 = *(code **)(pcVar13 + 8);
            goto LAB_0195d3fc;
          }
          local_44 = 0;
          local_48 = (code *)0x0;
          local_4c = (code *)&DAT_00000020;
          local_50 = &local_70;
          FUN_019de6b8(&local_38,piVar21[2],piVar21[3],param_3,&local_50);
          pcVar20 = local_34;
          ppcVar17 = local_38;
          pcVar18 = local_48;
          pppcVar8 = local_50;
          uVar12 = (uint)local_38 & 0xff;
          if (local_4c < local_48) {
            pcVar22 = (code *)0x0;
            puVar11 = &DAT_01d2e4e0;
            pcVar18 = local_4c;
            pcVar13 = local_48;
            goto LAB_0195db28;
          }
          pcVar22 = *(code **)(pcVar13 + 8);
          pcVar15 = (code *)param_2[0xc];
          if (pcVar15 < pcVar22) {
LAB_0195dadc:
            pppcVar8 = (code ***)&DAT_0000005d;
            puVar11 = &DAT_01d270a0;
            pcVar6 = "filled must not become larger than initialized";
LAB_0195db74:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(pcVar6,pppcVar8,puVar11);
          }
          local_8c = *(code **)pcVar13;
          local_90 = *(uint *)(pcVar13 + 4);
          pcVar19 = local_8c + -(int)pcVar22;
          local_84 = pcVar15;
          if (pcVar19 < local_48) {
            if (&DAT_0000001f < pcVar19) {
              pcVar5 = pcVar22;
            }
            else {
              param_2[0xc] = (int)pcVar22;
              FUN_0132b898(pcVar13,pcVar22,0x20,1,1);
              pcVar5 = *(code **)(pcVar13 + 8);
              pcVar15 = pcVar22;
            }
            if (pcVar15 < pcVar5) goto LAB_0195dadc;
            local_8c = *(code **)pcVar13;
            local_90 = *(uint *)(pcVar13 + 4);
            pcVar19 = local_8c + -(int)pcVar5;
            pcVar22 = pcVar5;
            local_84 = pcVar15;
          }
          pcVar15 = local_84;
          if (pcVar19 < pcVar18) {
            local_30 = &local_3c;
            puVar11 = &DAT_01d27090;
            local_38 = &local_40;
            pcVar6 = &DAT_0058d12f;
            local_40 = pcVar18;
            pppcVar8 = &local_38;
            local_2c = FUN_012fd02c;
            local_34 = FUN_012fd02c;
            local_3c = pcVar19;
            goto LAB_0195db74;
          }
          pcVar13 = pcVar22 + (int)pcVar18;
          if ((CARRY4((uint)pcVar22,(uint)pcVar18)) || (local_8c < pcVar13)) {
            puVar11 = &DAT_01d27090;
            pcVar18 = local_8c;
LAB_0195db28:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(pcVar22,pcVar13,pcVar18,puVar11);
          }
          FUN_01bed4e2(pcVar22 + local_90,pppcVar8,pcVar18);
          local_88 = pcVar13;
          if (pcVar15 < pcVar13) {
            local_84 = pcVar13;
          }
        }
        else {
          pcVar20 = (code *)param_2[0xc];
LAB_0195d3fc:
          if (pcVar20 < pcVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d270a0);
          }
          local_8c = *(code **)pcVar13;
          local_90 = *(uint *)(pcVar13 + 4);
          local_88 = pcVar18;
          local_84 = pcVar20;
          if (local_8c < pcVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,pcVar18,local_8c,&DAT_01d2e4e0);
          }
          FUN_019de6b8(&local_70,piVar21[2],piVar21[3],param_3,&local_90);
          uVar12 = (uint)local_70 & 0xff;
          if (local_8c < local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_88,local_8c,&DAT_01d2e4e0);
          }
          pcVar18 = local_88 + -(int)pcVar18;
          pcVar20 = local_6c;
          ppcVar17 = local_70;
        }
        FUN_019e6be4(&local_70,&local_90);
        FUN_0195deb8(param_2 + 0xb,&local_70);
        if (uVar12 != 4) {
          if (uVar12 != 5) {
            pcVar13 = (code *)((uint)ppcVar17 & 0xff);
          }
          if (uVar12 != 5 && pcVar13 != (code *)&DAT_00000005) {
            pcVar18 = pcVar20;
            if (pcVar13 == (code *)&SUB_00000004) goto LAB_0195d2b4;
            if (pcVar13 != (code *)&DAT_00000005) {
              FUN_019bb7e0(param_2[7],param_2[8]);
              uVar12 = (uint)pcVar13 | (uint)ppcVar17 & 0xffffff00;
              iVar16 = -0x80000000;
              goto LAB_0195d1ec;
            }
          }
          bVar1 = false;
          *(undefined1 *)(param_2 + 0xf) = 3;
          goto LAB_0195d514;
        }
LAB_0195d2b4:
        if (pcVar18 == (code *)0x0) goto LAB_0195d97c;
        iVar16 = iVar16 + (int)pcVar18;
        param_2[0xe] = iVar16;
      } while( true );
    }
    goto LAB_0195d1f8;
  }
  if (param_2[5] != 1) goto LAB_0195dbdc;
  iVar16 = param_2[6];
LAB_0195d21c:
  bVar1 = bVar2;
  if (iVar16 == -0x80000000) {
    param_2[5] = 2;
    uVar12 = param_2[7];
    uVar7 = param_2[8];
    if ((uVar12 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27020);
    }
    goto LAB_0195d600;
  }
  goto LAB_0195d514;
LAB_0195d9ac:
  uVar12 = param_2[0x13];
  pcVar20 = (code *)param_2[0x14];
  uVar7 = param_2[0x12];
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  if (uVar7 == 0x80000001) goto LAB_0195d96c;
  goto LAB_0195d5a0;
LAB_0195d97c:
  bVar1 = false;
  uVar12 = param_2[8];
  pcVar20 = (code *)param_2[9];
  iVar16 = param_2[7];
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (iVar16 != -0x7fffffff) {
LAB_0195d1f8:
    if (param_2[5] == 1) {
      FUN_00740540(param_2 + 6);
    }
    param_2[5] = 1;
    param_2[6] = iVar16;
    param_2[7] = uVar12;
    param_2[8] = (int)pcVar20;
    goto LAB_0195d21c;
  }
LAB_0195d514:
  if (param_2[0x10] == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\x01':
switchD_0195d544_caseD_1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d270d0);
    case '\x02':
switchD_0195d544_caseD_2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d270d0);
    case '\x03':
      piVar21 = (int *)param_2[0x15];
      iVar16 = param_2[0x19];
LAB_0195d6f0:
      do {
        pcVar13 = (code *)param_2[0x16];
        pcVar18 = *(code **)(pcVar13 + 8);
        if (*(uint *)pcVar13 - (int)pcVar18 < 0x20) {
          if ((param_2[0x18] != *(uint *)pcVar13) || ((uint)param_2[0x18] < 0x20)) {
            param_2[0x17] = (int)pcVar18;
            FUN_0132b898(pcVar13,pcVar18,0x20,1,1);
            pcVar20 = pcVar18;
            pcVar18 = *(code **)(pcVar13 + 8);
            goto LAB_0195d858;
          }
          local_44 = 0;
          local_48 = (code *)0x0;
          local_4c = (code *)&DAT_00000020;
          local_50 = &local_70;
          FUN_019de6b8(&local_38,piVar21[2],piVar21[3],param_3,&local_50);
          pcVar20 = local_34;
          ppcVar17 = local_38;
          pcVar18 = local_48;
          pppcVar8 = local_50;
          uVar12 = (uint)local_38 & 0xff;
          if (local_4c < local_48) {
            pcVar22 = (code *)0x0;
            puVar11 = &DAT_01d2e4e0;
            pcVar18 = local_4c;
            pcVar13 = local_48;
            goto LAB_0195db88;
          }
          pcVar22 = *(code **)(pcVar13 + 8);
          pcVar15 = (code *)param_2[0x17];
          if (pcVar15 < pcVar22) {
LAB_0195db04:
            pppcVar8 = (code ***)&DAT_0000005d;
            puVar11 = &DAT_01d270a0;
            pcVar6 = "filled must not become larger than initialized";
LAB_0195dbd4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(pcVar6,pppcVar8,puVar11);
          }
          local_7c = *(code **)pcVar13;
          local_80 = *(uint *)(pcVar13 + 4);
          pcVar19 = local_7c + -(int)pcVar22;
          local_74 = pcVar15;
          if (pcVar19 < local_48) {
            if (&DAT_0000001f < pcVar19) {
              pcVar5 = pcVar22;
            }
            else {
              param_2[0x17] = (int)pcVar22;
              FUN_0132b898(pcVar13,pcVar22,0x20,1,1);
              pcVar5 = *(code **)(pcVar13 + 8);
              pcVar15 = pcVar22;
            }
            if (pcVar15 < pcVar5) goto LAB_0195db04;
            local_7c = *(code **)pcVar13;
            local_80 = *(uint *)(pcVar13 + 4);
            pcVar19 = local_7c + -(int)pcVar5;
            pcVar22 = pcVar5;
            local_74 = pcVar15;
          }
          pcVar15 = local_74;
          if (pcVar19 < pcVar18) {
            local_30 = &local_3c;
            puVar11 = &DAT_01d27090;
            local_38 = &local_40;
            pcVar6 = &DAT_0058d12f;
            local_40 = pcVar18;
            pppcVar8 = &local_38;
            local_2c = FUN_012fd02c;
            local_34 = FUN_012fd02c;
            local_3c = pcVar19;
            goto LAB_0195dbd4;
          }
          pcVar13 = pcVar22 + (int)pcVar18;
          if ((CARRY4((uint)pcVar22,(uint)pcVar18)) || (local_7c < pcVar13)) {
            puVar11 = &DAT_01d27090;
            pcVar18 = local_7c;
LAB_0195db88:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(pcVar22,pcVar13,pcVar18,puVar11);
          }
          FUN_01bed4e2(pcVar22 + local_80,pppcVar8,pcVar18);
          local_78 = pcVar13;
          if (pcVar15 < pcVar13) {
            local_74 = pcVar13;
          }
        }
        else {
          pcVar20 = (code *)param_2[0x17];
LAB_0195d858:
          if (pcVar20 < pcVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d270a0);
          }
          local_7c = *(code **)pcVar13;
          local_80 = *(uint *)(pcVar13 + 4);
          local_78 = pcVar18;
          local_74 = pcVar20;
          if (local_7c < pcVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,pcVar18,local_7c,&DAT_01d2e4e0);
          }
          FUN_019de6b8(&local_70,piVar21[2],piVar21[3],param_3,&local_80);
          uVar12 = (uint)local_70 & 0xff;
          if (local_7c < local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_78,local_7c,&DAT_01d2e4e0);
          }
          pcVar18 = local_78 + -(int)pcVar18;
          pcVar20 = local_6c;
          ppcVar17 = local_70;
        }
        FUN_019e6be4(&local_70,&local_80);
        FUN_0195deb8(param_2 + 0x16,&local_70);
        if (uVar12 != 4) {
          if (uVar12 != 5) {
            pcVar13 = (code *)((uint)ppcVar17 & 0xff);
          }
          if (uVar12 != 5 && pcVar13 != (code *)&DAT_00000005) {
            pcVar18 = pcVar20;
            if (pcVar13 == (code *)&SUB_00000004) goto LAB_0195d710;
            if (pcVar13 != (code *)&DAT_00000005) {
              FUN_019bb7e0(param_2[0x12],param_2[0x13]);
              uVar12 = (uint)pcVar13 | (uint)ppcVar17 & 0xffffff00;
              uVar7 = 0x80000000;
              goto LAB_0195d594;
            }
          }
          *(undefined1 *)(param_2 + 0x1a) = 3;
          goto LAB_0195d96c;
        }
LAB_0195d710:
        if (pcVar18 == (code *)0x0) goto LAB_0195d9ac;
        iVar16 = iVar16 + (int)pcVar18;
        param_2[0x19] = iVar16;
      } while( true );
    }
    iVar16 = 0;
    param_2[0x12] = 0;
    piVar21 = (int *)param_2[0x11];
    param_2[0x13] = 1;
    param_2[0x14] = 0;
    if (*piVar21 != 2) {
      param_2[0x15] = (int)piVar21;
      param_2[0x16] = (int)(param_2 + 0x12);
      param_2[0x17] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      goto LAB_0195d6f0;
    }
    uVar7 = 0;
    uVar12 = param_2[0x13];
    pcVar20 = (code *)param_2[0x14];
LAB_0195d594:
    *(undefined1 *)(param_2 + 0x1a) = 1;
LAB_0195d5a0:
    if (param_2[0x10] == 1) {
      FUN_00740540(param_2 + 0x11);
    }
    param_2[0x10] = 1;
    param_2[0x11] = uVar7;
    param_2[0x12] = uVar12;
    param_2[0x13] = (int)pcVar20;
  }
  else {
    if (param_2[0x10] != 1) {
LAB_0195dbdc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("MaybeDone polled after value taken",0x45,&DAT_01d270f0);
    }
    uVar7 = param_2[0x11];
  }
  if (uVar7 != 0x80000000) {
    if (!bVar1) {
LAB_0195d96c:
      *param_1 = 0x80000001;
      return;
    }
    if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27030);
    }
    *param_2 = 2;
    uVar12 = param_2[2];
    if ((*puVar3 & 0xff) < 5) {
      if ((*puVar3 & 0xff) != 4) {
        FUN_0069263c(param_2[1],param_2[2]);
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27040);
      }
      if (param_2[5] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27050);
      }
      ppcVar17 = (code **)param_2[6];
      uVar14 = param_2[7];
      uVar4 = param_2[8];
      param_2[5] = 2;
      if (ppcVar17 < (code **)0x80000001) {
        local_70 = ppcVar17;
        local_6c = (code *)param_2[7];
        local_68 = param_2[8];
        if (ppcVar17 == (code **)0x80000000) {
          FUN_00740540(&local_70);
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d27060);
        }
        param_2[0x10] = 2;
        uVar9 = param_2[0x12];
        uVar10 = param_2[0x13];
        if (0x80000000 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d270c0);
        }
        *param_1 = (uint)ppcVar17;
        param_1[2] = uVar4;
        param_1[3] = uVar12;
        param_1[4] = uVar7;
        param_1[1] = uVar14;
        param_1[5] = uVar9;
        param_1[6] = uVar10;
        return;
      }
    }
LAB_0195dc68:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d270c0);
  }
  param_2[0x10] = 2;
  uVar12 = param_2[0x12];
  uVar7 = param_2[0x13];
  if ((uVar12 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d27070);
  }
LAB_0195d600:
  *param_1 = 0x80000000;
  param_1[1] = uVar12;
  param_1[2] = uVar7;
  return;
}

