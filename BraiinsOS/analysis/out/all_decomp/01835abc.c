// FUN_01835abc @ 01835abc size=4568 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01835abc(uint *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint local_f0;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  byte *local_9c;
  uint *local_94;
  uint *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
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
  uint local_38;
  uint local_34;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == 0x80) {
    param_3[0x3c] = 10;
    if ((&local_70 <= param_1 || param_1 <= &local_80) &&
       ((&local_80 <= param_1 || (param_1 + 4 <= &local_80)))) {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar8 = param_1[2];
      uVar15 = param_1[3];
      uVar19 = (uVar3 ^ uVar3 >> 6) & 0xcc00cc;
      uVar19 = uVar3 ^ uVar19 ^ uVar19 << 6;
      uVar3 = (uVar19 ^ uVar19 >> 0xc) & 0xf0f0;
      uVar19 = uVar19 ^ uVar3;
      uVar5 = uVar19 ^ uVar3 << 0xc;
      uVar12 = (uVar4 ^ uVar4 >> 6) & 0xcc00cc;
      uVar3 = (uVar15 ^ uVar15 >> 6) & 0xcc00cc;
      uVar12 = uVar4 ^ uVar12 ^ uVar12 << 6;
      uVar15 = uVar15 ^ uVar3 ^ uVar3 << 6;
      uVar3 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
      uVar4 = uVar8 ^ uVar3 ^ uVar3 << 6;
      uVar3 = (uVar12 ^ uVar12 >> 0xc) & 0xf0f0;
      uVar3 = uVar12 ^ uVar3 ^ uVar3 << 0xc;
      uVar8 = (uVar15 ^ uVar15 >> 0xc) & 0xf0f0;
      uVar23 = (uVar4 ^ uVar4 >> 0xc) & 0xf0f0;
      uVar15 = uVar15 ^ uVar8;
      uVar4 = uVar4 ^ uVar23;
      uVar12 = uVar15 ^ uVar8 << 0xc;
      uVar8 = uVar4 ^ uVar23 << 0xc;
      local_80 = uVar19 & 0xff | uVar15 << 0x18 | (uVar3 & 0xff) << 8 | (uVar4 & 0xff) << 0x10;
      local_7c = (uVar19 & 0xffff) >> 8 | (uVar12 >> 8) << 0x18 | uVar3 & 0xff00 |
                 (uVar8 & 0xff00) << 8;
      local_78 = (uVar5 & 0xffffff) >> 0x10 | (uVar12 >> 0x10) << 0x18 | uVar8 & 0xff0000 |
                 uVar3 >> 8 & 0xff00;
      local_74 = uVar12 & 0xff000000 | uVar5 >> 0x18 | (uVar3 >> 0x18) << 8 |
                 (uVar8 >> 0x18) << 0x10;
      if (((&local_80 <= param_3) || (param_3 + 4 <= &local_80)) &&
         (&local_70 <= param_3 || param_3 <= &local_80)) {
        local_9c = &DAT_00563cd3;
        *param_3 = local_80;
        param_3[1] = local_7c;
        param_3[2] = local_78;
        param_3[3] = local_74;
        do {
          local_94 = param_3 + 4;
          uVar3 = local_74 >> 1;
          uVar29 = (local_80 ^ local_74) >> 1;
          uVar5 = local_7c ^ local_78 ^ uVar29;
          uVar13 = uVar5 ^ local_7c >> 1;
          uVar15 = (local_7c ^ local_78) & 0x55555555;
          uVar5 = uVar5 & 0x55555555;
          uVar19 = uVar13 ^ local_74;
          uVar9 = local_74 ^ local_78 >> 1;
          uVar13 = uVar13 ^ local_7c;
          uVar18 = uVar19 ^ uVar3 ^ local_78;
          uVar22 = (uVar3 ^ local_78) & 0x55555555;
          uVar31 = uVar3 ^ local_7c;
          uVar10 = uVar9 ^ local_80;
          uVar4 = uVar13 ^ uVar9;
          uVar9 = uVar9 ^ uVar18;
          uVar21 = (uVar10 ^ local_78) & 0x55555555;
          uVar8 = local_80 >> 1 ^ uVar10;
          uVar14 = (uVar13 ^ local_80) & 0x55555555;
          uVar24 = (uVar3 ^ uVar10) & 0x55555555;
          uVar12 = (uVar4 ^ uVar18) & 0x55555555;
          uVar20 = (uVar18 ^ local_80) & 0x55555555;
          uVar7 = uVar5 & uVar13 & 0x55555555;
          uVar26 = uVar8 & 0x55555555;
          uVar11 = uVar29 & 0x55555555 & uVar9 & 0x55555555;
          uVar6 = uVar22 & uVar18 & 0x55555555;
          uVar17 = (uVar31 ^ uVar8) & 0x55555555;
          uVar8 = uVar15 & uVar12 ^ uVar6;
          uVar23 = uVar19 & 0x55555555 ^ uVar7 ^ uVar17 & uVar14 ^ uVar8;
          uVar8 = (uVar29 ^ uVar9) & 0x55555555 ^ uVar11 ^ uVar10 & 0x55555555 & uVar26 ^ uVar8;
          uVar6 = uVar31 & 0x55555555 & uVar4 & 0x55555555 ^ uVar6;
          uVar19 = uVar21 & local_80 & 0x55555555 ^ uVar7 ^ (uVar31 ^ uVar4) & 0x55555555 ^ uVar6;
          uVar6 = (uVar9 ^ uVar3) & 0x55555555 ^ uVar11 ^ uVar24 & uVar20 ^ uVar6;
          uVar3 = uVar23 & uVar8;
          uVar7 = (uVar8 ^ uVar6) & (uVar19 ^ uVar3);
          uVar23 = uVar23 ^ uVar19;
          uVar11 = (uVar3 ^ uVar7) & uVar6;
          uVar7 = uVar7 ^ uVar6;
          uVar19 = (uVar6 ^ uVar3) & uVar23 ^ uVar19;
          uVar28 = uVar8 ^ uVar7 ^ uVar11;
          uVar23 = (uVar6 ^ uVar3 ^ uVar11) & uVar19 ^ uVar23;
          uVar17 = uVar17 & uVar28;
          uVar25 = local_80 & 0x55555555 & uVar7;
          uVar10 = uVar10 & 0x55555555 & uVar23;
          uVar20 = uVar20 & uVar19;
          uVar26 = uVar26 & uVar23 ^ uVar20;
          uVar8 = uVar28 ^ uVar23;
          uVar3 = uVar19 ^ uVar7;
          uVar9 = uVar9 & 0x55555555 & (uVar23 ^ uVar19);
          uVar6 = (uVar23 ^ uVar19) & uVar29 & 0x55555555;
          uVar23 = uVar13 & 0x55555555 & (uVar7 ^ uVar28) ^ uVar9;
          uVar13 = uVar25 ^ uVar6 ^ uVar23;
          uVar15 = uVar15 & (uVar3 ^ uVar8);
          uVar12 = (uVar3 ^ uVar8) & uVar12;
          uVar29 = uVar18 & 0x55555555 & uVar3 ^ uVar9 ^ uVar12;
          uVar9 = uVar22 & uVar3 ^ uVar15;
          uVar11 = uVar9 ^ uVar10;
          uVar5 = (uVar7 ^ uVar28) & uVar5 ^ uVar17 ^ uVar11;
          uVar11 = uVar11 ^ uVar4 & 0x55555555 & uVar8 ^ uVar12;
          uVar10 = uVar10 ^ uVar29;
          uVar3 = uVar24 & uVar19 ^ uVar13 ^ uVar11;
          uVar4 = uVar14 & uVar28 ^ uVar5;
          uVar23 = uVar23 ^ uVar4;
          uVar12 = ~(uVar13 ^ uVar9 ^ uVar26);
          uVar19 = ~(uVar10 ^ uVar23);
          uVar7 = (uVar4 ^ uVar25 ^ uVar20) << 1 ^ uVar21 & uVar7 ^ uVar17 ^ uVar3;
          local_9c = local_9c + 1;
          uVar4 = (uint)*local_9c;
          uVar12 = (~(uVar6 ^ uVar26 ^ uVar11 ^ uVar12 >> 1) & 0x55555555) << 1 ^ uVar12;
          uVar23 = (~(uVar8 & uVar31 & 0x55555555 ^ uVar15 ^ uVar10 ^ uVar3) & 0x55555555) << 1 ^
                   uVar23;
          uVar19 = ((uVar5 ^ uVar29 ^ uVar19 >> 1) & 0x55555555) << 1 ^ uVar19;
          uVar8 = local_74 ^ *local_9c >> 6 ^
                  (uVar19 >> 2 & 0x3f3f3f3f | (uVar19 & 0x3030303) << 6) >> 0x18;
          uVar19 = uVar4 & 3 ^ local_80 ^
                   ((uVar12 & 0x3030303) << 6 | uVar12 >> 2 & 0x3f3f3f3f) >> 0x18;
          uVar12 = (uVar4 & 0xf) >> 2 ^ local_7c ^
                   ((uVar7 & 0x3030303) << 6 | uVar7 >> 2 & 0x3f3f3f3f) >> 0x18;
          uVar3 = (uVar4 & 0x3f) >> 4 ^ local_78 ^
                  (uVar23 >> 2 & 0x3f3f3f3f | (uVar23 & 0x3030303) << 6) >> 0x18;
          local_80 = uVar19 << 8 ^ uVar19 << 0x10 ^ uVar19 ^ uVar19 << 0x18;
          param_2 = uVar12 << 8 ^ uVar12 << 0x10 ^ uVar12 ^ uVar12 << 0x18;
          local_78 = uVar3 << 0x10 ^ uVar3 << 8 ^ uVar3 ^ uVar3 << 0x18;
          local_74 = uVar8 << 0x10 ^ uVar8 << 8 ^ uVar8 ^ uVar8 << 0x18;
          local_7c = param_2;
          if (((local_94 < &local_80) && (&local_80 < param_3 + 8)) ||
             (local_94 < &local_70 && &local_80 < local_94)) goto LAB_01836c80;
          *local_94 = local_80;
          param_3[5] = param_2;
          param_3[6] = local_78;
          param_3[7] = local_74;
          param_3 = local_94;
        } while (local_9c != &DAT_00563cdd);
        uVar2 = 0;
        goto LAB_01836540;
      }
    }
  }
  else {
    if (param_2 != 0x100) {
      uVar2 = 1;
LAB_01836540:
      if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78(uVar2,param_2,local_2c ^ DAT_018ddaf8,0);
      }
      return;
    }
    param_3[0x3c] = 0xe;
    if ((&local_60 <= param_1 || param_1 <= &local_70) &&
       ((&local_70 <= param_1 || (param_1 + 4 <= &local_70)))) {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar8 = param_1[2];
      uVar12 = param_1[3];
      uVar19 = (uVar3 ^ uVar3 >> 6) & 0xcc00cc;
      uVar19 = uVar3 ^ uVar19 ^ uVar19 << 6;
      uVar3 = (uVar4 ^ uVar4 >> 6) & 0xcc00cc;
      uVar4 = uVar4 ^ uVar3 ^ uVar3 << 6;
      uVar3 = (uVar12 ^ uVar12 >> 6) & 0xcc00cc;
      uVar12 = uVar12 ^ uVar3 ^ uVar3 << 6;
      uVar3 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
      uVar23 = (uVar4 ^ uVar4 >> 0xc) & 0xf0f0;
      uVar3 = uVar8 ^ uVar3 ^ uVar3 << 6;
      uVar15 = (uVar12 ^ uVar12 >> 0xc) & 0xf0f0;
      uVar12 = uVar12 ^ uVar15;
      uVar8 = uVar4 ^ uVar23 ^ uVar23 << 0xc;
      uVar15 = uVar12 ^ uVar15 << 0xc;
      uVar23 = (uVar19 ^ uVar19 >> 0xc) & 0xf0f0;
      uVar4 = (uVar3 ^ uVar3 >> 0xc) & 0xf0f0;
      uVar19 = uVar19 ^ uVar23;
      uVar3 = uVar3 ^ uVar4;
      uVar4 = uVar3 ^ uVar4 << 0xc;
      uVar23 = uVar19 ^ uVar23 << 0xc;
      local_c4 = uVar19 & 0xff | uVar12 << 0x18 | (uVar8 & 0xff) << 8 | (uVar3 & 0xff) << 0x10;
      local_c8 = (uVar19 & 0xffff) >> 8 | (uVar15 >> 8) << 0x18 | uVar8 & 0xff00 |
                 (uVar4 & 0xff00) << 8;
      local_cc = (uVar23 & 0xffffff) >> 0x10 | (uVar15 >> 0x10) << 0x18 | uVar4 & 0xff0000 |
                 uVar8 >> 8 & 0xff00;
      local_d0 = uVar15 & 0xff000000 | uVar23 >> 0x18 | (uVar8 >> 0x18) << 8 |
                 (uVar4 >> 0x18) << 0x10;
      local_70 = local_c4;
      local_6c = local_c8;
      local_68 = local_cc;
      local_64 = local_d0;
      if (((&local_70 <= param_3) || (param_3 + 4 <= &local_70)) &&
         (param_3 <= &local_70 || &local_60 <= param_3)) {
        puVar16 = param_1 + 4;
        *param_3 = local_c4;
        param_3[1] = local_c8;
        param_3[2] = local_cc;
        param_3[3] = local_d0;
        if ((&local_50 <= puVar16 || puVar16 <= &local_60) &&
           ((&local_60 <= puVar16 || (param_1 + 8 <= &local_60)))) {
          puVar16 = param_3 + 4;
          uVar3 = param_1[4];
          uVar4 = param_1[5];
          uVar8 = param_1[6];
          uVar12 = param_1[7];
          uVar19 = (uVar4 ^ uVar4 >> 6) & 0xcc00cc;
          uVar19 = uVar4 ^ uVar19 ^ uVar19 << 6;
          uVar4 = (uVar12 ^ uVar12 >> 6) & 0xcc00cc;
          uVar12 = uVar12 ^ uVar4 ^ uVar4 << 6;
          uVar4 = (uVar3 ^ uVar3 >> 6) & 0xcc00cc;
          uVar3 = uVar3 ^ uVar4 ^ uVar4 << 6;
          uVar4 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
          uVar15 = (uVar19 ^ uVar19 >> 0xc) & 0xf0f0;
          uVar4 = uVar8 ^ uVar4 ^ uVar4 << 6;
          uVar19 = uVar19 ^ uVar15 ^ uVar15 << 0xc;
          uVar15 = (uVar12 ^ uVar12 >> 0xc) & 0xf0f0;
          uVar12 = uVar12 ^ uVar15;
          uVar8 = (uVar4 ^ uVar4 >> 0xc) & 0xf0f0;
          uVar15 = uVar12 ^ uVar15 << 0xc;
          uVar23 = (uVar3 ^ uVar3 >> 0xc) & 0xf0f0;
          uVar3 = uVar3 ^ uVar23;
          uVar4 = uVar4 ^ uVar8;
          uVar23 = uVar3 ^ uVar23 << 0xc;
          uVar8 = uVar4 ^ uVar8 << 0xc;
          local_60 = uVar3 & 0xff | uVar12 << 0x18 | (uVar19 & 0xff) << 8 | (uVar4 & 0xff) << 0x10;
          local_5c = (uVar3 & 0xffff) >> 8 | (uVar15 >> 8) << 0x18 | uVar19 & 0xff00 |
                     (uVar8 & 0xff00) << 8;
          local_58 = (uVar23 & 0xffffff) >> 0x10 | (uVar15 >> 0x10) << 0x18 | uVar8 & 0xff0000 |
                     uVar19 >> 8 & 0xff00;
          local_54 = uVar15 & 0xff000000 | uVar23 >> 0x18 | (uVar19 >> 0x18) << 8 |
                     (uVar8 >> 0x18) << 0x10;
          if (((&local_60 <= puVar16) || (param_3 + 8 <= &local_60)) &&
             (&local_50 <= puVar16 || puVar16 <= &local_60)) {
            local_f0 = 1;
            local_d4 = 2;
            param_3[4] = local_60;
            param_3[5] = local_5c;
            param_3[6] = local_58;
            param_3[7] = local_54;
            local_84 = param_3 + 0xc;
            while( true ) {
              uVar12 = local_54;
              uVar19 = local_58;
              uVar8 = local_5c;
              uVar4 = local_60;
              uVar3 = local_54 >> 1;
              uVar17 = (local_60 ^ local_54) >> 1;
              uVar13 = local_5c ^ local_58 ^ uVar17;
              uVar9 = (local_5c ^ local_58) & 0x55555555;
              uVar26 = uVar13 ^ local_5c >> 1;
              uVar13 = uVar13 & 0x55555555;
              uVar14 = local_54 ^ local_58 >> 1;
              uVar5 = uVar26 ^ local_54;
              uVar26 = uVar26 ^ local_5c;
              uVar24 = uVar5 ^ uVar3 ^ local_58;
              uVar32 = uVar14 ^ local_60;
              uVar10 = (uVar3 ^ local_58) & 0x55555555;
              uVar11 = uVar3 ^ local_5c;
              uVar15 = uVar26 ^ uVar14;
              uVar14 = uVar14 ^ uVar24;
              uVar27 = (uVar26 ^ local_60) & 0x55555555;
              uVar6 = uVar13 & uVar26 & 0x55555555;
              uVar23 = local_60 >> 1 ^ uVar32;
              uVar20 = (uVar3 ^ uVar32) & 0x55555555;
              uVar21 = (uVar32 ^ local_58) & 0x55555555;
              uVar30 = uVar23 & 0x55555555;
              uVar28 = uVar17 & 0x55555555 & uVar14 & 0x55555555;
              uVar31 = (uVar24 ^ uVar15) & 0x55555555;
              uVar22 = (uVar11 ^ uVar23) & 0x55555555;
              uVar29 = uVar10 & uVar24 & 0x55555555;
              uVar23 = uVar9 & uVar31 ^ uVar29;
              uVar25 = (uVar24 ^ local_60) & 0x55555555;
              uVar7 = uVar5 & 0x55555555 ^ uVar6 ^ uVar22 & uVar27 ^ uVar23;
              uVar23 = (uVar17 ^ uVar14) & 0x55555555 ^ uVar28 ^ uVar32 & 0x55555555 & uVar30 ^
                       uVar23;
              uVar29 = uVar11 & 0x55555555 & uVar15 & 0x55555555 ^ uVar29;
              uVar5 = uVar21 & local_60 & 0x55555555 ^ uVar6 ^ (uVar11 ^ uVar15) & 0x55555555 ^
                      uVar29;
              uVar29 = (uVar14 ^ uVar3) & 0x55555555 ^ uVar28 ^ uVar20 & uVar25 ^ uVar29;
              uVar3 = uVar7 & uVar23;
              uVar28 = (uVar23 ^ uVar29) & (uVar5 ^ uVar3);
              uVar7 = uVar7 ^ uVar5;
              uVar6 = (uVar3 ^ uVar28) & uVar29;
              uVar28 = uVar28 ^ uVar29;
              uVar5 = (uVar29 ^ uVar3) & uVar7 ^ uVar5;
              uVar18 = uVar23 ^ uVar28 ^ uVar6;
              uVar7 = (uVar29 ^ uVar3 ^ uVar6) & uVar5 ^ uVar7;
              uVar25 = uVar25 & uVar5;
              uVar22 = uVar22 & uVar18;
              uVar23 = uVar30 & uVar7 ^ uVar25;
              uVar30 = local_60 & 0x55555555 & uVar28;
              uVar32 = uVar32 & 0x55555555 & uVar7;
              uVar6 = uVar18 ^ uVar7;
              uVar3 = uVar5 ^ uVar28;
              uVar14 = uVar14 & 0x55555555 & (uVar7 ^ uVar5);
              uVar29 = (uVar7 ^ uVar5) & uVar17 & 0x55555555;
              uVar7 = uVar26 & 0x55555555 & (uVar28 ^ uVar18) ^ uVar14;
              uVar9 = uVar9 & (uVar3 ^ uVar6);
              uVar31 = (uVar3 ^ uVar6) & uVar31;
              uVar24 = uVar24 & 0x55555555 & uVar3 ^ uVar14 ^ uVar31;
              uVar14 = uVar10 & uVar3 ^ uVar9;
              uVar26 = uVar30 ^ uVar29 ^ uVar7;
              uVar17 = uVar14 ^ uVar32;
              uVar32 = uVar32 ^ uVar24;
              uVar10 = (uVar28 ^ uVar18) & uVar13 ^ uVar22 ^ uVar17;
              uVar17 = uVar17 ^ uVar15 & 0x55555555 & uVar6 ^ uVar31;
              uVar31 = uVar27 & uVar18 ^ uVar10;
              uVar7 = uVar7 ^ uVar31;
              uVar3 = uVar20 & uVar5 ^ uVar26 ^ uVar17;
              uVar5 = ~(uVar26 ^ uVar14 ^ uVar23);
              uVar15 = ~(uVar32 ^ uVar7);
              uVar15 = ((uVar10 ^ uVar24 ^ uVar15 >> 1) & 0x55555555) << 1 ^ uVar15;
              uVar5 = (~(uVar29 ^ uVar23 ^ uVar17 ^ uVar5 >> 1) & 0x55555555) << 1 ^ uVar5;
              uVar23 = (uVar31 ^ uVar30 ^ uVar25) << 1 ^ uVar21 & uVar28 ^ uVar22 ^ uVar3;
              uVar7 = (~(uVar6 & uVar11 & 0x55555555 ^ uVar9 ^ uVar32 ^ uVar3) & 0x55555555) << 1 ^
                      uVar7;
              local_c4 = local_f0 & 3 ^ (uVar5 >> 2 & 0x3f3f3f3f | (uVar5 & 0x3030000) << 6) >> 0x18
                         ^ local_c4;
              local_c8 = (local_f0 & 0xf) >> 2 ^
                         (uVar23 >> 2 & 0x3f3f3f3f | (uVar23 & 0x3030000) << 6) >> 0x18 ^ local_c8;
              local_cc = (local_f0 & 0x3f) >> 4 ^
                         (uVar7 >> 2 & 0x3f3f3f3f | (uVar7 & 0x3030000) << 6) >> 0x18 ^ local_cc;
              local_d0 = (int)local_f0 >> 6 ^
                         (uVar15 >> 2 & 0x3f3f3f3f | (uVar15 & 0x3030000) << 6) >> 0x18 ^ local_d0;
              local_c4 = local_c4 << 0x10 ^ local_c4 << 8 ^ local_c4 ^ local_c4 << 0x18;
              param_2 = local_c8 << 0x10 ^ local_c8 << 8 ^ local_c8 ^ local_c8 << 0x18;
              local_cc = local_cc << 0x10 ^ local_cc << 8 ^ local_cc ^ local_cc << 0x18;
              local_d0 = local_d0 << 0x10 ^ local_d0 << 8 ^ local_d0 ^ local_d0 << 0x18;
              puVar16 = local_84 + -4;
              local_70 = local_c4;
              local_6c = param_2;
              local_68 = local_cc;
              local_64 = local_d0;
              if (((puVar16 < &local_70) && (&local_70 < local_84)) ||
                 (&local_70 < puVar16 && puVar16 < &local_60)) break;
              *puVar16 = local_c4;
              local_84[-3] = param_2;
              local_84[-2] = local_cc;
              local_84[-1] = local_d0;
              if (local_d4 == 0xe) {
                uVar2 = 0;
                goto LAB_01836540;
              }
              local_50 = local_c4 & 0x55555555;
              local_4c = local_c4 >> 1 & 0x55555555;
              local_48 = param_2 & 0x55555555;
              local_44 = param_2 >> 1 & 0x55555555;
              local_40 = local_cc & 0x55555555;
              local_3c = local_cc >> 1 & 0x55555555;
              local_38 = local_d0 & 0x55555555;
              local_34 = local_d0 >> 1 & 0x55555555;
              FUN_01834e00(&local_50);
              uVar8 = uVar8 ^ (((local_44 ^ local_48 >> 1) & 0x55555555) << 1 ^ local_48) >> 0x18;
              uVar19 = uVar19 ^ (((local_3c ^ local_40 >> 1) & 0x55555555) << 1 ^ local_40) >> 0x18;
              uVar12 = uVar12 ^ (((local_34 ^ local_38 >> 1) & 0x55555555) << 1 ^ local_38) >> 0x18;
              uVar4 = uVar4 ^ (((local_4c ^ local_50 >> 1) & 0x55555555) << 1 ^ local_50) >> 0x18;
              local_5c = uVar8 << 0x10 ^ uVar8 << 8 ^ uVar8 ^ uVar8 << 0x18;
              local_60 = uVar4 << 0x10 ^ uVar4 << 8 ^ uVar4 ^ uVar4 << 0x18;
              local_58 = uVar19 << 0x10 ^ uVar19 << 8 ^ uVar19 ^ uVar19 << 0x18;
              local_54 = uVar12 << 0x10 ^ uVar12 << 8 ^ uVar12 ^ uVar12 << 0x18;
              if (((local_84 < &local_60) && (&local_60 < local_84 + 4)) ||
                 (&local_60 < local_84 && local_84 < &local_50)) break;
              local_f0 = (uint)(byte)(&DAT_00563cd4)[local_d4 >> 1];
              local_d4 = local_d4 + 2;
              *local_84 = local_60;
              local_84[1] = local_5c;
              local_84[2] = local_58;
              local_84[3] = local_54;
              local_c8 = param_2;
              local_84 = local_84 + 8;
            }
          }
        }
      }
    }
  }
LAB_01836c80:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1836c80);
  (*pcVar1)();
}

