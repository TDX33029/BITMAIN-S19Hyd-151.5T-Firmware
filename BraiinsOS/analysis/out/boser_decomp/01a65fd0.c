// FUN_01a65fd0 @ 01a65fd0 size=4776 calls_out=41 calls_in=19
// strings: Too many route parameters.Only one parameter is allowed per path segmentParameters must be registered with a valid nameCatch-all parameters are only allowed at the end of a routeDaemonShutdown

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a65fd0(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  undefined *puVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  undefined4 uVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  uint uVar31;
  int *piVar32;
  int iVar33;
  uint uVar34;
  int *piVar35;
  char cVar36;
  int *piVar37;
  bool bVar38;
  undefined8 uVar39;
  int local_190;
  int *local_184;
  int **local_180;
  int *local_17c;
  int *local_178;
  int local_174;
  int *local_164;
  int *local_160;
  int *local_15c;
  int *local_158;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  int *piStack_12c;
  int *local_128;
  int *piStack_124;
  int *piStack_120;
  int *local_118;
  int *local_114;
  int *piStack_110;
  int *piStack_10c;
  int *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int *local_f0;
  int iStack_ec;
  int iStack_e8;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int *local_9c;
  int local_98;
  int local_94;
  int *local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined2 local_80;
  int *local_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *local_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *piStack_44;
  int *local_40;
  int *local_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int local_2c;
  
  uVar24 = 0;
  if (param_4 < 0) {
LAB_01a65fec:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar24,param_4);
  }
  if (param_4 == 0) {
    local_190 = 0;
    iVar10 = 1;
  }
  else {
    uVar24 = 1;
    iVar10 = FUN_01298504(param_4,1);
    local_190 = param_4;
    if (iVar10 == 0) goto LAB_01a65fec;
  }
  FUN_01bed4e2(iVar10,param_3,param_4);
  FUN_006666fc(&local_164,iVar10,param_4);
  piVar35 = (int *)&SUB_00000004;
  piVar29 = (int *)0x0;
  local_c0 = (int *)0x0;
  local_c4 = (int *)&SUB_00000004;
  local_c8 = (int *)0x0;
  if (local_15c != (int *)0x0) {
    piVar21 = (int *)0x0;
    iVar33 = -1;
    piVar27 = (int *)0x0;
    piVar29 = local_15c;
    do {
      cVar36 = *(char *)((int)local_160 + (int)piVar27);
      if (cVar36 == '}') {
        if (((int *)((int)piVar27 + 1) < piVar29) &&
           (*(char *)((int)local_160 + (int)piVar27 + 1) == '}')) goto LAB_01a660ec;
      }
      else if ((cVar36 == '{') &&
              (((int *)((int)piVar27 + 1) < piVar29 &&
               (*(char *)((int)local_160 + (int)piVar27 + 1) == '{')))) {
LAB_01a660ec:
        if (piVar29 <= piVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_0066651c(piVar27,piVar29,&DAT_01cfc618);
        }
        FUN_01bed864((char *)((int)local_160 + (int)piVar27),(int)local_160 + (int)piVar27 + 1,
                     (int)piVar29 + iVar33);
        if (piVar21 == local_c8) {
          FUN_01a54b48(&local_c8);
          piVar35 = local_c4;
        }
        piVar35[(int)piVar21] = (int)piVar27;
        piVar21 = (int *)((int)piVar21 + 1);
        piVar29 = (int *)((int)piVar29 + -1);
        local_c0 = piVar21;
      }
      piVar27 = (int *)((int)piVar27 + 1);
      iVar33 = iVar33 + -1;
    } while (piVar27 < piVar29);
  }
  local_154 = local_160;
  piVar35 = (int *)0x0;
  local_158 = local_164;
  local_14c = local_c8;
  local_148 = local_c4;
  local_144 = local_c0;
  local_d8 = (int *)0x0;
  local_e0 = (int *)0x0;
  local_180 = &local_148;
  cVar36 = 'a';
  local_17c = (int *)&SUB_00000004;
  local_dc = (int *)&SUB_00000004;
  local_150 = piVar29;
