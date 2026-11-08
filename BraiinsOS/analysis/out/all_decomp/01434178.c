// FUN_01434178 @ 01434178 size=2516 calls_out=29 calls_in=1
// strings: tcp connect error | tcp connect error | tcp connect error | Network unreachable | tcp connect error | tcp connect error

void FUN_01434178(short *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  ushort *puVar11;
  undefined4 extraout_r1;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint unaff_r5;
  uint uVar15;
  undefined4 uVar16;
  byte bVar17;
  uint unaff_r6;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint *puVar21;
  uint unaff_r8;
  uint *unaff_r9;
  short sVar22;
  undefined8 uVar23;
  uint local_258;
  uint local_254;
  uint local_250;
  undefined4 *local_248;
  char *local_244;
  uint *local_240;
  uint local_23c;
  uint local_238;
  undefined4 *local_230;
  uint *local_22c;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  uint local_204;
  undefined4 local_200;
  uint *local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined1 auStack_1ec [100];
  undefined4 local_188;
  uint local_108 [38];
  undefined1 auStack_70 [76];
  
  local_248 = &DAT_018a3eac;
  local_244 = "tcp connect error";
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x25d)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6780);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6780);
  case 3:
    goto LAB_014342cc;
  }
  *(undefined2 *)(param_2 + 0x48) = 3;
  *(undefined1 *)(param_2 + 0x97) = 1;
  iVar6 = param_2[0x95];
  param_2[0x92] = iVar6;
  param_2[0x93] = param_2[0x96];
  param_2[0x94] = iVar6;
  puVar11 = *(ushort **)(iVar6 + 4);
  if (puVar11 != *(ushort **)(iVar6 + 0xc)) {
    while( true ) {
      uVar5 = *puVar11;
      unaff_r5 = (uint)uVar5;
      *(ushort **)(iVar6 + 4) = puVar11 + 0x10;
      FUN_016dd1aa(auStack_228,puVar11 + 1,0x1e);
      if (unaff_r5 == 2) break;
      *(ushort *)(param_2 + 0x40) = uVar5;
      FUN_016dd1aa((int)param_2 + 0x102,auStack_228,0x1e);
      iVar6 = param_2[0x92];
      FUN_010c4064(&local_208,param_2 + 0x40,param_2[0x93],*(undefined4 *)(iVar6 + 0x14),
                   *(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14),
                   *(undefined4 *)(iVar6 + 0x18));
      if (local_208 == 1) {
        puVar9 = (undefined4 *)((uint)&local_208 | 4);
        uVar13 = puVar9[1];
        uVar14 = puVar9[2];
        uVar16 = puVar9[3];
        uVar19 = puVar9[4];
        uVar20 = puVar9[5];
        param_2[1] = *puVar9;
        param_2[2] = uVar13;
        param_2[3] = uVar14;
        param_2[4] = uVar16;
        param_2[5] = uVar19;
        param_2[6] = uVar20;
        uVar13 = puVar9[7];
        uVar14 = puVar9[8];
        uVar16 = puVar9[9];
        uVar19 = puVar9[10];
        uVar20 = puVar9[0xb];
        param_2[7] = puVar9[6];
        param_2[8] = uVar13;
        param_2[9] = uVar14;
        param_2[10] = uVar16;
        param_2[0xb] = uVar19;
        param_2[0xc] = uVar20;
        local_208 = param_2[6];
        local_204 = param_2[7];
        local_200 = param_2[8];
        local_244 = (char *)param_2[9];
        local_230 = (undefined4 *)param_2[10];
        local_22c = (uint *)param_2[0xb];
        local_248 = (undefined4 *)param_2[0xc];
        puVar21 = local_108;
        *param_2 = 1;
        local_108[0] = CONCAT22(local_108[0]._2_2_,*(undefined2 *)((int)param_2 + 6));
        unaff_r6 = param_2[3];
        unaff_r5 = param_2[4];
        unaff_r8 = param_2[2];
        unaff_r9 = (uint *)param_2[5];
        sVar22 = *(short *)(param_2 + 1);
LAB_01434a34:
        if (*(short *)(param_2 + 0x48) != 3) {
          puVar21 = (uint *)param_2[0x52];
        }
        if (*(short *)(param_2 + 0x48) != 3 && puVar21 != (uint *)0x0) {
          puVar9 = (undefined4 *)param_2[0x53];
          pcVar12 = (code *)*puVar9;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(puVar21);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(puVar21);
          }
        }
        goto LAB_01434a88;
      }
      FUN_016dd1aa(param_2 + 2,&local_200,0xf8);
      *param_2 = 0;
      FUN_016dd1aa(param_2 + 0x54,param_2 + 2,0xf8);
LAB_014342cc:
      puVar9 = param_2 + 0x54;
      uVar7 = (&switchD_014342dc::switchdataD_014342e0)[*(byte *)(param_2 + 0x6a)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0x6a)) {
      case 0:
        puVar18 = (undefined1 *)param_2[0x56];
        if (puVar18 != &DAT_3b9aca00) {
          uVar13 = *puVar9;
          uVar14 = param_2[0x55];
          FUN_016dd1aa(auStack_70,param_2 + 0x58,0x48);
          FUN_014d06ac(&local_208,extraout_r1,uVar13,uVar14,puVar18,auStack_70,&DAT_018a67b0);
          FUN_016dd1aa(local_108,&local_208,0x98);
          uVar7 = FUN_016dd1aa(param_2 + 0x6c,local_108,0x98);
          goto switchD_014342dc_caseD_3;
        }
        FUN_016dd1aa(param_2 + 0x6c,param_2 + 0x58,0x48);
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a67c0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a67c0);
      case 3:
