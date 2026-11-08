// FUN_01693a50 @ 01693a50 size=3288 calls_out=13 calls_in=1
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | [validity] non-relative IRI must have a scheme

/* WARNING: Type propagation algorithm not settling */

void FUN_01693a50(undefined4 *param_1,char *******param_2,char *******param_3,undefined4 param_4)

{
  char *******pppppppcVar1;
  char *******pppppppcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  char ******ppppppcVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char *pcVar14;
  char *******pppppppcVar15;
  char ******ppppppcVar16;
  char *******local_a8;
  char *******local_9c;
  char *******local_98;
  char *local_94;
  char *******local_90;
  char *******local_8c;
  char ******local_88;
  int iStack_84;
  char ******ppppppcStack_80;
  char *******local_78;
  char *******local_74;
  char *******local_70;
  char *******local_6c;
  char *******local_68;
  char *******local_64;
  char *******local_60;
  char *******local_5c;
  char *local_58;
  char *******local_54;
  char *local_50;
  char *******local_4c;
  undefined1 local_48;
  char *******local_40;
  char *******local_3c;
  char *******local_38;
  char *******local_34;
  char *******local_30;
  char *******local_2c;
  undefined1 uStack_25;
  
  cVar3 = FUN_0169197c(param_2,param_3,2);
  if (cVar3 != '\v') goto LAB_01693b58;
  pppppppcVar8 = (char *******)&local_40;
  local_38 = (char *******)0x0;
  local_40 = (char *******)0x0;
  local_6c = (char *******)0x0;
  local_3c = (char *******)&DAT_00000001;
  local_70 = (char *******)&DAT_60000020;
  local_74 = (char *******)&DAT_018ae098;
  local_78 = pppppppcVar8;
  iVar4 = FUN_010a3c98(param_4,&local_78);
  pppppppcVar2 = local_38;
  pppppppcVar1 = local_3c;
  pppppppcVar10 = local_40;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_018ae0b0,&DAT_018af130);
  }
  local_8c = local_40;
  local_90 = local_3c;
  uVar5 = FUN_0169197c(local_3c,local_38,1);
  pppppppcVar15 = (char *******)(uVar5 & 0xff);
  if (pppppppcVar15 == (char *******)&DAT_0000000b) {
    pppppppcVar15 = pppppppcVar2;
    if (pppppppcVar10 == (char *******)&DAT_80000000) goto LAB_01693b58;
  }
  else {
    if (pppppppcVar10 != (char *******)&DAT_80000000) {
      if (pppppppcVar10 != (char *******)0x0) {
        thunk_FUN_016d3fb4(pppppppcVar1);
        *(undefined1 *)param_1 = 3;
        return;
      }
LAB_01693b58:
      *(undefined1 *)param_1 = 3;
      return;
    }
    local_8c = pppppppcVar1;
    local_90 = pppppppcVar2;
    if (pppppppcVar1 == (char *******)&DAT_80000000) goto LAB_01693b58;
  }
  FUN_0115728c(&local_70,local_90,pppppppcVar15);
  local_9c = local_6c;
  pppppppcVar1 = local_70;
  FUN_0115728c(&local_38,param_2,param_3);
  pppppppcVar12 = pppppppcVar15;
  local_a8 = param_2;
  pppppppcVar10 = param_3;
  local_40 = param_2;
  local_3c = param_3;
  pppppppcVar2 = local_68;
  if (local_38 == (char *******)0x0 && local_34 == (char *******)0x0) {
    pppppppcVar9 = local_30;
    if (local_30 == (char *******)0x0) {
      pppppppcVar9 = local_2c;
    }
    pppppppcVar13 = param_3;
    if (pppppppcVar9 != (char *******)0x0) {
      pppppppcVar13 = (char *******)((int)pppppppcVar9 + -1);
    }
    pppppppcVar9 = pppppppcVar1;
    if (pppppppcVar13 != (char *******)0x0) {
      if (pppppppcVar13 < param_3) {
        if (-0x41 < *(char *)((int)param_2 + (int)pppppppcVar13)) {
LAB_016943a0:
          local_98 = param_2;
          if (*(char *)param_2 == '/') {
            bVar7 = 2;
            local_34 = (char *******)0x0;
            local_a8 = (char *******)0x0;
            goto LAB_01693d14;
          }
          pppppppcVar10 = local_68;
          if (local_68 == (char *******)0x0) {
            pppppppcVar10 = local_64;
          }
          if (pppppppcVar10 != (char *******)0x0) {
            pppppppcVar12 = (char *******)((int)pppppppcVar10 + -1);
          }
          if (pppppppcVar1 != (char *******)0x0) {
            pppppppcVar9 = (char *******)((int)pppppppcVar1 + 1);
          }
          if (local_9c != (char *******)0x0) {
            pppppppcVar9 = local_9c;
          }
          if (pppppppcVar12 < pppppppcVar9) goto LAB_01694530;
          if (pppppppcVar9 != (char *******)0x0) {
            if (pppppppcVar9 < pppppppcVar15) {
              if (-0x41 < *(char *)((int)local_90 + (int)pppppppcVar9)) goto LAB_0169450c;
            }
            else if (pppppppcVar9 == pppppppcVar15) goto LAB_0169450c;
            goto LAB_01694530;
          }
LAB_0169450c:
          if (pppppppcVar12 != (char *******)0x0) {
            if (pppppppcVar12 < pppppppcVar15) {
              if (*(char *)((int)local_90 + (int)pppppppcVar12) < -0x40) {
LAB_01694530:
                local_98 = (char *******)&DAT_01888eac;
                goto LAB_01694538;
              }
            }
            else if (pppppppcVar12 != pppppppcVar15) goto LAB_01694530;
          }
          if (pppppppcVar12 == pppppppcVar9) {
            local_a8 = (char *******)&DAT_00418645;
            pppppppcVar10 = (char *******)&DAT_00000001;
          }
          else {
            local_a8 = (char *******)((int)local_90 + (int)pppppppcVar9);
            pppppppcVar10 = (char *******)((int)pppppppcVar12 - (int)pppppppcVar9);
          }
          if (local_9c == (char *******)0x0) {
            pppppppcVar10 = (char *******)((int)pppppppcVar12 - (int)pppppppcVar9);
            local_a8 = (char *******)((int)local_90 + (int)pppppppcVar9);
          }
          local_34 = (char *******)0x0;
          pppppppcVar9 = pppppppcVar10;
          do {
            pppppppcVar12 = pppppppcVar9;
            if (pppppppcVar12 == (char *******)0x0) {
              local_a8 = (char *******)0x0;
              goto LAB_016945dc;
            }
            pppppppcVar9 = (char *******)((int)pppppppcVar12 + -1);
            pppppppcVar8 = pppppppcVar12;
          } while (((char *)((int)local_a8 + -1))[(int)pppppppcVar12] != '/');
          if (pppppppcVar12 < pppppppcVar10) {
            if (-0x41 < *(char *)((int)local_a8 + (int)pppppppcVar12)) {
LAB_016945dc:
              bVar7 = 2;
              goto LAB_01693d14;
            }
          }
          else if (pppppppcVar12 == pppppppcVar10) goto LAB_016945dc;
          local_30 = (char *******)0x0;
          local_98 = (char *******)&DAT_01888dac;
          goto LAB_01694700;
        }
      }
      else if (pppppppcVar13 == param_3) goto LAB_016943a0;
      local_30 = (char *******)0x0;
      local_98 = (char *******)&DAT_01888eac;
      pppppppcVar12 = pppppppcVar13;
      goto LAB_01694700;
    }
    bVar7 = 3;
    local_98 = (char *******)&DAT_01888eac;
    pppppppcVar10 = local_68;
    if (local_68 == (char *******)0x0) {
      pppppppcVar10 = local_64;
    }
    if (pppppppcVar10 != (char *******)0x0) {
      pppppppcVar12 = (char *******)((int)pppppppcVar10 + -1);
    }
    if (pppppppcVar1 != (char *******)0x0) {
      pppppppcVar9 = (char *******)((int)pppppppcVar1 + 1);
    }
    if (local_9c != (char *******)0x0) {
      pppppppcVar9 = local_9c;
    }
    if (local_30 == (char *******)0x0) {
      bVar7 = 4;
    }
    if (pppppppcVar12 < pppppppcVar9) goto LAB_01694538;
    if (pppppppcVar9 != (char *******)0x0) {
      if (pppppppcVar9 < pppppppcVar15) {
        if (-0x41 < *(char *)((int)local_90 + (int)pppppppcVar9)) goto LAB_016944b4;
      }
      else if (pppppppcVar9 == pppppppcVar15) goto LAB_016944b4;
      goto LAB_01694538;
    }
LAB_016944b4:
    if (pppppppcVar12 == (char *******)0x0) {
LAB_016944e0:
      local_a8 = (char *******)((int)pppppppcVar12 - (int)pppppppcVar9);
      local_34 = (char *******)0x0;
      pppppppcVar13 = (char *******)((int)local_90 + (int)pppppppcVar9);
      local_98 = (char *******)0x0;
      goto LAB_01693d14;
    }
    if (pppppppcVar12 < pppppppcVar15) {
      if (-0x41 < *(char *)((int)local_90 + (int)pppppppcVar12)) goto LAB_016944e0;
    }
    else if (pppppppcVar12 == pppppppcVar15) goto LAB_016944e0;
LAB_01694538:
    local_30 = pppppppcVar9;
    local_a8 = local_90;
    pppppppcVar10 = pppppppcVar15;
    goto LAB_01694700;
  }
  pppppppcVar8 = local_38;
  if (local_38 != (char *******)0x0) {
    pppppppcVar8 = (char *******)((int)local_38 + 1);
  }
  if (local_34 != (char *******)0x0) {
    pppppppcVar8 = local_34;
  }
  pppppppcVar9 = local_30;
  if (local_30 == (char *******)0x0) {
    pppppppcVar9 = local_2c;
  }
  pppppppcVar12 = param_3;
  if (pppppppcVar9 != (char *******)0x0) {
    pppppppcVar12 = (char *******)((int)pppppppcVar9 + -1);
  }
  if (pppppppcVar12 < pppppppcVar8) goto LAB_01693c5c;
  if (pppppppcVar8 != (char *******)0x0) {
    if (pppppppcVar8 < param_3) {
      if (-0x41 < *(char *)((int)param_2 + (int)pppppppcVar8)) goto LAB_01693c3c;
    }
    else if (pppppppcVar8 == param_3) goto LAB_01693c3c;
    goto LAB_01693c5c;
  }
