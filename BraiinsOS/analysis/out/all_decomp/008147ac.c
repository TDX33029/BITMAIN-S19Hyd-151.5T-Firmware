// FUN_008147ac @ 008147ac size=4940 calls_out=30 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00814b38) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_008147ac(undefined4 *param_1,uint *****param_2)

{
  byte bVar1;
  uint ****ppppuVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint ****ppppuVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint ***pppuVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char *pcVar28;
  uint uVar29;
  uint uVar30;
  uint *****pppppuVar31;
  undefined4 uVar32;
  int iVar33;
  uint *****pppppuVar34;
  code *pcVar35;
  uint *****pppppuVar36;
  uint *****pppppuVar37;
  uint ****unaff_r8;
  uint ****ppppuVar38;
  undefined4 *puVar39;
  code *pcVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  bool bVar45;
  ulonglong uVar46;
  undefined8 uVar47;
  uint local_140;
  uint *****local_11c;
  undefined4 local_100;
  uint *****local_f0;
  undefined4 *local_e8;
  undefined4 *local_e4;
  uint ***local_d4;
  uint *****local_d0;
  uint *****local_cc;
  uint ****local_c8;
  code *local_c4;
  uint *****local_c0;
  code *pcStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint *****local_ac;
  uint *****local_a8;
  undefined4 *local_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint *****local_98;
  uint *****local_94;
  uint ****local_90;
  uint *****local_88;
  uint *****local_84;
  uint ****local_80;
  code *local_7c;
  uint *****local_78;
  code *local_74;
  uint local_70;
  uint local_6c;
  uint ****local_68;
  uint ****local_64;
  undefined4 *local_60;
  code *local_5c;
  undefined4 *local_58;
  undefined1 *local_54;
  undefined4 *local_50;
  code *local_4c;
  uint *****local_48;
  code *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x15)) {
  case 0:
    param_1[9] = *param_1;
    param_1[10] = param_1[1];
    param_1[8] = param_1[7];
    iVar8 = 0;
    param_1[0xb] = param_1[2];
    param_1[0xc] = param_1[3];
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5];
    param_1[0xf] = param_1[6];
    iVar33 = param_1[0xd];
    if (iVar33 < 0) {
LAB_00814824:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(iVar8,iVar33);
    }
    uVar26 = param_1[0xc];
    uVar19 = param_1[0xe];
    uVar32 = param_1[0xf];
    if (iVar33 == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar33);
      iVar8 = iVar33;
      if (iVar5 == 0) {
        iVar8 = 1;
        goto LAB_00814824;
      }
    }
    param_1[0x10] = iVar8;
    param_1[0x11] = iVar5;
    FUN_016dd1aa(iVar5,uVar26,iVar33);
    param_1[0x12] = iVar33;
    param_1[0x13] = uVar19;
    param_1[0x14] = uVar32;
    uVar46 = FUN_007143c8();
    piVar6 = (int *)uVar46;
    bVar1 = *(byte *)(piVar6 + 0x14);
    if ((((uVar46 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(piVar6 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar6;
      bVar45 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar45);
    *piVar6 = 0;
    if (iVar8 == 2) {
      FUN_016d6968(0xf0,piVar6,0x81,1);
    }
    uVar32 = param_1[8];
    uVar19 = param_1[9];
    uVar26 = param_1[10];
    iVar8 = param_1[0x12];
    uVar27 = param_1[0x11];
    uVar14 = param_1[0x13];
    uVar16 = param_1[0x14];
    *(undefined1 *)((int)param_1 + 0x55) =
         *(undefined1 *)(*(int *)(&DAT_018afbbc + (uint)bVar1 * 4) + 5);
    uVar7 = 0;
    if (iVar8 < 0) {
LAB_0081496c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,iVar8);
    }
    if (iVar8 == 0) {
      iVar5 = 1;
      iVar33 = 0;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar8);
      iVar33 = iVar8;
      if (iVar5 == 0) {
        uVar7 = 1;
        goto LAB_0081496c;
      }
    }
    FUN_016dd1aa(iVar5,uVar27,iVar8);
    param_1[0x16] = uVar19;
    param_1[0x1b] = uVar14;
    param_1[0x1c] = uVar16;
    param_1[0x18] = iVar33;
    param_1[0x17] = uVar26;
    param_1[0x19] = iVar5;
    param_1[0x1a] = iVar8;
    param_1[0x1d] = uVar32;
    *(undefined1 *)(param_1 + 0x2c) = 0;
LAB_008149f8:
    param_1[0x1e] = uVar32;
    param_1[0x1f] = uVar19;
    param_1[0x20] = uVar26;
    iVar8 = 0;
    param_1[0x21] = param_1[0x18];
    param_1[0x22] = param_1[0x19];
    param_1[0x23] = param_1[0x1a];
    param_1[0x24] = param_1[0x1b];
    param_1[0x25] = param_1[0x1c];
    iVar33 = param_1[0x23];
    if (iVar33 < 0) {
LAB_00814a24:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(iVar8,iVar33);
    }
    uVar19 = param_1[0x22];
    uVar26 = param_1[0x24];
    uVar32 = param_1[0x25];
    if (iVar33 == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar33);
      iVar8 = iVar33;
      if (iVar5 == 0) {
        iVar8 = 1;
        goto LAB_00814a24;
      }
    }
    param_1[0x26] = iVar8;
    param_1[0x27] = iVar5;
    FUN_016dd1aa(iVar5,uVar19,iVar33);
    *(undefined1 *)(param_1 + 0x3b) = 0;
    param_1[0x28] = iVar33;
    param_1[0x29] = uVar26;
    param_1[0x2a] = uVar32;
    param_1[0x2d] = param_1[0x1e] + 0xc;
    local_f0 = param_2;
switchD_00814848_caseD_3:
    local_e4 = param_1 + 0x2c;
    unaff_r8 = (uint ****)(param_1 + 0x16);
    iVar8 = FUN_007d67b8(param_1 + 0x2d,param_2);
    if (iVar8 != 0) {
      param_1[0x2b] = iVar8;
      if (*(char *)(param_1 + 0x3b) == '\x03') {
        cVar4 = *(char *)(param_1 + 0x3a);
        bVar45 = cVar4 == '\x03';
        if (bVar45) {
          cVar4 = *(char *)(param_1 + 0x31);
        }
        if (bVar45 && cVar4 == '\x04') {
          FUN_0163c790(param_1 + 0x32);
          if (param_1[0x33] != 0) {
            (**(code **)(param_1[0x33] + 0xc))(param_1[0x34]);
          }
        }
      }
      if (param_1[0x1f] == 1) {
        uVar30 = *(int *)param_1[0x1e] * param_1[0x20];
        if (0xff < uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_68,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar30 = (uint)*(byte *)((int *)param_1[0x1e] + 1);
      }
      uVar47 = (**(code **)(*(int *)(param_1[0x2b] + 0x20) + 0x14))
                         (*(undefined4 *)(param_1[0x2b] + 0x1c),param_1[0x1f],uVar30,param_1[0x29],
                          param_1[0x2a],param_1[0x27],param_1[0x28]);
      *(undefined8 *)(param_1 + 0x2d) = uVar47;
      goto LAB_00814b74;
    }
    *(undefined1 *)local_e4 = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864dbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864dbc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x2c)) {
    case 0:
      uVar19 = param_1[0x16];
      uVar26 = param_1[0x17];
      uVar32 = param_1[0x1d];
      goto LAB_008149f8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case 3:
      goto switchD_00814848_caseD_3;
    case 4:
      uVar47 = *(undefined8 *)(param_1 + 0x2d);
    }