switchD_014342dc_caseD_3:
        uVar23 = thunk_FUN_016de0ee(uVar7,0x40);
        iVar6 = (int)uVar23 + (int)((ulonglong)uVar23 >> 0x20);
        puVar21 = param_2 + 0x6c;
        bVar17 = *(byte *)(iVar6 + 0x38);
        if (bVar17 == 1) {
LAB_01434498:
          bVar17 = ~*(byte *)(iVar6 + 0x30) & 1 | *(char *)(iVar6 + 0x31) != '\0';
        }
        else if (bVar17 != 2) {
          FUN_015e8e6c(iVar6,FUN_009948a0);
          *(undefined1 *)(iVar6 + 0x38) = 1;
          goto LAB_01434498;
        }
        FUN_01459180(&local_208,param_2 + 0x80,param_3);
        if (local_208 == 3) {
          iVar6 = FUN_016540e8(bVar17 == 2 | bVar17 & 1,puVar21,*param_3);
          if (iVar6 != 0) {
            uVar4 = 3;
            goto LAB_01434b04;
          }
          cVar3 = *(char *)(param_2 + 0x91);
          unaff_r8 = 3;
          if (cVar3 != '\x03') goto LAB_01434518;
LAB_01434548:
          FUN_01434db4(param_2 + 0x8a);
          *(undefined1 *)((int)param_2 + 0x245) = 0;
        }
        else {
          local_240 = local_1fc;
          cVar3 = *(char *)(param_2 + 0x91);
          local_23c = local_200;
          local_238 = local_204;
          unaff_r8 = local_208;
          if (cVar3 == '\x03') goto LAB_01434548;
LAB_01434518:
          if (cVar3 == '\0') {
            FUN_016dffb2(param_2[0x88]);
          }
        }
        FUN_00a07b4c(puVar21);
        unaff_r5 = local_23c;
        unaff_r6 = local_238;
        unaff_r9 = local_240;
        if (unaff_r8 == 3) {
          FUN_01419fa4(&local_208);
          unaff_r8 = 2;
          unaff_r5 = local_204;
          unaff_r6 = local_208;
        }
        goto joined_r0x0143458c;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x7d)) {
      case 0:
        *(undefined1 *)((int)param_2 + 0x1f5) = 1;
        uVar5 = *(ushort *)((int)param_2 + 0x1b6);
        puVar21 = (uint *)(uint)uVar5;
        uVar13 = param_2[0x74];
        uVar2 = *(ushort *)(param_2 + 0x73);
        uVar7 = *(uint *)((int)param_2 + 0x1b2);
        uVar15 = param_2[0x71];
        uVar14 = param_2[0x72];
        param_2[0x75] = uVar13;
        if ((*(ushort *)(param_2 + 0x6c) & 1) == 0) {
          FUN_016dd606(&local_200,0,0x78);
          uVar5 = (ushort)(((uint)puVar21 & 0xff) << 8) | uVar5 >> 8;
          local_188 = 0x10;
          uVar10 = 2;
        }
        else {
          local_1fc = (uint *)param_2[0x6e];
          uStack_1f8 = param_2[0x6f];
          uStack_1f4 = param_2[0x70];
          puVar21 = (uint *)(uVar7 >> 0x10);
          local_200 = CONCAT22(uVar5,(short)(uVar7 >> 0x10));
          FUN_016dd606(auStack_1ec,0,100);
          uVar5 = uVar2 << 8 | uVar2 >> 8;
          local_188 = 0x1c;
          uVar10 = 10;
          uVar7 = uVar15;
          local_1f0 = uVar14;
        }
        local_208 = CONCAT22(uVar5,uVar10);
        local_204 = uVar7;
        iVar6 = FUN_016d6ed2(uVar13,&local_208);
        if (iVar6 != -1) {
LAB_01434618:
          uVar13 = param_2[0x75];
          param_2[0x76] = uVar13;
          *(undefined1 *)((int)param_2 + 0x1f5) = 0;
          *(undefined1 *)(param_2 + 0x7c) = 0;
LAB_01434634:
          uVar23 = FUN_0164ec90(&DAT_018ac94c);
          FUN_01657a90(&local_208,uVar13,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),&DAT_018ac94c)
          ;
          uVar7 = local_200;
          uVar15 = local_204;
          if (local_208 != 2) {
            param_2[0x78] = local_204;
            puVar21 = param_2 + 0x77;
            *puVar21 = local_208;
            param_2[0x79] = local_200;
            param_2[0x7a] = uVar13;
            param_2[0x7b] = puVar21;
            goto LAB_014346a8;
          }
          FUN_016dffb2(uVar13);
          puVar21 = (uint *)(uVar15 >> 8 | uVar7 << 0x18);
          uVar7 = uVar7 >> 8;
LAB_014347d4:
          *(undefined1 *)(param_2 + 0x7c) = 1;
          unaff_r6 = uVar15 & 0xff | (int)puVar21 << 8;
          unaff_r5 = (uint)puVar21 >> 0x18 | uVar7 << 8;
          unaff_r8 = 2;
          goto LAB_014347f0;
        }
        puVar8 = (uint *)FUN_016d2bc8();
        unaff_r5 = *puVar8;
        unaff_r6 = local_258 & 0xffffff00;
        local_258 = unaff_r6;
        if (unaff_r5 == 0x73) goto LAB_01434618;
        FUN_016dffb2(param_2[0x75]);
        unaff_r8 = 2;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a686c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a686c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x7c)) {
        case 0:
          uVar13 = param_2[0x76];
          goto LAB_01434634;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018a687c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018a687c);
        case 3:
          puVar21 = (uint *)param_2[0x7b];
        }