LAB_01a661b8:
  local_178 = local_d8;
  piVar30 = local_144;
  piVar27 = local_148;
  piVar21 = local_150;
  piVar29 = local_154;
  iVar33 = (int)local_154 + 1;
  do {
    if (piVar21 < piVar35) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(piVar35,piVar21,piVar21,&DAT_01cfc608);
    }
    local_b8 = (int *)-(int)piVar35;
    local_c0 = piVar27;
    local_c4 = (int *)((int)piVar21 - (int)piVar35);
    local_c8 = (int *)((int)piVar29 + (int)piVar35);
    local_bc = piVar30;
    FUN_015a6508(&local_50,&local_c8);
    piVar26 = piStack_44;
    piVar32 = local_48;
    piVar8 = local_14c;
    piVar28 = local_158;
    piVar23 = local_4c;
    if (local_50 != (int *)0x0) {
LAB_01a66500:
      piVar29 = piVar23;
      FUN_0065f3f4(&local_e0);
      FUN_0134bd64(local_158,local_154);
      FUN_0134aee0(local_14c,local_148,4,4);
      goto LAB_01a66528;
    }
    if (((uint)local_4c & 1) == 0) {
      local_118 = local_e0;
      local_114 = local_dc;
      piStack_110 = local_d8;
      if (local_158 == (int *)&DAT_80000000) {
        piVar32 = piVar21;
        piVar26 = local_14c;
        goto LAB_01a66528;
      }
      local_128 = local_e0;
      piStack_124 = local_dc;
      piStack_120 = local_d8;
      local_140 = local_158;
      local_134 = local_14c;
      iVar33 = param_2[0x14];
      param_2[0x21] = param_2[0x21] + 1;
      bVar38 = iVar33 == 0;
      if (bVar38) {
        iVar33 = param_2[0x1d];
      }
      local_108 = (int *)0x0;
      local_13c = piVar29;
      local_138 = piVar21;
      local_130 = local_148;
      piStack_12c = local_144;
      local_118 = piVar29;
      local_114 = piVar21;
      piStack_110 = local_148;
      piStack_10c = local_144;
      if (!bVar38 || iVar33 != 0) {
        local_180 = &local_9c;
        piVar27 = param_2 + 0x10;
        piVar35 = local_d8;
        piVar32 = param_2;
        goto LAB_01a66950;
      }
      local_b8 = (int *)0x0;
      local_c8 = piVar29;
      local_c4 = piVar21;
      local_c0 = local_148;
      local_bc = local_144;
      FUN_01a646f4(&local_50,param_2 + 0x10,&local_c8,param_5);
      piVar32 = local_4c;
      if (local_50 != (int *)0x80000003) goto LAB_01a66f94;
      piVar29 = local_4c + 0xe;
      FUN_0070e718(piVar29);
      *piVar29 = (int)local_128;
      piVar32[0xf] = (int)piStack_124;
      piVar32[0x10] = (int)piStack_120;
      *(undefined1 *)((int)param_2 + 0x89) = 0;
      piVar26 = piVar8;
      goto LAB_01a670dc;
    }
    piVar28 = (int *)((int)local_48 + (int)piVar35);
    piVar35 = (int *)((int)piStack_44 + (int)piVar35);
    uVar11 = (int)piVar35 - (int)piVar28;
    if (piVar35 < piVar28) {
      uVar11 = 0;
    }
    if (uVar11 < 2) {
      piVar23 = (int *)&DAT_80000001;
      goto LAB_01a66500;
    }
    if ((piVar35 < piVar28) || (piVar21 < piVar35)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(piVar28,piVar35,piVar21,&DAT_01cfc658);
    }
    if ((uint)((int)piStack_44 - (int)local_48) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(1,(int)piStack_44 - (int)local_48,&DAT_01cfc668);
    }
  } while (*(char *)(iVar33 + (int)piVar28) == '*');
  piVar29 = (int *)thunk_FUN_01be5118(3);
  if (piVar29 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,3);
  }
  *(undefined1 *)((int)piVar29 + 2) = 0x7d;
  *(undefined1 *)piVar29 = 0x7b;
  *(char *)((int)piVar29 + 1) = cVar36;
  local_c0 = (int *)&DAT_00000003;
  local_c8 = (int *)&DAT_00000003;
  local_c4 = piVar29;
  FUN_015a6374(&local_78,&local_158,piVar28,piVar35,&local_c8);
  local_4c = piStack_74;
  local_48 = piStack_70;
  piStack_44 = piStack_6c;
  local_40 = local_68;
  local_3c = piStack_64;
  piStack_38 = piStack_60;
  piStack_34 = piStack_5c;
  uStack_30 = uStack_58;
  local_2c = 0;
  if (piStack_74 == local_78) {
    local_50 = local_78;
  }
  else {
    local_50 = (int *)((int)local_78 + 1);
    if (local_50 != piStack_74) {
      local_50 = (int *)((int)local_78 + 2);
      uVar24 = 0;
      piVar29 = (int *)(((int)piStack_74 - (int)local_50) + 1);
      if ((int)piStack_74 - (int)local_50 == -1) {
        piVar29 = (int *)&DAT_ffffffff;
      }
      if (piVar29 < &DAT_00000009) {
        piVar29 = (int *)&DAT_00000008;
      }
      if (-1 < (int)piVar29) {
        uVar3 = *(undefined1 *)((int)local_78 + 1);
        uVar24 = 1;
        local_184 = (int *)FUN_01298504(piVar29,1);
        piVar35 = local_4c;
        if (local_184 != (int *)0x0) {
          *(undefined1 *)local_184 = uVar3;
          local_138 = (int *)&DAT_00000001;
          local_c8 = local_50;
          local_c4 = local_4c;
          local_c0 = local_48;
          local_bc = piStack_44;
          local_b8 = local_40;
          local_b4 = local_3c;
          local_b0 = piStack_38;
          local_ac = piStack_34;
          local_a8 = uStack_30;
          local_a4 = local_2c;
          piVar21 = local_50;
          iVar33 = local_2c;
          piVar27 = local_184;
          local_140 = piVar29;
          local_13c = local_184;
          do {
            piVar29 = local_138;
            if (iVar33 == 0) {
              if (piVar21 == piVar35) goto LAB_01a66440;
              piVar30 = (int *)((int)piVar21 + 1);
            }
            else {
              do {
                piVar30 = piVar21;
                if (piVar30 == piVar35) goto LAB_01a66444;
                piVar21 = (int *)((int)piVar30 + 1);
                iVar33 = iVar33 + -1;
              } while (iVar33 != 0);
              if (piVar21 == piVar35) goto LAB_01a66440;
              piVar30 = (int *)((int)piVar30 + 2);
            }
            iVar33 = *piVar21;
            if (local_138 == local_140) {
              iVar17 = ((int)piVar35 - (int)piVar30) + 1;
              if ((int)piVar35 - (int)piVar30 == -1) {
                iVar17 = -1;
              }
              FUN_006520b4(&local_140,local_138,iVar17,1,1);
              piVar27 = local_13c;
            }
            *(char *)((int)piVar27 + (int)piVar29) = (char)iVar33;
            local_138 = (int *)((int)piVar29 + 1);
            iVar33 = 0;
            piVar21 = piVar30;
          } while( true );
        }
        local_184 = piVar29;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar24,local_184);
    }
  }
  FUN_015a5f7c(&local_50);
  piVar27 = (int *)&DAT_00000001;
  piVar29 = (int *)0x0;
  iVar33 = 0;
  goto LAB_01a66460;
