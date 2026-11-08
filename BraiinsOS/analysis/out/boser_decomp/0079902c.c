// FUN_0079902c @ 0079902c size=3116 calls_out=22 calls_in=1
// strings: filled must not become larger than initialized | filled must not become larger than initialized | filled must not become larger than initialized | filled must not become larger than initialized | MaybeDone polled after value taken | internal error: entered unreachable code

/* WARNING: Type propagation algorithm not settling */

void FUN_0079902c(uint *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  code *pcVar8;
  code *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined *puVar13;
  code ***pppcVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  int *piVar18;
  int iVar19;
  code **ppcVar20;
  int *piVar21;
  code *pcVar22;
  uint unaff_r8;
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
  uint local_68;
  uint local_64;
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
  
  puVar6 = (uint *)(param_2 + 1);
  if (*param_2 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[4]) {
    case '\0':
      puVar11 = (uint *)param_2[1];
      param_2[2] = (int)puVar11;
      local_70 = (code **)*puVar11;
      local_6c = (code *)puVar11[1];
      local_68 = puVar11[2];
      local_64 = puVar11[3];
      *puVar11 = 2;
      if (local_70 != (code **)0x2) {
        FUN_019de0e0(&local_70);
        if (local_64 != 0xffffffff) {
          FUN_01bf01d6();
        }
        FUN_01781558(&local_70);
      }
      piVar21 = (int *)(param_2[2] + 0x30);
      if (*piVar21 != 4) {
        param_2[3] = (int)piVar21;
        goto LAB_00799108;
      }
      pcVar9 = *(code **)(param_2[2] + 0x34);
LAB_007991e4:
      uVar15 = 4;
      *(undefined1 *)(param_2 + 4) = 1;
LAB_007991f0:
      if ((*param_2 == 1) && ((char)*puVar6 != '\x04')) {
        FUN_0069263c((char)*puVar6,param_2[2]);
      }
      *param_2 = 1;
      *puVar6 = uVar15 | (int)piVar21 << 8;
      param_2[2] = (int)pcVar9;
      goto LAB_00799228;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d270e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d270e0);
    case '\x03':
      piVar21 = (int *)param_2[3];
LAB_00799108:
      uVar15 = FUN_019ec670(*param_3);
      if ((uVar15 & 0xff) == 2) {
        uVar15 = 0;
LAB_00799140:
        FUN_019eb864(&local_70,piVar21,param_3);
        pcVar9 = local_6c;
        ppcVar20 = local_70;
        if ((((uint)local_70 & 0xff) != 5) && (uVar15 = 0, ((uint)local_70 & 0xff) == 4)) {
          *(undefined1 *)(piVar21 + 0xb) = 0;
        }
        FUN_019edbc4(uVar15,unaff_r8);
        uVar15 = (uint)ppcVar20 & 0xff;
        if (uVar15 == 5) goto LAB_0079918c;
        piVar21 = (int *)((uint)ppcVar20 >> 8);
        if (uVar15 == 4) {
          iVar19 = param_2[2];
          piVar18 = (int *)(iVar19 + 0x30);
          if (*piVar18 != 4) {
            FUN_019eaadc(piVar18);
            FUN_01955dec(piVar18);
            iVar19 = param_2[2];
          }
          *(undefined4 *)(iVar19 + 0x30) = 4;
          *(code **)(iVar19 + 0x34) = pcVar9;
          goto LAB_007991e4;
        }
        bVar2 = false;
        *(undefined1 *)(param_2 + 4) = 1;
        if (uVar15 != 5) goto LAB_007991f0;
      }
      else {
        if ((uVar15 & 1) == 0) {
          unaff_r8 = (uVar15 & 0xffffff) >> 0x10;
          uVar15 = (uVar15 & 0xffffff) >> 8;
          goto LAB_00799140;
        }
LAB_0079918c:
        bVar2 = false;
        *(undefined1 *)(param_2 + 4) = 3;
      }
    }
  }
  else {
    if (*param_2 != 1) goto LAB_00799be8;
    uVar15 = (uint)*(byte *)(param_2 + 1);
LAB_00799228:
    bVar2 = true;
    if (uVar15 != 4) {
      *param_2 = 2;
      uVar15 = *puVar6;
      uVar7 = param_2[2];
      if (4 < (uVar15 & 0xff)) goto LAB_00799c74;
      if ((uVar15 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27010);
      }
      goto LAB_00799660;
    }
  }
  if (param_2[5] == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xf]) {
    case '\0':
      iVar19 = 0;
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
        goto LAB_0079936c;
      }
      iVar19 = 0;
      uVar15 = param_2[8];
      pcVar17 = (code *)param_2[9];