LAB_01693c3c:
  if (pppppppcVar12 != (char *******)0x0) {
    if (pppppppcVar12 < param_3) {
      if (*(char *)((int)param_2 + (int)pppppppcVar12) < -0x40) {
LAB_01693c5c:
        local_98 = (char *******)&DAT_01888eac;
        local_30 = pppppppcVar8;
        goto LAB_01694700;
      }
    }
    else if (pppppppcVar12 != param_3) goto LAB_01693c5c;
  }
  pppppppcVar13 = (char *******)((int)pppppppcVar12 - (int)pppppppcVar8);
  local_98 = (char *******)((int)param_2 + (int)pppppppcVar8);
  pppppppcVar8 = local_2c;
  if (local_38 == (char *******)0x0) {
    local_a8 = (char *******)0x0;
    bVar7 = 1;
LAB_01693d14:
    if (pppppppcVar1 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("[validity] non-relative IRI must have a scheme",0x2e,&DAT_01888ecc);
    }
    if (pppppppcVar1 < pppppppcVar15) {
      if (-0x41 < *(char *)((int)local_90 + (int)pppppppcVar1)) {
LAB_01693db8:
        pppppppcVar9 = local_90;
        if (bVar7 < 2) goto joined_r0x01693d7c;
        if (local_9c != (char *******)0x0) {
          pppppppcVar9 = (char *******)((int)pppppppcVar1 + 3);
          pppppppcVar12 = local_9c;
          if (local_9c < pppppppcVar9) goto LAB_01693e28;
          if (pppppppcVar9 != (char *******)0x0) {
            if (pppppppcVar9 < pppppppcVar15) {
              if (*(char *)((int)local_90 + (int)pppppppcVar9) < -0x40) {
LAB_01693e28:
                local_98 = (char *******)&DAT_01888e9c;
                goto LAB_01694538;
              }
            }
            else if (pppppppcVar9 != pppppppcVar15) goto LAB_01693e28;
          }
          if (local_9c < pppppppcVar15) {
            if (-0x41 < *(char *)((int)local_90 + (int)local_9c)) {
LAB_01694318:
              ppppppcVar16 = (char ******)((int)local_90 + (int)pppppppcVar9);
              local_9c = (char *******)((int)local_9c - (int)pppppppcVar9);
              goto LAB_0169432c;
            }
          }
          else if (local_9c == pppppppcVar15) goto LAB_01694318;
          local_98 = (char *******)&DAT_01888e9c;
          goto LAB_01694538;
        }
        ppppppcVar16 = (char ******)0x0;
LAB_0169432c:
        pppppppcVar9 = local_90;
        if (bVar7 < 4) goto joined_r0x01693e74;
        local_5c = pppppppcVar8;
        if (local_68 != (char *******)0x0) {
          pppppppcVar12 = pppppppcVar15;
          if (local_64 != (char *******)0x0) {
            pppppppcVar12 = (char *******)((int)local_64 + -1);
          }
          if (local_68 <= pppppppcVar12) {
            if (local_68 < pppppppcVar15) {
              if (-0x41 < *(char *)((int)local_90 + (int)local_68)) {
LAB_01694450:
                if (pppppppcVar12 < pppppppcVar15) {
                  if (-0x41 < *(char *)((int)local_90 + (int)pppppppcVar12)) {
LAB_0169448c:
                    local_94 = (char *)((int)local_90 + (int)local_68);
                    pppppppcVar2 = (char *******)((int)pppppppcVar12 - (int)local_68);
                    goto joined_r0x016944a8;
                  }
                }
                else if (pppppppcVar12 == pppppppcVar15) goto LAB_0169448c;
              }
            }
            else if (local_68 == pppppppcVar15) goto LAB_01694450;
          }
          local_98 = (char *******)&DAT_01888ebc;
          local_30 = local_68;
          local_a8 = local_90;
          pppppppcVar10 = pppppppcVar15;
          goto LAB_01694700;
        }
        local_94 = (char *)0x0;
        goto joined_r0x016944a8;
      }
    }
    else if (pppppppcVar1 == pppppppcVar15) goto LAB_01693db8;
    local_30 = (char *******)0x0;
    local_98 = (char *******)&DAT_01888e7c;
    pppppppcVar12 = pppppppcVar1;
    local_a8 = local_90;
    pppppppcVar10 = pppppppcVar15;
    goto LAB_01694700;
  }
  pppppppcVar9 = param_2;
  if (local_38 < param_3) {
    local_a8 = (char *******)0x0;
    pppppppcVar1 = local_38;
    if (*(char *)((int)param_2 + (int)local_38) < -0x40) {
LAB_016946fc:
      local_98 = (char *******)&DAT_01888e7c;
      local_30 = (char *******)0x0;
      pppppppcVar12 = local_38;
      local_a8 = param_2;
      goto LAB_01694700;
    }
  }
  else {
    local_a8 = (char *******)0x0;
    pppppppcVar1 = param_3;
    if (local_38 != param_3) goto LAB_016946fc;
  }
