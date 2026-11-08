// FUN_01915ae8 @ 01915ae8 size=5992 calls_out=24 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01915ae8(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint ****ppppuVar6;
  uint ****ppppuVar7;
  uint ****ppppuVar8;
  uint ****ppppuVar9;
  uint ****ppppuVar10;
  uint ****ppppuVar11;
  int iVar12;
  byte *pbVar13;
  uint3 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  uint ***pppuVar20;
  uint ****ppppuVar21;
  uint ****ppppuVar22;
  uint ***pppuVar23;
  int *piVar24;
  int iVar25;
  undefined4 uVar26;
  uint ***pppuVar27;
  uint ****ppppuVar28;
  uint ****ppppuVar29;
  uint ***pppuVar30;
  uint ***pppuVar31;
  uint uVar32;
  uint ****ppppuVar33;
  int iVar34;
  undefined4 uVar35;
  uint ****ppppuVar36;
  int iVar37;
  uint ****ppppuVar38;
  uint ****ppppuVar39;
  uint ****ppppuVar40;
  uint ****ppppuVar41;
  int iVar42;
  uint ****ppppuVar43;
  uint uVar44;
  uint *puVar45;
  int iVar46;
  uint ****ppppuVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined *local_1dc;
  char *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined *local_1c8;
  uint ****local_1c4;
  uint ****local_1a4;
  undefined4 local_1a0;
  uint ****local_19c;
  uint ****local_18c;
  uint ****local_180;
  uint ****local_178;
  uint ****local_174;
  uint ****local_170;
  uint ****local_16c;
  uint ****local_138;
  uint ****local_134;
  uint ****local_130;
  uint ****local_12c;
  uint ****local_118;
  uint ****ppppuStack_114;
  uint ****ppppuStack_110;
  uint ****ppppuStack_10c;
  undefined8 local_f8;
  int local_f0;
  uint ****local_e8;
  uint ****local_e4;
  uint ****local_e0;
  uint ****local_d8;
  uint ****local_d4;
  uint ****local_d0;
  uint ****local_cc;
  uint ****local_c8;
  uint ****local_c4;
  uint ****local_c0;
  uint ****local_bc;
  uint ****local_b8;
  uint ****local_b4;
  uint ****local_b0;
  int local_ac;
  uint ****local_a8;
  uint ****local_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****local_8c;
  uint ****local_88;
  uint ****ppppuStack_84;
  uint ****ppppuStack_80;
  uint ****ppppuStack_7c;
  uint ****local_78;
  uint ****local_74;
  uint ****local_70;
  uint ****local_6c;
  uint ****local_68;
  uint ****local_64;
  uint ****local_60;
  uint ****local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint ****local_50;
  uint ****local_4c;
  uint ****local_48;
  uint ****ppppuStack_44;
  uint ****local_40;
  uint ****local_3c;
  uint ****ppppuStack_38;
  uint ****ppppuStack_34;
  uint ****ppppuStack_30;
  uint ****ppppuStack_2c;
  
  iVar12 = *param_2;
  ppppuVar21 = (uint ****)&DAT_80000001;
  if (iVar12 == param_2[1]) goto LAB_01915f6c;
  ppppuVar40 = *(uint *****)(iVar12 + 8);
  puVar45 = (uint *)param_2[2];
  ppppuVar21 = (uint ****)&local_d8;
  pbVar13 = *(byte **)(iVar12 + 4);
  *param_2 = iVar12 + 0xc;
  local_138 = (uint ****)0x8000001d;
  local_134 = (uint ****)CONCAT31(local_134._1_3_,5);
  local_78 = (uint ****)0x8000001d;
  local_74 = (uint ****)CONCAT31(local_74._1_3_,5);
  ppppuVar28 = (uint ****)&DAT_00000005;
  if (ppppuVar40 == (uint ****)0x0) {
LAB_01915e24:
    local_4c = (uint ****)0x0;
    local_48 = ppppuVar28;
LAB_01915e3c:
    local_50 = (uint ****)&DAT_80000000;
    local_d0 = (uint ****)0x8000001d;
    local_cc = local_74;
    local_c8 = local_70;
    local_c4 = local_6c;
    local_c0 = local_68;
    local_bc = local_64;
    local_b8 = local_60;
    local_b4 = local_5c;
    FUN_01aeb5f4(&local_50);
LAB_01915e64:
    local_174 = local_c4;
    local_170 = local_b4;
    local_16c = local_b8;
    ppppuVar36 = local_d0;
    local_178 = local_c8;
    ppppuVar40 = local_bc;
    ppppuVar43 = local_cc;
    ppppuVar38 = local_c0;
LAB_01915e90:
    FUN_01aeb5f4(&local_138);
    ppppuVar39 = local_178;
  }
  else {
    ppppuVar28 = (uint ****)~(uint)*pbVar13;
    if ((((uint)ppppuVar28 & 0x1f) == 0) || (ppppuVar40 == (uint ****)&DAT_00000001))
    goto LAB_01915e24;
    ppppuVar28 = (uint ****)(uint)pbVar13[1];
    if ((char)pbVar13[1] < '\0') {
      ppppuVar29 = (uint ****)((int)ppppuVar28 + -0x81);
      ppppuVar28 = ppppuVar29;
      if (ppppuVar29 < &SUB_00000004) {
        ppppuVar28 = (uint ****)(&switchD_01915d44::switchdataD_01915d48)[(int)ppppuVar29];
        switch(ppppuVar29) {
        case (uint ****)0x0:
          if (((uint ****)0x2 < ppppuVar40) && (0x7fffffff < (uint)(int)(char)pbVar13[2])) {
            ppppuVar28 = (uint ****)(uint)pbVar13[2];
            uVar32 = 3;
            goto LAB_01915b68;
          }
          break;
        case (uint ****)0x1:
          if (&DAT_00000003 < ppppuVar40) {
            ppppuVar28 = (uint ****)0x0;
            if (pbVar13[2] != 0) {
              ppppuVar28 = (uint ****)(uint)CONCAT11(pbVar13[2],pbVar13[3]);
              uVar32 = 4;
              goto LAB_01915b68;
            }
          }
          break;
        case (uint ****)0x2:
          if (((uint ****)0x2 < ppppuVar40) && (&SUB_00000004 < ppppuVar40)) {
            ppppuVar28 = (uint ****)0x0;
            if (pbVar13[2] != 0) {
              ppppuVar28 = (uint ****)
                           ((uint)pbVar13[3] << 8 | (uint)pbVar13[2] << 0x10 | (uint)pbVar13[4]);
              uVar32 = 5;
              goto LAB_01915b68;
            }
          }
          break;
        case (uint ****)0x3:
          if (((((uint ****)0x2 < ppppuVar40) && (ppppuVar40 != (uint ****)&DAT_00000003)) &&
              (pbVar13[2] != 0)) && (&DAT_00000005 < ppppuVar40)) {
            uVar32 = 6;
            ppppuVar28 = (uint ****)
                         ((uint)pbVar13[3] << 0x10 | (uint)pbVar13[2] << 0x18 |
                          (uint)pbVar13[4] << 8 | (uint)pbVar13[5]);
            if (ppppuVar28 != (uint ****)&DAT_ffffffff) goto LAB_01915b68;
          }
        }
      }
      goto LAB_01915e24;
    }
    uVar32 = 2;
LAB_01915b68:
    if ((CARRY4(uVar32,(uint)ppppuVar28)) || (ppppuVar40 < (uint ****)(uVar32 + (int)ppppuVar28)))
    goto LAB_01915e24;
    if (*pbVar13 != 0x30) goto LAB_01915e3c;
    FUN_01aeb68c(&local_d8,pbVar13 + uVar32,ppppuVar28,&local_78);
    ppppuVar8 = local_b8;
    ppppuVar7 = local_bc;
    ppppuVar43 = local_c0;
    ppppuVar38 = local_c4;
    ppppuVar6 = local_c8;
    ppppuVar29 = local_cc;
    if (local_d8 == (uint ****)&DAT_00000001) goto LAB_01915e64;
    local_16c = local_cc;
    local_170 = local_c8;
    local_174 = local_bc;
    local_118 = (uint ****)&DAT_80000000;
    local_e8 = local_d4;
    local_e4 = local_d0;
    local_e0 = (uint ****)0x0;
    FUN_01af3370(&local_d8,&local_e8);
    ppppuVar33 = (uint ****)((uint)local_d4 & 0xff);
    if (local_d8 != (uint ****)0x8000002d) {
      puVar14 = (uint3 *)((uint)ppppuVar21 | 5);
      local_174 = *(uint *****)((int)puVar14 + 7);
      local_178 = *(uint *****)((int)puVar14 + 3);
      ppppuVar21 = (uint ****)(uint)*puVar14;
LAB_01915fdc:
      ppppuVar36 = local_d8;
      ppppuVar40 = local_c4;
      ppppuVar38 = local_c8;
      local_170 = local_bc;
      local_16c = local_c0;
      goto LAB_01915fe0;
    }
    if (ppppuVar33 != (uint ****)&DAT_00000001) {
      ppppuVar36 = (uint ****)0x80000023;
      goto LAB_01915fe0;
    }
    FUN_01af347c(&local_d8,&local_e8,0x30);
    ppppuVar33 = local_d4;
    if (local_d8 != (uint ****)0x8000002d) {
LAB_01915fbc:
      ppppuVar21 = (uint ****)((uint)local_d4 >> 8);
      local_174 = local_cc;
      ppppuVar33 = local_d4;
      local_178 = local_d0;
      goto LAB_01915fdc;
    }
    ppppuVar36 = (uint ****)&DAT_8000001c;
    if ((local_d0 != ppppuVar43) ||
       (iVar12 = thunk_FUN_01bed842(local_d4,ppppuVar38,ppppuVar43), iVar12 != 0))
    goto LAB_01915fe0;
    FUN_01af347c(&local_d8,&local_e8,0x30);
    ppppuVar36 = local_d0;
    ppppuVar21 = local_d4;
    local_178 = local_d0;
    if (local_d8 != (uint ****)0x8000002d) goto LAB_01915fbc;
    FUN_01aef5d0(&local_d8,&local_e8);
    if ((local_d8 != (uint ****)0x8000002d) ||
       (FUN_01aef5d0(&local_d8,&local_e8), local_d8 != (uint ****)0x8000002d)) {
      local_178 = local_d0;
      local_174 = local_cc;
      ppppuVar21 = (uint ****)((uint)local_d4 >> 8);
      local_170 = local_bc;
      local_16c = local_c0;
      ppppuVar33 = local_d4;
      ppppuVar36 = local_d8;
      ppppuVar40 = local_c4;
      ppppuVar38 = local_c8;
LAB_01915fe0:
      FUN_01aeb5f4(&local_118);
      ppppuVar43 = (uint ****)((uint)ppppuVar33 & 0xff | (int)ppppuVar21 << 8);
LAB_01915ff0:
      goto LAB_01915e90;
    }
    ppppuVar33 = (uint ****)&DAT_00000001;
    if (local_e0 < local_e4) {
      ppppuVar47 = (uint ****)0x0;
      if (*(char *)((int)local_e8 + (int)local_e0) == '0') {
        if ((uint ****)((int)local_e0 + 1) < local_e4) {
          local_18c = (uint ****)((int)local_e0 + 2);
          bVar4 = *(byte *)((int)local_e8 + (int)local_e0 + 1);
          ppppuVar47 = (uint ****)(uint)bVar4;
          if (-1 < (char)bVar4) {
LAB_01915d08:
            if ((CARRY4((uint)ppppuVar47,(uint)local_18c)) ||
               (local_e4 < (uint ****)((int)ppppuVar47 + (int)local_18c))) {
              local_178 = ppppuVar47;
LAB_01916718:
              ppppuVar33 = (uint ****)0x0;
              ppppuVar36 = (uint ****)&DAT_80000000;
              ppppuVar21 = (uint ****)0x0;
              goto LAB_01915fe0;
            }
            ppppuVar33 = (uint ****)((int)local_e8 + (int)local_18c);
            local_e0 = (uint ****)((int)ppppuVar47 + (int)local_18c);
            goto LAB_01916034;
          }
          switch(ppppuVar47) {
          case (uint ****)0x81:
            if ((local_18c < local_e4) &&
               (pbVar13 = (byte *)((int)local_e8 + (int)local_18c),
               0x7fffffff < (uint)(int)(char)*pbVar13)) {
              local_18c = (uint ****)((int)local_e0 + 3);
              ppppuVar47 = (uint ****)(uint)*pbVar13;
              goto LAB_01915d08;
            }
            break;
          case (uint ****)0x82:
            if (local_18c < local_e4) {
              ppppuVar33 = (uint ****)((int)local_e0 + 3);
            }
            if ((local_18c < local_e4 && ppppuVar33 < local_e4) &&
               (pcVar1 = (char *)((int)local_e8 + (int)local_18c), *pcVar1 != '\0')) {
              local_18c = local_e0 + 1;
              ppppuVar47 = (uint ****)
                           (uint)CONCAT11(*pcVar1,*(undefined1 *)((int)local_e8 + (int)ppppuVar33));
              goto LAB_01915d08;
            }
            break;
          case (uint ****)0x83:
            if (local_18c < local_e4) {
              ppppuVar47 = (uint ****)((int)local_e0 + 3);
              if (ppppuVar47 < local_e4) {
                ppppuVar33 = local_e0 + 1;
              }
              if ((ppppuVar47 < local_e4 && ppppuVar33 < local_e4) &&
                 (pbVar13 = (byte *)((int)local_e8 + (int)local_18c), *pbVar13 != 0)) {
                local_18c = (uint ****)((int)local_e0 + 5);
                ppppuVar47 = (uint ****)
                             ((uint)*(byte *)((int)local_e8 + (int)ppppuVar47) << 8 |
                              (uint)*pbVar13 << 0x10 |
                             (uint)*(byte *)((int)local_e8 + (int)ppppuVar33));
                goto LAB_01915d08;
              }
            }
            break;
          case (uint ****)0x84:
            if (local_18c < local_e4) {
              ppppuVar47 = (uint ****)((int)local_e0 + 3);
              if (ppppuVar47 < local_e4) {
                ppppuVar33 = local_e0 + 1;
              }
              if (ppppuVar47 < local_e4 && ppppuVar33 < local_e4) {
                if ((local_e4 <= (uint ****)((int)local_e0 + 5)) ||
                   (*(byte *)((int)local_e8 + (int)local_18c) == 0)) goto LAB_01916718;
                ppppuVar47 = (uint ****)
                             ((uint)*(byte *)((int)local_e8 + (int)ppppuVar47) << 0x10 |
                              (uint)*(byte *)((int)local_e8 + (int)local_18c) << 0x18 |
                              (uint)*(byte *)((int)local_e8 + (int)ppppuVar33) << 8 |
                             (uint)*(byte *)((int)local_e8 + (int)local_e0 + 5));
                if (ppppuVar47 != (uint ****)&DAT_ffffffff) {
                  local_18c = (uint ****)((int)local_e0 + 6);
                  goto LAB_01915d08;
                }
              }
            }
          }
        }
        ppppuVar33 = (uint ****)0x0;
        ppppuVar21 = (uint ****)0x0;
        ppppuVar36 = (uint ****)&DAT_80000000;
        goto LAB_01915fe0;
      }
    }
    else {
      ppppuVar47 = (uint ****)0x0;
    }
LAB_01916034:
    ppppuVar39 = (uint ****)&local_c8;
    local_b0 = (uint ****)0x0;
    local_bc = ppppuVar36;
    local_c4 = ppppuVar8;
    local_c8 = ppppuVar7;
    local_d4 = ppppuVar6;
    local_d8 = ppppuVar29;
    local_a8 = local_d0;
    local_a4 = local_cc;
    local_c0 = ppppuVar21;
    local_cc = ppppuVar43;
    local_d0 = ppppuVar38;
    local_50 = (uint ****)0x80000012;
    local_b8 = ppppuVar33;
    local_b4 = ppppuVar47;
    FUN_01af3bbc(&local_78,&local_e8,&local_50,&local_d8);
    ppppuVar11 = local_a4;
    ppppuVar10 = local_a8;
    ppppuVar9 = local_b0;
    ppppuVar22 = local_b4;
    ppppuVar41 = local_b8;
    ppppuVar47 = local_bc;
    ppppuVar33 = local_c0;
    ppppuVar36 = local_c4;
    ppppuVar8 = local_c8;
    ppppuVar7 = local_cc;
    ppppuVar6 = local_d0;
    ppppuVar29 = local_d4;
    ppppuVar21 = local_d8;
    if (local_78 != (uint ****)0x8000002d) {
      local_178 = local_70;
      local_174 = local_6c;
      ppppuVar21 = (uint ****)((uint)local_74 >> 8);
      local_170 = local_5c;
      local_16c = local_60;
      ppppuVar33 = local_74;
      ppppuVar36 = local_78;
      ppppuVar40 = local_64;
      ppppuVar38 = local_68;
      goto LAB_01915fe0;
    }
    local_170 = local_b4;
    local_16c = local_b8;
    local_174 = local_d8;
    if (local_d8 == (uint ****)0x0) {
      local_178 = local_c8;
      local_174 = local_c4;
      ppppuVar21 = (uint ****)((uint)local_cc >> 8);
      ppppuVar33 = local_cc;
      ppppuVar36 = local_d0;
      ppppuVar40 = local_bc;
      ppppuVar38 = local_c0;
      goto LAB_01915fe0;
    }
    if (local_e0 != local_e4) {
      ppppuVar36 = (uint ****)&DAT_80000000;
      goto LAB_01915ff0;
    }
    FUN_01aeb5f4(&local_118);
    if ((ppppuVar9 != (uint ****)0x0) &&
       (FUN_01af6b6c(&local_d8,ppppuVar9,local_ac), local_d8 != (uint ****)0x8000002d)) {
      local_174 = local_cc;
      local_170 = local_bc;
      local_16c = local_c0;
      ppppuVar36 = local_d8;
      local_178 = local_d0;
      ppppuVar40 = local_c4;
      ppppuVar43 = local_d4;
      ppppuVar38 = local_c8;
      goto LAB_01915e90;
    }
    if ((uint ****)(uVar32 + (int)ppppuVar28) == ppppuVar40) {
      FUN_01aeb5f4(&local_138);
      local_78 = (uint ****)0x8000002d;
      local_12c = (uint ****)&local_78;
      local_130 = (uint ****)0x0;
      local_134 = ppppuVar22;
      local_138 = ppppuVar41;
      FUN_01aedb00(&local_50);
      if (local_50 == (uint ****)0x2 && local_4c == (uint ****)0x0) {
        if (local_78 != (uint ****)0x8000002d) {
          local_1c4 = (uint ****)0x0;
          local_178 = (uint ****)&DAT_00000008;
          goto LAB_0191688c;
        }
        local_178 = (uint ****)&DAT_00000008;
        ppppuVar28 = (uint ****)0x0;
        local_d4 = (uint ****)&DAT_00000008;
        local_1c4 = (uint ****)0x0;
        local_d8 = (uint ****)0x0;
      }
      else {
        local_178 = (uint ****)FUN_01298504(0xa0,8);
        if (local_178 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,0xa0);
        }
        *local_178 = (uint ***)local_50;
        local_178[1] = (uint ***)local_4c;
        local_178[2] = (uint ***)local_48;
        local_178[3] = (uint ***)ppppuStack_44;
        local_178[4] = (uint ***)local_40;
        local_178[5] = (uint ***)local_3c;
        local_178[6] = (uint ***)ppppuStack_38;
        local_178[7] = (uint ***)ppppuStack_34;
        local_178[8] = (uint ***)ppppuStack_30;
        local_178[9] = (uint ***)ppppuStack_2c;
        local_e8 = (uint ****)&SUB_00000004;
        local_e0 = (uint ****)&DAT_00000001;
        local_118 = local_138;
        ppppuStack_114 = local_134;
        ppppuStack_110 = local_130;
        ppppuStack_10c = local_12c;
        iVar12 = 0x28;
        local_e4 = local_178;
        while( true ) {
          ppppuVar28 = local_e0;
          FUN_01aedb00(&local_d8,&local_118);
          if (!(local_d8 != (uint ****)0x2 || local_d4 != (uint ****)0x0)) break;
          if (ppppuVar28 == local_e8) {
            FUN_006520b4(&local_e8,ppppuVar28,1,8,0x28);
            local_178 = local_e4;
          }
          local_e0 = (uint ****)((int)ppppuVar28 + 1);
          puVar18 = (undefined4 *)((int)local_178 + iVar12);
          iVar12 = iVar12 + 0x28;
          *puVar18 = local_d8;
          puVar18[1] = local_d4;
          puVar18[2] = local_d0;
          puVar18[3] = local_cc;
          puVar18[4] = local_c8;
          puVar18[5] = local_c4;
          puVar18[6] = local_c0;
          puVar18[7] = local_bc;
          puVar18[8] = local_b8;
          puVar18[9] = local_b4;
        }
        local_1c4 = local_e8;
        if (local_78 != (uint ****)0x8000002d) {
LAB_0191688c:
          ppppuVar43 = local_74;
          ppppuVar36 = local_78;
          local_174 = local_6c;
          local_170 = local_5c;
          local_16c = local_60;
          FUN_0134aee0(local_1c4,local_178,8,0x28);
          ppppuVar39 = local_70;
          ppppuVar40 = local_64;
          ppppuVar38 = local_68;
          goto LAB_01915e98;
        }
        uVar26 = 0;
        if ((uint ****)0x2492492 < ppppuVar28) {
LAB_0191686c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar26,(int)ppppuVar28 * 0x38);
        }
        uVar26 = 8;
        ppppuVar40 = (uint ****)FUN_01298504((int)ppppuVar28 * 0x38,8);
        if (ppppuVar40 == (uint ****)0x0) goto LAB_0191686c;
        ppppuVar43 = ppppuVar40 + 0xd;
        local_d0 = (uint ****)0x0;
        local_1a0 = 0;
        local_180 = (uint ****)0x0;
        ppppuVar38 = local_178;
        local_d8 = ppppuVar28;
        local_d4 = ppppuVar40;
        do {
          ppppuVar40 = (uint ****)ppppuVar38[5];
          if ((int)ppppuVar40 < 0) {
LAB_01917284:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(local_1a0,local_16c);
          }
          pppuVar20 = ppppuVar38[4];
          uVar26 = 0;
          if (ppppuVar40 == (uint ****)0x0) {
            local_16c = (uint ****)&DAT_00000001;
            local_19c = (uint ****)0x0;
          }
          else {
            local_16c = (uint ****)FUN_01298504(ppppuVar40,1);
            if (local_16c == (uint ****)0x0) {
              local_1a0 = 1;
              local_16c = ppppuVar40;
              goto LAB_01917284;
            }
            local_19c = ppppuVar40;
          }
          FUN_01bed4e2(local_16c,pppuVar20,ppppuVar40);
          ppppuVar41 = (uint ****)ppppuVar38[5];
          if ((int)ppppuVar41 < 0) {
LAB_01917298:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar26,local_170);
          }
          pppuVar20 = ppppuVar38[4];
          if (ppppuVar41 == (uint ****)0x0) {
            local_170 = (uint ****)&DAT_00000001;
            local_1a4 = (uint ****)0x0;
          }
          else {
            uVar26 = 1;
            local_170 = (uint ****)FUN_01298504(ppppuVar41,1);
            if (local_170 == (uint ****)0x0) {
              local_170 = ppppuVar41;
              goto LAB_01917298;
            }
            local_1a4 = ppppuVar41;
          }
          FUN_01bed4e2(local_170,pppuVar20,ppppuVar41);
          pppuVar20 = ppppuVar38[1];
          uVar2 = *(undefined1 *)(ppppuVar38 + 8);
          pppuVar27 = ppppuVar38[7];
          pppuVar23 = ppppuVar38[2];
          pppuVar30 = ppppuVar38[3];
          pppuVar31 = ppppuVar38[6];
          ppppuVar43[-9] = *ppppuVar38;
          ppppuVar43[-0xd] = (uint ***)local_19c;
          ppppuVar43[-8] = pppuVar20;
          ppppuVar43[-7] = pppuVar23;
          ppppuVar43[-6] = pppuVar30;
          ppppuVar43[-5] = pppuVar31;
          ppppuVar38 = ppppuVar38 + 10;
          ppppuVar43[-4] = pppuVar27;
          ppppuVar43[-3] = (uint ***)local_1a4;
          ppppuVar43[-0xc] = (uint ***)local_16c;
          ppppuVar43[-0xb] = (uint ***)ppppuVar40;
          local_180 = (uint ****)((int)local_180 + 1);
          ppppuVar43[-1] = (uint ***)ppppuVar41;
          *(undefined1 *)ppppuVar43 = uVar2;
          ppppuVar43[-2] = (uint ***)local_170;
          ppppuVar43 = ppppuVar43 + 0xe;
        } while (ppppuVar28 != local_180);
      }
      ppppuVar40 = local_d4;
      local_138 = local_d8;
      local_134 = local_d4;
      local_130 = ppppuVar28;
      local_d0 = ppppuVar28;
      if (ppppuVar28 != (uint ****)0x0) {
        if (ppppuVar28 != (uint ****)&DAT_00000001) {
          if (&DAT_00000014 < ppppuVar28) {
            FUN_01af1514(local_d4);
          }
          else {
            iVar12 = 0x38;
            do {
              FUN_01aed5cc(ppppuVar40,(int)ppppuVar40 + iVar12);
              iVar12 = iVar12 + 0x38;
            } while ((int)ppppuVar28 * 0x38 != iVar12);
          }
        }
        ppppuVar38 = local_130;
        ppppuVar40 = local_134;
        ppppuVar28 = local_138;
        uVar32 = FUN_0124a0c4();
        local_98 = ppppuVar28;
        local_9c = ppppuVar40;
        *(undefined2 *)(uVar32 + 0x242) = 0;
        *(undefined4 *)(uVar32 + 0x1b8) = 0;
        local_94 = ppppuVar40 + (int)ppppuVar38 * 0xe;
        local_a0 = ppppuVar40;
        local_1c8 = &DAT_01d305c8;
        local_1d8 = &DAT_00533a41;
        iVar12 = 0;
        uVar48 = (ulonglong)uVar32;
        ppppuVar28 = (uint ****)(uint ***)0x3;
        ppppuVar40 = (uint ****)(uint ***)0x0;
LAB_01916294:
        ppppuVar38 = local_94;
        local_1d0 = (int)(uVar48 >> 0x20);
        local_1cc = (int)uVar48;
        ppppuVar43 = local_9c;
        do {
          local_c8 = (uint ****)&DAT_00000003;
          local_c4 = (uint ****)0x0;
          if (ppppuVar28 == (uint ****)0x3 && ppppuVar40 == (uint ****)0x0) {
            if (ppppuVar43 != ppppuVar38) {
              local_170 = (uint ****)ppppuVar43[1];
              local_16c = (uint ****)ppppuVar43[2];
              ppppuVar28 = ppppuVar43 + 4;
              ppppuVar40 = ppppuVar43 + 5;
              local_9c = ppppuVar43 + 0xe;
              ppppuVar41 = ppppuVar43 + 6;
              ppppuVar22 = ppppuVar43;
              ppppuVar43 = ppppuVar43 + 0xe;
              pppuVar20 = *ppppuVar28;
              pppuVar27 = *ppppuVar40;
              goto LAB_01916308;
            }
LAB_019169dc:
            FUN_01af32d8(&local_d8);
            if (local_1d0 == 0) goto LAB_01916c8c;
            local_1dc = &DAT_01d305a8;
            local_1d8 = &DAT_00533a28;
            local_16c = (uint ****)local_1d0;
            goto LAB_01916a20;
          }
          ppppuVar22 = (uint ****)&local_d8;
          local_170 = local_d4;
          local_16c = local_d0;
          ppppuVar41 = (uint ****)&local_c0;
          pppuVar20 = (uint ***)ppppuVar28;
          pppuVar27 = (uint ***)ppppuVar40;
LAB_01916308:
          if (pppuVar20 == (uint ***)0x2 && pppuVar27 == (uint ***)0x0) goto LAB_019169dc;
          pppuVar30 = ppppuVar41[4];
          pppuVar31 = ppppuVar41[5];
          pppuVar23 = *ppppuVar22;
          local_118 = (uint ****)*ppppuVar41;
          ppppuStack_114 = (uint ****)ppppuVar41[1];
          ppppuStack_110 = (uint ****)ppppuVar41[2];
          ppppuStack_10c = (uint ****)ppppuVar41[3];
          local_e8 = (uint ****)ppppuVar41[6];
          local_e4 = (uint ****)ppppuVar41[7];
          if (ppppuVar43 == ppppuVar38) {
            ppppuVar40 = (uint ****)0x0;
            ppppuVar28 = (uint ****)0x2;
          }
          else {
            local_9c = ppppuVar43 + 0xe;
            local_78 = (uint ****)*ppppuVar43;
            local_74 = (uint ****)ppppuVar43[1];
            local_70 = (uint ****)ppppuVar43[2];
            local_6c = (uint ****)ppppuVar43[3];
            ppppuVar28 = (uint ****)ppppuVar43[4];
            ppppuVar40 = (uint ****)ppppuVar43[5];
            local_50 = (uint ****)ppppuVar43[6];
            local_4c = (uint ****)ppppuVar43[7];
            local_48 = (uint ****)ppppuVar43[8];
            ppppuStack_44 = (uint ****)ppppuVar43[9];
            local_40 = (uint ****)ppppuVar43[10];
            local_3c = (uint ****)ppppuVar43[0xb];
            ppppuStack_38 = (uint ****)ppppuVar43[0xc];
            ppppuStack_34 = (uint ****)ppppuVar43[0xd];
            ppppuVar43 = ppppuVar43 + 0xe;
          }
          local_d8 = local_78;
          local_d4 = local_74;
          local_d0 = local_70;
          local_cc = local_6c;
          local_c0 = local_50;
          local_bc = local_4c;
          local_b8 = local_48;
          local_b4 = ppppuStack_44;
          local_b0 = local_40;
          local_a8 = ppppuStack_38;
          local_a4 = ppppuStack_34;
          local_c8 = ppppuVar28;
          local_c4 = ppppuVar40;
          if (((ppppuVar28 == (uint ****)0x2 && ppppuVar40 == (uint ****)0x0) ||
              (local_16c != local_70)) ||
             (iVar15 = thunk_FUN_01bed842(local_170,local_74,local_16c), iVar15 != 0))
          goto LAB_01916428;
          FUN_0134bd64(pppuVar23,local_170);
          FUN_0134bd64(pppuVar30,pppuVar31);
        } while( true );
      }
      local_f0 = 0;
      local_f8._0_4_ = 0;
      FUN_01aed59c(&local_138);
      uVar48 = CONCAT44(local_f8._4_4_,(undefined4)local_f8);
      goto LAB_01916cbc;
    }
    ppppuVar36 = (uint ****)0x8000001d;
    ppppuVar43 = local_134;
  }