LAB_01a66950:
  piVar23 = piVar27 + 0xe;
  local_178 = piVar27 + 2;
  piVar30 = piVar29;
LAB_01a66974:
  piVar37 = (int *)piVar27[4];
  piVar29 = piVar21;
  piVar9 = (int *)0x0;
  if (piVar37 < piVar21) {
    piVar29 = piVar37;
  }
LAB_01a6698c:
  piVar26 = piVar9;
  if (piVar26 == piVar29) {
    piVar26 = piVar29;
  }
  else {
    if (piVar26 == piVar37) {
      puVar19 = &DAT_01d2cb98;
      piVar30 = piVar37;
      goto LAB_01a67194;
    }
    if (*(char *)((int)piVar30 + (int)piVar26) == *(char *)(piVar27[3] + (int)piVar26)) {
      iVar33 = FUN_015a603c(&local_118,piVar26);
      iVar17 = piVar27[6];
      uVar11 = piVar27[7] & 0x1ffffff0;
      piVar35 = (int *)(piVar27[7] & 0xf);
      puVar16 = (undefined4 *)(iVar17 + uVar11 * 4);
      do {
        piVar9 = (int *)((int)piVar26 + 1);
        if (uVar11 == 0) {
          iVar17 = (int)piVar35 << 2;
          goto LAB_01a66a2c;
        }
        iVar25 = 0;
        piVar32 = (int *)0x0;
        do {
          iVar1 = iVar25 * 4;
          iVar25 = iVar25 + 1;
          piVar32 = (int *)((uint)piVar32 | (uint)(*(int **)(iVar17 + iVar1) == piVar26));
        } while (iVar25 != 0x10);
        uVar11 = uVar11 - 0x10;
        iVar17 = iVar17 + 0x40;
      } while (piVar32 == (int *)0x0);
      goto LAB_01a66a44;
    }
  }
  goto LAB_01a66a70;
  while( true ) {
    piVar20 = (int *)*puVar16;
    iVar17 = iVar17 + -4;
    puVar16 = puVar16 + 1;
    if (piVar20 == piVar26) break;
LAB_01a66a2c:
    if (iVar17 == 0) {
      if (iVar33 == 0) goto LAB_01a6698c;
      goto LAB_01a66a70;
    }
  }
