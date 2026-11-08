// FUN_012afce4 @ 012afce4 size=3040 calls_out=19 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_012afce4(int *param_1,int param_2,char *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int **ppiVar18;
  int *extraout_r1;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int *extraout_r2;
  int *piVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  int iVar33;
  int **ppiVar34;
  uint uVar35;
  int iVar36;
  int **ppiVar37;
  int iVar38;
  uint *puVar39;
  code *pcVar40;
  uint unaff_r11;
  bool bVar41;
  char *local_e0;
  undefined *local_dc;
  uint local_c4;
  uint local_c0;
  int *local_ac;
  int local_a8;
  undefined4 *local_a4;
  uint local_a0;
  int local_9c;
  int **local_98;
  int local_94;
  int *local_90;
  uint local_8c;
  int **local_88;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int **local_68;
  code *local_64;
  int **local_60;
  undefined1 *local_5c;
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  int **local_50;
  int iStack_4c;
  int *piStack_48;
  int **local_40;
  int iStack_3c;
  int *piStack_38;
  int **local_30;
  int iStack_2c;
  int *piStack_28;
  
  piVar28 = *(int **)(param_2 + 0x60);
  iVar30 = *(int *)(param_2 + 100);
  iVar19 = param_1[3];
  local_ac = &local_a8;
  puVar23 = (undefined4 *)0x0;
  iVar20 = 0;
  local_9c = 0;
  local_a4 = (undefined4 *)0x0;
  piVar22 = piVar28;
  local_a8 = iVar19;