LAB_01915e98:
  uVar32 = *puVar45;
  if (uVar32 != 0x8000002d) {
    uVar16 = 4;
    if ((int)uVar32 < 0) {
      uVar16 = uVar32 ^ 0x80000000;
    }
    if (uVar16 == 0x1b) {
      uVar32 = puVar45[5];
      puVar18 = (undefined4 *)(uVar32 + 4);
      for (uVar16 = puVar45[6]; uVar16 != 0; uVar16 = uVar16 - 1) {
        FUN_0134aee0(puVar18[-1],*puVar18,4,4);
        puVar18 = puVar18 + 3;
      }
      FUN_0134aee0(puVar45[4],uVar32,4,0xc);
    }
    else if (uVar16 == 4) {
      if (((char)puVar45[3] == '\0') && (puVar45[4] != 0x80000000)) {
        FUN_0134bd64(puVar45[4],puVar45[5]);
      }
      FUN_006a41c0(puVar45);
    }
  }
  ppppuVar21 = (uint ****)&DAT_80000001;
  puVar45[3] = (uint)local_174;
  puVar45[6] = (uint)local_16c;
  *puVar45 = (uint)ppppuVar36;
  puVar45[1] = (uint)ppppuVar43;
  puVar45[2] = (uint)ppppuVar39;
  puVar45[4] = (uint)ppppuVar38;
  puVar45[5] = (uint)ppppuVar40;
  puVar45[7] = (uint)local_170;