joined_r0x01693d7c:
  if (local_34 != (char *******)0x0) {
    local_9c = (char *******)((int)local_38 + 3);
    if (local_38 == (char *******)0x0) {
      local_9c = (char *******)&SUB_00000002;
    }
    if (local_34 < local_9c) goto LAB_01693e50;
    if (local_9c == (char *******)0x0) {
LAB_01693e34:
      if (local_34 < param_3) {
        if (-0x41 < *(char *)((int)param_2 + (int)local_34)) {
LAB_01693e60:
          ppppppcVar16 = (char ******)((int)param_2 + (int)local_9c);
          local_9c = (char *******)((int)local_34 - (int)local_9c);
          goto joined_r0x01693e74;
        }
      }
      else if (local_34 == param_3) goto LAB_01693e60;
    }
    else if (local_9c < param_3) {
      if (-0x41 < *(char *)((int)param_2 + (int)local_9c)) goto LAB_01693e34;
    }
    else if (local_9c == param_3) goto LAB_01693e34;
LAB_01693e50:
    local_98 = (char *******)&DAT_01888e9c;
    local_30 = local_9c;
    pppppppcVar12 = local_34;
    local_a8 = param_2;
    pppppppcVar10 = param_3;
    goto LAB_01694700;
  }
  ppppppcVar16 = (char ******)0x0;