LAB_014346a8:
        FUN_01657318(&local_208,puVar21[2],param_3,1);
        if (local_208 == 2) {
          *(undefined1 *)(param_2 + 0x7c) = 3;
LAB_01434af0:
          *(undefined1 *)(param_2 + 0x7d) = 3;
          uVar4 = 4;
LAB_01434b04:
          *(undefined1 *)(param_2 + 0x6a) = uVar4;
          *param_1 = 4;
          *(undefined1 *)((int)param_2 + 0x25d) = 3;
          return;
        }
        if ((local_208 & 1) != 0) {
          puVar21 = (uint *)(local_204 >> 8 | local_200 << 0x18);
          uVar7 = local_200 >> 8;
          uVar15 = local_204;
LAB_014347b0:
          FUN_005e6cdc(param_2 + 0x77);
          if (param_2[0x7a] != -1) {
            FUN_016dffb2();
          }
          FUN_00a414e8(param_2 + 0x77);
          goto LAB_014347d4;
        }
        if (param_2[0x7a] == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ad11c);
        }
        uVar15 = 0;
        local_208 = 4;
        local_108[0] = 0;
        iVar6 = FUN_016d7828(param_2[0x7a],1,4,local_108,&local_208);
        if (iVar6 == -1) {
          puVar21 = (uint *)FUN_016d2bc8();
          local_254 = *puVar21;
          uVar7 = local_254 >> 8;
          uVar1 = local_250 >> 8;
          local_250 = local_250 & 0xffffff00;
          puVar21 = (uint *)(uVar1 | local_254 << 0x18);
          goto LAB_014347b0;
        }
        if (local_108[0] == 0) {
          uVar15 = 4;
        }
        else {
          local_254 = local_108[0];
        }
        puVar21 = (uint *)(local_250 >> 8 | local_254 << 0x18);
        local_250 = local_250 & 0xffffff00;
        uVar7 = local_254 >> 8;
        if (iVar6 == -1 || uVar15 == 0) goto LAB_014347b0;
        unaff_r8 = param_2[0x77];
        puVar21 = (uint *)param_2[0x7a];
        unaff_r6 = param_2[0x78];
        unaff_r5 = param_2[0x79];
        *(undefined1 *)(param_2 + 0x7c) = 1;
        if (unaff_r8 == 3) goto LAB_01434af0;