LAB_01915f6c:
  param_1[2] = ppppuVar21;
  return;
  while (local_1cc = iVar37, local_16c != (uint ****)0x0) {
LAB_01916a20:
    if (*(ushort *)(local_1cc + 0x242) == 0) {
      uVar26 = 0x19;
      goto LAB_01917048;
    }
    iVar15 = *(ushort *)(local_1cc + 0x242) - 1;
    iVar25 = local_1cc + iVar15 * 4;
    iVar37 = *(int *)(iVar25 + 0x24c);
    uVar32 = (uint)*(ushort *)(iVar37 + 0x242);
    local_16c = (uint ****)((int)local_16c + -1);
    if (uVar32 < 5) {
      iVar25 = *(int *)(iVar25 + 0x248);
      uVar16 = (uint)*(ushort *)(iVar25 + 0x242);
      uVar44 = -uVar32 + 5;
      if (uVar16 < uVar44) {
        uVar26 = 0x27;
        local_1d8 = &DAT_00533acc;
        local_1dc = &DAT_01d30618;
LAB_01917048:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(local_1d8,uVar26,local_1dc);
      }
      iVar42 = uVar16 - uVar44;
      *(ushort *)(iVar25 + 0x242) = (ushort)iVar42;
      *(ushort *)(iVar37 + 0x242) = 5;
      iVar46 = iVar37 + 0x1bc;
      FUN_01bed864(iVar46 + uVar44 * 0xc,iVar46,uVar32 * 0xc);
      FUN_01bed864(iVar37 + uVar44 * 0x28,iVar37,uVar32 * 0x28);
      iVar17 = iVar42 + 1;
      iVar34 = uVar16 - iVar17;
      if (iVar34 != -uVar32 + 4) {
        uVar26 = 0x28;
        local_1d8 = &DAT_00533a71;
        local_1dc = &DAT_01d305f8;
        goto LAB_01917048;
      }
      FUN_01bed4e2(iVar46,iVar25 + 0x1bc + iVar17 * 0xc,iVar34 * 0xc);
      FUN_01bed4e2(iVar37,iVar25 + iVar17 * 0x28,iVar34 * 0x28);
      puVar18 = (undefined4 *)(iVar25 + iVar42 * 0x28);
      local_78 = (uint ****)*puVar18;
      local_74 = (uint ****)puVar18[1];
      local_70 = (uint ****)puVar18[2];
      local_6c = (uint ****)puVar18[3];
      local_68 = (uint ****)puVar18[4];
      local_64 = (uint ****)puVar18[5];
      local_60 = (uint ****)puVar18[6];
      local_5c = (uint ****)puVar18[7];
      uStack_58 = puVar18[8];
      uStack_54 = puVar18[9];
      iVar19 = local_1cc + iVar15 * 0xc;
      local_d8 = *(uint *****)(iVar19 + 0x1bc);
      local_d4 = *(uint *****)(iVar19 + 0x1c0);
      local_d0 = *(uint *****)(iVar19 + 0x1c4);
      FUN_01bed864((undefined4 *)(iVar19 + 0x1bc),iVar25 + 0x1bc + iVar42 * 0xc,0xc);
      puVar18 = (undefined4 *)(local_1cc + iVar15 * 0x28);
      local_c8 = (uint ****)*puVar18;
      local_c4 = (uint ****)puVar18[1];
      local_c0 = (uint ****)puVar18[2];
      local_bc = (uint ****)puVar18[3];
      local_b8 = (uint ****)puVar18[4];
      local_b4 = (uint ****)puVar18[5];
      local_b0 = (uint ****)puVar18[6];
      ppppuStack_34 = (uint ****)puVar18[7];
      local_a8 = (uint ****)puVar18[8];
      local_a4 = (uint ****)puVar18[9];
      *puVar18 = local_78;
      puVar18[1] = local_74;
      puVar18[2] = local_70;
      puVar18[3] = local_6c;
      puVar18[4] = local_68;
      puVar18[5] = local_64;
      puVar18[6] = local_60;
      puVar18[7] = local_5c;
      puVar18[8] = uStack_58;
      puVar18[9] = uStack_54;
      local_118 = local_d8;
      ppppuStack_114 = local_d4;
      ppppuStack_110 = local_d0;
      puVar18 = (undefined4 *)(iVar46 + iVar34 * 0xc);
      *puVar18 = local_d8;
      puVar18[1] = local_d4;
      puVar18[2] = local_d0;
      puVar18 = (undefined4 *)(iVar37 + iVar34 * 0x28);
      *puVar18 = local_c8;
      puVar18[1] = local_c4;
      puVar18[2] = local_c0;
      puVar18[3] = local_bc;
      puVar18[4] = local_b8;
      puVar18[5] = local_b4;
      puVar18[6] = local_b0;
      puVar18[7] = ppppuStack_34;
      puVar18[8] = local_a8;
      puVar18[9] = local_a4;
      local_50 = local_c8;
      local_4c = local_c4;
      local_48 = local_c0;
      ppppuStack_44 = local_bc;
      local_40 = local_b8;
      local_3c = local_b4;
      ppppuStack_38 = local_b0;
      ppppuStack_30 = local_a8;
      ppppuStack_2c = local_a4;
      if (local_16c != (uint ****)0x0) {
        iVar15 = iVar37 + 0x248;
        FUN_01bed864(iVar15 + uVar44 * 4,iVar15,uVar32 * 4 + 4);
        FUN_01bed4e2(iVar15,iVar25 + iVar17 * 4 + 0x248,uVar44 * 4);
        iVar15 = 0;
        do {
          iVar25 = *(int *)(iVar37 + iVar15 * 4 + 0x248);
          *(short *)(iVar25 + 0x240) = (short)iVar15;
          iVar15 = iVar15 + 1;
          *(int *)(iVar25 + 0x1b8) = iVar37;
        } while (iVar15 != 6);
      }
    }
  }