LAB_007992e8:
      *(undefined1 *)(param_2 + 0xf) = 1;
      break;
    case '\x01':
      goto switchD_007995c4_caseD_1;
    case '\x02':
      goto switchD_007995c4_caseD_2;
    case '\x03':
      piVar21 = (int *)param_2[10];
      iVar19 = param_2[0xe];
LAB_0079936c:
      piVar18 = param_2 + 0xb;
      do {
        uVar15 = *(uint *)param_2[0xb];
        if (((uVar15 - ((uint *)param_2[0xb])[2] < 0x20) && (param_2[0xd] == uVar15)) &&
           (0x1f < (uint)param_2[0xd])) {
          local_44 = 0;
          local_48 = (code *)0x0;
          local_4c = (code *)0x20;
          local_50 = &local_70;
          FUN_019de6b8(&local_38,piVar21[2],piVar21[3],param_3,&local_50);
          pcVar17 = local_34;
          ppcVar20 = local_38;
          pcVar9 = local_48;
          pppcVar14 = local_50;
          if (local_4c < local_48) {
            pcVar4 = (code *)0x0;
            puVar13 = &DAT_01d2e4e0;
            pcVar9 = local_4c;
            pcVar22 = local_48;
            goto LAB_00799b3c;
          }
          puVar11 = (uint *)param_2[0xb];
          pcVar22 = (code *)param_2[0xc];
          pcVar4 = (code *)puVar11[2];
          if (pcVar22 < pcVar4) {
LAB_00799af0:
            pppcVar14 = (code ***)&DAT_0000005d;
            puVar13 = &DAT_01d270a0;
            pcVar5 = "filled must not become larger than initialized";
LAB_00799b84:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(pcVar5,pppcVar14,puVar13);
          }
          local_8c = (code *)*puVar11;
          local_90 = puVar11[1];
          pcVar8 = local_8c + -(int)pcVar4;
          local_84 = pcVar22;
          if (pcVar8 < local_48) {
            FUN_00799f6c(piVar18);
            puVar11 = (uint *)param_2[0xb];
            pcVar4 = (code *)puVar11[2];
            if ((code *)param_2[0xc] < pcVar4) goto LAB_00799af0;
            local_8c = (code *)*puVar11;
            local_90 = puVar11[1];
            pcVar8 = local_8c + -(int)pcVar4;
            local_84 = (code *)param_2[0xc];
          }
          pcVar3 = local_84;
          if (pcVar8 < pcVar9) {
            puVar13 = &DAT_01d27090;
            local_30 = &local_3c;
            local_38 = &local_40;
            pcVar5 = &DAT_0058d12f;
            local_40 = pcVar9;
            local_2c = FUN_012fd02c;
            pppcVar14 = &local_38;
            local_34 = FUN_012fd02c;
            local_3c = pcVar8;
            goto LAB_00799b84;
          }
          pcVar22 = pcVar4 + (int)pcVar9;
          if ((CARRY4((uint)pcVar4,(uint)pcVar9)) || (local_8c < pcVar22)) {
            puVar13 = &DAT_01d27090;
            pcVar9 = local_8c;
LAB_00799b3c:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(pcVar4,pcVar22,pcVar9,puVar13);
          }
          FUN_01bed4e2(pcVar4 + local_90,pppcVar14,pcVar9);
          if (pcVar3 < pcVar22) {
            local_84 = pcVar22;
          }
          local_88 = pcVar22;
        }
        else {
          FUN_00799f6c(piVar18);
          puVar11 = (uint *)param_2[0xb];
          pcVar9 = (code *)param_2[0xc];
          pcVar17 = (code *)puVar11[2];
          if (pcVar9 < pcVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d270a0);
          }
          local_8c = (code *)*puVar11;
          local_90 = puVar11[1];
          local_88 = pcVar17;
          local_84 = pcVar9;
          if (local_8c < pcVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,pcVar17,local_8c,&DAT_01d2e4e0);
          }
          FUN_019de6b8(&local_70,piVar21[2],piVar21[3],param_3,&local_90);
          if (local_8c < local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_88,local_8c,&DAT_01d2e4e0);
          }
          pcVar9 = local_88 + -(int)pcVar17;
          ppcVar20 = local_70;
          pcVar17 = local_6c;
        }
        uVar15 = (uint)ppcVar20 & 0xff;
        pppcVar14 = &local_70;
        FUN_019e6be4(pppcVar14,&local_90);
        FUN_00799f34(piVar18,pppcVar14);
        if (uVar15 != 4) {
          if (uVar15 != 5) {
            pppcVar14 = (code ***)((uint)ppcVar20 & 0xff);
          }
          if (uVar15 != 5 && pppcVar14 != (code ***)&DAT_00000005) {
            pcVar9 = pcVar17;
            if (pppcVar14 == (code ***)&SUB_00000004) goto LAB_00799384;
            if (pppcVar14 != (code ***)&DAT_00000005) {
              FUN_019bb7e0(param_2[7],param_2[8]);
              uVar15 = (uint)pppcVar14 | (uint)ppcVar20 & 0xffffff00;
              iVar19 = -0x80000000;
              goto LAB_007992e8;
            }
          }
          bVar1 = false;
          *(undefined1 *)(param_2 + 0xf) = 3;
          goto LAB_0079959c;
        }