LAB_01a66a44:
  if (iVar33 == 0) goto LAB_01a66a70;
  goto LAB_01a6698c;
LAB_01a66a70:
  if (piVar37 <= piVar26) goto LAB_01a66c80;
  local_b8 = (int *)-(int)piVar26;
  local_c0 = (int *)piVar27[6];
  local_bc = (int *)piVar27[7];
  local_c4 = (int *)((int)piVar37 - (int)piVar26);
  local_c8 = (int *)(piVar27[3] + (int)piVar26);
  FUN_015a60ec(&local_78,&local_c8);
  local_50 = local_78;
  local_4c = piStack_74;
  local_48 = piStack_70;
  piStack_44 = piStack_6c;
  local_40 = local_68;
  local_3c = piStack_64;
  piVar29 = (int *)*piVar27;
  piVar35 = (int *)piVar27[1];
  *piVar27 = 0;
  FUN_015e8ad4(&local_100,piVar27[9],piVar27[10]);
  local_f0 = (int *)piVar27[0xb];
  iStack_ec = piVar27[0xc];
  iStack_e8 = piVar27[0xd];
  piVar27[0xd] = 0;
  piVar27[0xc] = 4;
  piVar27[0xb] = 0;
  local_e0 = (int *)*piVar23;
  local_dc = (int *)piVar27[0xf];
  local_d8 = (int *)piVar27[0x10];
  piVar27[0x10] = 0;
  piVar27[0xf] = 4;
  piVar27[0xe] = 0;
  local_c0 = local_50;
  local_bc = local_4c;
  local_b8 = local_48;
  local_b4 = piStack_44;
  local_b0 = local_40;
  local_ac = local_3c;
  local_84 = piVar27[0x11] + -1;
  local_a8 = local_100;
  local_a4 = uStack_fc;
  local_a0 = uStack_f8;
  local_80 = CONCAT11(3,(char)piVar27[0x12]);
  local_c8 = piVar29;
  local_c4 = piVar35;
  local_9c = local_f0;
  local_98 = iStack_ec;
  local_94 = iStack_e8;
  local_90 = local_e0;
  local_8c = (int)local_dc;
  local_88 = (int)local_d8;
  iVar33 = thunk_FUN_01be5118(0x4c);
  if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x4c);
  }
  FUN_01bed4e2(iVar33,&local_c8,0x4c);
  FUN_01a646b8(piVar27 + 0xb);
  piVar27[0xb] = 1;
  piVar27[0xc] = iVar33;
  piVar27[0xd] = 1;
  puVar14 = (undefined1 *)thunk_FUN_01be5118();
  if (puVar14 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,1);
  }
  if ((int *)piVar27[4] <= piVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(piVar26,(int *)piVar27[4],&DAT_01d2cb88);
  }
  iVar33 = piVar27[8];
  iVar17 = piVar27[9];
  *puVar14 = *(undefined1 *)(piVar27[3] + (int)piVar26);
  FUN_019bb7e0(iVar33,iVar17);
  piVar27[8] = 1;
  piVar27[9] = (int)puVar14;
  piVar27[10] = 1;
  if ((int *)piVar27[4] < piVar26) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,piVar26,(int *)piVar27[4],&DAT_01cfc5f8);
  }
  local_e0 = (int *)piVar27[3];
  local_d8 = (int *)piVar27[6];
  iStack_d4 = piVar27[7];
  uStack_d0 = 0;
  local_dc = piVar26;
  FUN_015a60ec(&local_50,&local_e0);
  FUN_01a64694(local_178);
  *local_178 = (int)local_50;
  piVar27[3] = (int)local_4c;
  piVar27[4] = (int)local_48;
  piVar27[5] = (int)piStack_44;
  piVar27[6] = (int)local_40;
  piVar27[7] = (int)local_3c;
  *(undefined1 *)(piVar27 + 0x12) = 0;
  piVar30 = local_118;
  piVar21 = local_114;
  piVar35 = local_40;
  piVar32 = local_3c;
  goto LAB_01a66974;