LAB_00814b74:
    local_e4 = param_1 + 0x2c;
    local_e8 = param_1 + 0x16;
    uVar46 = (**(code **)((int)((ulonglong)uVar47 >> 0x20) + 0xc))((int)uVar47,param_2);
    unaff_r8 = (uint ****)(uVar46 >> 0x20);
    if ((uVar46 & 1) == 0) {
      puVar39 = (undefined4 *)param_1[0x2e];
      uVar19 = param_1[0x2d];
      pcVar9 = (code *)*puVar39;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar19);
      }
      if (puVar39[1] != 0) {
        thunk_FUN_016d3fb4(uVar19);
      }
      pcVar28 = (char *)param_1[0x2b];
      if (*pcVar28 == '\0') {
        bVar45 = (bool)hasExclusiveAccess(pcVar28);
        if (!bVar45) goto LAB_00814c1c;
        *pcVar28 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00814c1c:
        FUN_01280da8(pcVar28);
      }
      FUN_0128236c(pcVar28);
      FUN_0163af68(pcVar28,1,pcVar28);
      if (param_1[0x26] != 0) {
        thunk_FUN_016d3fb4(param_1[0x27]);
      }
      if (param_1[0x21] != 0) {
        thunk_FUN_016d3fb4(param_1[0x22]);
      }
      *(undefined1 *)local_e4 = 1;
      if ((uVar46 & 1) == 0) {
        FUN_00815de4(local_e8);
        if (unaff_r8 == (uint ****)0x0) {
          param_1[0x19] = param_1[0x13];
          *(undefined1 *)(param_1 + 0x21) = 0;
          param_1[0x16] = param_1[9];
          param_1[0x17] = param_1[10];
          param_1[0x18] = param_1[8];
          param_1[0x1a] = param_1[0x14];
          goto switchD_008147d8_caseD_4;
        }
        goto LAB_00815580;
      }
    }
    else {
      *(undefined1 *)local_e4 = 4;
    }
    break;
  case 4:
switchD_008147d8_caseD_4:
    FUN_0081292c(&local_68,param_1 + 0x16,param_2);
    puVar39 = local_60;
    ppppuVar38 = local_64;
    ppppuVar2 = local_68;
    if (local_68 == (uint ****)0x80000001) {
      uVar3 = 4;
      goto LAB_00814ce0;
    }
    FUN_00812744(param_1 + 0x16);
    if (ppppuVar2 != (uint ****)&DAT_80000000) {
      iVar8 = 0;
      local_d4 = (uint ***)0x0;
      if (puVar39 != (undefined4 *)0x0) {
        iVar33 = param_1[0x12];
        pppuVar20 = (uint ***)0x0;
        do {
          pcVar9 = (code *)((int)ppppuVar38 + iVar8);
          if ((*(int *)(pcVar9 + 8) != iVar33) ||
             (pcVar9 = (code *)thunk_FUN_016dd50a(*(undefined4 *)(pcVar9 + 4),param_1[0x11],iVar33),
             pcVar9 != (code *)0x0)) {
            pppuVar20 = (uint ***)((int)pppuVar20 + 1);
            local_d4 = pppuVar20;
          }
          iVar8 = iVar8 + 0x10;
        } while ((int)puVar39 * 0x10 != iVar8);
        if (0 < (int)pppuVar20) {
          uVar47 = thunk_FUN_016de0ee(pcVar9,0x2c0);
          puVar22 = (uint *)((int)uVar47 + (int)((ulonglong)uVar47 >> 0x20));
          if ((char)puVar22[4] == '\0') {
            FUN_015f62e4(&local_68);
            *puVar22 = (uint)local_68;
            puVar22[1] = (uint)local_64;
            puVar22[2] = (uint)local_60;
            puVar22[3] = (uint)local_5c;
            *(undefined1 *)(puVar22 + 4) = 1;
          }
          local_78 = (uint *****)*puVar22;
          local_74 = (code *)puVar22[1];
          local_70 = puVar22[2];
          local_6c = puVar22[3];
          *puVar22 = (int)local_78 + 1;
          puVar22[1] = (uint)(local_74 + ((uint *****)0xfffffffe < local_78));
          local_84 = (uint *****)0x0;
          local_80 = (uint ****)0x0;
          local_88 = (uint *****)&DAT_005674cc;
          local_7c = (code *)0x0;
          FUN_008d3adc(&local_88,puVar39,local_78,local_74,local_70,local_6c);
          puVar23 = (undefined4 *)0x0;
          local_100 = 0;
LAB_00814f24:
          pppppuVar34 = (uint *****)ppppuVar38[(int)puVar23 * 4 + 2];
          if ((int)pppppuVar34 < 0) {
LAB_00815520:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_100,local_f0);
          }
          pppuVar20 = ppppuVar38[(int)puVar23 * 4 + 1];
          if (pppppuVar34 == (uint *****)0x0) {
            local_f0 = (uint *****)&DAT_00000001;
            local_11c = (uint *****)0x0;
          }
          else {
            local_f0 = (uint *****)thunk_FUN_016d4a50(pppppuVar34);
            if (local_f0 == (uint *****)0x0) {
              local_100 = 1;
              local_f0 = pppppuVar34;
              goto LAB_00815520;
            }
            local_11c = pppppuVar34;
          }
          FUN_016dd1aa(local_f0,pppuVar20,pppppuVar34);
          uVar12 = local_6c;
          uVar30 = local_70;
          pcVar9 = local_74;
          pppppuVar31 = local_78;
          local_5c = (code *)((uint)local_74 ^ 0x6c796765);
          local_60 = (undefined4 *)((uint)local_78 ^ 0x6e657261);
          local_54 = (undefined1 *)(local_6c ^ 0x646f7261);
          local_58 = (undefined4 *)(local_70 ^ 0x6e646f6d);
          local_4c = (code *)(local_6c ^ 0x74656462);
          local_50 = (undefined4 *)(local_70 ^ 0x79746573);
          local_48 = local_78;
          local_44 = local_74;
          local_40 = local_70;
          local_3c = local_6c;
          local_64 = (uint ****)((uint)local_74 ^ 0x736f6d65);
          local_38 = 0;
          local_68 = (uint ****)((uint)local_78 ^ 0x70736575);
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_98 = pppppuVar34;
          FUN_00834c9c(&local_68,&local_98,4);
          FUN_00834c9c(&local_68,local_f0,pppppuVar34);
          pcVar35 = (code *)((int)local_64 + (int)(local_54 + CARRY4((uint)local_58,(uint)local_68))
                            );
          uVar24 = ((int)local_54 << 0xd | (uint)local_58 >> 0x13) ^ (uint)pcVar35;
          uVar18 = ((int)local_58 << 0xd | (uint)local_54 >> 0x13) ^
                   (uint)((int)local_58 + (int)local_68);
          uVar29 = local_34 | local_30 << 0x18;
          uVar15 = uVar29 ^ (uint)local_4c;
          uVar10 = local_38 ^ (uint)local_50;
          uVar42 = uVar10 + (int)local_60;
          pcVar40 = local_5c + CARRY4(uVar10,(uint)local_60) + uVar15;
          uVar17 = (uint)(pcVar40 + CARRY4(uVar42,uVar18) + uVar24) ^
                   (uVar24 << 0x11 | uVar18 >> 0xf);
          uVar21 = (uVar15 << 0x10 | uVar10 >> 0x10) ^ (uint)pcVar40;
          uVar15 = (uVar10 << 0x10 | uVar15 >> 0x10) ^ uVar42;
          puVar11 = (undefined1 *)((int)local_58 + (int)local_68) +
                    CARRY4(uVar15,(uint)pcVar35) + uVar21;
          uVar10 = uVar42 + uVar18 ^ (uVar18 << 0x11 | uVar24 >> 0xf);
          uVar25 = (uint)(pcVar35 + uVar15) ^ local_38;
          uVar43 = uVar25 + uVar10;
          uVar44 = ((uint)puVar11 ^ uVar29) + uVar17 + (uint)CARRY4(uVar25,uVar10);
          uVar25 = uVar44 ^ (uVar17 << 0xd | uVar10 >> 0x13);
          uVar17 = uVar43 ^ (uVar10 << 0xd | uVar17 >> 0x13);
          uVar10 = (uVar21 << 0x15 | uVar15 >> 0xb) ^ (uint)puVar11;
          uVar24 = (uint)(pcVar40 + CARRY4(uVar42,uVar18) + uVar24) ^ 0xff;
          uVar15 = (uVar15 << 0x15 | uVar21 >> 0xb) ^ (uint)(pcVar35 + uVar15);
          uVar41 = uVar15 + uVar24;
          uVar21 = uVar10 + uVar42 + uVar18 + (uint)CARRY4(uVar15,uVar24);
          uVar29 = uVar25 + uVar21 + (uint)CARRY4(uVar17,uVar41);
          uVar24 = uVar29 ^ (uVar25 << 0x11 | uVar17 >> 0xf);
          uVar18 = uVar17 + uVar41 ^ (uVar17 << 0x11 | uVar25 >> 0xf);
          uVar21 = (uVar10 << 0x10 | uVar15 >> 0x10) ^ uVar21;
          uVar15 = (uVar15 << 0x10 | uVar10 >> 0x10) ^ uVar41;
          uVar42 = uVar15 + uVar44;
          uVar25 = uVar21 + uVar43 + (uint)CARRY4(uVar15,uVar44);
          uVar44 = uVar24 + uVar25 + (uint)CARRY4(uVar18,uVar42);
          uVar10 = (uVar24 << 0xd | uVar18 >> 0x13) ^ uVar44;
          uVar24 = (uVar18 << 0xd | uVar24 >> 0x13) ^ uVar18 + uVar42;
          uVar25 = (uVar21 << 0x15 | uVar15 >> 0xb) ^ uVar25;
          uVar15 = (uVar15 << 0x15 | uVar21 >> 0xb) ^ uVar42;
          uVar21 = uVar15 + uVar29;
          uVar29 = uVar25 + uVar17 + uVar41 + (uint)CARRY4(uVar15,uVar29);
          uVar41 = uVar10 + uVar29 + (uint)CARRY4(uVar24,uVar21);
          uVar29 = (uVar25 << 0x10 | uVar15 >> 0x10) ^ uVar29;
          uVar15 = (uVar15 << 0x10 | uVar25 >> 0x10) ^ uVar21;
          uVar43 = (uVar10 << 0x11 | uVar24 >> 0xf) ^ uVar41;
          uVar17 = uVar15 + uVar44;
          uVar25 = uVar29 + uVar18 + uVar42 + (uint)CARRY4(uVar15,uVar44);
          uVar42 = (uVar29 << 0x15 | uVar15 >> 0xb) ^ uVar25;
          uVar15 = (uVar15 << 0x15 | uVar29 >> 0xb) ^ uVar17;
          uVar29 = uVar15 + uVar41;
          uVar10 = (uVar24 << 0x11 | uVar10 >> 0xf) ^ uVar24 + uVar21;
          uVar18 = uVar42 + uVar24 + uVar21 + (uint)CARRY4(uVar15,uVar41);
          uVar24 = (uVar43 << 0xd | uVar10 >> 0x13) ^ uVar43 + uVar25 + (uint)CARRY4(uVar10,uVar17);
          uVar10 = (uVar10 << 0xd | uVar43 >> 0x13) ^ uVar10 + uVar17;
          if (local_80 == (uint ****)0x0) {
            FUN_008d3adc(&local_88,1,pppppuVar31,pcVar9,uVar30,uVar12);
          }
          pppppuVar37 = local_84;
          pppppuVar31 = local_88;
          iVar8 = 0;
          uVar12 = ((uVar42 >> 0x10 ^ uVar29) << 0x15 |
                   ((uVar42 << 0x10 | uVar15 >> 0x10) ^ uVar18) >> 0xb) ^
                   (uVar10 << 0x11 | uVar24 >> 0xf) ^ uVar24 + uVar18 + (uint)CARRY4(uVar10,uVar29)
                   ^ uVar10 + uVar29;
          bVar45 = false;
          uVar30 = uVar12;
          do {
            uVar30 = (uint)pppppuVar37 & uVar30;
            uVar15 = *(uint *)((int)pppppuVar31 + uVar30);
            uVar10 = uVar15 ^ (uVar12 >> 0x19) * 0x1010101;
            for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                uVar10 = uVar10 - 1 & uVar10) {
              uVar17 = uVar30 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                               (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3)
                       & (uint)pppppuVar37;
              if ((pppppuVar34 == (uint *****)pppppuVar31[uVar17 * -3 + -1]) &&
                 (iVar33 = thunk_FUN_016dd50a(local_f0,pppppuVar31[uVar17 * -3 + -2],pppppuVar34),
                 iVar33 == 0)) {
                if (local_11c != (uint *****)0x0) {
                  thunk_FUN_016d3fb4(local_f0);
                }
                puVar23 = (undefined4 *)((int)puVar23 + 1);
                if (puVar23 == puVar39) goto LAB_008155c0;
                goto LAB_00814f24;
              }
            }
            uVar17 = uVar15 & 0x80808080;
            uVar10 = local_140;
            if (bVar45) {
LAB_008153f8:
              if ((uVar17 & uVar15 << 1) != 0) goto LAB_00815458;
              bVar45 = true;
              local_140 = uVar10;
            }
            else {
              if (uVar17 != 0) {
                uVar10 = uVar30 + ((uint)LZCOUNT((uVar15 & 0x80) << 0x18 |
                                                 (uVar17 >> 8 & 0xff) << 0x10 |
                                                 (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3
                                  ) & (uint)pppppuVar37;
                goto LAB_008153f8;
              }
              bVar45 = false;
            }
            iVar8 = iVar8 + 4;
            uVar30 = iVar8 + uVar30;
          } while( true );
        }
      }
      goto LAB_00815994;
    }
    local_a0 = ppppuVar38;
    unaff_r8 = ppppuVar38;
    if (*(char *)((int)param_1 + 0x55) != '\0') {
      if (((DAT_018d9130 < 4) &&
          ((DAT_018d9878 - 1 < 2 ||
           ((DAT_018d9878 != 0 && (cVar4 = FUN_0169ac90(&DAT_018d9870), cVar4 != '\0')))))) &&
         (iVar8 = FUN_016949d8(DAT_018d9870), iVar8 != 0)) {
        local_90 = (uint ****)(DAT_018d9870 + 0x1c);
        local_68 = (uint ****)*local_90;
        local_64 = *(uint *****)(DAT_018d9870 + 0x20);
        if (local_64 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864ddc);
        }
        local_60 = *(undefined4 **)(DAT_018d9870 + 0x24);
        local_5c = *(code **)(DAT_018d9870 + 0x28);
        local_cc = (uint *****)&local_ac;
        local_94 = (uint *****)&DAT_00000001;
        local_a8 = (uint *****)&local_88;
        local_80 = (uint ****)&local_a0;
        local_88 = (uint *****)(param_1 + 0x13);
        local_98 = (uint *****)&local_d0;
        local_58 = (undefined4 *)0x0;
        local_c8 = (uint ****)&DAT_018abb78;
        local_ac = (uint *****)&DAT_00345cba;
        local_7c = FUN_00604528;
        local_84 = (uint *****)FUN_00facd88;
        local_d0 = &local_68;
        FUN_008ce4cc(&local_98);
        ppppuVar38 = local_a0;
      }
      unaff_r8 = (uint ****)0x0;
      (*(code *)**ppppuVar38)(ppppuVar38);
    }