LAB_01916c8c:
  local_f0 = iVar12;
LAB_01916cbc:
  local_f8 = uVar48;
  FUN_0134aee0(local_1c4,local_178,8,0x28);
  uVar26 = 0;
  if ((int)ppppuVar29 < 0) {
LAB_01916ce0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar26,ppppuVar29);
  }
  uVar35 = 0;
  if (ppppuVar29 == (uint ****)0x0) {
    iVar12 = 1;
    ppppuVar28 = (uint ****)0x0;
  }
  else {
    uVar26 = 1;
    iVar12 = FUN_01298504(ppppuVar29,1);
    ppppuVar28 = ppppuVar29;
    if (iVar12 == 0) goto LAB_01916ce0;
  }
  FUN_01bed4e2(iVar12,ppppuVar21,ppppuVar29);
  if ((int)ppppuVar7 < 0) {
LAB_01916d40:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar35,ppppuVar7);
  }
  uVar26 = 0;
  if (ppppuVar7 == (uint ****)0x0) {
    pppuVar20 = (uint ***)0x1;
    ppppuVar21 = (uint ****)0x0;
  }
  else {
    uVar35 = 1;
    pppuVar20 = (uint ***)FUN_01298504(ppppuVar7,1);
    if (pppuVar20 == (uint ***)0x0) goto LAB_01916d40;
    ppppuVar21 = ppppuVar7;
  }
  FUN_01bed4e2(pppuVar20,ppppuVar6,ppppuVar7);
  if ((int)ppppuVar36 < 0) {
LAB_01916dd0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar26,ppppuVar36);
  }
  iVar15 = 0;
  if (ppppuVar36 == (uint ****)0x0) {
    iVar25 = 1;
    ppppuVar40 = (uint ****)0x0;
  }
  else {
    uVar26 = 1;
    iVar25 = FUN_01298504(ppppuVar36,1);
    ppppuVar40 = ppppuVar36;
    if (iVar25 == 0) goto LAB_01916dd0;
  }
  FUN_01bed4e2(iVar25,ppppuVar8,ppppuVar36);
  local_c4 = ppppuVar7;
  local_d0 = ppppuVar29;
  local_b8 = ppppuVar36;
  local_d8 = ppppuVar28;
  local_d4 = (uint ****)iVar12;
  local_cc = ppppuVar21;
  local_c8 = (uint ****)pppuVar20;
  local_c0 = ppppuVar40;
  local_bc = (uint ****)iVar25;
  if ((int)ppppuVar47 < 0) {
LAB_01916e64:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar15,ppppuVar47);
  }
  if (ppppuVar47 == (uint ****)0x0) {
    local_170 = (uint ****)0x1;
    local_174 = (uint ****)0x0;
  }
  else {
    iVar15 = 1;
    local_170 = (uint ****)FUN_01298504(ppppuVar47,1);
    local_174 = ppppuVar47;
    if (local_170 == (uint ****)0x0) goto LAB_01916e64;
  }
  FUN_01bed4e2(local_170,ppppuVar33,ppppuVar47);
  if (ppppuVar9 == (uint ****)0x0) {
    local_178 = (uint ****)0x80000000;
  }
  else {
    uVar26 = 0;
    if (local_ac < 0) {
LAB_01916ee0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar26,local_ac);
    }
    if (local_ac == 0) {
      iVar15 = 1;
      local_178 = (uint ****)0x0;
    }
    else {
      uVar26 = 1;
      iVar15 = FUN_01298504(local_ac,1);
      local_178 = (uint ****)local_ac;
      if (iVar15 == 0) goto LAB_01916ee0;
    }
    FUN_01bed4e2(iVar15,ppppuVar9,local_ac);
  }
  param_1[3] = local_170;
  param_1[4] = ppppuVar47;
  param_1[7] = ppppuVar29;
  param_1[0xc] = local_bc;
  param_1[8] = ppppuVar21;
  param_1[0xe] = local_178;
  param_1[5] = ppppuVar28;
  param_1[0x10] = local_ac;
  param_1[6] = iVar12;
  param_1[9] = pppuVar20;
  param_1[10] = ppppuVar7;
  param_1[0xb] = ppppuVar40;
  param_1[0xd] = local_b8;
  param_1[0xf] = iVar15;
  *(ulonglong *)(param_1 + 0x11) = local_f8;
  param_1[0x13] = local_f0;
  *param_1 = ppppuVar10;
  param_1[1] = ppppuVar11;
  ppppuVar21 = local_174;
  goto LAB_01915f6c;