LAB_01a66c80:
  if (piVar21 == piVar26) {
    if (*piVar27 != 0) {
      FUN_01a7630c(&local_c8,&local_140,piVar30,piVar21,piVar27);
      goto LAB_01a67118;
    }
    *piVar27 = 1;
    piVar27[1] = param_5;
  }
  else {
    if (piVar21 < piVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(piVar26,piVar21,piVar21,&DAT_01cfc608);
    }
    piVar21 = (int *)((int)piVar21 - (int)piVar26);
    piVar29 = (int *)((int)piVar30 + (int)piVar26);
    cVar36 = *(char *)((int)piVar27 + 0x49);
    local_108 = (int *)((int)local_108 - (int)piVar26);
    bVar7 = *(byte *)((int)piVar30 + (int)piVar26);
    piVar26 = (int *)(uint)bVar7;
    piVar30 = local_108;
    if (cVar36 == '\x01') {
      piVar30 = (int *)piVar27[0xd];
    }
    local_118 = piVar29;
    local_114 = piVar21;
    if (cVar36 == '\x01' && piVar30 == (int *)&DAT_00000001) {
      piVar27 = (int *)piVar27[0xc];
      piVar27[0x11] = piVar27[0x11] + 1;
      goto LAB_01a66950;
    }
    piVar30 = (int *)piVar27[10];
    if (piVar30 != (int *)0x0) {
      piVar32 = (int *)0x0;
      piVar35 = (int *)piVar27[9];
      do {
        if ((piVar26 == (int *)(uint)*(byte *)((int)piVar35 + (int)piVar32)) &&
           ((piVar26 != (int *)0x7d && piVar26 != (int *)0x7b ||
            (iVar33 = FUN_015a603c(&local_118,0), iVar33 != 0)))) {
          piVar30 = (int *)FUN_01a64ce0(piVar27,piVar32);
          piVar37 = (int *)piVar27[0xd];
          if (piVar30 < piVar37) {
            piVar27 = (int *)((int)piVar30 * 0x4c + piVar27[0xc]);
            goto LAB_01a66950;
          }
          puVar19 = &DAT_01d2cb78;
          goto LAB_01a67194;
        }
        piVar32 = (int *)((int)piVar32 + 1);
      } while (piVar30 != piVar32);
    }
    if (piVar26 == (int *)0x7b) {
      iVar33 = FUN_015a603c(&local_118,0);
      if (!(cVar36 == '\x02' || iVar33 == 0)) goto LAB_01a66e7c;
LAB_01a66d48:
      if ((char)piVar27[0x12] != '\0') {
        bVar38 = piVar27[0xd] == 0;
        if (!bVar38) {
          piVar35 = (int *)(piVar27[0xd] * 0x4c + piVar27[0xc]);
          piVar26 = piVar35 + -0x13;
          bVar38 = piVar26 == (int *)0x0;
        }
        if (bVar38) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2cb58);
        }
        piVar35[-2] = piVar35[-2] + 1;
        if (((int *)piVar35[-0xf] <= piVar21) &&
           (iVar33 = thunk_FUN_01bed842(piVar29,piVar35[-0x10]), iVar33 != 0)) {
          FUN_01a7630c(&local_c8,&local_140,piVar29,piVar21,piVar26);
          goto LAB_01a67118;
        }
        piVar27 = piVar26;
        if (*(char *)((int)piVar35 + -3) == '\x02') goto LAB_01a66fd4;
        goto LAB_01a66950;
      }
      local_c8 = local_118;
      local_c4 = local_114;
      local_c0 = piStack_110;
      local_bc = piStack_10c;
      local_b8 = local_108;
      FUN_01a646f4(&local_50,piVar27,&local_c8,param_5);
    }
    else {
      if (cVar36 == '\x02') goto LAB_01a66d48;
LAB_01a66e7c:
      if (piVar30 == (int *)piVar27[8]) {
        FUN_006666a0();
      }
      *(byte *)(piVar27[9] + (int)piVar30) = bVar7;
      piVar27[10] = (int)piVar30 + 1;
      local_84 = 0;
      local_ac = (int *)0x0;
      local_b0 = (int *)&SUB_00000004;
      local_b4 = (int *)0x0;
      local_b8 = (int *)0x0;
      local_bc = (int *)&DAT_00000001;
      local_c0 = (int *)0x0;
      local_80 = 0x300;
      local_a0 = 0;
      local_a4 = 1;
      local_a8 = 0;
      local_94 = 0;
      local_98 = 4;
      local_9c = (int *)0x0;
      local_88 = 0;
      local_8c = 4;
      local_90 = (int *)0x0;
      local_c8 = (int *)0x0;
      uVar24 = FUN_01a64bdc(piVar27,&local_c8);
      piVar30 = (int *)FUN_01a64ce0(piVar27,uVar24);
      piVar37 = (int *)piVar27[0xd];
      if (piVar37 <= piVar30) {
        puVar19 = &DAT_01d2cb68;
LAB_01a67194:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(piVar30,piVar37,puVar19);
      }
      local_c8 = local_118;
      local_c4 = local_114;
      local_c0 = piStack_110;
      local_bc = piStack_10c;
      local_b8 = local_108;
      FUN_01a646f4(&local_50,(int)piVar30 * 0x4c + piVar27[0xc],&local_c8,param_5);
    }
    if (local_50 != (int *)0x80000003) goto LAB_01a66f94;
    piVar23 = local_4c + 0xe;
    piVar32 = local_4c;
    piVar26 = piVar8;
  }
  FUN_0070e718(piVar23);
  *piVar23 = (int)local_128;
  piVar23[1] = (int)piStack_124;
  piVar23[2] = (int)piStack_120;
