// FUN_010aaa48 @ 010aaa48 size=3132 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_010aaa48(uint *param_1,int *param_2,uint *param_3)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  short *psVar6;
  byte *pbVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *extraout_r2;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  short sVar25;
  uint *puVar26;
  uint uVar27;
  undefined2 *puVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  short sVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint in_fpscr;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  uint local_98;
  uint local_80;
  undefined2 *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  undefined2 *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined3 local_2c;
  undefined1 uStack_29;
  undefined3 uStack_28;
  
  uVar20 = param_1[7];
  uVar15 = param_1[10];
  puVar11 = param_1;
  if (*param_1 == 1 && param_1[1] == 0) {
    fVar37 = (float)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
    fVar38 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar38 / fVar37 < 0.2) {
      uVar39 = thunk_FUN_016de0ee(0,0x2c0,param_1);
      puVar26 = (uint *)((int)uVar39 + (int)((ulonglong)uVar39 >> 0x20));
      puVar11 = extraout_r2;
      if ((char)puVar26[4] == '\0') {
        FUN_015f62e4(&local_70);
        *puVar26 = local_70;
        puVar26[1] = (uint)local_6c;
        puVar26[2] = local_68;
        puVar26[3] = local_64;
        *(undefined1 *)(puVar26 + 4) = 1;
        puVar11 = param_1;
      }
      uVar5 = *puVar26;
      uVar12 = puVar26[1];
      uVar14 = puVar26[2];
      uVar34 = puVar26[3];
      puVar28 = (undefined2 *)puVar11[6];
      param_1[2] = uVar5;
      param_1[3] = uVar12;
      param_1[4] = uVar14;
      param_1[5] = uVar34;
      *puVar11 = 2;
      puVar11[1] = 0;
      *puVar26 = uVar5 + 1;
      puVar26[1] = uVar12 + (0xfffffffe < uVar5);
      if (uVar20 != 0) {
        puVar13 = puVar28;
        do {
          puVar13[1] = 0;
          *puVar13 = 0xffff;
          puVar13 = puVar13 + 2;
        } while (puVar13 != puVar28 + uVar20 * 2);
      }
      if (uVar15 != 0) {
        uVar5 = puVar11[9];
        uVar3 = (ushort)puVar11[0xe];
        uVar15 = uVar5 + uVar15 * 0x30;
        sVar33 = 0;
        do {
          uVar4 = FUN_010b0a24(puVar11,uVar5 + 0x1c);
          *(ushort *)(uVar5 + 0x2c) = uVar4;
          uVar5 = uVar5 + 0x30;
          uVar14 = 0;
          uVar12 = (uint)(uVar4 & uVar3);
          while( true ) {
            do {
              uVar34 = uVar12;
              uVar12 = 0;
            } while (uVar20 <= uVar34);
            psVar6 = puVar28 + uVar34 * 2;
            if (*psVar6 == -1) {
              *psVar6 = sVar33;
              goto LAB_010aab44;
            }
            if ((uVar34 - (psVar6[1] & uVar3) & (uint)uVar3) < uVar14) break;
            uVar14 = uVar14 + 1;
            uVar12 = uVar34 + 1;
          }
          uVar12 = uVar34;
          sVar25 = sVar33;
          while( true ) {
            do {
              uVar34 = uVar12;
              uVar12 = 0;
            } while (uVar20 <= uVar34);
            psVar6 = puVar28 + uVar34 * 2;
            sVar1 = *psVar6;
            if (sVar1 == -1) break;
            uVar2 = psVar6[1];
            *psVar6 = sVar25;
            psVar6[1] = uVar4;
            uVar12 = uVar34 + 1;
            sVar25 = sVar1;
            uVar4 = uVar2;
          }
          *psVar6 = sVar25;
LAB_010aab44:
          puVar28[uVar34 * 2 + 1] = uVar4;
          puVar11 = param_1;
          sVar33 = sVar33 + 1;
        } while (uVar5 != uVar15);
      }
      goto LAB_010aad98;
    }
    *param_1 = 0;
    param_1[1] = 0;
    iVar9 = FUN_010b18bc(param_1,uVar20 << 1);
  }
  else {
    if (uVar15 != uVar20 - (uVar20 >> 2)) goto LAB_010aad98;
    if (uVar15 == 0) {
      uVar16 = 0x20;
      *(undefined2 *)(param_1 + 0xe) = 7;
      puVar28 = (undefined2 *)thunk_FUN_016d4a50(0x20);
      if (puVar28 == (undefined2 *)0x0) {
        uVar10 = 2;
      }
      else {
        puVar28[0xe] = 0xffff;
        puVar28[0xf] = 0;
        puVar28[0xd] = 0;
        puVar28[0xb] = 0;
        puVar28[9] = 0;
        puVar28[7] = 0;
        puVar28[5] = 0;
        puVar28[3] = 0;
        puVar28[1] = 0;
        local_70 = 8;
        puVar28[0xc] = 0xffff;
        puVar28[10] = 0xffff;
        puVar28[8] = 0xffff;
        puVar28[6] = 0xffff;
        puVar28[4] = 0xffff;
        puVar28[2] = 0xffff;
        *puVar28 = 0xffff;
        local_68 = 8;
        uStack_78 = 8;
        local_80 = 8;
        local_7c = puVar28;
        local_6c = puVar28;
        uVar39 = FUN_00a5ee50(&local_80);
        if (uVar20 != 0) {
          thunk_FUN_016d3fb4(param_1[6]);
        }
        *(undefined8 *)(param_1 + 6) = uVar39;
        uVar16 = 0x120;
        uVar15 = thunk_FUN_016d4a50(0x120);
        if (uVar15 != 0) {
          uVar20 = param_1[9];
          FUN_010bbb1c(uVar20,0);
          if (param_1[8] != 0) {
            thunk_FUN_016d3fb4(uVar20);
          }
          param_1[8] = 6;
          param_1[9] = uVar15;
          param_1[10] = 0;
          goto LAB_010aad98;
        }
        uVar10 = 4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar10,uVar16);
    }
    iVar9 = FUN_010b18bc(param_1,uVar20 << 1);
  }
  if (iVar9 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    return 2;
  }