LAB_00799384:
        if (pcVar9 == (code *)0x0) goto LAB_00799990;
        iVar19 = iVar19 + (int)pcVar9;
        param_2[0xe] = iVar19;
      } while( true );
    }
    goto LAB_007992f4;
  }
  if (param_2[5] != 1) goto LAB_00799be8;
  iVar19 = param_2[6];
LAB_00799318:
  bVar1 = bVar2;
  if (iVar19 == -0x80000000) {
    uVar15 = param_2[7];
    uVar7 = param_2[8];
    param_2[5] = 2;
    if ((uVar15 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27020);
    }
    goto LAB_00799660;
  }
  goto LAB_0079959c;
LAB_007999c0:
  uVar7 = param_2[0x13];
  uVar15 = param_2[0x12];
  pcVar17 = (code *)param_2[0x14];
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  if (uVar15 == 0x80000001) goto LAB_0079997c;
  goto LAB_00799610;
LAB_00799990:
  bVar1 = false;
  uVar15 = param_2[8];
  iVar19 = param_2[7];
  pcVar17 = (code *)param_2[9];
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 1;
  if (iVar19 != -0x7fffffff) {
LAB_007992f4:
    if (param_2[5] == 1) {
      FUN_00740540(param_2 + 6);
    }
    param_2[5] = 1;
    param_2[6] = iVar19;
    param_2[7] = uVar15;
    param_2[8] = (int)pcVar17;
    goto LAB_00799318;
  }
LAB_0079959c:
  if (param_2[0x10] == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\x01':
switchD_007995c4_caseD_1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d270d0);
    case '\x02':