LAB_01a670dc:
  piVar29 = (int *)0x80000003;
  goto LAB_01a6712c;
LAB_01a66fd4:
  FUN_01a7630c(&local_c8,&local_140,piVar29,piVar21,piVar26);
LAB_01a67118:
  piVar29 = local_c8;
  piVar32 = local_c4;
  piVar26 = local_c0;
LAB_01a67124:
  FUN_0070e718(&local_128);
LAB_01a6712c:
  FUN_019bb7e0(piVar28,local_13c);
  FUN_0134c054(piVar8,local_130,4,4);
LAB_01a66528:
  if (piVar29 != (int *)0x80000003) {
    *param_1 = piVar29;
    param_1[1] = piVar32;
    param_1[2] = piVar26;
    FUN_019bb7e0(local_190,iVar10);
    return;
  }
  uVar39 = FUN_0071155c(param_4);
  uVar11 = (uint)((ulonglong)uVar39 >> 0x20);
  piVar29 = (int *)uVar39;
  FUN_01bed4e2(piVar29 + 2,iVar10,param_4);
  FUN_019bb7e0(local_190,iVar10);
  do {
    iVar10 = *piVar29;
    bVar38 = (bool)hasExclusiveAccess(piVar29);
  } while (!bVar38);
  *piVar29 = iVar10 + 1;
  if (iVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x1a6729c);
    (*pcVar2)();
  }
  uVar12 = FUN_01656218(param_2[4],param_2[5],param_2[6],param_2[7],param_5);
  if (param_2[2] == 0) {
    FUN_01a67a80(param_2,param_2 + 4);
  }
  puVar13 = (uint *)*param_2;
  uVar34 = param_2[1];
  bVar38 = false;
  local_174 = 0;
  uVar22 = uVar12;
  do {
    uVar22 = uVar34 & uVar22;
    uVar18 = *(uint *)((int)puVar13 + uVar22);
    uVar15 = uVar18 ^ (uVar12 >> 0x19) * 0x1010101;
    uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
    while (uVar15 != 0) {
      uVar31 = uVar15 >> 8;
      uVar4 = uVar15 >> 0x10;
      uVar5 = uVar15 >> 0x18;
      uVar6 = uVar15 << 0x18;
      uVar15 = uVar15 - 1 & uVar15;
      uVar31 = uVar22 + ((uint)LZCOUNT(uVar6 | (uVar31 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | uVar5
                                      ) >> 3) & uVar34;
      if (param_5 == puVar13[uVar31 * -3 + -3]) {
        piVar35 = (int *)puVar13[uVar31 * -3 + -2];
        uVar12 = puVar13[uVar31 * -3 + -1];
        *(undefined8 *)(puVar13 + uVar31 * -3 + -2) = uVar39;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar35;
          bVar38 = (bool)hasExclusiveAccess(piVar35);
        } while (!bVar38);
        *piVar35 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar35,uVar12);
        }
        goto LAB_01a6671c;
      }
    }
    uVar15 = uVar18 & 0x80808080;
    if (bVar38) {
LAB_01a66674:
      if ((uVar15 & uVar18 << 1) != 0) goto LAB_01a6704c;
      bVar38 = true;
    }
    else {
      if (uVar15 != 0) {
        local_178 = (int *)(uVar22 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                                    (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18)
                                     >> 3) & uVar34);
        goto LAB_01a66674;
      }
      bVar38 = false;
    }
    local_174 = local_174 + 4;
    uVar22 = local_174 + uVar22;
  } while( true );