LAB_010aad98:
  uVar15 = *puVar11;
  uVar20 = puVar11[1];
  if ((uVar15 ^ 2) == 0 && uVar20 == 0) {
    local_3c = 0;
    local_50 = param_1[2];
    local_4c = param_1[3];
    local_64 = local_4c ^ 0x6c796765;
    local_48 = param_1[4];
    local_44 = param_1[5];
    local_38 = 0;
    local_68 = local_50 ^ 0x6e657261;
    local_34 = 0;
    local_40 = 0;
    local_54 = local_44 ^ 0x74656462;
    local_5c = local_44 ^ 0x646f7261;
    local_6c = (undefined2 *)(local_4c ^ 0x736f6d65);
    local_70 = local_50 ^ 0x70736575;
    puVar21 = (undefined4 *)*param_2;
    local_58 = local_48 ^ 0x79746573;
    local_60 = local_48 ^ 0x6e646f6d;
    local_80 = (uint)(puVar21 != (undefined4 *)0x0);
    FUN_01028a58(&local_70,&local_80,4);
    if (puVar21 == (undefined4 *)0x0) {
      local_98 = (uint)*(byte *)(param_2 + 1);
      local_80 = local_98;
      FUN_01028a58(&local_70,&local_80,4);
    }
    else {
      local_98 = param_2[1];
      FUN_01028a58(&local_70,local_98,param_2[2]);
      local_98 = local_98 & 0xff;
    }
    uVar14 = (int)local_6c + CARRY4(local_60,local_70) + local_5c;
    uVar27 = (local_5c << 0xd | local_60 >> 0x13) ^ uVar14;
    uVar22 = (local_60 << 0xd | local_5c >> 0x13) ^ local_60 + local_70;
    uVar34 = local_3c | local_38 << 0x18;
    uVar17 = uVar34 ^ local_54;
    uVar5 = local_40 ^ local_58;
    uVar30 = uVar5 + local_68;
    uVar18 = uVar17 + local_64 + (uint)CARRY4(uVar5,local_68);
    uVar12 = (uVar5 << 0x10 | uVar17 >> 0x10) ^ uVar30;
    uVar32 = uVar18 + uVar27 + (uint)CARRY4(uVar30,uVar22);
    uVar18 = (uVar17 << 0x10 | uVar5 >> 0x10) ^ uVar18;
    uVar35 = uVar32 ^ (uVar27 << 0x11 | uVar22 >> 0xf);
    uVar19 = uVar18 + local_60 + local_70 + (uint)CARRY4(uVar12,uVar14);
    uVar17 = uVar30 + uVar22 ^ (uVar22 << 0x11 | uVar27 >> 0xf);
    uVar5 = uVar12 + uVar14 ^ local_40;
    uVar36 = uVar5 + uVar17;
    uVar29 = (uVar19 ^ uVar34) + uVar35 + (uint)CARRY4(uVar5,uVar17);
    uVar23 = uVar29 ^ (uVar35 << 0xd | uVar17 >> 0x13);
    uVar34 = uVar36 ^ (uVar17 << 0xd | uVar35 >> 0x13);
    uVar19 = (uVar18 << 0x15 | uVar12 >> 0xb) ^ uVar19;
    uVar32 = uVar32 ^ 0xff;
    uVar5 = (uVar12 << 0x15 | uVar18 >> 0xb) ^ uVar12 + uVar14;
    uVar27 = uVar5 + uVar32;
    uVar17 = uVar19 + uVar30 + uVar22 + (uint)CARRY4(uVar5,uVar32);
    uVar32 = uVar23 + uVar17 + (uint)CARRY4(uVar34,uVar27);
    uVar14 = uVar32 ^ (uVar23 << 0x11 | uVar34 >> 0xf);
    uVar12 = uVar34 + uVar27 ^ (uVar34 << 0x11 | uVar23 >> 0xf);
    uVar17 = (uVar19 << 0x10 | uVar5 >> 0x10) ^ uVar17;
    uVar19 = (uVar5 << 0x10 | uVar19 >> 0x10) ^ uVar27;
    uVar22 = uVar19 + uVar29;
    uVar18 = uVar17 + uVar36 + (uint)CARRY4(uVar19,uVar29);
    uVar29 = uVar14 + uVar18 + (uint)CARRY4(uVar12,uVar22);
    uVar5 = (uVar14 << 0xd | uVar12 >> 0x13) ^ uVar29;
    uVar14 = (uVar12 << 0xd | uVar14 >> 0x13) ^ uVar12 + uVar22;
    uVar18 = (uVar17 << 0x15 | uVar19 >> 0xb) ^ uVar18;
    uVar17 = (uVar19 << 0x15 | uVar17 >> 0xb) ^ uVar22;
    uVar19 = uVar17 + uVar32;
    uVar23 = uVar18 + uVar34 + uVar27 + (uint)CARRY4(uVar17,uVar32);
    uVar32 = uVar5 + uVar23 + (uint)CARRY4(uVar14,uVar19);
    uVar23 = (uVar18 << 0x10 | uVar17 >> 0x10) ^ uVar23;
    uVar34 = (uVar17 << 0x10 | uVar18 >> 0x10) ^ uVar19;
    uVar17 = uVar34 + uVar29;
    uVar27 = (uVar5 << 0x11 | uVar14 >> 0xf) ^ uVar32;
    uVar12 = uVar23 + uVar12 + uVar22 + (uint)CARRY4(uVar34,uVar29);
    uVar18 = (uVar34 << 0x15 | uVar23 >> 0xb) ^ uVar17;
    uVar34 = (uVar23 << 0x15 | uVar34 >> 0xb) ^ uVar12;
    uVar5 = (uVar14 << 0x11 | uVar5 >> 0xf) ^ uVar14 + uVar19;
    uVar14 = uVar34 + uVar14 + uVar19 + (uint)CARRY4(uVar18,uVar32);
    uVar12 = (uVar27 << 0xd | uVar5 >> 0x13) ^ uVar27 + uVar12 + (uint)CARRY4(uVar5,uVar17);
    uVar5 = (uVar5 << 0xd | uVar27 >> 0x13) ^ uVar5 + uVar17;
    uVar5 = ((uVar34 << 0x10 | uVar18 >> 0x10) ^ uVar14) >> 0xb ^ uVar12 >> 0xf ^
            uVar12 + uVar14 + (uint)CARRY4(uVar5,uVar18 + uVar32) ^ uVar5 + uVar18 + uVar32;
    puVar11 = param_1;
  }
  else {
    puVar21 = (undefined4 *)*param_2;
    if (puVar21 == (undefined4 *)0x0) {
      local_98 = (uint)*(byte *)(param_2 + 1);
      puVar21 = (undefined4 *)0x0;
      uVar5 = (local_98 ^ 0x9dce13f5) * -0x436f;
    }
    else {
      iVar9 = param_2[2];
      local_98 = (uint)param_2[1] & 0xff;
      uVar5 = 0x47985764;
      if (iVar9 != 0) {
        uVar5 = 0x47985764;
        pbVar7 = (byte *)param_2[1];
        do {
          iVar9 = iVar9 + -1;
          uVar5 = (uVar5 ^ *pbVar7) * 0x1b3;
          pbVar7 = pbVar7 + 1;
        } while (iVar9 != 0);
      }
    }
  }
  uVar14 = puVar11[6];
  uVar5 = uVar5 & 0x7fff;
  uVar3 = (ushort)puVar11[0xe];
  uVar27 = 0;
  uVar34 = puVar11[10];
  uVar17 = puVar11[7];
  uVar18 = puVar11[9];
  uVar12 = uVar3 & uVar5;
  do {
    do {
      uVar19 = uVar12;
      uVar12 = 0;
    } while (uVar17 <= uVar19);
    puVar8 = (ushort *)(uVar14 + uVar19 * 4);
    uVar12 = (uint)*puVar8;
    uVar24 = (undefined1)local_98;
    if (uVar12 == 0xffff) {
      if (puVar21 == (undefined4 *)0x0) {
        local_70 = 0;
      }
      else {
        (*(code *)*puVar21)(&local_70,param_2 + 3,param_2[1],param_2[2]);
        local_30 = CONCAT13((undefined1)local_68,local_6c._1_3_);
        local_2c = (undefined3)(local_68 >> 8);
        uStack_29 = (undefined1)local_64;
        uStack_28 = (undefined3)(local_64 >> 8);
        puVar11 = param_1;
        uVar24 = local_6c._0_1_;
      }
      uStack_74 = CONCAT31(uStack_28,uStack_29);
      uStack_78._0_1_ = (undefined1)((uint)local_30 >> 0x18);
      uStack_78 = CONCAT31((int3)_local_2c,(undefined1)uStack_78);
      local_6c = (undefined2 *)param_3[1];
      local_68 = param_3[2];
      local_64 = param_3[3];
      local_7c = (undefined2 *)CONCAT31((int3)local_30,uVar24);
      local_80 = local_70;
      local_70 = *param_3;
      iVar9 = FUN_010ab968(puVar11,uVar5,&local_80,&local_70);
      if (iVar9 != 0) {
        return 2;
      }
      if (puVar11[7] <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar19,puVar11[7],&DAT_018a4504);
      }
      puVar28 = (undefined2 *)(puVar11[6] + uVar19 * 4);
      *puVar28 = (short)uVar34;
      puVar28[1] = (short)uVar5;
      return 0;
    }
    uVar4 = puVar8[1];
    if ((uVar19 - (uVar3 & uVar4) & (uint)uVar3) < uVar27) {
      if (puVar21 == (undefined4 *)0x0) {
        local_70 = 0;
      }
      else {
        (*(code *)*puVar21)(&local_70,param_2 + 3,param_2[1],param_2[2]);
        local_30 = CONCAT13((undefined1)local_68,local_6c._1_3_);
        local_2c = (undefined3)(local_68 >> 8);
        uStack_29 = (undefined1)local_64;
        uStack_28 = (undefined3)(local_64 >> 8);
        puVar11 = param_1;
        uVar24 = local_6c._0_1_;
      }
      uStack_74 = CONCAT31(uStack_28,uStack_29);
      uStack_78._0_1_ = (undefined1)((uint)local_30 >> 0x18);
      uStack_78 = CONCAT31((int3)_local_2c,(undefined1)uStack_78);
      local_6c = (undefined2 *)param_3[1];
      local_68 = param_3[2];
      local_64 = param_3[3];
      local_7c = (undefined2 *)CONCAT31((int3)local_30,uVar24);
      local_80 = local_70;
      local_70 = *param_3;
      iVar9 = FUN_010ab968(puVar11,uVar5,&local_80,&local_70);
      if (iVar9 != 0) {
        return 2;
      }
      uVar17 = puVar11[6];
      uVar18 = 0;
      uVar14 = puVar11[7];
      uVar12 = uVar34 & 0xffff;
      while( true ) {
        do {
          uVar34 = uVar19;
          uVar19 = 0;
        } while (uVar14 <= uVar34);
        puVar8 = (ushort *)(uVar17 + uVar34 * 4);
        uVar3 = *puVar8;
        uVar4 = (ushort)uVar5;
        if (uVar3 == 0xffff) break;
        *puVar8 = (ushort)uVar12;
        uVar5 = (uint)puVar8[1];
        uVar18 = uVar18 + 1;
        puVar8[1] = uVar4;
        uVar12 = (uint)uVar3;
        uVar19 = uVar34 + 1;
      }
      puVar8[1] = uVar4;
      uVar14 = *param_1;
      uVar5 = param_1[1];
      *puVar8 = (ushort)uVar12;
      if ((uVar27 >> 9 == 0 || (uVar15 ^ 2) == 0 && uVar20 == 0) && uVar18 < 0x80) {
        return 0;
      }
      if (uVar14 == 0 && uVar5 == 0) {
        *param_1 = 1;
        param_1[1] = 0;
      }
      return 0;
    }
    if (uVar4 == uVar5) {
      if (uVar34 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,uVar34,&DAT_018a44f4);
      }
      iVar9 = uVar18 + uVar12 * 0x30;
      if ((*(int *)(iVar9 + 0x1c) != 0) != (puVar21 == (undefined4 *)0x0)) {
        if (*(int *)(iVar9 + 0x1c) == 0) {
          if (*(byte *)(iVar9 + 0x20) == local_98) goto LAB_010ab4ec;
        }
        else if (*(int *)(iVar9 + 0x24) == param_2[2]) {
          local_98 = param_2[1];
          iVar9 = thunk_FUN_016dd50a(*(undefined4 *)(iVar9 + 0x20),local_98);
          if (iVar9 == 0) {
LAB_010ab4ec:
            piVar31 = (int *)(uVar18 + uVar12 * 0x30);
            local_64 = uVar12;
            if (*piVar31 != 1) {
              uVar15 = puVar11[0xd];
              local_5c = param_3[1];
              local_58 = param_3[2];
              local_54 = param_3[3];
              local_60 = *param_3;
              local_68 = 0;
              local_70 = 0;
              local_6c = (undefined2 *)uVar12;
              if (uVar15 == puVar11[0xb]) {
                FUN_010bf650(puVar11 + 0xb);
              }
              puVar11 = (uint *)(param_1[0xc] + uVar15 * 0x20);
              *puVar11 = local_70;
              puVar11[1] = (uint)local_6c;
              puVar11[2] = local_68;
              puVar11[3] = local_64;
              puVar11[4] = local_60;
              puVar11[5] = local_5c;
              puVar11[6] = local_58;
              puVar11[7] = local_54;
              param_1[0xd] = uVar15 + 1;
              *piVar31 = 1;
              piVar31[1] = uVar15;
              piVar31[2] = uVar15;
              return 1;
            }
            uVar20 = piVar31[2];
            uVar15 = puVar11[0xd];
            local_5c = param_3[1];
            local_58 = param_3[2];
            local_54 = param_3[3];
            local_68 = 0;
            local_60 = *param_3;
            local_70 = 1;
            local_6c = (undefined2 *)uVar20;
            if (uVar15 == puVar11[0xb]) {
              FUN_010bf650(puVar11 + 0xb);
            }
            uVar5 = param_1[0xc];
            puVar11 = (uint *)(uVar5 + uVar15 * 0x20);
            *puVar11 = local_70;
            puVar11[1] = (uint)local_6c;
            puVar11[2] = local_68;
            puVar11[3] = local_64;
            puVar11[4] = local_60;
            puVar11[5] = local_5c;
            puVar11[6] = local_58;
            puVar11[7] = local_54;
            param_1[0xd] = uVar15 + 1;
            if (uVar15 < uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar20,uVar15 + 1,&DAT_018a6304);
            }
            iVar9 = uVar5 + uVar20 * 0x20;
            piVar31[2] = uVar15;
            *piVar31 = 1;
            *(undefined4 *)(iVar9 + 8) = 1;
            *(uint *)(iVar9 + 0xc) = uVar15;
            return 1;
          }
          local_98 = local_98 & 0xff;
        }
      }
    }
    uVar27 = uVar27 + 1;
    uVar12 = uVar19 + 1;
  } while( true );
}