joined_r0x01693e74:
  local_5c = pppppppcVar8;
  if (local_30 != (char *******)0x0) {
    pppppppcVar12 = param_3;
    if (local_2c != (char *******)0x0) {
      pppppppcVar12 = (char *******)((int)local_2c + -1);
    }
    if (local_30 <= pppppppcVar12) {
      if (local_30 < param_3) {
        if (-0x41 < *(char *)((int)param_2 + (int)local_30)) {
LAB_01693eb4:
          if (pppppppcVar12 < param_3) {
            if (-0x41 < *(char *)((int)param_2 + (int)pppppppcVar12)) {
LAB_01693ee0:
              local_94 = (char *)((int)param_2 + (int)local_30);
              pppppppcVar2 = (char *******)((int)pppppppcVar12 - (int)local_30);
              goto joined_r0x016944a8;
            }
          }
          else if (pppppppcVar12 == param_3) goto LAB_01693ee0;
        }
      }
      else if (local_30 == param_3) goto LAB_01693eb4;
    }
    local_98 = (char *******)&DAT_01888ebc;
    local_a8 = param_2;
    pppppppcVar10 = param_3;
    goto LAB_01694700;
  }
  local_94 = (char *)0x0;
joined_r0x016944a8:
  if (local_2c != (char *******)0x0) {
    if (local_2c < param_3) {
      if (-0x41 < *(char *)((int)param_2 + (int)local_2c)) {
LAB_01693f30:
        pcVar14 = (char *)((int)param_2 + (int)local_2c);
        param_3 = (char *******)((int)param_3 - (int)local_2c);
        goto LAB_01693f38;
      }
    }
    else if (param_3 == local_2c) goto LAB_01693f30;
    local_98 = (char *******)&DAT_01888e8c;
    local_30 = local_2c;
    pppppppcVar12 = param_3;
    local_a8 = param_2;
    pppppppcVar10 = param_3;
LAB_01694700:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(local_a8,pppppppcVar10,local_30,pppppppcVar12,local_98);
  }
  pcVar14 = (char *)0x0;