LAB_01a66f94:
  piVar29 = local_50;
  piVar32 = local_4c;
  piVar26 = local_48;
  goto LAB_01a67124;
LAB_01a6704c:
  uVar22 = (uint)*(char *)((int)puVar13 + (int)local_178);
  if (-1 < (int)uVar22) {
    uVar22 = *puVar13 & 0x80808080;
    uVar15 = LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                     uVar22 >> 0x18);
    uVar22 = (uint)*(byte *)((int)puVar13 + (uVar15 >> 3));
    local_178 = (int *)(uVar15 >> 3);
  }
  iVar10 = param_2[2];
  iVar33 = param_2[3];
  bVar7 = (byte)(uVar12 >> 0x19);
  *(byte *)((int)puVar13 + (int)local_178) = bVar7;
  param_2[2] = iVar10 - (uVar22 & 1);
  param_2[3] = iVar33 + 1;
  *(byte *)((int)puVar13 + (uVar34 & (uint)(local_178 + -1)) + 4) = bVar7;
  puVar13[(int)local_178 * -3 + -3] = param_5;
  *(undefined8 *)(puVar13 + (int)local_178 * -3 + -2) = uVar39;
LAB_01a6671c:
  uVar12 = FUN_00701e18(param_2[0xc],param_2[0xd],param_2[0xe],param_2[0xf],uVar39);
  if (param_2[10] == 0) {
    FUN_01a674dc(param_2 + 8,param_2 + 0xc);
  }
  puVar13 = (uint *)param_2[8];
  uVar34 = param_2[9];
  iVar10 = 0;
  bVar38 = false;
  uVar22 = uVar12;
  do {
    uVar22 = uVar34 & uVar22;
    uVar18 = *(uint *)((int)puVar13 + uVar22);
    uVar15 = uVar18 ^ (uVar12 >> 0x19) * 0x1010101;
    for (uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff; uVar15 != 0;
        uVar15 = uVar15 - 1 & uVar15) {
      uVar31 = uVar22 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) & uVar34
      ;
      if ((uVar11 == puVar13[uVar31 * -3 + -2]) &&
         (iVar33 = thunk_FUN_01bed842(piVar29 + 2,puVar13[uVar31 * -3 + -3] + 8), iVar33 == 0)) {
        puVar13[uVar31 * -3 + -1] = param_5;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar29;
          bVar38 = (bool)hasExclusiveAccess(piVar29);
        } while (!bVar38);
        *piVar29 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar29,uVar11);
        }
        goto LAB_01a668a4;
      }
    }
    uVar15 = uVar18 & 0x80808080;
    if (bVar38) {
LAB_01a6683c:
      if ((uVar15 & uVar18 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar13 + (int)local_180);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar13 & 0x80808080;
          uVar22 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar13 + (uVar22 >> 3));
          local_180 = (int **)(uVar22 >> 3);
        }
        iVar10 = param_2[10];
        iVar33 = param_2[0xb];
        bVar7 = (byte)(uVar12 >> 0x19);
        *(byte *)((int)puVar13 + (int)local_180) = bVar7;
        param_2[10] = iVar10 - (uVar11 & 1);
        param_2[0xb] = iVar33 + 1;
        *(byte *)((int)puVar13 + (uVar34 & (uint)(local_180 + -1)) + 4) = bVar7;
        *(undefined8 *)(puVar13 + (int)local_180 * -3 + -3) = uVar39;
        puVar13[(int)local_180 * -3 + -1] = param_5;
