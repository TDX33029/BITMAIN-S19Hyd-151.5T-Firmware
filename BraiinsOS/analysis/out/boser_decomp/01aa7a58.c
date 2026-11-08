// FUN_01aa7a58 @ 01aa7a58 size=3128 calls_out=13 calls_in=2
// strings: [validity] non-relative IRI must have a scheme

/* WARNING: Type propagation algorithm not settling */

void FUN_01aa7a58(undefined4 *param_1,char ****param_2,char ****param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  char ****ppppcVar8;
  char ****ppppcVar9;
  char ***pppcVar10;
  char ****ppppcVar11;
  char *pcVar12;
  char ****ppppcVar13;
  char *pcVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  char ****local_c0;
  char ****local_bc;
  uint local_b8;
  uint local_b4;
  char ****local_b0;
  char *local_a8;
  char ****local_a4;
  char ****local_90;
  char ****local_8c;
  char *local_88;
  uint local_84;
  char ****local_80;
  char ****local_7c;
  char ****local_78;
  char ****local_74;
  char *local_70;
  uint local_6c;
  char *local_68;
  char ****local_64;
  undefined1 local_60;
  char ****local_58;
  char ****local_54;
  char ****local_50;
  char ****local_4c;
  char ****local_48;
  char ****local_44;
  char ****local_40;
  char ****local_3c;
  char ****local_38;
  char ****local_34;
  char ****local_30;
  char ****local_2c;
  
  cVar2 = FUN_01aa7468(param_2,param_3,2);
  if (cVar2 != '\v') {
LAB_01aa7bf0:
    *(undefined1 *)param_1 = 3;
    return;
  }
  local_90 = (char ****)&local_40;
  local_38 = (char ****)0x0;
  local_40 = (char ****)0x0;
  local_84 = 0;
  local_3c = (char ****)&DAT_00000001;
  local_88 = (char *)0x60000020;
  local_8c = (char ****)&DAT_01d2e5f0;
  iVar3 = FUN_01415570(param_4,&local_90);
  ppppcVar13 = local_38;
  ppppcVar15 = local_3c;
  ppppcVar11 = local_40;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01d2e608,&DAT_01d30334);
  }
  local_a4 = local_40;
  uVar4 = FUN_01aa7468(local_3c,local_38,1);
  ppppcVar8 = (char ****)(uVar4 & 0xff);
  if (ppppcVar8 == (char ****)&DAT_0000000b) {
    ppppcVar8 = ppppcVar13;
    ppppcVar13 = ppppcVar15;
  }
  else {
    if (ppppcVar11 != (char ****)&DAT_80000000) {
      FUN_019bb7e0(ppppcVar11,ppppcVar15);
      goto LAB_01aa7bf0;
    }
    local_a4 = ppppcVar15;
  }
  if (local_a4 == (char ****)&DAT_80000000) goto LAB_01aa7bf0;
  FUN_014fa518(&local_50,ppppcVar13,ppppcVar8);
  ppppcVar15 = (char ****)0x1aa7b58;
  local_58 = ppppcVar13;
  local_54 = ppppcVar8;
  FUN_014fa518(&local_38,param_2,param_3);
  ppppcVar11 = param_3;
  local_bc = param_2;
  local_40 = param_2;
  local_3c = param_3;
  if (local_38 == (char ****)0x0 && local_34 == (char ****)0x0) {
    ppppcVar7 = local_30;
    if (local_30 == (char ****)0x0) {
      ppppcVar7 = local_2c;
    }
    local_c0 = param_3;
    if (ppppcVar7 != (char ****)0x0) {
      local_c0 = (char ****)((int)ppppcVar7 + -1);
    }
    ppppcVar7 = ppppcVar8;
    ppppcVar6 = local_50;
    if (local_c0 == (char ****)0x0) {
      uVar4 = 3;
      if (local_50 != (char ****)0x0) {
        ppppcVar6 = (char ****)((int)local_50 + 1);
      }
      if (local_4c != (char ****)0x0) {
        ppppcVar6 = local_4c;
      }
      ppppcVar11 = local_44;
      if (local_48 != (char ****)0x0) {
        ppppcVar11 = local_48;
      }
      ppppcVar16 = (char ****)&DAT_01cfa694;
      if (ppppcVar11 != (char ****)0x0) {
        ppppcVar7 = (char ****)((int)ppppcVar11 + -1);
      }
      if (local_30 == (char ****)0x0) {
        uVar4 = 4;
      }
      if (ppppcVar7 < ppppcVar6) goto LAB_01aa8418;
      if (ppppcVar6 != (char ****)0x0) {
        if (ppppcVar6 < ppppcVar8) {
          if (-0x41 < *(char *)((int)ppppcVar13 + (int)ppppcVar6)) goto LAB_01aa83f8;
        }
        else if (ppppcVar6 == ppppcVar8) goto LAB_01aa83f8;
        goto LAB_01aa8418;
      }
LAB_01aa83f8:
      if (ppppcVar7 != (char ****)0x0) {
        if (ppppcVar7 < ppppcVar8) {
          if (*(char *)((int)ppppcVar13 + (int)ppppcVar7) < -0x40) goto LAB_01aa8418;
        }
        else if (ppppcVar7 != ppppcVar8) {
LAB_01aa8418:
          ppppcVar11 = ppppcVar8;
          local_bc = ppppcVar13;
          goto LAB_01aa8630;
        }
      }
      local_bc = (char ****)((int)ppppcVar7 - (int)ppppcVar6);
      local_c0 = (char ****)((int)ppppcVar13 + (int)ppppcVar6);
      local_34 = (char ****)0x0;
      local_b0 = (char ****)0x0;
      goto LAB_01aa7c78;
    }
    if (local_c0 < param_3) {
      if (*(char *)((int)param_2 + (int)local_c0) < -0x40) goto LAB_01aa81b8;
    }
    else if (local_c0 != param_3) {
LAB_01aa81b8:
      ppppcVar6 = (char ****)0x0;
      ppppcVar16 = (char ****)&DAT_01cfa694;
      ppppcVar7 = local_c0;
      goto LAB_01aa8630;
    }
    local_b0 = param_2;
    if (*(char *)param_2 == '/') {
      uVar4 = 2;
      local_34 = (char ****)0x0;
      local_bc = (char ****)0x0;
      goto LAB_01aa7c7c;
    }
    if (local_50 != (char ****)0x0) {
      ppppcVar6 = (char ****)((int)local_50 + 1);
    }
    if (local_4c != (char ****)0x0) {
      ppppcVar6 = local_4c;
    }
    ppppcVar11 = local_44;
    if (local_48 != (char ****)0x0) {
      ppppcVar11 = local_48;
    }
    ppppcVar16 = (char ****)&DAT_01cfa694;
    if (ppppcVar11 != (char ****)0x0) {
      ppppcVar7 = (char ****)((int)ppppcVar11 + -1);
    }
    if (ppppcVar7 < ppppcVar6) goto LAB_01aa846c;
    if (ppppcVar6 != (char ****)0x0) {
      if (ppppcVar6 < ppppcVar8) {
        if (-0x41 < *(char *)((int)ppppcVar13 + (int)ppppcVar6)) goto LAB_01aa844c;
      }
      else if (ppppcVar6 == ppppcVar8) goto LAB_01aa844c;
      goto LAB_01aa846c;
    }
LAB_01aa844c:
    if (ppppcVar7 == (char ****)0x0) {
LAB_01aa8480:
      ppppcVar11 = (char ****)((int)ppppcVar7 - (int)ppppcVar6);
      local_bc = (char ****)((int)ppppcVar13 + (int)ppppcVar6);
      if (ppppcVar7 == ppppcVar6) {
        ppppcVar11 = (char ****)&DAT_00000001;
        local_bc = (char ****)&DAT_005327c4;
      }
      if (local_4c == (char ****)0x0) {
        ppppcVar11 = (char ****)((int)ppppcVar7 - (int)ppppcVar6);
        local_bc = (char ****)((int)ppppcVar13 + (int)ppppcVar6);
      }
      local_34 = (char ****)0x0;
      ppppcVar6 = ppppcVar11;
      ppppcVar15 = local_4c;
      do {
        ppppcVar7 = ppppcVar6;
        if (ppppcVar7 == (char ****)0x0) {
          local_bc = (char ****)0x0;
          goto LAB_01aa8510;
        }
        ppppcVar6 = (char ****)((int)ppppcVar7 + -1);
        ppppcVar15 = ppppcVar7;
      } while (((char *)((int)local_bc + -1))[(int)ppppcVar7] != '/');
      ppppcVar16 = (char ****)&DAT_01cfa654;
      if (ppppcVar7 < ppppcVar11) {
        if (-0x41 < *(char *)((int)local_bc + (int)ppppcVar7)) goto LAB_01aa8510;
      }
      else if (ppppcVar7 == ppppcVar11) {
LAB_01aa8510:
        uVar4 = 2;
        goto LAB_01aa7c7c;
      }
      ppppcVar6 = (char ****)0x0;
      goto LAB_01aa8630;
    }
    if (ppppcVar7 < ppppcVar8) {
      if (-0x41 < *(char *)((int)ppppcVar13 + (int)ppppcVar7)) goto LAB_01aa8480;
    }
    else if (ppppcVar7 == ppppcVar8) goto LAB_01aa8480;
LAB_01aa846c:
LAB_01aa7ebc:
    ppppcVar11 = ppppcVar8;
    local_bc = ppppcVar13;
  }
  else {
    ppppcVar6 = local_38;
    if (local_38 != (char ****)0x0) {
      ppppcVar6 = (char ****)((int)local_38 + 1);
    }
    if (local_34 != (char ****)0x0) {
      ppppcVar6 = local_34;
    }
    ppppcVar16 = (char ****)&DAT_01cfa694;
    ppppcVar15 = local_30;
    if (local_30 == (char ****)0x0) {
      ppppcVar15 = local_2c;
    }
    ppppcVar7 = param_3;
    if (ppppcVar15 != (char ****)0x0) {
      ppppcVar7 = (char ****)((int)ppppcVar15 + -1);
    }
    if (ppppcVar7 < ppppcVar6) goto LAB_01aa8630;
    if (ppppcVar6 != (char ****)0x0) {
      if (ppppcVar6 < param_3) {
        if (*(char *)((int)param_2 + (int)ppppcVar6) < -0x40) goto LAB_01aa8630;
      }
      else if (ppppcVar6 != param_3) goto LAB_01aa8630;
    }
    if (ppppcVar7 != (char ****)0x0) {
      if (ppppcVar7 < param_3) {
        if (*(char *)((int)param_2 + (int)ppppcVar7) < -0x40) goto LAB_01aa8630;
      }
      else if (ppppcVar7 != param_3) goto LAB_01aa8630;
    }
    local_c0 = (char ****)((int)ppppcVar7 - (int)ppppcVar6);
    local_b0 = (char ****)((int)param_2 + (int)ppppcVar6);
    if (local_38 == (char ****)0x0) {
      local_bc = (char ****)0x0;
      uVar4 = 1;
LAB_01aa7c78:
      ppppcVar15 = (char ****)&DAT_01cfa694;
LAB_01aa7c7c:
      if (local_50 == (char ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("[validity] non-relative IRI must have a scheme",0x2e,&DAT_01cfa6b4);
      }
      if (ppppcVar8 <= local_50) {
        ppppcVar11 = ppppcVar8;
        if (local_50 == ppppcVar8) goto LAB_01aa7cf0;
LAB_01aa7ca4:
        ppppcVar16 = (char ****)&DAT_01cfa664;
        ppppcVar6 = (char ****)0x0;
        goto LAB_01aa7cbc;
      }
      ppppcVar11 = local_50;
      if (*(char *)((int)ppppcVar13 + (int)local_50) < -0x40) goto LAB_01aa7ca4;
LAB_01aa7cf0:
      ppppcVar9 = ppppcVar13;
      if (uVar4 < 2) {
        bVar1 = true;
        local_4c = local_34;
        goto LAB_01aa7d04;
      }
      if (local_4c == (char ****)0x0) {
        pcVar14 = (char *)0x0;
LAB_01aa8294:
        if (uVar4 < 4) goto LAB_01aa7dfc;
        if (local_48 == (char ****)0x0) goto LAB_01aa7e40;
        local_50 = ppppcVar8;
        if (local_44 != (char ****)0x0) {
          local_50 = (char ****)((int)local_44 + -1);
        }
        ppppcVar16 = (char ****)&DAT_01cfa6a4;
        ppppcVar6 = local_48;
        if (local_48 <= local_50) {
          if (local_48 < ppppcVar8) {
            if (-0x41 < *(char *)((int)ppppcVar13 + (int)local_48)) goto LAB_01aa83a0;
          }
          else if (local_48 == ppppcVar8) {
LAB_01aa83a0:
            if (local_50 < ppppcVar8) {
              if (-0x41 < *(char *)((int)ppppcVar13 + (int)local_50)) goto LAB_01aa83d8;
            }
            else if (local_50 == ppppcVar8) {
LAB_01aa83d8:
              local_a8 = (char *)((int)ppppcVar13 + (int)local_48);
              local_b8 = (int)local_50 - (int)local_48;
              goto LAB_01aa7e84;
            }
            ppppcVar7 = local_50;
            goto LAB_01aa7ebc;
          }
        }
LAB_01aa7cbc:
        ppppcVar7 = local_50;
        ppppcVar11 = ppppcVar8;
        local_bc = ppppcVar13;
        goto LAB_01aa8630;
      }
      ppppcVar6 = (char ****)((int)local_50 + 3);
      ppppcVar16 = (char ****)&DAT_01cfa684;
      if (local_4c < ppppcVar6) goto LAB_01aa7da8;
      if (ppppcVar6 != (char ****)0x0) {
        if (ppppcVar6 < ppppcVar8) {
          if (*(char *)((int)ppppcVar13 + (int)ppppcVar6) < -0x40) goto LAB_01aa7da8;
        }
        else if (ppppcVar6 != ppppcVar8) {
LAB_01aa7da8:
          local_50 = local_4c;
          goto LAB_01aa7cbc;
        }
      }
      if (local_4c < ppppcVar8) {
        if (-0x41 < *(char *)((int)ppppcVar13 + (int)local_4c)) goto LAB_01aa8284;
      }
      else if (local_4c == ppppcVar8) {
LAB_01aa8284:
        local_b4 = (int)local_4c - (int)ppppcVar6;
        pcVar14 = (char *)((int)ppppcVar13 + (int)ppppcVar6);
        goto LAB_01aa8294;
      }
    }
    else {
      ppppcVar16 = (char ****)&DAT_01cfa664;
      if (local_38 < param_3) {
        if (*(char *)((int)param_2 + (int)local_38) < -0x40) goto LAB_01aa8628;
        ppppcVar11 = local_38;
      }
      else {
        if (local_38 != param_3) {
LAB_01aa8628:
          ppppcVar6 = (char ****)0x0;
          ppppcVar7 = local_38;
          goto LAB_01aa8630;
        }
      }
      bVar1 = false;
      local_bc = (char ****)0x0;
      ppppcVar9 = param_2;
      local_4c = local_34;
      ppppcVar15 = ppppcVar16;
LAB_01aa7d04:
      if (local_4c == (char ****)0x0) {
        pcVar14 = (char *)0x0;
LAB_01aa7dfc:
        if (local_30 != (char ****)0x0) {
          ppppcVar7 = param_3;
          if (local_2c != (char ****)0x0) {
            ppppcVar7 = (char ****)((int)local_2c + -1);
          }
          ppppcVar16 = (char ****)&DAT_01cfa6a4;
          if (local_30 <= ppppcVar7) {
            if (local_30 < param_3) {
              if (-0x41 < *(char *)((int)param_2 + (int)local_30)) goto LAB_01aa7e4c;
            }
            else if (local_30 == param_3) {
LAB_01aa7e4c:
              if (ppppcVar7 < param_3) {
                if (-0x41 < *(char *)((int)param_2 + (int)ppppcVar7)) goto LAB_01aa7e74;
              }
              else if (ppppcVar7 == param_3) {
LAB_01aa7e74:
                local_a8 = (char *)((int)param_2 + (int)local_30);
                local_b8 = (int)ppppcVar7 - (int)local_30;
                goto LAB_01aa7e84;
              }
            }
          }
          ppppcVar6 = local_30;
          ppppcVar8 = param_3;
          ppppcVar13 = param_2;
          goto LAB_01aa7ebc;
        }
LAB_01aa7e40:
        local_a8 = (char *)0x0;
LAB_01aa7e84:
        if (local_2c == (char ****)0x0) {
          pcVar12 = (char *)0x0;
LAB_01aa7edc:
          local_6c = local_b8;
          local_70 = local_a8;
          local_78 = local_bc;
          local_7c = local_c0;
          local_80 = local_b0;
          local_84 = local_b4;
          local_60 = 0;
          local_38 = (char ****)0x0;
          local_3c = (char ****)0x1;
          local_40 = (char ****)0x0;
          local_90 = ppppcVar9;
          local_8c = ppppcVar11;
          local_88 = pcVar14;
          local_74 = ppppcVar15;
          local_68 = pcVar12;
          local_64 = param_3;
          FUN_016092cc(&local_40,0,ppppcVar11,1,1);
          ppppcVar15 = local_38;
          FUN_01bed4e2((int)local_38 + (int)local_3c,ppppcVar9,ppppcVar11);
          local_38 = (char ****)((int)ppppcVar11 + (int)ppppcVar15);
          if (local_40 == local_38) {
            FUN_016092cc(&local_40,local_40,1,1,1);
          }
          pppcVar10 = (char ***)((int)local_38 + 1);
          *(char *)((int)local_38 + (int)local_3c) = ':';
          local_38 = (char ****)pppcVar10;
          if (pcVar14 != (char *)0x0) {
            if ((uint)((int)local_40 - (int)pppcVar10) < 2) {
              FUN_016092cc(&local_40,pppcVar10,2,1,1);
            }
            pcVar5 = (char *)((int)local_38 + (int)local_3c);
            local_38 = (char ****)((int)local_38 + 2);
            pcVar5[0] = '/';
            pcVar5[1] = '/';
            if ((uint)((int)local_40 - (int)local_38) < local_b4) {
              FUN_016092cc(&local_40,local_38,local_b4,1,1);
            }
            ppppcVar11 = local_38;
            FUN_01bed4e2((char *)((int)local_38 + (int)local_3c),pcVar14,local_b4);
            local_38 = (char ****)((int)ppppcVar11 + local_b4);
          }
          if (local_b0 == (char ****)0x0) {
            if ((char ****)((int)local_40 - (int)local_38) < local_bc) {
              FUN_016092cc(&local_40,local_38,local_bc,1,1);
            }
            ppppcVar11 = local_38;
            FUN_01bed4e2((char *)((int)local_38 + (int)local_3c),local_c0,local_bc);
            local_38 = (char ****)((int)ppppcVar11 + (int)local_bc);
          }
          else {
            iVar3 = FUN_01aa63dc(&local_80,&local_40,&DAT_01d2e5f0,0,pcVar14 != (char *)0x0);
            if (iVar3 != 0) goto LAB_01aa854c;
          }
          if (local_a8 != (char *)0x0) {
            iVar3 = FUN_01aa87b4(&local_40,0x3f);
            if (iVar3 != 0) goto LAB_01aa854c;
            if ((uint)((int)local_40 - (int)local_38) < local_b8) {
              FUN_016092cc(&local_40,local_38,local_b8,1,1);
            }
            ppppcVar11 = local_38;
            FUN_01bed4e2((char *)((int)local_38 + (int)local_3c),local_a8,local_b8);
            local_38 = (char ****)((int)ppppcVar11 + local_b8);
          }
          if (pcVar12 != (char *)0x0) {
            iVar3 = FUN_01aa87b4(&local_40,0x23);
            if (iVar3 != 0) {
LAB_01aa854c:
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01d2e608,&DAT_01d30334);
            }
            if ((char ****)((int)local_40 - (int)local_38) < param_3) {
              FUN_016092cc(&local_40,local_38,param_3,1,1);
            }
            ppppcVar11 = local_38;
            FUN_01bed4e2((char *)((int)local_38 + (int)local_3c),pcVar12,param_3);
            local_38 = (char ****)((int)ppppcVar11 + (int)param_3);
          }
          FUN_01283524(&local_40);
          FUN_01414f00(&local_90,&local_40);
          if ((char)local_90 == '\x03') {
            *(undefined1 *)param_1 = 3;
          }
          else {
            *param_1 = local_90;
            param_1[1] = local_8c;
            param_1[2] = local_88;
            param_1[3] = local_84;
            param_1[4] = local_80;
            param_1[5] = local_7c;
            param_1[6] = local_78;
            param_1[7] = local_74;
            param_1[8] = local_70;
            param_1[9] = local_6c;
            param_1[10] = local_68;
          }
          FUN_019bb7e0(local_a4,ppppcVar13);
          return;
        }
        ppppcVar16 = (char ****)&UNK_01cfa674;
        if (local_2c < param_3) {
          if (-0x41 < *(char *)((int)param_2 + (int)local_2c)) goto LAB_01aa7ed0;
        }
        else if (param_3 == local_2c) {
LAB_01aa7ed0:
          pcVar12 = (char *)((int)param_2 + (int)local_2c);
          param_3 = (char ****)((int)param_3 - (int)local_2c);
          goto LAB_01aa7edc;
        }
        ppppcVar6 = local_2c;
        ppppcVar7 = param_3;
        ppppcVar8 = param_3;
        ppppcVar13 = param_2;
        goto LAB_01aa7ebc;
      }
      ppppcVar6 = (char ****)((int)local_38 + 3);
      if (bVar1) {
        ppppcVar6 = (char ****)0x2;
      }
      if (local_4c < ppppcVar6) goto LAB_01aa7dd8;
      if (ppppcVar6 == (char ****)0x0) {
LAB_01aa7dc0:
        if (local_4c < param_3) {
          if (-0x41 < *(char *)((int)param_2 + (int)local_4c)) goto LAB_01aa7df0;
        }
        else if (local_4c == param_3) {
LAB_01aa7df0:
          pcVar14 = (char *)((int)param_2 + (int)ppppcVar6);
          local_b4 = (int)local_4c - (int)ppppcVar6;
          goto LAB_01aa7dfc;
        }
      }
      else if (ppppcVar6 < param_3) {
        if (-0x41 < *(char *)((int)param_2 + (int)ppppcVar6)) goto LAB_01aa7dc0;
      }
      else if (ppppcVar6 == param_3) goto LAB_01aa7dc0;
LAB_01aa7dd8:
      ppppcVar8 = param_3;
      ppppcVar13 = param_2;
    }
    ppppcVar16 = (char ****)&DAT_01cfa684;
    ppppcVar7 = local_4c;
    ppppcVar11 = ppppcVar8;
    local_bc = ppppcVar13;
  }
LAB_01aa8630:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(local_bc,ppppcVar11,ppppcVar6,ppppcVar7,ppppcVar16);
}

