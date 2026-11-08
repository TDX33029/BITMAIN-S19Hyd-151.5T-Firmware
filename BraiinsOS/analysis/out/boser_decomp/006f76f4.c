// FUN_006f76f4 @ 006f76f4 size=2084 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f76f4(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  char *pcVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  undefined4 uVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int *local_24c;
  int *local_248;
  int *local_244;
  int *local_240;
  int *local_23c;
  int *local_238;
  int *local_220;
  undefined4 local_21c;
  undefined4 local_218;
  int *local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  int *local_1e8;
  int *local_1e4;
  int *local_1e0;
  int *local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  int *local_1cc;
  int *local_1c8;
  int *local_1c4;
  int *local_1c0;
  int *local_1bc;
  int local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int local_174;
  undefined8 local_170;
  int *piStack_168;
  int *piStack_164;
  int *piStack_160;
  int *local_158;
  int *piStack_154;
  int *piStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 local_138;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *local_120;
  int *piStack_11c;
  int *piStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104 [3];
  undefined4 local_f8;
  undefined8 local_e8;
  int *piStack_e0;
  int *piStack_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int *piStack_c4;
  int *piStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *local_a8;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *piStack_80;
  int *piStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined1 auStack_54 [20];
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar13 = *(undefined8 **)(param_2 + 0x20);
  uVar2 = CONCAT44(local_218,local_21c);
  local_170 = CONCAT44(local_170._4_4_,(undefined4)local_170);
  do {
    FUN_006fb748(&local_184,param_2);
    iVar6 = local_174;
    uVar5 = uStack_178;
    uVar4 = uStack_17c;
    uVar3 = local_180;
    iVar18 = local_184;
    if (local_184 == 0) {
LAB_006f7e00:
      param_1[0x19] = 0x80000000;
      return;
    }
    uVar24 = *(undefined4 *)(param_2 + 0x1c);
    uVar28 = FUN_0070093c(uVar24,local_184,local_174);
    uVar14 = FUN_006fb3b4(iVar18,iVar6);
    FUN_006fb414(local_104,iVar18,uVar3,uVar4,uVar5,iVar6 + 1,uVar14);
    FUN_006fb748(&local_40,local_104);
    if (local_40 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c06400);
    }
    local_c8 = local_40;
    piStack_c4 = local_3c;
    piStack_c0 = local_38;
    local_bc = uStack_34;
    uStack_b8 = uStack_30;
    FUN_006fdf4c(&local_a8,&local_c8,uVar24);
    piVar11 = local_98;
    piVar9 = local_9c;
    piVar8 = local_a0;
    piVar7 = local_a4;
    piVar22 = local_1e8;
    piVar23 = local_1e0;
    piVar25 = local_1e4;
    piVar27 = local_1f8;
    if (local_a8 == (int *)&DAT_00000009) {
      FUN_006fb748(&local_a8,local_104);
      piVar12 = local_98;
      piVar10 = local_9c;
      piVar20 = local_a0;
      piVar21 = local_a4;
      piVar19 = local_a8;
      if (local_a8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c06410);
      }
      piVar17 = (int *)local_a8[4];
      if (piVar17 <= local_98) {
LAB_006f7f18:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(local_98,piVar17,&DAT_01c062d0,piVar19);
      }
      pcVar15 = (char *)(local_a8[3] + (int)local_98 * 0x14);
      iVar18 = 8;
      if (*pcVar15 != '\0') {
        iVar18 = 0x10;
      }
      piVar26 = *(int **)(pcVar15 + iVar18);
      piVar16 = (int *)FUN_006fb3b4(local_a8,local_98);
      piVar17 = (int *)piVar19[4];
      if (piVar17 <= piVar16) {
        local_98 = piVar16;
        goto LAB_006f7f18;
      }
      pcVar15 = (char *)(piVar19[3] + (int)piVar16 * 0x14);
      iVar18 = 8;
      if (*pcVar15 != '\0') {
        iVar18 = 0x10;
      }
      piVar17 = *(int **)(pcVar15 + iVar18);
      if (piVar17 < piVar26) goto LAB_006f7ee8;
      if (piVar26 != (int *)0x0) {
        if (piVar26 < piVar20) {
          if (*(char *)((int)piVar21 + (int)piVar26) < -0x40) goto LAB_006f7ee8;
        }
        else if (piVar26 != piVar20) goto LAB_006f7ee8;
      }
      if (piVar17 != (int *)0x0) {
        if (piVar17 < piVar20) {
          if (*(char *)((int)piVar21 + (int)piVar17) < -0x40) goto LAB_006f7ee8;
        }
        else if (piVar17 != piVar20) {
LAB_006f7ee8:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(piVar21,piVar20,piVar26,piVar17,&DAT_01c064f0);
        }
      }
      FUN_006fc200(&local_a8,(undefined1 *)((int)piVar21 + (int)piVar26),(int)piVar17 - (int)piVar26
                  );
      if ((char)local_a0 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c06480);
      }
      local_40 = local_a8;
      local_3c = local_a4;
      local_38 = local_a0;
      uVar29 = FUN_0070093c(uVar24,piVar19,piVar12);
      piVar12 = local_38;
      piVar20 = local_3c;
      piVar21 = local_40;
      FUN_006f6e98(piVar19,piVar10);
      local_d8 = piVar12;
      piStack_e0 = piVar21;
      piStack_dc = piVar20;
      local_e8 = uVar29;
      FUN_00700408(&local_a8,local_104,uVar24);
      piVar19 = local_a4;
      if (local_a8 == (int *)&DAT_00000009) {
        local_cc = local_9c;
        local_d0 = local_a0;
        local_d4 = local_a4;
        FUN_006fa58c(&local_68,local_104,0x2c);
        iVar6 = local_58;
        uVar5 = uStack_5c;
        uVar4 = uStack_60;
        uVar3 = local_64;
        iVar18 = local_68;
        if (local_68 == 0) {
          local_1d4 = (int *)0x80000007;
        }
        else {
          uVar14 = FUN_006fb3b4(local_68,local_58);
          FUN_006fb414(&local_40,iVar18,uVar3,uVar4,uVar5,iVar6 + 1,uVar14);
          FUN_006fa500(auStack_54,&local_40);
          FUN_006ff5dc(&local_a8,auStack_54,uVar24);
          piVar20 = local_88;
          local_1d0 = local_8c;
          local_1c8 = local_90;
          local_1cc = local_94;
          local_1c4 = local_98;
          piVar21 = local_9c;
          local_1bc = local_a0;
          local_1d4 = (int *)0x80000007;
          if (local_a8 != (int *)0x2) {
            if (((uint)local_a8 & 1) != 0) {
              local_1c0 = local_a4;
              local_23c = local_8c;
              FUN_00b96a8c(&local_d4);
              local_248 = local_1cc;
              local_24c = local_1c8;
              local_244 = local_1c4;
              local_240 = piVar21;
              local_238 = local_1bc;
              goto LAB_006f7af4;
            }
            local_238 = local_a0;
            local_240 = local_9c;
            local_244 = local_98;
            local_248 = local_94;
            local_24c = local_90;
            local_23c = local_8c;
            local_c8 = local_84;
            piStack_c4 = piStack_80;
            piStack_c0 = piStack_7c;
            local_bc = local_78;
            uStack_b8 = uStack_74;
            uStack_b4 = uStack_70;
            uStack_b0 = uStack_6c;
            local_1d4 = local_88;
          }
        }
        local_120 = local_c8;
        piStack_11c = piStack_c4;
        piStack_118 = piStack_c0;
        local_114 = local_bc;
        uStack_110 = uStack_b8;
        uStack_10c = uStack_b4;
        uStack_108 = uStack_b0;
        piStack_130 = piStack_e0;
        piStack_12c = piStack_dc;
        piStack_128 = local_d8;
        local_1cc = piVar9;
        local_1d8 = local_d0;
        local_1dc = local_cc;
        local_1c8 = piVar11;
        local_1c4 = piVar8;
        local_1d0 = local_238;
        piVar20 = local_240;
        piVar21 = piVar7;
        piVar22 = local_24c;
        piVar23 = local_244;
        piVar25 = local_248;
        piVar27 = local_23c;
        local_138 = local_e8;
      }
      else {
        local_1c0 = local_a8;
        local_1bc = local_a4;
        local_1c4 = local_9c;
        local_1cc = local_98;
        piVar20 = local_8c;
        piVar21 = local_a0;
        local_1d0 = local_90;
        local_1c8 = local_94;
LAB_006f7af4:
        uVar28 = CONCAT44(local_1bc,local_1c0);
        FUN_006f654c(&piStack_e0);
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar18 + -1;
        if (iVar18 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar9,piVar11);
        }
        piVar19 = (int *)&DAT_80000000;
        local_1d4 = local_1ec;
        local_1d8 = local_1f0;
        local_1dc = local_1f4;
      }
    }
    else {
      local_1c8 = local_94;
      piVar19 = (int *)&DAT_80000000;
      local_1c4 = local_9c;
      local_1d0 = local_90;
      local_1d4 = local_1ec;
      local_1d8 = local_1f0;
      local_1cc = local_98;
      local_1dc = local_1f4;
      uVar28 = CONCAT44(local_a4,local_a8);
      piVar20 = local_8c;
      piVar21 = local_a0;
    }
    FUN_006f6e98(local_104[0],local_f8);
    if (piVar19 == (int *)&DAT_80000000) {
      FUN_006f6e10(puVar13);
      piVar19 = (int *)&DAT_80000000;
      *puVar13 = uVar28;
      *(int **)(puVar13 + 1) = piVar21;
      *(int **)((int)puVar13 + 0xc) = local_1c4;
      *(int **)(puVar13 + 2) = local_1cc;
      *(int **)((int)puVar13 + 0x14) = local_1c8;
      *(int **)(puVar13 + 3) = local_1d0;
      *(int **)((int)puVar13 + 0x1c) = piVar20;
      local_1c8 = local_220;
      local_138 = local_170;
LAB_006f7da0:
      local_218 = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_21c = (undefined4)uVar2;
      if (piVar19 != (int *)&DAT_80000000) {
        param_1[6] = local_214;
        param_1[0xb] = local_1f8;
        param_1[5] = local_1c8;
        *param_1 = local_21c;
        param_1[8] = local_1e0;
        param_1[1] = local_218;
        param_1[9] = local_1e4;
        param_1[2] = local_20c;
        param_1[10] = local_1e8;
        param_1[3] = local_208;
        param_1[7] = local_210;
        param_1[0xc] = local_1ec;
        param_1[4] = local_204;
        param_1[0xd] = local_158;
        param_1[0xe] = piStack_154;
        param_1[0xf] = piStack_150;
        param_1[0x10] = local_14c;
        param_1[0x11] = uStack_148;
        param_1[0x12] = uStack_144;
        param_1[0x13] = uStack_140;
        *(undefined8 *)(param_1 + 0x14) = local_138;
        param_1[0x16] = piStack_168;
        param_1[0x17] = piStack_164;
        param_1[0x18] = piStack_160;
        param_1[0x19] = piVar19;
        param_1[0x1a] = local_1f0;
        param_1[0x1b] = local_1f4;
        return;
      }
      goto LAB_006f7e00;
    }
    local_158 = local_120;
    piStack_154 = piStack_11c;
    piStack_150 = piStack_118;
    local_14c = local_114;
    uStack_148 = uStack_110;
    uStack_144 = uStack_10c;
    uStack_140 = uStack_108;
    piStack_168 = piStack_130;
    piStack_164 = piStack_12c;
    piStack_160 = piStack_128;
    local_210 = piVar20;
    local_20c = piVar21;
    local_1f8 = piVar27;
    local_1e8 = piVar22;
    local_1e4 = piVar25;
    local_1e0 = piVar23;
    uVar2 = uVar28;
    if (piVar19 != (int *)&DAT_80000001) {
      local_204 = local_1cc;
      local_208 = local_1c4;
      local_1ec = local_1d4;
      local_214 = local_1d0;
      local_1f0 = local_1d8;
      local_1f4 = local_1dc;
      goto LAB_006f7da0;
    }
    local_220 = local_1c8;
    local_204 = local_1cc;
    local_208 = local_1c4;
    local_1ec = local_1d4;
    local_214 = local_1d0;
    local_1f0 = local_1d8;
    local_1f4 = local_1dc;
    local_170 = local_138;
  } while( true );
}

