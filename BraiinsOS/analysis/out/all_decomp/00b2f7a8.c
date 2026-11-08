// FUN_00b2f7a8 @ 00b2f7a8 size=5160 calls_out=38 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x00b30430) */
/* WARNING: Removing unreachable block (ram,0x00b30840) */
/* WARNING: Removing unreachable block (ram,0x00b2ffc8) */
/* WARNING: Removing unreachable block (ram,0x00b2ffd4) */
/* WARNING: Removing unreachable block (ram,0x00b30034) */
/* WARNING: Removing unreachable block (ram,0x00b30048) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00b2f7a8(uint ********param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  uint *****pppppuVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint ********ppppppppuVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint ********ppppppppuVar13;
  uint *****pppppuVar14;
  undefined4 extraout_r1;
  uint ******ppppppuVar15;
  uint *******pppppppuVar16;
  undefined1 *puVar17;
  uint ******ppppppuVar18;
  uint *******pppppppuVar19;
  uint ******ppppppuVar20;
  uint ********ppppppppuVar21;
  uint ********unaff_r5;
  char *pcVar22;
  uint ********ppppppppuVar23;
  undefined1 *puVar24;
  undefined *puVar25;
  uint ******ppppppuVar26;
  uint uVar27;
  uint *******pppppppuVar28;
  uint ******ppppppuVar29;
  uint ********unaff_r11;
  uint *******pppppppuVar30;
  bool bVar31;
  undefined4 extraout_s1;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  uint ********local_184;
  uint ******local_178;
  uint ******local_174;
  undefined8 local_170;
  uint ******ppppppuStack_168;
  uint ******ppppppuStack_164;
  uint ********local_160;
  uint ********local_15c;
  uint ********local_158;
  uint *******pppppppuStack_154;
  uint ********local_150;
  uint ********local_14c;
  uint *****local_148;
  uint ********local_144;
  uint ********local_140;
  uint ********local_13c;
  uint ********local_138;
  uint ********local_134;
  uint ********local_130;
  uint *******local_12c;
  uint ********local_128;
  uint *******local_124;
  uint ********local_120;
  uint ********local_118;
  uint ********local_114;
  uint ********local_110;
  uint *******local_10c;
  uint ********local_108;
  uint *******local_104;
  uint ********local_100;
  uint *******pppppppuStack_fc;
  uint *******local_f8;
  uint ******ppppppuStack_f4;
  uint ******ppppppuStack_f0;
  uint ******ppppppuStack_ec;
  uint ******local_e8;
  uint ******ppppppuStack_e4;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_dc;
  uint ******ppppppuStack_d8;
  uint ******ppppppuStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 *local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined1 local_a8;
  uint ********local_a0;
  uint ********local_9c;
  uint ********local_98;
  uint *******local_94;
  uint ********local_90;
  uint *******pppppppuStack_8c;
  uint ********local_4c;
  uint ********local_48;
  uint *****local_44;
  
  ppppppppuVar23 = param_1 + 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3b)) {
  case 0:
    pppppppuVar30 = param_1[0x39];
    *(undefined1 *)((int)param_1 + 0xed) = 1;
    param_1[0x3a] = pppppppuVar30;
    pppppppuVar28 = param_1[0x38];
    *ppppppppuVar23 = *param_1;
    param_1[7] = param_1[1];
    param_1[8] = param_1[2];
    param_1[9] = param_1[3];
    param_1[10] = param_1[4];
    param_1[0xb] = param_1[5];
    ppppppuVar15 = pppppppuVar30[0x2e];
    pppppppuVar19 = *ppppppppuVar23;
    puVar17 = (undefined1 *)0x2;
    puVar24 = (undefined1 *)0x2;
    if ((uint)(ppppppuVar15 < &DAT_00000005) <= (uint)-(int)pppppppuVar30[0x2f]) {
      puVar24 = (undefined1 *)((int)ppppppuVar15 + -5);
    }
    if ((uint)(pppppppuVar19 < &DAT_00000005) <= (uint)-(int)param_1[7]) {
      puVar17 = (undefined1 *)((int)pppppppuVar19 + -5);
    }
    if (puVar24 != puVar17) goto LAB_00b2f8d0;
    if (puVar24 != (undefined1 *)0x0) {
      if (puVar24 == (undefined1 *)0x1) {
        if (*(double *)(pppppppuVar30 + 0x30) != *(double *)(param_1 + 8)) {
LAB_00b2f8d0:
          if ((DAT_018d9130 < 3) && (DAT_018d9a04 != '\0')) {
            if (DAT_018d9a04 == '\x01') {
LAB_00b2f92c:
              puVar25 = &DAT_018ae394;
              DataMemoryBarrier(0xb);
              pcVar22 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar22 = DAT_018daa74, puVar25 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar22 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar8 = (**(code **)(puVar25 + 0x14))(pcVar22,DAT_018d99fc);
              if (iVar8 == 0) goto LAB_00b2fb18;
            }
            else if (DAT_018d9a04 != '\x02') {
              cVar6 = FUN_0169ac90(&DAT_018d99fc);
              if (cVar6 == '\0') goto LAB_00b2fb18;
              if (cVar6 != '\x02') goto LAB_00b2f92c;
            }
            local_104 = (uint *******)DAT_018d99fc;
            local_9c = (uint ********)DAT_018d99fc[8];
            if (local_9c == (uint ********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186fdb0);
            }
            local_160 = (uint ********)&local_a0;
            local_98 = (uint ********)DAT_018d99fc[9];
            local_94 = (uint *******)DAT_018d99fc[10];
            local_15c = (uint ********)&local_150;
            local_44 = DAT_018d99fc + 7;
            local_a0 = (uint ********)*local_44;
            local_4c = (uint ********)&local_160;
            local_14c = (uint ********)&local_138;
            local_90 = (uint ********)0x0;
            local_158 = (uint ********)&DAT_018abb78;
            local_48 = (uint ********)&DAT_00000001;
            local_138 = (uint ********)(param_1[0x3a] + 0x2e);
            local_114 = (uint ********)0x0;
            local_150 = (uint ********)&DAT_0057848b;
            local_108 = (uint ********)&local_4c;
            local_12c = (uint *******)FUN_008d5b00;
            local_134 = (uint ********)FUN_008d5b00;
            local_118 = (uint ********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar22 = s_SetGloba_00414c05;
            puVar25 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar22 = DAT_018daa74, puVar25 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar22 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            local_130 = ppppppppuVar23;
            iVar8 = (**(code **)(puVar25 + 0x28))(pcVar22,&local_118);
            if (iVar8 != 0) {
              (**(code **)(puVar25 + 0x2c))(pcVar22,&local_118);
            }
            pppppppuVar19 = *ppppppppuVar23;
            pppppppuVar30 = param_1[7];
            if (pppppppuVar19 != (uint *******)&DAT_00000005 || pppppppuVar30 != (uint *******)0x0)
            goto LAB_00b2fafc;
LAB_00b2fb34:
            pppppppuVar30 = (uint *******)0x0;
            pppppppuVar19 = (uint *******)&DAT_00000005;
          }
          else {
LAB_00b2fb18:
            pppppppuVar19 = *ppppppppuVar23;
            pppppppuVar30 = param_1[7];
            if (pppppppuVar19 == (uint *******)&DAT_00000005 && pppppppuVar30 == (uint *******)0x0)
            goto LAB_00b2fb34;
LAB_00b2fafc:
            local_10c = param_1[0xb];
            local_118 = (uint ********)param_1[8];
            local_114 = (uint ********)param_1[9];
            local_110 = (uint ********)param_1[10];
          }
          pppppppuVar16 = param_1[0x3a];
          pppppppuVar16[0x2e] = (uint ******)pppppppuVar19;
          pppppppuVar16[0x2f] = (uint ******)pppppppuVar30;
          pppppppuVar16[0x30] = (uint ******)local_118;
          pppppppuVar16[0x31] = (uint ******)local_114;
          pppppppuVar16[0x32] = (uint ******)local_110;
          pppppppuVar16[0x33] = (uint ******)local_10c;
          pppppppuVar19 = param_1[0x3a];
          if (*(char *)(pppppppuVar19 + 0x2c) == '\0') {
LAB_00b2fbbc:
            local_174 = (uint ******)0x0;
            local_178 = (uint ******)&DAT_00000005;
          }
          else {
            puVar17 = (undefined1 *)0x2;
            ppppppuVar15 = pppppppuVar19[0x2e];
            if ((uint)(ppppppuVar15 < &DAT_00000005) <= (uint)-(int)pppppppuVar19[0x2f]) {
              puVar17 = (undefined1 *)((int)ppppppuVar15 + -5);
            }
            if (puVar17 == (undefined1 *)0x0) goto LAB_00b2fbbc;
            if (puVar17 == (undefined1 *)0x1) {
              local_170 = *(undefined8 *)(pppppppuVar19 + 0x30);
              local_174 = (uint ******)0x0;
              local_178 = (uint ******)&DAT_00000007;
            }
            else {
              local_178 = pppppppuVar19[0x2e];
              local_174 = pppppppuVar19[0x2f];
              local_170 = *(undefined8 *)(pppppppuVar19 + 0x30);
              ppppppuStack_168 = pppppppuVar19[0x32];
              ppppppuStack_164 = pppppppuVar19[0x33];
            }
          }
          FUN_00d07744(&local_a0,pppppppuVar28 + 0x12d,&local_178);
          if (local_a0 != (uint ********)&DAT_0000000b || local_9c != (uint ********)0x0) {
            local_118 = local_a0;
            local_114 = local_9c;
            local_110 = local_98;
            local_10c = local_94;
            local_108 = local_90;
            local_104 = pppppppuStack_8c;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("BUG: broadcast failed",0x15,&local_118,&DAT_018703a8,&DAT_0186fc90);
          }
          *(undefined1 *)((int)param_1 + 0xed) = 0;
          FUN_00c822ec(param_1[0x3a]);
          pppppppuVar19 = (uint *******)&DAT_00000005;
          pppppppuVar30 = (uint *******)0x0;
          if (*ppppppppuVar23 != (uint *******)&DAT_00000005 || param_1[7] != (uint *******)0x0) {
            local_10c = param_1[0xb];
            local_118 = (uint ********)param_1[8];
            local_114 = (uint ********)param_1[9];
            local_110 = (uint ********)param_1[10];
            pppppppuVar19 = *ppppppppuVar23;
            pppppppuVar30 = param_1[7];
          }
          local_160 = local_118;
          local_15c = local_114;
          local_158 = local_110;
          pppppppuStack_154 = local_10c;
          param_1[0xc] = pppppppuVar19;
          *(undefined1 *)(param_1 + 0x1b) = 0;
          param_1[0xd] = pppppppuVar30;
          param_1[0xe] = (uint *******)local_118;
          param_1[0xf] = (uint *******)local_114;
          param_1[0x10] = (uint *******)local_110;
          param_1[0x11] = local_10c;
          param_1[0x18] = pppppppuVar28;
          goto LAB_00b2fc84;
        }
      }
      else {
        iVar8 = FUN_010e15b8(pppppppuVar30 + 0x2e,ppppppppuVar23,
                             -((int)param_1[7] + (uint)(pppppppuVar19 >= &DAT_00000005)));
        if (iVar8 == 0) goto LAB_00b2f8d0;
      }
    }
    ppppppppuVar23 = (uint ********)0x0;
LAB_00b30634:
    FUN_00c822ec(param_1[0x3a]);
    local_13c = ppppppppuVar23;
LAB_00b3063c:
    *(undefined1 *)((int)param_1 + 0xed) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186fdc0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186fdc0);
  case 3:
    uVar7 = (&switchD_00b2f88c::switchdataD_00b2f890)[*(byte *)(param_1 + 0x1b)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 0x1b)) {
    case 0:
      pppppppuVar28 = param_1[0x18];
LAB_00b2fc84:
      param_1[0x19] = pppppppuVar28;
      *(undefined4 *)((int)param_1 + 0x6d) = 0;
      unaff_r5 = (uint ********)param_1[0xf];
      param_1[0x12] = param_1[0xc];
      param_1[0x13] = param_1[0xd];
      param_1[0x14] = param_1[0xe];
      param_1[0x15] = (uint *******)unaff_r5;
      param_1[0x16] = param_1[0x10];
      param_1[0x17] = param_1[0x11];
      param_1[0x1e] = pppppppuVar28 + 0x11a;
      param_1[0x1f] = (uint *******)0xffffffff;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186fce0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186fce0);
    case 4:
      ppppppppuVar21 = (uint ********)param_1[0x36];
      ppppppppuVar13 = (uint ********)param_1[0x37];
      ppppppppuVar9 = param_1;
      goto LAB_00b305c0;
    }
    local_184 = param_1 + 0x1b;
    ppppppppuVar21 = param_1 + 0x1e;
    pppppppuVar28 = (uint *******)FUN_00c8101c(ppppppppuVar21,param_2);
    if (pppppppuVar28 == (uint *******)0x0) {
      *(undefined1 *)local_184 = 3;
LAB_00b30b50:
      *(undefined1 *)(param_1 + 0x3b) = 3;
      uVar12 = 1;
      goto LAB_00b30b5c;
    }
    param_1[0x1a] = pppppppuVar28;
    *(undefined1 *)((int)param_1 + 0x6f) = 1;
    if (param_1[0x1e] != (uint *******)0x0) {
      FUN_00c8204c(param_1[0x1e],param_1[0x1f],1);
      pppppppuVar28 = param_1[0x1a];
    }
    if (pppppppuVar28[8] == (uint ******)0x0) {
      ppppppppuVar21 = (uint ********)FUN_00c70f88("Tuner not running, cannot set parameters",0x28);
      cVar6 = *(char *)((int)param_1 + 0x6f);
joined_r0x00b30000:
      if (cVar6 != '\0') {
        FUN_00c822ec(param_1[0x1a]);
      }
      *(undefined1 *)((int)param_1 + 0x6f) = 0;
    }
    else {
      local_f8 = (uint *******)0x0;
      local_110 = (uint ********)0x0;
      local_114 = (uint ********)&DAT_00000001;
      local_118 = (uint ********)&DAT_00000001;
      ppppppppuVar9 = (uint ********)thunk_FUN_016d4a50(0x24);
      if (ppppppppuVar9 == (uint ********)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x24);
      }
      *ppppppppuVar9 = (uint *******)local_118;
      ppppppppuVar9[1] = (uint *******)local_114;
      ppppppppuVar9[2] = (uint *******)local_110;
      ppppppppuVar9[3] = local_10c;
      ppppppppuVar9[4] = (uint *******)local_108;
      ppppppppuVar9[5] = local_104;
      ppppppppuVar9[6] = (uint *******)local_100;
      ppppppppuVar9[7] = pppppppuStack_fc;
      ppppppppuVar9[8] = local_f8;
      do {
        pppppppuVar19 = *ppppppppuVar9;
        bVar31 = (bool)hasExclusiveAccess(ppppppppuVar9);
      } while (!bVar31);
      *ppppppppuVar9 = (uint *******)((int)pppppppuVar19 + 1);
      if ((int)pppppppuVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb30c5c);
        (*pcVar1)();
      }
      unaff_r11 = param_1 + 0x12;
      local_138 = (uint ********)*unaff_r11;
      local_134 = (uint ********)param_1[0x13];
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(undefined1 *)((int)param_1 + 0x6e) = 1;
      if (local_138 != (uint ********)&DAT_00000005 || local_134 != (uint ********)0x0) {
        local_118 = (uint ********)param_1[0x14];
        local_114 = (uint ********)param_1[0x15];
        local_110 = (uint ********)param_1[0x16];
        local_10c = param_1[0x17];
      }
      *(undefined1 *)((int)param_1 + 0x6d) = 1;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      local_130 = local_118;
      local_12c = (uint *******)local_114;
      pppppppuVar19 = param_1[0x19];
      local_128 = local_110;
      local_124 = local_10c;
      uVar33 = *(undefined8 *)(pppppppuVar19 + 0x14);
      uVar32 = *(undefined8 *)(pppppppuVar19 + 0x9a);
      uVar34 = *(undefined8 *)(pppppppuVar19 + 0x9c);
      local_144 = ppppppppuVar9;
      local_13c = ppppppppuVar9;
      local_120 = ppppppppuVar9;
      puVar10 = (undefined2 *)thunk_FUN_016d4a50(2);
      if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,2);
      }
      uVar12 = FUN_016d5298((int)uVar32);
      local_ac = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar12)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1,uVar12);
      local_a8 = *(undefined1 *)((int)pppppppuVar19 + 0x61);
      *puVar10 = 0x100;
      local_118 = (uint ********)pppppppuVar19[0x8a];
      local_114 = (uint ********)pppppppuVar19[0x8b];
      local_110 = (uint ********)pppppppuVar19[0x8c];
      local_10c = (uint *******)pppppppuVar19[0x8d];
      local_108 = (uint ********)pppppppuVar19[0x8e];
      local_104 = (uint *******)pppppppuVar19[0x8f];
      local_100 = (uint ********)pppppppuVar19[0x90];
      pppppppuStack_fc = (uint *******)pppppppuVar19[0x91];
      local_f8 = (uint *******)pppppppuVar19[0x92];
      ppppppuStack_f4 = pppppppuVar19[0x93];
      ppppppuStack_f0 = pppppppuVar19[0x94];
      ppppppuStack_ec = pppppppuVar19[0x95];
      local_e8 = pppppppuVar19[6];
      ppppppuStack_e4 = pppppppuVar19[7];
      ppppppuStack_e0 = pppppppuVar19[8];
      ppppppuStack_dc = pppppppuVar19[9];
      ppppppuStack_d8 = pppppppuVar19[10];
      ppppppuStack_d4 = pppppppuVar19[0xb];
      local_b0 = 2;
      local_b8 = 2;
      local_d0 = uVar32;
      local_c8 = uVar34;
      local_c0 = uVar33;
      local_b4 = puVar10;
      FUN_008d57c0(&local_a0,unaff_r11,&local_118);
      if (local_a0 != (uint ********)&DAT_80000000) {
        ppppppppuVar21 = (uint ********)FUN_00c7966c(&local_a0);
        ppppppppuVar13 = (uint ********)thunk_FUN_016d3fb4(puVar10);
LAB_00b30984:
        if (ppppppppuVar9 != (uint ********)0x0) {
          ppppppppuVar13 = (uint ********)(uint)*(byte *)((int)param_1 + 0x6d);
        }
        if (ppppppppuVar9 != (uint ********)0x0 && ((uint)ppppppppuVar13 & 1) != 0) {
          ppppppppuVar13 = ppppppppuVar9 + 8;
          pppppppuVar28 = ppppppppuVar9[8];
          do {
            while( true ) {
              pppppppuVar19 = pppppppuVar28;
              if (((uint)pppppppuVar19 & 4) != 0) goto LAB_00b30a18;
              pppppppuVar28 = *ppppppppuVar13;
              if (pppppppuVar28 == pppppppuVar19) break;
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
            }
            DataMemoryBarrier(0xb);
            bVar31 = (bool)hasExclusiveAccess(ppppppppuVar13);
            if (bVar31) {
              *ppppppppuVar13 = (uint *******)((uint)pppppppuVar19 | 2);
            }
            DataMemoryBarrier(0xb);
          } while (!bVar31);
LAB_00b30a18:
          if (((uint)pppppppuVar19 & 5) == 1) {
            (*(code *)ppppppppuVar9[6][2])(ppppppppuVar9[7]);
          }
          DataMemoryBarrier(0xb);
          do {
            ppppppppuVar13 = (uint ********)*ppppppppuVar9;
            bVar31 = (bool)hasExclusiveAccess(ppppppppuVar9);
          } while (!bVar31);
          *ppppppppuVar9 = (uint *******)((int)ppppppppuVar13 + -1);
          if (ppppppppuVar13 == (uint ********)&DAT_00000001) {
            DataMemoryBarrier(0xb);
            ppppppppuVar13 = (uint ********)FUN_008f4380(ppppppppuVar9);
          }
        }
        if (ppppppppuVar9 != (uint ********)0x0) {
          ppppppppuVar13 = (uint ********)(uint)*(byte *)((int)param_1 + 0x6e);
        }
        *(undefined1 *)((int)param_1 + 0x6d) = 0;
        if (ppppppppuVar9 != (uint ********)0x0 && ((uint)ppppppppuVar13 & 1) != 0) {
          ppppppppuVar13 = ppppppppuVar9 + 8;
          do {
            pppppppuVar28 = *ppppppppuVar13;
            bVar31 = (bool)hasExclusiveAccess(ppppppppuVar13);
          } while (!bVar31);
          *ppppppppuVar13 = (uint *******)((uint)pppppppuVar28 | 4);
          DataMemoryBarrier(0xb);
          if (((uint)pppppppuVar28 & 10) == 8) {
            (*(code *)ppppppppuVar9[4][2])(ppppppppuVar9[5]);
          }
          if (((uint)pppppppuVar28 & 2) != 0) {
            pppppppuVar28 = ppppppppuVar9[2];
            pppppppuVar19 = ppppppppuVar9[3];
            ppppppppuVar9[2] = (uint *******)0x0;
            if (pppppppuVar28 != (uint *******)0x0 && pppppppuVar19 != (uint *******)0x0) {
              (*(code *)**pppppppuVar19)(pppppppuVar19);
            }
          }
          DataMemoryBarrier(0xb);
          do {
            pppppppuVar28 = *ppppppppuVar9;
            bVar31 = (bool)hasExclusiveAccess(ppppppppuVar9);
          } while (!bVar31);
          *ppppppppuVar9 = (uint *******)((int)pppppppuVar28 + -1);
          if (pppppppuVar28 == (uint *******)&DAT_00000001) {
            DataMemoryBarrier(0xb);
            FUN_008f4380(ppppppppuVar9);
          }
        }
        *(undefined1 *)((int)param_1 + 0x6e) = 0;
        *(undefined1 *)(param_1 + 0x1c) = 0;
        cVar6 = *(char *)((int)param_1 + 0x6f);
        goto joined_r0x00b30000;
      }
      thunk_FUN_016d3fb4(puVar10);
      *(undefined1 *)((int)param_1 + 0x6d) = 0;
      local_a0 = local_138;
      local_9c = local_134;
      local_98 = local_130;
      local_94 = local_12c;
      local_90 = local_128;
      pppppppuStack_8c = local_124;
      pppppuVar14 = pppppppuVar28[0xb][0x20];
      DataMemoryBarrier(0xb);
      ppppppuVar15 = pppppppuVar28[0xb] + 0x20;
      while (((uint)pppppuVar14 & 1) == 0) {
        if ((uint *****)((int)pppppuVar14 + 2U) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_015bef44();
        }
        pppppuVar5 = *ppppppuVar15;
        if (*ppppppuVar15 == pppppuVar14) {
          DataMemoryBarrier(0xb);
LAB_00b2ff2c:
          bVar31 = (bool)hasExclusiveAccess(ppppppuVar15);
          if (!bVar31) goto code_r0x00b2ff38;
          *ppppppuVar15 = (uint *****)((int)pppppuVar14 + 2U);
          DataMemoryBarrier(0xb);
          ppppppuVar26 = pppppppuVar28[0xb];
          ppppppuVar15 = ppppppuVar26 + 9;
          unaff_r11 = (uint ********)(ppppppuVar26 + 8);
          do {
            pppppuVar14 = *ppppppuVar15;
            bVar31 = (bool)hasExclusiveAccess(ppppppuVar15);
          } while (!bVar31);
          *ppppppuVar15 = (uint *****)((int)pppppuVar14 + 1);
          DataMemoryBarrier(0xb);
          ppppppuVar20 = (uint ******)((uint)pppppuVar14 & 0xfffffff0);
          pppppppuVar28 = *unaff_r11;
          DataMemoryBarrier(0xb);
          if (ppppppuVar20 != pppppppuVar28[0x80]) {
            bVar31 = ((uint)pppppuVar14 & 0xf) <
                     (uint)((int)ppppppuVar20 - (int)pppppppuVar28[0x80]) >> 4;
            pppppppuVar19 = pppppppuVar28;
            do {
              DataMemoryBarrier(0xb);
              pppppppuVar28 = (uint *******)pppppppuVar19[0x81];
              if ((uint *******)pppppppuVar19[0x81] == (uint *******)0x0) {
                ppppppuVar29 = pppppppuVar19[0x80];
                pppppppuVar28 = (uint *******)thunk_FUN_016d4a50(0x210);
                if (pppppppuVar28 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x210);
                }
                pppppppuVar28[0x80] = ppppppuVar29 + 4;
                pppppppuVar16 = pppppppuVar19 + 0x81;
                pppppppuVar28[0x81] = (uint ******)0x0;
                pppppppuVar28[0x82] = (uint ******)0x0;
                pppppppuVar28[0x83] = (uint ******)0x0;
                pppppppuVar30 = (uint *******)*pppppppuVar16;
                if (pppppppuVar30 != (uint *******)0x0) {
LAB_00b30328:
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                  pppppppuVar16 = pppppppuVar30 + 0x81;
                  pppppppuVar28[0x80] = pppppppuVar30[0x80] + 4;
                  ppppppuVar29 = *pppppppuVar16;
                  if (ppppppuVar29 == (uint ******)0x0) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar3 = (bool)hasExclusiveAccess(pppppppuVar16);
                      if (bVar3) {
                        *pppppppuVar16 = (uint ******)pppppppuVar28;
                        bVar3 = true;
                        goto LAB_00b3037c;
                      }
                      ppppppuVar29 = *pppppppuVar16;
                    } while (ppppppuVar29 == (uint ******)0x0);
                  }
LAB_00b30374:
                  do {
                    bVar3 = false;
                    ClearExclusiveLocal();
LAB_00b3037c:
                    while( true ) {
                      DataMemoryBarrier(0xb);
                      if (bVar3) {
                        pppppppuVar28 = pppppppuVar30;
                        goto LAB_00b303d4;
                      }
                      HintYield();
                      pppppppuVar28[0x80] = (uint ******)(ppppppuVar29[0x80] + 4);
                      ppppppuVar18 = ppppppuVar29 + 0x81;
                      ppppppuVar29 = (uint ******)*ppppppuVar18;
                      if (ppppppuVar29 != (uint ******)0x0) break;
                      DataMemoryBarrier(0xb);
                      while (bVar3 = (bool)hasExclusiveAccess(ppppppuVar18), !bVar3) {
                        ppppppuVar29 = (uint ******)*ppppppuVar18;
                        if (ppppppuVar29 != (uint ******)0x0) goto LAB_00b30374;
                      }
                      *ppppppuVar18 = (uint *****)pppppppuVar28;
                      bVar3 = true;
                    }
                  } while( true );
                }
                DataMemoryBarrier(0xb);
                while (bVar3 = (bool)hasExclusiveAccess(pppppppuVar16), !bVar3) {
                  pppppppuVar30 = (uint *******)*pppppppuVar16;
                  if (pppppppuVar30 != (uint *******)0x0) goto LAB_00b30328;
                }
                *pppppppuVar16 = (uint ******)pppppppuVar28;
                DataMemoryBarrier(0xb);
              }
LAB_00b303d4:
              DataMemoryBarrier(0xb);
              if ((bool)(bVar31 & (~(uint)pppppppuVar19[0x82] & 0xffff) == 0)) {
                if (*unaff_r11 == pppppppuVar19) {
                  DataMemoryBarrier(0xb);
                  do {
                    bVar31 = (bool)hasExclusiveAccess(unaff_r11);
                    if (bVar31) {
                      *unaff_r11 = pppppppuVar28;
                      pppppppuVar30 = pppppppuVar19 + 0x82;
                      DataMemoryBarrier(0xb);
                      do {
                        ppppppuVar29 = (uint ******)*ppppppuVar15;
                        bVar31 = (bool)hasExclusiveAccess(ppppppuVar15);
                      } while (!bVar31);
                      *ppppppuVar15 = (uint *****)ppppppuVar29;
                      pppppppuVar19[0x83] = ppppppuVar29;
                      DataMemoryBarrier(0xb);
                      do {
                        bVar31 = (bool)hasExclusiveAccess(pppppppuVar30);
                      } while (!bVar31);
                      *pppppppuVar30 = (uint ******)((uint)*pppppppuVar30 | 0x10000);
                      bVar31 = true;
                      goto LAB_00b302ac;
                    }
                  } while (*unaff_r11 == pppppppuVar19);
                }
                ClearExclusiveLocal();
                bVar31 = false;
              }
              else {
                bVar31 = false;
              }
LAB_00b302ac:
              HintYield();
              pppppppuVar19 = pppppppuVar28;
            } while (pppppppuVar28[0x80] != ppppppuVar20);
          }
          pppppppuVar19 = pppppppuVar28 + ((uint)pppppuVar14 & 0xf) * 8;
          pppppppuVar28 = pppppppuVar28 + 0x82;
          *pppppppuVar19 = (uint ******)local_a0;
          pppppppuVar19[1] = (uint ******)local_9c;
          pppppppuVar19[2] = (uint ******)local_98;
          pppppppuVar19[3] = (uint ******)local_94;
          pppppppuVar19[4] = (uint ******)local_90;
          pppppppuVar19[5] = (uint ******)pppppppuStack_8c;
          pppppppuVar19[6] = (uint ******)ppppppppuVar9;
          DataMemoryBarrier(0xb);
          do {
            bVar31 = (bool)hasExclusiveAccess(pppppppuVar28);
          } while (!bVar31);
          *pppppppuVar28 = (uint ******)((uint)*pppppppuVar28 | 1 << ((uint)pppppuVar14 & 0xf));
          ppppppuVar15 = ppppppuVar26 + 0x12;
          DataMemoryBarrier(0xb);
          do {
            pppppuVar14 = *ppppppuVar15;
            bVar31 = (bool)hasExclusiveAccess(ppppppuVar15);
          } while (!bVar31);
          *ppppppuVar15 = (uint *****)((uint)pppppuVar14 | 2);
          DataMemoryBarrier(0xb);
          if (pppppuVar14 == (uint *****)0x0) {
            pppppuVar14 = ppppppuVar26[0x10];
            ppppppuVar26[0x10] = (uint *****)0x0;
            DataMemoryBarrier(0xb);
            do {
              bVar31 = (bool)hasExclusiveAccess(ppppppuVar15);
            } while (!bVar31);
            *ppppppuVar15 = (uint *****)0x0;
            if (pppppuVar14 != (uint *****)0x0) {
              (*(code *)pppppuVar14[1])(ppppppuVar26[0x11]);
            }
          }
          goto LAB_00b30540;
        }
LAB_00b2fef4:
        pppppuVar14 = pppppuVar5;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      local_118 = local_138;
      local_114 = local_134;
      local_110 = local_130;
      local_10c = local_12c;
      local_108 = local_128;
      local_104 = local_124;
      local_100 = ppppppppuVar9;
      if (local_138 != (uint ********)&DAT_00000007 || local_134 != (uint ********)0x0) {
        ppppppppuVar13 = (uint ********)FUN_00c7b1cc(&local_118);
        goto LAB_00b30980;
      }
LAB_00b30540:
      *(undefined1 *)((int)param_1 + 0x6f) = 0;
      FUN_00c822ec(param_1[0x1a]);
      *(undefined1 *)(param_1 + 0x1e) = 0;
      *(undefined1 *)((int)param_1 + 0x6e) = 0;
      local_4c = ppppppppuVar9;
      FUN_01656eb8(&local_a0,extraout_r1,1,0,0,&DAT_0186fcf0);
      FUN_016dd1aa(&local_114,&local_a0,0x50);
      ppppppppuVar13 = param_1 + 0x20;
      *ppppppppuVar13 = (uint *******)ppppppppuVar9;
      uVar7 = FUN_016dd1aa(param_1 + 0x22,&local_114,0x50);
      param_1[0x36] = (uint *******)ppppppppuVar21;
      param_1[0x37] = (uint *******)ppppppppuVar13;
LAB_00b305c0:
      local_184 = param_1 + 0x1b;
      uVar32 = thunk_FUN_016de0ee(uVar7,0x40);
      unaff_r5 = (uint ********)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
      if (*(char *)(unaff_r5 + 0xe) != '\x01') {
        if (*(char *)(unaff_r5 + 0xe) == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_015f853c(&DAT_018ae900);
        }
        FUN_015e8e6c(unaff_r5,FUN_00bacf28);
        *(undefined1 *)(unaff_r5 + 0xe) = 1;
      }
      cVar6 = *(char *)(unaff_r5 + 0xc);
      bVar31 = cVar6 == '\x01';
      if (bVar31) {
        cVar6 = *(char *)((int)unaff_r5 + 0x31);
      }
      if (bVar31 && cVar6 == '\0') {
        FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
LAB_00b30824:
        *(undefined1 *)local_184 = 4;
        goto LAB_00b30b50;
      }
      if (((uint)unaff_r5[9] & 1) == 0) {
        uVar32 = FUN_0164e918();
        if ((undefined1 *)uVar32 < &SUB_00000002) {
          uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),&DAT_00000001);
        }
      }
      else {
        uVar32 = CONCAT44(unaff_r5[10],unaff_r5[0xb]);
      }
      uVar7 = (uint)((ulonglong)uVar32 >> 0x20);
      pppppppuVar19 = (uint *******)uVar32;
      uVar7 = uVar7 ^ uVar7 << 0x11;
      unaff_r5[10] = pppppppuVar19;
      unaff_r5[9] = (uint *******)&DAT_00000001;
      pppppppuVar28 =
           (uint *******)((uint)pppppppuVar19 >> 0x10 ^ uVar7 >> 7 ^ (uint)pppppppuVar19 ^ uVar7);
      unaff_r5[0xb] = pppppppuVar28;
      unaff_r5 = ppppppppuVar13 + 2;
      bVar2 = *(byte *)ppppppppuVar21;
      uVar7 = (uint)bVar2;
      if ((int)pppppppuVar28 + (int)pppppppuVar19 < 0) {
        unaff_r11 = (uint ********)(uVar7 & 2);
        if ((bVar2 & 2) == 0) {
          iVar8 = FUN_01657fc4(unaff_r5,*param_2);
          if (iVar8 != 0) {
            uVar7 = (uint)*(byte *)ppppppppuVar21;
            goto LAB_00b3077c;
          }
LAB_00b307e0:
          uVar35 = CONCAT44(unaff_r11,2);
          *(byte *)ppppppppuVar21 = *(byte *)ppppppppuVar21 | 2;
        }
        else {
LAB_00b3077c:
          if ((uVar7 & 1) == 0) {
            uVar35 = FUN_00d40494(ppppppppuVar13,param_2);
            if ((int)uVar35 != 2) goto LAB_00b307f4;
            goto LAB_00b30824;
          }
          uVar27 = (uint)unaff_r11 >> 1;
LAB_00b3081c:
          if (uVar27 != 1) goto LAB_00b30824;
          uVar35 = CONCAT44(unaff_r11,3);
        }
      }
      else {
        uVar27 = uVar7 & 1;
        if ((bVar2 & 1) != 0) {
LAB_00b307c4:
          if ((uVar7 & 2) != 0) goto LAB_00b3081c;
          iVar8 = FUN_01657fc4(unaff_r5,*param_2);
          if (iVar8 == 0) goto LAB_00b307e0;
          goto LAB_00b30824;
        }
        uVar35 = FUN_00d40494(ppppppppuVar13,param_2);
        if ((int)uVar35 == 2) {
          uVar7 = (uint)*(byte *)ppppppppuVar21;
          goto LAB_00b307c4;
        }
LAB_00b307f4:
        *(byte *)ppppppppuVar21 = *(byte *)ppppppppuVar21 | 1;
        if ((int)uVar35 == 4) goto LAB_00b30824;
      }
      ppppppppuVar21 = (uint ********)(uVar35 >> 0x20);
      FUN_00b30fcc(param_1 + 0x20);
      iVar8 = (int)uVar35 + -1;
      if ((int)uVar35 == 0) {
        iVar8 = 0;
      }
      if (iVar8 == 0) {
        if ((uVar35 & 1) == 0) {
          if (ppppppppuVar21 == (uint ********)0x0) goto LAB_00b30b84;
          local_118 = (uint ********)0x3;
          local_9c = (uint ********)&DAT_0000001a;
          local_a0 = (uint ********)0x34eeda;
          local_98 = ppppppppuVar21;
          ppppppppuVar13 = (uint ********)FUN_00c70528(&local_a0,&local_118);
        }
        else {
          ppppppppuVar13 = (uint ********)FUN_00c7bd30();
        }
LAB_00b30980:
        ppppppppuVar21 = ppppppppuVar13;
        goto LAB_00b30984;
      }
      if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_0186fd10);
      }
      if ((DAT_018d9130 < 3) &&
         (((DAT_018d99ec - 1 < 2 ||
           ((DAT_018d99ec != 0 && (cVar6 = FUN_0169ac90(&DAT_018d99e4), cVar6 != '\0')))) &&
          (iVar8 = FUN_016949d8(DAT_018d99e4), iVar8 != 0)))) {
        if (*(uint *********)(DAT_018d99e4 + 0x20) == (uint ********)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186fd00);
        }
        local_9c = (uint ********)&local_150;
        local_110 = *(uint *********)(DAT_018d99e4 + 0x24);
        local_10c = *(uint ********)(DAT_018d99e4 + 0x28);
        local_a0 = (uint ********)&local_118;
        local_4c = (uint ********)&local_a0;
        local_48 = (uint ********)&DAT_00000001;
        local_108 = (uint ********)0x0;
        local_98 = (uint ********)&DAT_018abb78;
        local_14c = (uint ********)&DAT_00000057;
        local_150 = (uint ********)0x34eef4;
        local_118 = *(uint *********)(DAT_018d99e4 + 0x1c);
        local_114 = *(uint *********)(DAT_018d99e4 + 0x20);
        local_44 = (uint *****)(DAT_018d99e4 + 0x1c);
        FUN_00b33930(&local_4c);
      }
LAB_00b30b84:
      ppppppppuVar21 = (uint ********)0x0;
      *(undefined1 *)((int)param_1 + 0x6d) = 0;
      *(undefined1 *)((int)param_1 + 0x6e) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)((int)param_1 + 0x6f) = 0;
    }
    local_184 = param_1 + 0x1b;
    *(undefined1 *)local_184 = 1;
    if (ppppppppuVar21 != (uint ********)0x0) {
      local_13c = ppppppppuVar21;
      if ((DAT_018d9130 < 4) && (DAT_018d99f8 != '\0')) {
        puVar25 = &DAT_018ae394;
        pcVar22 = s_SetGloba_00414c05;
        if (DAT_018d99f8 == '\x01') {
LAB_00b300d0:
          DataMemoryBarrier(0xb);
          pcVar11 = pcVar22;
          puVar4 = puVar25;
          if ((DAT_018dd984 == 2) &&
             (pcVar11 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar8 = (**(code **)(puVar4 + 0x14))(pcVar11,DAT_018d99f0);
          if (iVar8 == 0) goto LAB_00b30620;
        }
        else if (DAT_018d99f8 != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d99f0);
          if (cVar6 == '\0') goto LAB_00b30620;
          if (cVar6 != '\x02') goto LAB_00b300d0;
        }
        if ((uint ********)DAT_018d99f0[8] == (uint ********)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186fdd0);
        }
        local_4c = (uint ********)&local_a0;
        local_98 = (uint ********)DAT_018d99f0[9];
        local_94 = (uint *******)DAT_018d99f0[10];
        local_48 = (uint ********)&local_144;
        local_148 = DAT_018d99f0 + 7;
        local_a0 = (uint ********)*local_148;
        local_150 = (uint ********)&local_4c;
        local_140 = (uint ********)&local_138;
        local_90 = (uint ********)0x0;
        local_44 = (uint *****)&DAT_018abb78;
        local_14c = (uint ********)&DAT_00000001;
        local_12c = (uint *******)FUN_00604528;
        local_144 = (uint ********)&DAT_0056d48a;
        local_130 = (uint ********)&local_13c;
        local_114 = (uint ********)0x0;
        local_108 = (uint ********)&local_150;
        local_134 = (uint ********)FUN_008d5b00;
        local_118 = (uint ********)&DAT_00000001;
        DataMemoryBarrier(0xb);
        if ((DAT_018dd984 == 2) &&
           (pcVar22 = DAT_018daa74, puVar25 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar22 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_138 = ppppppppuVar23;
        local_104 = (uint *******)DAT_018d99f0;
        local_9c = (uint ********)DAT_018d99f0[8];
        iVar8 = (**(code **)(puVar25 + 0x28))(pcVar22,&local_118);
        if (iVar8 != 0) {
          (**(code **)(puVar25 + 0x2c))(pcVar22,&local_118);
        }
      }
LAB_00b30620:
      ppppppppuVar23 = local_13c;
      if (*(char *)((int)param_1 + 0xed) != '\0') goto LAB_00b30634;
      goto LAB_00b3063c;
    }
    local_13c = (uint ********)0x0;
    *(undefined1 *)((int)param_1 + 0xed) = 0;
  }
  *(undefined1 *)(param_1 + 0x3b) = 1;
  uVar12 = 0;
  unaff_r5 = local_13c;
LAB_00b30b5c:
  return CONCAT44(unaff_r5,uVar12);
code_r0x00b2ff38:
  pppppuVar5 = *ppppppuVar15;
  if (*ppppppuVar15 != pppppuVar14) goto LAB_00b2fef4;
  goto LAB_00b2ff2c;
}