LAB_012afd34:
  do {
    piVar17 = piVar22;
    local_dc = &DAT_01d305c8;
    local_e0 = &DAT_00533a41;
    if (piVar17 == piVar28 + iVar30 * 0x5b) {
      ppiVar18 = (int **)*param_1;
      iVar30 = param_1[1];
      if (puVar23 == (undefined4 *)0x0) {
        iVar20 = 0;
      }
      iVar7 = param_1[4];
      local_98 = (int **)(uint)(puVar23 != (undefined4 *)0x0);
      local_84 = 0;
      local_94 = 0;
      puVar31 = (undefined1 *)((int)param_1 + 0x15);
      uVar1 = *puVar31;
      iVar38 = param_1[5];
      local_90 = puVar23;
      local_8c = unaff_r11;
      local_88 = local_98;
      local_80 = puVar23;
      local_7c = unaff_r11;
      local_78 = iVar20;
      do {
        FUN_0167d0b4(&local_68,&local_98);
        piVar22 = extraout_r2;
        ppiVar34 = (int **)extraout_r1;
        if (local_68 != (int **)0x0) {
          piVar22 = local_68[(int)local_60 * 3 + 2];
          ppiVar34 = local_60;
        }
        if (local_68 == (int **)0x0 || piVar22 == (int *)0x0) {
          do {
            FUN_0167d0b4(&local_68,&local_98);
          } while (local_68 != (int **)0x0);
          return;
        }
        piVar22 = local_68[(int)ppiVar34 + 0x22];
        if (*param_3 == '\0') {
          FUN_012b2fd4(iVar30,&DAT_00420454,2);
        }
        iVar20 = piVar22[0x3e];
        local_74 = piVar22[0x3f];
        local_70 = piVar22[0x40];
        *param_3 = '\0';
        if (iVar20 == -0x80000000) {
          local_74 = piVar22[0x27];
          if (piVar22[0x26] == -0x80000000) {
            local_70 = piVar22[0x48];
            local_74 = piVar22[0x47];
          }
          else {
            local_70 = piVar22[0x28];
          }
        }
        piVar28 = piVar22 + 0x2c;
        if (piVar22[0x2c] == -0x80000000) {
          piVar28 = (int *)&DAT_0041fd68;
        }
        if (piVar22[0x29] != -0x80000000) {
          piVar28 = piVar22 + 0x29;
        }
        local_5c = &LAB_018a13b8;
        local_60 = (int **)&local_74;
        local_64 = (code *)&DAT_012b59c8;
        local_68 = &local_ac;
        local_6c = piVar28;
        FUN_012fa178(iVar30,&DAT_01ce25b4,&DAT_0041fbc6,&local_68);
        if (piVar28[2] != 0) {
          local_68 = &local_6c;
          local_64 = FUN_012b33e4;
          FUN_012fa178(iVar30,&DAT_01ce25b4,&DAT_005ad29b,&local_68);
        }
        iVar33 = piVar22[0x12];
        iVar36 = piVar22[0x13];
        iVar29 = iVar36 * 0x134;
        iVar20 = iVar33;
        do {
          iVar12 = iVar20;
          if (iVar29 == 0) {
            ppiVar34 = (int **)0x0;
            pcVar40 = (code *)&SUB_00000004;
            ppiVar37 = (int **)0x0;
            goto LAB_012b0740;
          }
          iVar10 = FUN_012b0bfc(puVar31,*(undefined4 *)(iVar12 + 0x11c));
          iVar29 = iVar29 + -0x134;
          iVar20 = iVar12 + 0x134;
        } while (iVar10 == 0);
        pcVar11 = (code *)thunk_FUN_01be5118(0x10);
        if (pcVar11 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x10);
        }
        ppiVar37 = (int **)0x1;
        *(int *)pcVar11 = iVar12;
        local_60 = (int **)0x1;
        local_68 = (int **)0x4;
        local_64 = pcVar11;
        while( true ) {
          iVar29 = iVar20;
          pcVar40 = local_64;
          ppiVar34 = local_68;
          if (iVar29 == iVar36 * 0x134 + iVar33) break;
          iVar12 = FUN_012b0bfc(puVar31,*(undefined4 *)(iVar29 + 0x11c));
          iVar20 = iVar29 + 0x134;
          if (iVar12 != 0) {
            if (ppiVar37 == local_68) {
              FUN_006520b4(&local_68,ppiVar37,1,4,4);
              pcVar11 = local_64;
            }
            *(int *)((int)pcVar11 + ppiVar37 * 4) = iVar29;
            ppiVar37 = (int **)((int)ppiVar37 + 1);
            local_60 = ppiVar37;
          }
        }
        FUN_012b2fd4(iVar30,"\n",1);
LAB_012b0740:
        local_68 = ppiVar18;
        local_64 = (code *)iVar30;
        local_60 = (int **)piVar22;
        local_5c = (undefined1 *)iVar19;
        local_58 = iVar7;
        local_54 = (char)iVar38;
        local_53 = uVar1;
        FUN_012acbcc(&local_68,pcVar40,ppiVar37,FUN_012ade88);
        bVar2 = *(byte *)((int)piVar22 + 0x145);
        bVar41 = (bVar2 & 0x80) == 0;
        if (bVar41) {
          bVar2 = *(byte *)((int)piVar22 + 0x149);
        }
        if (!bVar41 || (bVar2 & 0x80) != 0) {
          FUN_012afce4(&local_68,piVar22,param_3);
        }
        FUN_0134aee0(ppiVar34,pcVar40,4,4);
      } while( true );
    }
    if ((*(byte *)((int)piVar17 + 0x146) & 0x80) != 0) goto LAB_012afe64;
    piVar22 = piVar17 + 0x5b;
  } while ((*(byte *)((int)piVar17 + 0x14a) & 0x80) != 0);
  uVar35 = piVar17[1];
  uVar32 = piVar17[0x48];
  uVar13 = piVar17[0x47];
  if (*piVar17 == 0) {
    uVar35 = 999;
  }
  if (puVar23 != (undefined4 *)0x0) {
    puVar25 = puVar23;
    local_c0 = unaff_r11;
    do {
      uVar5 = (uint)*(ushort *)((int)puVar25 + 0xb6);
      puVar8 = puVar25 + 2;
      iVar38 = uVar5 * 0xc;
      uVar6 = 0xffffffff;
      do {
        uVar15 = uVar6;
        if (iVar38 == 0) goto LAB_012afe40;
        uVar6 = puVar8[-1];
        uVar24 = (uint)(uVar35 < uVar6);
        uVar14 = (uint)(uVar35 >= uVar6 && uVar35 != uVar6);
        if (uVar35 == uVar6) {
          uVar24 = puVar8[1];
          uVar6 = uVar24;
          if (uVar32 < uVar24) {
            uVar6 = uVar32;
          }
          iVar7 = FUN_01bed842(uVar13,*puVar8,uVar6);
          uVar14 = 0;
          if (iVar7 == 0) {
            iVar7 = uVar32 - uVar24;
          }
          uVar24 = (uint)(iVar7 < 0);
          if (0 < iVar7) {
            uVar14 = 1;
          }
        }
        iVar38 = iVar38 + -0xc;
        puVar8 = puVar8 + 3;
        uVar6 = uVar15 + 1;
      } while (uVar14 - uVar24 == 1);
      uVar5 = uVar6;
      if ((uVar14 - uVar24 & 0xff) == 0) {
        puVar25[uVar15 + 0x23] = piVar17;
        goto LAB_012afd34;
      }
LAB_012afe40:
      if (local_c0 == 0) goto LAB_012afea0;
      local_c0 = local_c0 - 1;
      puVar25 = (undefined4 *)puVar25[uVar5 + 0x2e];
    } while( true );
  }
  local_a4 = (undefined4 *)FUN_016c90f4();
  *(undefined2 *)((int)local_a4 + 0xb6) = 1;
  local_a4[0x22] = piVar17;
  *local_a4 = 0;
  local_a4[1] = uVar35;
  local_a4[2] = uVar13;
  local_a4[3] = uVar32;
  local_a0 = 0;
  goto LAB_012b045c;