LAB_01916428:
  local_88 = local_118;
  ppppuStack_84 = ppppuStack_114;
  ppppuStack_80 = ppppuStack_110;
  ppppuStack_7c = ppppuStack_10c;
  local_90 = local_e8;
  local_8c = local_e4;
  if (*(ushort *)(uVar32 + 0x242) < 0xb) {
    local_50 = local_118;
    local_4c = ppppuStack_114;
    local_48 = ppppuStack_110;
    ppppuStack_44 = ppppuStack_10c;
    uVar3 = *(ushort *)(uVar32 + 0x242);
    uVar16 = (uint)uVar3;
    local_74 = local_e4;
    local_78 = local_e8;
    if (10 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                   &DAT_01d305b8);
    }
    *(ushort *)(uVar32 + 0x242) = uVar3 + 1;
    iVar15 = uVar32 + uVar16 * 0xc;
    *(uint ****)(iVar15 + 0x1bc) = pppuVar23;
    *(uint *****)(iVar15 + 0x1c0) = local_170;
    *(uint *****)(iVar15 + 0x1c4) = local_16c;
    piVar24 = (int *)(uVar32 + uVar16 * 0x28);
    *piVar24 = (int)pppuVar20;
    piVar24[1] = (int)pppuVar27;
    piVar24[2] = (int)local_118;
    piVar24[3] = (int)ppppuStack_114;
    piVar24[4] = (int)ppppuStack_110;
    piVar24[5] = (int)ppppuStack_10c;
    piVar24[7] = (int)pppuVar31;
    piVar24[6] = (int)pppuVar30;
    piVar24[9] = (int)local_e4;
    piVar24[8] = (int)local_e8;