switchD_007995c4_caseD_2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d270d0);
    case '\x03':
      piVar21 = (int *)param_2[0x15];
      uVar15 = param_2[0x19];
LAB_00799768:
      piVar18 = param_2 + 0x16;
      do {
        uVar7 = *(uint *)param_2[0x16];
        if (((uVar7 - ((uint *)param_2[0x16])[2] < 0x20) && (param_2[0x18] == uVar7)) &&
           (0x1f < (uint)param_2[0x18])) {
          local_44 = 0;
          local_48 = (code *)0x0;
          local_4c = (code *)0x20;
          local_50 = &local_70;
          FUN_019de6b8(&local_38,piVar21[2],piVar21[3],param_3,&local_50);
          pcVar17 = local_34;
          ppcVar20 = local_38;
          pcVar9 = local_48;
          pppcVar14 = local_50;
          if (local_4c < local_48) {
            pcVar4 = (code *)0x0;
            puVar13 = &DAT_01d2e4e0;
            pcVar9 = local_4c;
            pcVar22 = local_48;
            goto LAB_00799b98;
          }
          puVar11 = (uint *)param_2[0x16];
          pcVar22 = (code *)param_2[0x17];
          pcVar4 = (code *)puVar11[2];
          if (pcVar22 < pcVar4) {
LAB_00799b18:
            pppcVar14 = (code ***)&DAT_0000005d;
            puVar13 = &DAT_01d270a0;
            pcVar5 = "filled must not become larger than initialized";
LAB_00799be0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(pcVar5,pppcVar14,puVar13);
          }
          local_7c = (code *)*puVar11;
          local_80 = puVar11[1];
          pcVar8 = local_7c + -(int)pcVar4;
          local_74 = pcVar22;
          if (pcVar8 < local_48) {
            FUN_00799f6c(piVar18);
            puVar11 = (uint *)param_2[0x16];
            pcVar4 = (code *)puVar11[2];
            if ((code *)param_2[0x17] < pcVar4) goto LAB_00799b18;
            local_7c = (code *)*puVar11;
            local_80 = puVar11[1];
            pcVar8 = local_7c + -(int)pcVar4;
            local_74 = (code *)param_2[0x17];
          }
          pcVar3 = local_74;
          if (pcVar8 < pcVar9) {
            puVar13 = &DAT_01d27090;
            local_30 = &local_3c;
            local_38 = &local_40;
            pcVar5 = &DAT_0058d12f;
            local_40 = pcVar9;
            local_2c = FUN_012fd02c;
            pppcVar14 = &local_38;
            local_34 = FUN_012fd02c;
            local_3c = pcVar8;
            goto LAB_00799be0;
          }
          pcVar22 = pcVar4 + (int)pcVar9;
          if ((CARRY4((uint)pcVar4,(uint)pcVar9)) || (local_7c < pcVar22)) {
            puVar13 = &DAT_01d27090;
            pcVar9 = local_7c;
LAB_00799b98:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(pcVar4,pcVar22,pcVar9,puVar13);
          }
          FUN_01bed4e2(pcVar4 + local_80,pppcVar14,pcVar9);
          local_78 = pcVar22;
          if (pcVar3 < pcVar22) {
            local_74 = pcVar22;
          }
        }
        else {
          FUN_00799f6c(piVar18);
          puVar11 = (uint *)param_2[0x16];
          pcVar9 = (code *)param_2[0x17];
          pcVar17 = (code *)puVar11[2];
          if (pcVar9 < pcVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d270a0);
          }
          local_7c = (code *)*puVar11;
          local_80 = puVar11[1];
          local_78 = pcVar17;
          local_74 = pcVar9;
          if (local_7c < pcVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,pcVar17,local_7c,&DAT_01d2e4e0);
          }
          FUN_019de6b8(&local_70,piVar21[2],piVar21[3],param_3,&local_80);
          if (local_7c < local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_78,local_7c,&DAT_01d2e4e0);
          }
          pcVar9 = local_78 + -(int)pcVar17;
          pcVar17 = local_6c;
          ppcVar20 = local_70;
        }
        uVar7 = (uint)ppcVar20 & 0xff;
        pppcVar14 = &local_70;
        FUN_019e6be4(pppcVar14,&local_80);
        FUN_00799f34(piVar18,pppcVar14);
        if (uVar7 != 4) {
          if (uVar7 != 5) {
            pppcVar14 = (code ***)((uint)ppcVar20 & 0xff);
          }
          if (uVar7 != 5 && pppcVar14 != (code ***)&DAT_00000005) {
            pcVar9 = pcVar17;
            if (pppcVar14 == (code ***)&SUB_00000004) goto LAB_00799784;
            if (pppcVar14 != (code ***)&DAT_00000005) {
              FUN_019bb7e0(param_2[0x12],param_2[0x13]);
              uVar7 = (uint)pppcVar14 | (uint)ppcVar20 & 0xffffff00;
              uVar15 = 0x80000000;
              goto LAB_00799608;
            }
          }
          *(undefined1 *)(param_2 + 0x1a) = 3;
          goto LAB_0079997c;
        }