LAB_01a668a4:
        *param_1 = 0x80000003;
        return;
      }
      bVar38 = true;
    }
    else {
      if (uVar15 != 0) {
        local_180 = (int **)(uVar22 + ((uint)LZCOUNT((uVar18 & 0x80) << 0x18 |
                                                     (uVar15 >> 8 & 0xff) << 0x10 |
                                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18)
                                      >> 3) & uVar34);
        goto LAB_01a6683c;
      }
      bVar38 = false;
    }
    iVar10 = iVar10 + 4;
    uVar22 = iVar10 + uVar22;
  } while( true );
LAB_01a66440:
  piVar30 = piVar21;
LAB_01a66444:
  local_a4 = 0;
  local_c8 = piVar30;
  FUN_015a5f7c(&local_c8);
  iVar33 = (int)piVar29 + -1;
  piVar29 = local_140;
LAB_01a66460:
  if (local_178 == local_e0) {
    FUN_0199b2b0(&local_e0);
    local_17c = local_dc;
  }
  piVar35 = local_17c + (int)local_178 * 3;
  *piVar35 = (int)piVar29;
  local_d8 = (int *)((int)local_178 + 1);
  piVar35[1] = (int)piVar27;
  piVar35[2] = iVar33;
  if (local_178 == (int *)&DAT_00000019) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Too many route parameters.Only one parameter is allowed per path segmentParameters must be registered with a valid nameCatch-all parameters are only allowed at the end of a routeDaemonShutdown"
                 ,0x35,&DAT_01cfc678);
  }
  cVar36 = cVar36 + '\x01';
  piVar35 = (int *)((int)piVar28 + 3);
  goto LAB_01a661b8;
}

