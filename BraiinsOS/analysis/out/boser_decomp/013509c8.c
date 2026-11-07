// FUN_013509c8 @ 013509c8 size=2012 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013509c8(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  code *pcVar10;
  char **ppcVar12;
  char *pcVar11;
  int iVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  int local_138;
  undefined4 local_134;
  int local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int local_120;
  char *pcStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  char *local_10c;
  int local_108;
  int iStack_104;
  int local_100;
  char *local_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  char *local_ec;
  int iStack_e8;
  int iStack_e4;
  char local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  byte local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_c8;
  char *pcStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  char *pcStack_b4;
  int local_a8;
  char *local_a4;
  int local_a0;
  int iStack_9c;
  undefined1 auStack_98 [16];
  undefined4 local_88;
  char *local_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  char *pcStack_74;
  int iStack_70;
  int iStack_6c;
  byte local_68;
  undefined2 local_67;
  undefined1 local_65;
  uint local_44;
  int local_40;
  byte local_3c;
  int local_38;
  byte local_34;
  
  uVar8 = 4;
  if (param_4 != 0) {
    uVar8 = 6;
  }
  FUN_0138bc9c(&local_88,param_3,uVar8);
  if ((char)local_88 == '\x01') {
LAB_01350a00:
    *(undefined1 *)(param_1 + 8) = 8;
    *(undefined1 *)param_1 = local_88._1_1_;
    return;
  }
  if (local_84 != (char *)0x0) {
    FUN_0134c468(&local_88,param_2 + 8);
    uVar3 = (undefined2)local_88;
    uVar15 = (char)local_88;
    if (local_68 == 8) {
      *(char *)param_1 = (char)local_88;
      *(undefined1 *)(param_1 + 8) = 8;
      return;
    }
    local_88._0_2_ = uVar3;
    FUN_01bed4e2((uint)&local_f0 | 1,(uint)&local_88 | 1,0x1f);
    local_f0 = CONCAT31(local_f0._1_3_,uVar15);
    uVar8 = *param_3;
    uVar16 = param_3[1];
    local_cf = local_67;
    local_d0 = local_68;
    local_cd = local_65;
    FUN_013515d4(&local_88,param_2,param_3);
    if ((char)local_88 == '\x01') {
    }
    else {
      FUN_01bed4e2((int)&local_c8 + 2,&local_84,0x18);
      FUN_01bed4e2(&local_88,(int)&local_c8 + 2,0x18);
      *param_3 = uVar8;
      param_3[1] = uVar16;
      FUN_01351d74(&local_138,&local_88,param_3);
      local_88._1_1_ = (undefined1)local_134;
      if (local_138 != 0) {
        FUN_01bed4e2((uint)&local_38 | 5,(int)&local_134 + 1,0xb);
        local_34 = (undefined1)local_134;
        iVar5 = local_d0 - 1;
        local_38 = local_138;
        if (local_d0 == 0 || iVar5 == 0) {
          iVar5 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x01350bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_01350bd4 + (&DAT_01350bd4)[iVar5]))();
        return;
      }
    }
    *(undefined1 *)param_1 = local_88._1_1_;
    *(undefined1 *)(param_1 + 8) = 8;
    FUN_01390338(&local_f0);
    return;
  }
  uVar8 = *param_3;
  uVar16 = param_3[1];
  FUN_013515d4(&local_88,param_2,param_3);
  if ((char)local_88 != '\0') goto LAB_01350a00;
  iVar5 = (int)&local_f0 + 2;
  FUN_01bed4e2(iVar5,&local_84,0x18);
  FUN_01bed4e2(&local_138,iVar5,0x18);
  FUN_013515d4(&local_88,param_2,param_3);
  if ((char)local_88 != '\0') {
    *(undefined1 *)(param_1 + 8) = 8;
    *(undefined1 *)param_1 = local_88._1_1_;
    if (local_138 == 0) {
      return;
    }
    pcVar10 = *(code **)(local_138 + 0x10);
    puVar6 = &uStack_12c;
    goto LAB_0135110c;
  }
  FUN_01bed4e2(iVar5,&local_84,0x18);
  FUN_01bed4e2(&local_c8,iVar5,0x18);
  *param_3 = uVar8;
  param_3[1] = uVar16;
  local_88 = local_138;
  local_84 = local_134;
  iStack_80 = local_130;
  iStack_7c = uStack_12c;
  local_78 = uStack_128;
  pcStack_74 = (char *)uStack_124;
  FUN_01351d74(&local_120,&local_88,param_3);
  local_88 = local_c8;
  local_84 = pcStack_c4;
  iStack_80 = iStack_c0;
  iStack_7c = iStack_bc;
  local_78 = iStack_b8;
  pcStack_74 = pcStack_b4;
  FUN_01351d74(&local_110,&local_88,param_3);
  iVar5 = local_108;
  pcVar7 = local_10c;
  local_100 = local_120;
  local_fc = pcStack_11c;
  local_f8 = iStack_118;
  uStack_f4 = uStack_114;
  if (iStack_118 == 0) {
    *(undefined1 *)(param_1 + 8) = 8;
    uVar15 = 0;
LAB_01350db4:
    *(undefined1 *)param_1 = uVar15;
LAB_01350db8:
    (**(code **)(local_110 + 0x10))(&iStack_104,local_10c,local_108);
    local_134 = local_fc;
LAB_01350dd0:
    iStack_118 = local_f8;
  }
  else {
    if (*pcStack_11c == ':') {
      switch(iStack_118) {
      case 5:
        cVar2 = pcStack_11c[1];
        bVar18 = cVar2 != 'p';
        if (!bVar18) {
          cVar2 = pcStack_11c[2];
        }
        if (bVar18 || cVar2 != 'a') break;
        cVar2 = pcStack_11c[3];
        bVar18 = cVar2 != 't';
        if (!bVar18) {
          cVar2 = pcStack_11c[4];
        }
        if (bVar18 || cVar2 != 'h') break;
        local_88 = local_110;
        local_84 = local_10c;
        iStack_80 = local_108;
        iStack_7c = iStack_104;
        FUN_01389654(&local_f0,&local_88);
        if (local_f0 == 0) {
LAB_01351458:
          *(undefined1 *)(param_1 + 8) = 8;
          *(undefined1 *)param_1 = 7;
          local_134 = pcStack_11c;
          goto LAB_01350dd0;
        }
        ppcVar12 = &local_ec;
        uVar15 = 5;
        iVar5 = local_f0;
LAB_01350d54:
        pcVar7 = *ppcVar12;
        pcVar9 = ppcVar12[1];
        pcVar11 = ppcVar12[2];
        *(undefined1 *)(param_1 + 8) = uVar15;
        *param_1 = iVar5;
        param_1[1] = (int)pcVar7;
        param_1[2] = (int)pcVar9;
        param_1[3] = (int)pcVar11;
        goto LAB_013510f4;
      case 7:
        cVar2 = pcStack_11c[1];
        if (cVar2 == 's') {
          if (pcStack_11c[2] == 'c') {
            cVar2 = pcStack_11c[3];
            bVar18 = cVar2 == 'h';
            if (bVar18) {
              cVar2 = pcStack_11c[4];
            }
            if (bVar18 && cVar2 == 'e') {
              cVar2 = pcStack_11c[5];
              bVar18 = cVar2 == 'm';
              if (bVar18) {
                cVar2 = pcStack_11c[6];
              }
              if (bVar18 && cVar2 == 'e') {
                local_88 = local_110;
                local_84 = local_10c;
                iStack_80 = local_108;
                iStack_7c = iStack_104;
                FUN_01389654(&local_f0,&local_88);
                if (local_f0 == 0) goto LAB_01351458;
                ppcVar12 = &local_ec;
                uVar15 = 4;
                iVar5 = local_f0;
                goto LAB_01350d54;
              }
            }
          }
          else if (pcStack_11c[2] == 't') {
            cVar2 = pcStack_11c[3];
            bVar18 = cVar2 == 'a';
            if (bVar18) {
              cVar2 = pcStack_11c[4];
            }
            if (bVar18 && cVar2 == 't') {
              cVar2 = pcStack_11c[5];
              bVar18 = cVar2 == 'u';
              if (bVar18) {
                cVar2 = pcStack_11c[6];
              }
              if (bVar18 && cVar2 == 's') {
                sVar4 = FUN_0140c33c(local_10c,local_108);
                if (sVar4 == 0) goto LAB_01350da8;
                *(short *)param_1 = sVar4;
                *(undefined1 *)(param_1 + 8) = 7;
                goto LAB_013510dc;
              }
            }
          }
        }
        else {
          bVar18 = cVar2 == 'm';
          if (bVar18) {
            cVar2 = pcStack_11c[2];
          }
          if (bVar18 && cVar2 == 'e') {
            cVar2 = pcStack_11c[3];
            bVar18 = cVar2 == 't';
            if (bVar18) {
              cVar2 = pcStack_11c[4];
            }
            if (bVar18 && cVar2 == 'h') {
              cVar2 = pcStack_11c[5];
              bVar18 = cVar2 == 'o';
              if (bVar18) {
                cVar2 = pcStack_11c[6];
              }
              if (bVar18 && cVar2 == 'd') {
                FUN_014124a8(&local_88,local_10c,local_108);
                cVar2 = (char)local_88;
                if ((char)local_88 == '\v') goto LAB_01350da8;
                FUN_01bed4e2((undefined1 *)((int)param_1 + 1),(uint)&local_88 | 1,0x13);
                local_e0 = '\x03';
                *(char *)param_1 = cVar2;
                goto LAB_01351384;
              }
            }
          }
        }
        break;
      case 9:
        cVar2 = pcStack_11c[1];
        bVar18 = cVar2 == 'p';
        if (bVar18) {
          cVar2 = pcStack_11c[2];
        }
        if (bVar18 && cVar2 == 'r') {
          cVar2 = pcStack_11c[3];
          bVar18 = cVar2 == 'o';
          if (bVar18) {
            cVar2 = pcStack_11c[4];
          }
          if (bVar18 && cVar2 == 't') {
            cVar2 = pcStack_11c[5];
            bVar18 = cVar2 == 'o';
            if (bVar18) {
              cVar2 = pcStack_11c[6];
            }
            if (bVar18 && cVar2 == 'c') {
              cVar2 = pcStack_11c[7];
              bVar18 = cVar2 == 'o';
              if (bVar18) {
                cVar2 = pcStack_11c[8];
              }
              if (bVar18 && cVar2 == 'l') {
                local_f0 = local_110;
                local_ec = local_10c;
                iStack_e8 = local_108;
                iStack_e4 = iStack_104;
                FUN_01389654(&local_88);
                if (local_88 == 0) goto LAB_01351458;
                ppcVar12 = &local_84;
                uVar15 = 6;
                iVar5 = local_88;
                goto LAB_01350d54;
              }
            }
          }
        }
        break;
      case 10:
        cVar2 = pcStack_11c[1];
        bVar18 = cVar2 == 'a';
        if (bVar18) {
          cVar2 = pcStack_11c[2];
        }
        bVar19 = bVar18 && cVar2 == 'u';
        if (bVar18 && cVar2 == 'u') {
          bVar19 = pcStack_11c[3] == 't';
        }
        if (bVar19) {
          cVar2 = pcStack_11c[4];
          bVar18 = cVar2 == 'h';
          if (bVar18) {
            cVar2 = pcStack_11c[5];
          }
          if (bVar18 && cVar2 == 'o') {
            cVar2 = pcStack_11c[6];
            bVar18 = cVar2 == 'r';
            if (bVar18) {
              cVar2 = pcStack_11c[7];
            }
            if (bVar18 && cVar2 == 'i') {
              cVar2 = pcStack_11c[8];
              bVar18 = cVar2 == 't';
              if (bVar18) {
                cVar2 = pcStack_11c[9];
              }
              if (bVar18 && cVar2 == 'y') {
                local_88 = local_110;
                local_84 = local_10c;
                iStack_80 = local_108;
                iStack_7c = iStack_104;
                FUN_01389654(&local_f0,&local_88);
                if (local_f0 == 0) goto LAB_01351458;
                ppcVar12 = &local_ec;
                uVar15 = 2;
                iVar5 = local_f0;
                goto LAB_01350d54;
              }
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 8) = 8;
      *(undefined1 *)param_1 = 9;
    }
    else {
      FUN_0140df4c(&local_44,pcStack_11c,iStack_118,&local_88,"");
      if (local_3c == 3) {
LAB_01350da8:
        *(undefined1 *)(param_1 + 8) = 8;
        uVar15 = 7;
        goto LAB_01350db4;
      }
      if (local_3c == 2) {
        iVar13 = 0;
        uVar14 = local_44;
      }
      else {
        if ((local_3c & 1) == 0) {
          iVar5 = 0;
          do {
            if (local_40 == iVar5) {
              piVar17 = &local_f0;
              FUN_012834b0(piVar17,local_44);
              iVar13 = local_f0;
              local_34 = (byte)local_ec;
              goto LAB_013512b0;
            }
            pbVar1 = (byte *)(local_44 + iVar5);
            iVar5 = iVar5 + 1;
          } while (""[*pbVar1] != '\0');
          goto LAB_01350da8;
        }
        piVar17 = &local_38;
        FUN_012834b0(piVar17,local_44);
        iVar13 = local_38;
LAB_013512b0:
        uVar14 = (uint)local_34;
        FUN_01bed4e2(auStack_98,(int)piVar17 + 5,0xb);
      }
      local_a4 = (char *)CONCAT31(local_a4._1_3_,(char)uVar14);
      local_a8 = iVar13;
      FUN_01bed4e2((uint)&local_a8 | 5,auStack_98,0xb);
      iVar5 = local_108;
      pcVar7 = local_10c;
      FUN_01ac6204(&local_f0,local_10c,local_108);
      if (local_e0 == '\x02') {
        *(undefined1 *)(param_1 + 8) = 8;
        *(undefined1 *)param_1 = 7;
        if (iVar13 != 0) {
          (**(code **)(iVar13 + 0x10))(&iStack_9c,local_a4,local_a0);
        }
        goto LAB_01350db8;
      }
      local_78 = local_f0;
      pcStack_74 = local_ec;
      iStack_70 = iStack_e8;
      iStack_6c = iStack_e4;
      *(undefined2 *)((int)param_1 + 0x21) = local_df;
      *(undefined1 *)((int)param_1 + 0x23) = local_dd;
      local_88 = local_a8;
      local_84 = local_a4;
      iStack_80 = local_a0;
      iStack_7c = iStack_9c;
      *param_1 = local_a8;
      param_1[1] = (int)local_a4;
      param_1[2] = local_a0;
      param_1[3] = iStack_9c;
      param_1[4] = local_f0;
      param_1[5] = (int)local_ec;
      param_1[6] = iStack_e8;
      param_1[7] = iStack_e4;
LAB_01351384:
      *(char *)(param_1 + 8) = local_e0;
    }
LAB_013510dc:
    (**(code **)(local_110 + 0x10))(&iStack_104,pcVar7,iVar5);
LAB_013510f4:
    local_134 = local_fc;
  }
  pcVar10 = *(code **)(local_100 + 0x10);
  puVar6 = &uStack_f4;
  local_130 = iStack_118;
LAB_0135110c:
  (*pcVar10)(puVar6,local_134,local_130);
  return;
}