LAB_012afe64:
  piVar22 = piVar17 + 0x5b;
  goto LAB_012afd34;
LAB_012afea0:
  uVar3 = *(ushort *)((int)puVar25 + 0xb6);
  uVar6 = (uint)uVar3;
  if (uVar6 < 0xb) {
    puVar39 = puVar25 + uVar5 * 3 + 1;
    if (uVar6 < uVar5 + 1) {
      *puVar39 = uVar35;
      puVar39[1] = uVar13;
      puVar39[2] = uVar32;
    }
    else {
      FUN_01bed864(puVar25 + (uVar5 + 1) * 3 + 1,puVar39,(uVar6 - uVar5) * 0xc);
      puVar39[1] = uVar13;
      puVar39[2] = uVar32;
      *puVar39 = uVar35;
      FUN_01bed864(puVar25 + uVar5 + 0x23,puVar25 + uVar5 + 0x22,(uVar6 - uVar5) * 4);
    }
    puVar25[uVar5 + 0x22] = piVar17;
    *(ushort *)((int)puVar25 + 0xb6) = uVar3 + 1;
  }
  else {
    uVar6 = 4;
    bVar41 = false;
    if (4 < uVar5) {
      if (uVar5 == 5) {
        uVar6 = 5;
      }
      else {
        if (uVar5 == 6) {
          uVar6 = 5;
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 - 7;
          uVar6 = 6;
        }
        bVar41 = true;
      }
    }
    puVar8 = (undefined4 *)FUN_016c90f4();
    *(undefined2 *)((int)puVar8 + 0xb6) = 0;
    *puVar8 = 0;
    uVar15 = ~uVar6 + (uint)*(ushort *)((int)puVar25 + 0xb6);
    *(short *)((int)puVar8 + 0xb6) = (short)uVar15;
    piVar16 = puVar25 + uVar6 * 3 + 1;
    local_98 = (int **)*piVar16;
    local_94 = piVar16[1];
    local_90 = (int *)piVar16[2];
    if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
    }
    local_c0 = puVar25[uVar6 + 0x22];
    FUN_01bed4e2(puVar8 + 1,puVar25 + (uVar6 + 1) * 3 + 1,uVar15 * 0xc);
    FUN_01bed4e2(puVar8 + 0x22,puVar25 + uVar6 + 0x23,uVar15 * 4);
    *(short *)((int)puVar25 + 0xb6) = (short)uVar6;
    local_68 = local_98;
    local_64 = (code *)local_94;
    local_60 = (int **)local_90;
    puVar21 = puVar8;
    if (!bVar41) {
      puVar21 = puVar25;
    }
    uVar3 = *(ushort *)((int)puVar21 + 0xb6);
    puVar39 = puVar21 + uVar5 * 3 + 1;
    if (uVar5 < uVar3) {
      iVar38 = uVar3 - uVar5;
      FUN_01bed864(puVar21 + (uVar5 + 1) * 3 + 1,puVar39,iVar38 * 0xc);
      puVar39[1] = uVar13;
      puVar39[2] = uVar32;
      *puVar39 = uVar35;
      FUN_01bed864(puVar21 + uVar5 + 0x23,puVar21 + uVar5 + 0x22,iVar38 * 4);
    }
    else {
      *puVar39 = uVar35;
      puVar39[1] = uVar13;
      puVar39[2] = uVar32;
    }
    puVar21[uVar5 + 0x22] = piVar17;
    *(ushort *)((int)puVar21 + 0xb6) = uVar3 + 1;
    local_30 = local_68;
    iStack_2c = (int)local_64;
    piStack_28 = (int *)local_60;
    if (puVar25 != (undefined4 *)0x0) {
      if ((undefined4 *)*puVar25 == (undefined4 *)0x0) {
        local_c4 = 0;
      }
      else {
        local_c4 = 0;
        puVar21 = puVar8;
        puVar26 = (undefined4 *)*puVar25;
        do {
          uVar3 = *(ushort *)((int)puVar26 + 0xb6);
          uVar13 = (uint)*(ushort *)(puVar25 + 0x2d);
          local_50 = local_30;
          iStack_4c = iStack_2c;
          piStack_48 = piStack_28;
          if (uVar3 < 0xb) {
            FUN_012b0dc0(puVar26,uVar13,&local_50,local_c0,puVar21);
            goto LAB_012b0474;
          }
          bVar41 = false;
          uVar32 = 4;
          if (4 < uVar13) {
            if (uVar13 == 5) {
              uVar32 = 5;
            }
            else if (uVar13 == 6) {
              bVar41 = true;
              uVar13 = 0;
              uVar32 = 5;
            }
            else {
              uVar13 = uVar13 - 7;
              bVar41 = true;
              uVar32 = 6;
            }
          }
          puVar8 = (undefined4 *)FUN_016c90d4();
          *(undefined2 *)((int)puVar8 + 0xb6) = 0;
          *puVar8 = 0;
          uVar35 = ~uVar32 + (uint)*(ushort *)((int)puVar26 + 0xb6);
          *(short *)((int)puVar8 + 0xb6) = (short)uVar35;
          piVar17 = puVar26 + uVar32 * 3 + 1;
          local_98 = (int **)*piVar17;
          local_94 = piVar17[1];
          local_90 = (int *)piVar17[2];
          if (0xb < uVar35) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar35,0xb,&DAT_01d2ff10);
          }
          uVar9 = puVar26[uVar32 + 0x22];
          FUN_01bed4e2(puVar8 + 1,puVar26 + (uVar32 + 1) * 3 + 1,uVar35 * 0xc);
          FUN_01bed4e2(puVar8 + 0x22,puVar26 + uVar32 + 0x23,uVar35 * 4);
          *(short *)((int)puVar26 + 0xb6) = (short)uVar32;
          local_68 = local_98;
          local_64 = (code *)local_94;
          local_60 = (int **)local_90;
          uVar35 = (uint)*(ushort *)((int)puVar8 + 0xb6);
          iVar38 = uVar35 + 1;
          if (0xb < uVar35) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar38,0xc,&DAT_01d2ff20);
          }
          if (uVar3 - uVar32 != iVar38) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          local_c4 = local_c4 + 1;
          FUN_01bed4e2(puVar8 + 0x2e,puVar26 + uVar32 + 0x2f,iVar38 * 4);
          uVar32 = 0;
          do {
            puVar25 = (undefined4 *)(puVar8 + 0x2e)[uVar32];
            *(short *)(puVar25 + 0x2d) = (short)uVar32;
            *puVar25 = puVar8;
            if (uVar35 <= uVar32) break;
            uVar32 = uVar32 + 1;
          } while (uVar32 <= uVar35);
          local_30 = local_68;
          iStack_2c = (int)local_64;
          piStack_28 = (int *)local_60;
          puVar25 = puVar8;
          if (!bVar41) {
            puVar25 = puVar26;
          }
          FUN_012b0dc0(puVar25,uVar13,&local_50,local_c0,puVar21);
          local_40 = local_30;
          iStack_3c = iStack_2c;
          piStack_38 = piStack_28;
          puVar27 = (undefined4 *)*puVar26;
          puVar25 = puVar26;
          puVar21 = puVar8;
          puVar26 = puVar27;
          local_c0 = uVar9;
        } while (puVar27 != (undefined4 *)0x0);
      }
      local_50 = local_30;
      iStack_4c = iStack_2c;
      piStack_48 = piStack_28;
      if (puVar23 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      puVar25 = (undefined4 *)FUN_016c90d4();
      puVar25[0x2e] = puVar23;
      *(undefined2 *)((int)puVar25 + 0xb6) = 0;
      *puVar25 = 0;
      if (0xfffffffe < unaff_r11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *puVar23 = puVar25;
      *(undefined2 *)(puVar23 + 0x2d) = 0;
      local_a4 = puVar25;
      local_a0 = unaff_r11 + 1;
      if (local_c4 != unaff_r11) {
        uVar9 = 0x30;
LAB_012b08c4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(local_e0,uVar9,local_dc);
      }
      uVar13 = (uint)*(ushort *)((int)puVar25 + 0xb6);
      if (10 < uVar13) {
        uVar9 = 0x20;
        local_e0 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
        local_dc = &DAT_01d305d8;
        goto LAB_012b08c4;
      }
      uVar4 = (undefined2)(uVar13 + 1);
      *(undefined2 *)((int)puVar25 + 0xb6) = uVar4;
      puVar25[uVar13 * 3 + 1] = local_50;
      puVar25[uVar13 * 3 + 2] = iStack_4c;
      puVar25[uVar13 * 3 + 3] = piStack_48;
      (puVar25 + 0x2e)[uVar13 + 1] = puVar8;
      puVar25[uVar13 + 0x22] = local_c0;
      *(undefined2 *)(puVar8 + 0x2d) = uVar4;
      *puVar8 = puVar25;
LAB_012b045c:
      puVar23 = local_a4;
      unaff_r11 = local_a0;
      goto LAB_012b0474;
    }
  }
LAB_012b0474:
  iVar20 = iVar20 + 1;
  local_9c = iVar20;
  goto LAB_012afd34;
}