LAB_01916620:
    iVar12 = iVar12 + 1;
    ppppuVar28 = local_c8;
    ppppuVar40 = local_c4;
    goto LAB_01916294;
  }
  iVar15 = 0;
  do {
    uVar32 = *(uint *)(uVar32 + 0x1b8);
    if (uVar32 == 0) {
      uVar48 = FUN_01af3258(local_1cc,local_1d0);
      uVar5 = uVar48;
      break;
    }
    iVar15 = iVar15 + 1;
    uVar5 = CONCAT44(iVar15,uVar32);
  } while (10 < *(ushort *)(uVar32 + 0x242));
  iVar25 = (int)uVar5;
  uVar32 = FUN_0124a0c4();
  iVar15 = (int)(uVar5 >> 0x20) + -1;
  uVar49 = (ulonglong)uVar32;
  *(undefined4 *)(uVar32 + 0x1b8) = 0;
  *(undefined2 *)(uVar32 + 0x242) = 0;
  if (iVar15 != 0) {
    iVar37 = iVar15;
    do {
      uVar49 = FUN_01af3258();
      iVar37 = iVar37 + -1;
    } while (iVar37 != 0);
  }
  iVar37 = (int)uVar49;
  if ((int)(uVar49 >> 0x20) == iVar15) {
    uVar32 = (uint)*(ushort *)(iVar25 + 0x242);
    if (uVar32 < 0xb) {
      uVar3 = (ushort)(uVar32 + 1);
      *(ushort *)(iVar25 + 0x242) = uVar3;
      iVar15 = iVar25 + uVar32 * 0xc;
      *(uint ****)(iVar15 + 0x1bc) = pppuVar23;
      *(uint *****)(iVar15 + 0x1c0) = local_170;
      *(uint *****)(iVar15 + 0x1c4) = local_16c;
      piVar24 = (int *)(iVar25 + uVar32 * 0x28);
      *piVar24 = (int)pppuVar20;
      piVar24[1] = (int)pppuVar27;
      piVar24[2] = (int)local_88;
      piVar24[3] = (int)ppppuStack_84;
      piVar24[4] = (int)ppppuStack_80;
      piVar24[5] = (int)ppppuStack_7c;
      piVar24[8] = (int)local_90;
      piVar24[6] = (int)pppuVar30;
      piVar24[7] = (int)pppuVar31;
      piVar24[9] = (int)local_8c;
      *(int *)(iVar25 + (uVar32 + 1) * 4 + 0x248) = iVar37;
      *(ushort *)(iVar37 + 0x240) = uVar3;
      *(int *)(iVar37 + 0x1b8) = iVar25;
      while( true ) {
        iVar15 = (int)(uVar5 >> 0x20);
        uVar32 = (uint)uVar5;
        if (iVar15 == 0) break;
        uVar5 = CONCAT44(iVar15 + -1,
                         *(undefined4 *)(uVar32 + (uint)*(ushort *)(uVar32 + 0x242) * 4 + 0x248));
      }
      goto LAB_01916620;
    }
    uVar26 = 0x20;
    local_1d8 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
    local_1c8 = &DAT_01d305d8;
  }
  else {
    uVar26 = 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(local_1d8,uVar26,local_1c8);
}