LAB_00815580:
    iVar8 = param_1[0x10];
    goto joined_r0x008158bc;
  }
  uVar3 = 3;
LAB_00814ce0:
  *(undefined1 *)(param_1 + 0x15) = uVar3;
  return CONCAT44(unaff_r8,1);
LAB_00815458:
  uVar30 = (uint)*(char *)((int)pppppuVar31 + uVar10);
  if (-1 < (int)uVar30) {
    uVar30 = (uint)*pppppuVar31 & 0x80808080;
    uVar10 = LZCOUNT(((uint)*pppppuVar31 & 0x80) << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                     (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18);
    uVar30 = (uint)*(byte *)((int)pppppuVar31 + (uVar10 >> 3));
    uVar10 = uVar10 >> 3;
  }
  bVar1 = (byte)(uVar12 >> 0x19);
  *(byte *)((int)pppppuVar31 + uVar10) = bVar1;
  local_80 = (uint ****)((int)local_80 - (uVar30 & 1));
  *(byte *)((int)pppppuVar31 + ((uint)pppppuVar37 & uVar10 - 4) + 4) = bVar1;
  pppppuVar31[uVar10 * -3 + -3] = (uint ****)local_11c;
  pppppuVar31[uVar10 * -3 + -1] = (uint ****)pppppuVar34;
  pppppuVar31[uVar10 * -3 + -2] = (uint ****)local_f0;
  local_7c = local_7c + 1;
  puVar23 = (undefined4 *)((int)puVar23 + 1);
  if (puVar23 == puVar39) goto LAB_008155c0;
  goto LAB_00814f24;
LAB_008155c0:
  local_d0 = local_88;
  local_cc = local_84;
  local_c8 = local_80;
  local_c4 = local_7c;
  local_c0 = local_78;
  pcStack_bc = local_74;
  uStack_b8 = local_70;
  uStack_b4 = local_6c;
  if (*(char *)((int)param_1 + 0x55) != '\0') {
    if ((DAT_018d9130 < 4) &&
       (((DAT_018d9884 - 1 < 2 ||
         ((DAT_018d9884 != 0 && (cVar4 = FUN_0169ac90(&DAT_018d987c), cVar4 != '\0')))) &&
        (iVar8 = FUN_016949d8(DAT_018d987c), iVar8 != 0)))) {
      local_a4 = (undefined4 *)(DAT_018d987c + 0x1c);
      if (*(uint ******)(DAT_018d987c + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864dcc);
      }
      local_80 = *(uint *****)(DAT_018d987c + 0x24);
      local_7c = *(code **)(DAT_018d987c + 0x28);
      local_9c = (uint ****)&local_68;
      local_50 = param_1 + 0x10;
      local_58 = param_1 + 9;
      local_60 = param_1 + 0x13;
      local_78 = (uint *****)0x0;
      local_a0 = (uint ****)&DAT_00345c41;
      local_44 = FUN_008aecc8;
      local_4c = FUN_007b9a30;
      local_54 = &LAB_009d4d9c;
      local_5c = FUN_00facd88;
      local_64 = (uint ****)FUN_00fac2b8;
      local_68 = &local_d4;
      local_90 = (uint ****)&DAT_018abb78;
      local_94 = &local_a0;
      local_98 = (uint *****)&local_88;
      local_a8 = (uint *****)&DAT_00000001;
      local_ac = (uint *****)&local_98;
      local_88 = (uint *****)*local_a4;
      local_84 = *(uint ******)(DAT_018d987c + 0x20);
      local_48 = (uint *****)&local_d0;
      FUN_008ce3fc(&local_ac);
    }
    pppppuVar34 = local_cc;
    if (local_cc != (uint *****)0x0) {
      if (local_c4 != (code *)0x0) {
        pppppuVar37 = local_d0 + 1;
        uVar30 = ~(uint)*local_d0 & 0x80808080;
        pcVar9 = local_c4;
        pppppuVar31 = local_d0;
        do {
          pppppuVar36 = pppppuVar37;
          if (uVar30 == 0) {
            do {
              pppppuVar37 = pppppuVar36 + 1;
              ppppuVar13 = *pppppuVar36;
              pppppuVar31 = pppppuVar31 + -0xc;
              pppppuVar36 = pppppuVar37;
            } while (((uint)ppppuVar13 & 0x80808080) == 0x80808080);
            uVar30 = (uint)ppppuVar13 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = (uint)LZCOUNT(uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                                 (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) >> 3;
          if (pppppuVar31[uVar12 * -3 + -3] != (uint ****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar31[uVar12 * -3 + -2]);
          }
          pcVar9 = pcVar9 + -1;
          uVar30 = uVar30 - 1 & uVar30;
        } while (pcVar9 != (code *)0x0);
      }
      if ((int)pppppuVar34 * 0xd != -0x11) {
        thunk_FUN_016d3fb4(local_d0 + (int)pppppuVar34 * -3 + -3);
      }
    }
LAB_00815994:
    for (puVar23 = (undefined4 *)0x0; puVar39 != puVar23; puVar23 = (undefined4 *)((int)puVar23 + 1)
        ) {
      if (ppppuVar38[(int)puVar23 * 4] != (uint ***)0x0) {
        thunk_FUN_016d3fb4(ppppuVar38[(int)puVar23 * 4 + 1]);
      }
    }
    if (ppppuVar2 != (uint ****)0x0) {
      thunk_FUN_016d3fb4(ppppuVar38);
    }
    if (param_1[0x10] != 0) {
      thunk_FUN_016d3fb4(param_1[0x11]);
    }
    iVar8 = param_1[0xb];
    unaff_r8 = (uint ****)0x0;
    goto joined_r0x008159f8;
  }
  local_4c = FUN_007b9a30;
  local_50 = param_1 + 0x10;
  local_58 = param_1 + 9;
  local_60 = param_1 + 0x13;
  local_68 = &local_d4;
  local_44 = FUN_008aecc8;
  local_54 = &LAB_009d4d9c;
  local_5c = FUN_00facd88;
  local_64 = (uint ****)FUN_00fac2b8;
  local_48 = (uint *****)&local_d0;
  FUN_00600d2c(&local_88,&DAT_00345be2,&local_68);
  local_98 = local_88;
  local_94 = local_84;
  local_90 = local_80;
  unaff_r8 = (uint ****)FUN_00808de4(&local_98);
  pppppuVar34 = local_cc;
  if (local_cc != (uint *****)0x0) {
    if (local_c4 != (code *)0x0) {
      pppppuVar37 = local_d0 + 1;
      uVar30 = ~(uint)*local_d0 & 0x80808080;
      pppppuVar31 = local_d0;
      pcVar9 = local_c4;
      do {
        pppppuVar36 = pppppuVar37;
        if (uVar30 == 0) {
          do {
            pppppuVar37 = pppppuVar36 + 1;
            ppppuVar13 = *pppppuVar36;
            pppppuVar31 = pppppuVar31 + -0xc;
            pppppuVar36 = pppppuVar37;
          } while (((uint)ppppuVar13 & 0x80808080) == 0x80808080);
          uVar30 = (uint)ppppuVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar12 = (uint)LZCOUNT(uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                               (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18) >> 3;
        if (pppppuVar31[uVar12 * -3 + -3] != (uint ****)0x0) {
          thunk_FUN_016d3fb4(pppppuVar31[uVar12 * -3 + -2]);
        }
        pcVar9 = pcVar9 + -1;
        uVar30 = uVar30 - 1 & uVar30;
      } while (pcVar9 != (code *)0x0);
    }
    if ((int)pppppuVar34 * 0xd != -0x11) {
      thunk_FUN_016d3fb4(local_d0 + (int)pppppuVar34 * -3 + -3);
    }
  }
  for (puVar23 = (undefined4 *)0x0; puVar39 != puVar23; puVar23 = (undefined4 *)((int)puVar23 + 1))
  {
    if (ppppuVar38[(int)puVar23 * 4] != (uint ***)0x0) {
      thunk_FUN_016d3fb4(ppppuVar38[(int)puVar23 * 4 + 1]);
    }
  }
  if (ppppuVar2 != (uint ****)0x0) {
    thunk_FUN_016d3fb4(ppppuVar38);
  }
  iVar8 = param_1[0x10];
joined_r0x008158bc:
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(param_1[0x11]);
  }
  iVar8 = param_1[0xb];
joined_r0x008159f8:
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(param_1[0xc]);
  }
  *(undefined1 *)(param_1 + 0x15) = 1;
  return ZEXT48(unaff_r8) << 0x20;
}