LAB_00799784:
        if (pcVar9 == (code *)0x0) goto LAB_007999c0;
        uVar15 = uVar15 + (int)pcVar9;
        param_2[0x19] = uVar15;
      } while( true );
    }
    uVar15 = 0;
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
      goto LAB_00799768;
    }
    uVar7 = param_2[0x13];
    pcVar17 = (code *)param_2[0x14];
LAB_00799608:
    *(undefined1 *)(param_2 + 0x1a) = 1;
LAB_00799610:
    if (param_2[0x10] == 1) {
      FUN_00740540(param_2 + 0x11);
    }
    param_2[0x10] = 1;
    param_2[0x11] = uVar15;
    param_2[0x12] = uVar7;
    param_2[0x13] = (int)pcVar17;
  }
  else {
    if (param_2[0x10] != 1) {
LAB_00799be8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("MaybeDone polled after value taken",0x45,&DAT_01d270f0);
    }
    uVar15 = param_2[0x11];
  }
  if (uVar15 != 0x80000000) {
    if (!bVar1) {
LAB_0079997c:
      *param_1 = 0x80000001;
      return;
    }
    if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27030);
    }
    *param_2 = 2;
    uVar7 = param_2[2];
    if ((*puVar6 & 0xff) < 5) {
      if ((*puVar6 & 0xff) != 4) {
        FUN_0069263c(param_2[1],param_2[2]);
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27040);
      }
      if (param_2[5] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27050);
      }
      ppcVar20 = (code **)param_2[6];
      uVar16 = param_2[7];
      param_2[5] = 2;
      if (ppcVar20 < (code **)0x80000001) {
        local_70 = ppcVar20;
        local_6c = (code *)param_2[7];
        local_68 = param_2[8];
        if (ppcVar20 == (code **)0x80000000) {
          FUN_00740540(&local_70);
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d27060);
        }
        param_2[0x10] = 2;
        uVar10 = param_2[0x12];
        uVar12 = param_2[0x13];
        if (0x80000000 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d270c0);
        }
        param_1[2] = param_2[8];
        param_1[3] = uVar7;
        param_1[4] = uVar15;
        *param_1 = (uint)ppcVar20;
        param_1[1] = uVar16;
        param_1[5] = uVar10;
        param_1[6] = uVar12;
        return;
      }
    }
LAB_00799c74:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d270c0);
  }
  param_2[0x10] = 2;
  uVar15 = param_2[0x12];
  uVar7 = param_2[0x13];
  if ((uVar15 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d27070);
  }
LAB_00799660:
  *param_1 = 0x80000000;
  param_1[1] = uVar15;
  param_1[2] = uVar7;
  return;
}