LAB_014347f0:
        FUN_01434db4(param_2 + 0x76);
      }
      *(undefined1 *)((int)param_2 + 0x1f5) = 0;
      *(undefined1 *)(param_2 + 0x7d) = 1;
      unaff_r9 = puVar21;
      local_230 = puVar9;
joined_r0x0143458c:
      if (unaff_r8 == 2) {
        local_208 = unaff_r6;
        local_204 = unaff_r5;
        puVar21 = (uint *)thunk_FUN_016d4a50(8);
        if (puVar21 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *puVar21 = unaff_r6;
        puVar21[1] = unaff_r5;
      }
      *(undefined1 *)(param_2 + 0x6a) = 1;
      FUN_01434e2c(puVar9);
      if (unaff_r8 != 2) {
        sVar22 = 3;
        local_22c = param_3;
        goto LAB_01434a34;
      }
      if (*(short *)(param_2 + 0x48) == 3) {
        *(undefined2 *)((int)param_2 + 0x122) = *(undefined2 *)((int)param_2 + 0x102);
        unaff_r9 = (uint *)param_2[0x43];
        *(undefined1 *)(param_2 + 0x97) = 1;
        unaff_r6 = param_2[0x41];
        unaff_r5 = param_2[0x44];
        *(short *)(param_2 + 0x48) = *(short *)(param_2 + 0x40);
        param_2[0x4a] = param_2[0x42];
        param_2[0x4b] = unaff_r9;
        param_2[0x49] = unaff_r6;
        param_2[0x4c] = unaff_r5;
        param_2[0x4d] = param_2[0x45];
        param_2[0x4e] = param_2[0x46];
        param_2[0x4f] = param_2[0x47];
        param_2[0x51] = 0x11;
        param_2[0x50] = "tcp connect error";
        param_2[0x52] = puVar21;
        param_2[0x53] = &DAT_018a3eac;
      }
      else if (puVar21 != (uint *)0x0) {
        FUN_009b8520(puVar21);
        thunk_FUN_016d3fb4(puVar21);
      }
      iVar6 = param_2[0x94];
      puVar11 = *(ushort **)(iVar6 + 4);
      if (puVar11 == *(ushort **)(iVar6 + 0xc)) break;
    }
  }
  sVar22 = *(short *)(param_2 + 0x48);
  if (sVar22 == 3) {
    FUN_015e79d4(&local_208,7,"Network unreachable",0x13);
    local_22c = (uint *)thunk_FUN_016d4a50(8);
    if (local_22c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    sVar22 = 2;
    local_230 = (undefined4 *)&DAT_00000011;
    *local_22c = local_208;
    local_22c[1] = local_204;
  }
  else {
    *(undefined1 *)(param_2 + 0x97) = 0;
    local_208 = param_2[0x4d];
    local_204 = param_2[0x4e];
    local_200 = param_2[0x4f];
    local_244 = (char *)param_2[0x50];
    local_248 = (undefined4 *)param_2[0x53];
    local_108[0] = (uint)*(ushort *)((int)param_2 + 0x122);
    unaff_r6 = param_2[0x4a];
    unaff_r5 = param_2[0x4b];
    unaff_r8 = param_2[0x49];
    unaff_r9 = (uint *)param_2[0x4c];
    local_230 = (undefined4 *)param_2[0x51];
    local_22c = (uint *)param_2[0x52];
  }
LAB_01434a88:
  param_1[1] = (short)local_108[0];
  *(undefined4 **)(param_1 + 0x16) = local_248;
  *(uint *)(param_1 + 10) = local_208;
  *(uint *)(param_1 + 0xc) = local_204;
  *(uint *)(param_1 + 0xe) = local_200;
  *(char **)(param_1 + 0x10) = local_244;
  *param_1 = sVar22;
  *(undefined1 *)(param_2 + 0x97) = 0;
  *(undefined4 **)(param_1 + 0x12) = local_230;
  *(uint **)(param_1 + 0x14) = local_22c;
  *(uint *)(param_1 + 2) = unaff_r8;
  *(uint *)(param_1 + 4) = unaff_r6;
  *(uint *)(param_1 + 6) = unaff_r5;
  *(uint **)(param_1 + 8) = unaff_r9;
  *(undefined1 *)((int)param_2 + 0x25d) = 1;
  return;
}