LAB_01693f38:
  local_48 = 0;
  local_38 = (char *******)0x0;
  local_3c = (char *******)0x1;
  local_40 = (char *******)0x0;
  local_78 = pppppppcVar9;
  local_74 = pppppppcVar1;
  local_70 = (char *******)ppppppcVar16;
  local_6c = local_9c;
  local_68 = local_98;
  local_64 = pppppppcVar13;
  local_60 = local_a8;
  local_58 = local_94;
  local_54 = pppppppcVar2;
  local_50 = pcVar14;
  local_4c = param_3;
  FUN_010e02bc(&local_40,0,pppppppcVar1);
  pppppppcVar8 = local_38;
  FUN_016dd1aa((int)local_38 + (int)local_3c,pppppppcVar9,pppppppcVar1);
  local_38 = (char *******)((int)pppppppcVar1 + (int)pppppppcVar8);
  if (local_40 == local_38) {
    FUN_010e02bc(&local_40,local_40,1);
  }
  ppppppcVar11 = (char ******)((int)local_38 + 1);
  *(char *)((int)local_38 + (int)local_3c) = ':';
  local_38 = (char *******)ppppppcVar11;
  if (ppppppcVar16 != (char ******)0x0) {
    if ((uint)((int)local_40 - (int)ppppppcVar11) < 2) {
      FUN_010e02bc(&local_40,ppppppcVar11,2);
    }
    pcVar6 = (char *)((int)local_38 + (int)local_3c);
    local_38 = (char *******)((int)local_38 + 2);
    pcVar6[0] = '/';
    pcVar6[1] = '/';
    if ((char *******)((int)local_40 - (int)local_38) < local_9c) {
      FUN_010e02bc(&local_40,local_38,local_9c);
    }
    pppppppcVar8 = local_38;
    FUN_016dd1aa((char *)((int)local_38 + (int)local_3c),ppppppcVar16,local_9c);
    local_38 = (char *******)((int)pppppppcVar8 + (int)local_9c);
  }
  if (local_98 == (char *******)0x0) {
    if ((char *******)((int)local_40 - (int)local_38) < local_a8) {
      FUN_010e02bc(&local_40,local_38,local_a8);
    }
    pppppppcVar8 = local_38;
    FUN_016dd1aa((char *)((int)local_38 + (int)local_3c),pppppppcVar13,local_a8);
    local_38 = (char *******)((int)pppppppcVar8 + (int)local_a8);
  }
  else {
    iVar4 = FUN_01690f1c(&local_68,&local_40,&DAT_018ae098,0,ppppppcVar16 != (char ******)0x0);
    if (iVar4 != 0) goto LAB_01694618;
  }
  if (local_94 != (char *)0x0) {
    iVar4 = FUN_0100b9b4(&local_40,0x3f);
    if (iVar4 != 0) goto LAB_01694618;
    if ((char *******)((int)local_40 - (int)local_38) < pppppppcVar2) {
      FUN_010e02bc(&local_40,local_38,pppppppcVar2);
    }
    pppppppcVar8 = local_38;
    FUN_016dd1aa((char *)((int)local_38 + (int)local_3c),local_94,pppppppcVar2);
    local_38 = (char *******)((int)pppppppcVar8 + (int)pppppppcVar2);
  }
  if (pcVar14 != (char *)0x0) {
    iVar4 = FUN_0100b9b4(&local_40,0x23);
    if (iVar4 != 0) {
LAB_01694618:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                   &DAT_018ae0b0,&DAT_018af130);
    }
    if ((char *******)((int)local_40 - (int)local_38) < param_3) {
      FUN_010e02bc(&local_40,local_38,param_3);
    }
    pppppppcVar8 = local_38;
    FUN_016dd1aa((char *)((int)local_38 + (int)local_3c),pcVar14,param_3);
    local_38 = (char *******)((int)pppppppcVar8 + (int)param_3);
  }
  local_88 = (char ******)local_40;
  iStack_84 = (int)local_3c;
  ppppppcStack_80 = (char ******)local_38;
  FUN_00f5ef18(&local_40,&local_88);
  FUN_010a3200(&local_78,&local_40);
  if ((char)local_78 == '\x03') {
    *(undefined1 *)param_1 = 3;
  }
  else {
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
    param_1[3] = local_6c;
    param_1[4] = local_68;
    param_1[5] = local_64;
    param_1[6] = local_60;
    param_1[7] = local_5c;
    param_1[8] = local_58;
    param_1[9] = local_54;
    param_1[10] = local_50;
  }
  if (local_8c != (char *******)0x0) {
    thunk_FUN_016d3fb4(local_90);
  }
  return;
}

