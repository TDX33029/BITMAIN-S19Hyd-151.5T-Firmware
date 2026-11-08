// FUN_01390418 @ 01390418 size=1840 calls_out=11 calls_in=1
// strings: 

void FUN_01390418(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  code *pcVar10;
  char **ppcVar12;
  char *pcVar11;
  undefined1 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  char *local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  char *pcStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  char *local_c8;
  char *local_c4;
  char *local_c0;
  char *pcStack_bc;
  int local_b8;
  char *local_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  char *local_a4;
  char *pcStack_a0;
  char *pcStack_9c;
  char local_98;
  undefined2 local_97;
  undefined1 local_95;
  byte local_88;
  undefined2 local_87;
  undefined1 local_85;
  undefined4 local_80;
  char *local_7c;
  char *pcStack_78;
  char *pcStack_74;
  char *local_70;
  char *pcStack_6c;
  char *pcStack_68;
  char *pcStack_64;
  byte local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined4 local_58;
  char *pcStack_54;
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *local_38;
  char *local_34;
  char *local_30;
  char *apcStack_2c [2];
  
  uVar8 = 4;
  if (param_4 != 0) {
    uVar8 = 6;
  }
  FUN_0138bc9c(&local_80,param_3,uVar8);
  if ((char)local_80 == '\x01') {
LAB_01390450:
    *(undefined1 *)(param_1 + 8) = 8;
    *(undefined1 *)param_1 = local_80._1_1_;
    return;
  }
  if (local_7c != (char *)0x0) {
    FUN_0138bd64(&local_80,param_2 + 8);
    uVar2 = (undefined2)local_80;
    uVar13 = (char)local_80;
    if (local_60 == 8) {
      *(char *)param_1 = (char)local_80;
      *(undefined1 *)(param_1 + 8) = 8;
      return;
    }
    local_80._0_2_ = uVar2;
    FUN_01bed4e2((uint)&local_a8 | 1,(uint)&local_80 | 1,0x1f);
    local_a8 = (char *)CONCAT31(local_a8._1_3_,uVar13);
    uVar8 = *param_3;
    uVar14 = param_3[1];
    local_87 = local_5f;
    local_88 = local_60;
    local_85 = local_5d;
    FUN_01391160(&local_80,param_2,param_3);
    if ((char)local_80 == '\x01') {
    }
    else {
      FUN_01bed4e2((int)&local_58 + 2,&local_7c,0x18);
      FUN_01bed4e2(&local_80,(int)&local_58 + 2,0x18);
      *param_3 = uVar8;
      param_3[1] = uVar14;
      FUN_01391900(&local_f0,&local_80,param_3);
      local_80._1_1_ = (undefined1)local_ec;
      if (local_f0 != (char *)0x0) {
        FUN_01bed4e2((uint)&local_38 | 5,(int)&local_ec + 1,0xb);
        local_34 = (char *)CONCAT31(local_34._1_3_,(undefined1)local_ec);
        iVar4 = local_88 - 1;
        local_38 = local_f0;
        if (local_88 == 0 || iVar4 == 0) {
          iVar4 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x01390620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_01390624 + (&DAT_01390624)[iVar4]))();
        return;
      }
    }
    *(undefined1 *)param_1 = local_80._1_1_;
    *(undefined1 *)(param_1 + 8) = 8;
    FUN_01390338(&local_a8);
    return;
  }
  uVar8 = *param_3;
  uVar14 = param_3[1];
  FUN_01391160(&local_80,param_2,param_3);
  if ((char)local_80 != '\0') goto LAB_01390450;
  iVar4 = (int)&local_a8 + 2;
  FUN_01bed4e2(iVar4,&local_7c,0x18);
  FUN_01bed4e2(&local_f0,iVar4,0x18);
  FUN_01391160(&local_80,param_2,param_3);
  if ((char)local_80 != '\0') {
    *(undefined1 *)(param_1 + 8) = 8;
    *(undefined1 *)param_1 = local_80._1_1_;
    if (local_f0 == (char *)0x0) {
      return;
    }
    pcVar10 = *(code **)(local_f0 + 0x10);
    puVar6 = &uStack_e4;
    goto LAB_01390bc8;
  }
  FUN_01bed4e2(iVar4,&local_7c,0x18);
  FUN_01bed4e2(&local_58,iVar4,0x18);
  *param_3 = uVar8;
  param_3[1] = uVar14;
  local_80 = local_f0;
  local_7c = local_ec;
  pcStack_78 = (char *)local_e8;
  pcStack_74 = (char *)uStack_e4;
  local_70 = (char *)uStack_e0;
  pcStack_6c = (char *)uStack_dc;
  FUN_01391900(&local_d8,&local_80,param_3);
  local_80 = local_58;
  local_7c = pcStack_54;
  pcStack_78 = pcStack_50;
  pcStack_74 = pcStack_4c;
  local_70 = pcStack_48;
  pcStack_6c = pcStack_44;
  FUN_01391900(&local_c8,&local_80,param_3);
  pcVar7 = local_c0;
  pcVar5 = local_c4;
  local_b8 = local_d8;
  local_b4 = pcStack_d4;
  local_b0 = iStack_d0;
  uStack_ac = uStack_cc;
  if (iStack_d0 == 0) {
    *(undefined1 *)(param_1 + 8) = 8;
    uVar13 = 0;
LAB_013907f0:
    *(undefined1 *)param_1 = uVar13;
LAB_013907f4:
    (**(code **)(local_c8 + 0x10))(&pcStack_bc,local_c4,local_c0);
    local_ec = local_b4;
LAB_0139080c:
    iStack_d0 = local_b0;
  }
  else {
    if (*pcStack_d4 == ':') {
      switch(iStack_d0) {
      case 5:
        cVar1 = pcStack_d4[1];
        bVar15 = cVar1 != 'p';
        if (!bVar15) {
          cVar1 = pcStack_d4[2];
        }
        if (bVar15 || cVar1 != 'a') break;
        cVar1 = pcStack_d4[3];
        bVar15 = cVar1 != 't';
        if (!bVar15) {
          cVar1 = pcStack_d4[4];
        }
        if (bVar15 || cVar1 != 'h') break;
        local_80 = local_c8;
        local_7c = local_c4;
        pcStack_78 = local_c0;
        pcStack_74 = pcStack_bc;
        FUN_01389654(&local_a8,&local_80);
        if (local_a8 == (char *)0x0) {
LAB_01390dfc:
          *(undefined1 *)(param_1 + 8) = 8;
          *(undefined1 *)param_1 = 7;
          local_ec = pcStack_d4;
          goto LAB_0139080c;
        }
        ppcVar12 = &local_a4;
        uVar13 = 5;
        pcVar5 = local_a8;
LAB_013907a4:
        pcVar7 = *ppcVar12;
        pcVar9 = ppcVar12[1];
        pcVar11 = ppcVar12[2];
        *(undefined1 *)(param_1 + 8) = uVar13;
        *param_1 = (int)pcVar5;
        param_1[1] = (int)pcVar7;
        param_1[2] = (int)pcVar9;
        param_1[3] = (int)pcVar11;
        goto LAB_01390bb4;
      case 7:
        cVar1 = pcStack_d4[1];
        if (cVar1 == 's') {
          if (pcStack_d4[2] == 'c') {
            cVar1 = pcStack_d4[3];
            bVar15 = cVar1 == 'h';
            if (bVar15) {
              cVar1 = pcStack_d4[4];
            }
            if (bVar15 && cVar1 == 'e') {
              cVar1 = pcStack_d4[5];
              bVar15 = cVar1 == 'm';
              if (bVar15) {
                cVar1 = pcStack_d4[6];
              }
              if (bVar15 && cVar1 == 'e') {
                local_80 = local_c8;
                local_7c = local_c4;
                pcStack_78 = local_c0;
                pcStack_74 = pcStack_bc;
                FUN_01389654(&local_a8,&local_80);
                if (local_a8 == (char *)0x0) goto LAB_01390dfc;
                ppcVar12 = &local_a4;
                uVar13 = 4;
                pcVar5 = local_a8;
                goto LAB_013907a4;
              }
            }
          }
          else if (pcStack_d4[2] == 't') {
            cVar1 = pcStack_d4[3];
            bVar15 = cVar1 == 'a';
            if (bVar15) {
              cVar1 = pcStack_d4[4];
            }
            if (bVar15 && cVar1 == 't') {
              cVar1 = pcStack_d4[5];
              bVar15 = cVar1 == 'u';
              if (bVar15) {
                cVar1 = pcStack_d4[6];
              }
              if (bVar15 && cVar1 == 's') {
                sVar3 = FUN_0140c33c();
                if (sVar3 != 0) {
                  *(short *)param_1 = sVar3;
                  *(undefined1 *)(param_1 + 8) = 7;
                  goto LAB_01390ba4;
                }
                goto LAB_013907e4;
              }
            }
          }
        }
        else {
          bVar15 = cVar1 == 'm';
          if (bVar15) {
            cVar1 = pcStack_d4[2];
          }
          if (bVar15 && cVar1 == 'e') {
            cVar1 = pcStack_d4[3];
            bVar15 = cVar1 == 't';
            if (bVar15) {
              cVar1 = pcStack_d4[4];
            }
            if (bVar15 && cVar1 == 'h') {
              cVar1 = pcStack_d4[5];
              bVar15 = cVar1 == 'o';
              if (bVar15) {
                cVar1 = pcStack_d4[6];
              }
              if (bVar15 && cVar1 == 'd') {
                FUN_0141143c(&local_80);
                cVar1 = (char)local_80;
                if ((char)local_80 != '\v') {
                  FUN_01bed4e2((undefined1 *)((int)param_1 + 1),(uint)&local_80 | 1,0x13);
                  *(char *)param_1 = cVar1;
                  *(undefined1 *)(param_1 + 8) = 3;
                  goto LAB_01390ba4;
                }
                goto LAB_013907e4;
              }
            }
          }
        }
        break;
      case 9:
        cVar1 = pcStack_d4[1];
        bVar15 = cVar1 == 'p';
        if (bVar15) {
          cVar1 = pcStack_d4[2];
        }
        if (bVar15 && cVar1 == 'r') {
          cVar1 = pcStack_d4[3];
          bVar15 = cVar1 == 'o';
          if (bVar15) {
            cVar1 = pcStack_d4[4];
          }
          if (bVar15 && cVar1 == 't') {
            cVar1 = pcStack_d4[5];
            bVar15 = cVar1 == 'o';
            if (bVar15) {
              cVar1 = pcStack_d4[6];
            }
            if (bVar15 && cVar1 == 'c') {
              cVar1 = pcStack_d4[7];
              bVar15 = cVar1 == 'o';
              if (bVar15) {
                cVar1 = pcStack_d4[8];
              }
              if (bVar15 && cVar1 == 'l') {
                local_a8 = local_c8;
                local_a4 = local_c4;
                pcStack_a0 = local_c0;
                pcStack_9c = pcStack_bc;
                FUN_01389654(&local_80);
                if (local_80 == (char *)0x0) goto LAB_01390dfc;
                ppcVar12 = &local_7c;
                uVar13 = 6;
                pcVar5 = local_80;
                goto LAB_013907a4;
              }
            }
          }
        }
        break;
      case 10:
        cVar1 = pcStack_d4[1];
        bVar15 = cVar1 == 'a';
        if (bVar15) {
          cVar1 = pcStack_d4[2];
        }
        bVar16 = bVar15 && cVar1 == 'u';
        if (bVar15 && cVar1 == 'u') {
          bVar16 = pcStack_d4[3] == 't';
        }
        if (bVar16) {
          cVar1 = pcStack_d4[4];
          bVar15 = cVar1 == 'h';
          if (bVar15) {
            cVar1 = pcStack_d4[5];
          }
          if (bVar15 && cVar1 == 'o') {
            cVar1 = pcStack_d4[6];
            bVar15 = cVar1 == 'r';
            if (bVar15) {
              cVar1 = pcStack_d4[7];
            }
            if (bVar15 && cVar1 == 'i') {
              cVar1 = pcStack_d4[8];
              bVar15 = cVar1 == 't';
              if (bVar15) {
                cVar1 = pcStack_d4[9];
              }
              if (bVar15 && cVar1 == 'y') {
                local_80 = local_c8;
                local_7c = local_c4;
                pcStack_78 = local_c0;
                pcStack_74 = pcStack_bc;
                FUN_01389654(&local_a8,&local_80);
                if (local_a8 == (char *)0x0) goto LAB_01390dfc;
                ppcVar12 = &local_a4;
                uVar13 = 2;
                pcVar5 = local_a8;
                goto LAB_013907a4;
              }
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 8) = 8;
      *(undefined1 *)param_1 = 9;
    }
    else {
      FUN_01410ba0(&local_80,pcStack_d4,iStack_d0);
      pcVar7 = local_c0;
      pcVar5 = local_c4;
      if (local_80 != (char *)0x0) {
LAB_013907e4:
        *(undefined1 *)(param_1 + 8) = 8;
        uVar13 = 7;
        goto LAB_013907f0;
      }
      local_38 = local_7c;
      local_34 = pcStack_78;
      local_30 = pcStack_74;
      apcStack_2c[0] = local_70;
      FUN_01ac6204(&local_a8);
      if (local_98 == '\x02') {
        *(undefined1 *)(param_1 + 8) = 8;
        *(undefined1 *)param_1 = 7;
        if (local_38 != (char *)0x0) {
          (**(code **)(local_38 + 0x10))(apcStack_2c,local_34,local_30);
        }
        goto LAB_013907f4;
      }
      local_70 = local_a8;
      pcStack_6c = local_a4;
      pcStack_68 = pcStack_a0;
      pcStack_64 = pcStack_9c;
      *(undefined2 *)((int)param_1 + 0x21) = local_97;
      *(undefined1 *)((int)param_1 + 0x23) = local_95;
      local_80 = local_38;
      local_7c = local_34;
      pcStack_78 = local_30;
      pcStack_74 = apcStack_2c[0];
      *param_1 = (int)local_38;
      param_1[1] = (int)local_34;
      param_1[2] = (int)local_30;
      param_1[3] = (int)apcStack_2c[0];
      param_1[4] = (int)local_a8;
      param_1[5] = (int)local_a4;
      param_1[6] = (int)pcStack_a0;
      param_1[7] = (int)pcStack_9c;
      *(char *)(param_1 + 8) = local_98;
    }
LAB_01390ba4:
    (**(code **)(local_c8 + 0x10))(&pcStack_bc,pcVar5,pcVar7);
LAB_01390bb4:
    local_ec = local_b4;
  }
  pcVar10 = *(code **)(local_b8 + 0x10);
  puVar6 = &uStack_ac;
  local_e8 = iStack_d0;
LAB_01390bc8:
  (*pcVar10)(puVar6,local_ec,local_e8);
  return;
}

