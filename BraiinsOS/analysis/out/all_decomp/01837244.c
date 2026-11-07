// FUN_01837244 @ 01837244 size=3304 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01837244(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  uint local_31c;
  uint *local_30c;
  uint *local_308;
  uint local_304;
  uint local_2f8;
  uint local_2f0;
  uint *local_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0 [4];
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270 [129];
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint local_4c [8];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_3 != 0) {
    uVar15 = param_4[0x3c];
    uVar13 = 0;
    puVar3 = param_4;
    puVar6 = local_270 + 9;
    do {
      if (puVar3 < local_2a0 && &local_2b0 < puVar3) goto LAB_01837f04;
      bVar21 = false;
      puVar5 = puVar6;
      do {
        if ((puVar3 < &local_2b0) && (&local_2b0 < puVar3 + 4)) goto LAB_01837f04;
        local_2a8 = puVar3[2];
        local_2b0 = *puVar3;
        local_2a4 = puVar3[3];
        bVar2 = !bVar21;
        local_2ac = puVar3[1];
        bVar21 = true;
        *puVar5 = local_2b0;
        puVar5[2] = local_2ac;
        puVar5[4] = local_2a8;
        puVar5[6] = local_2a4;
        puVar5 = puVar5 + 1;
      } while (bVar2);
      uVar13 = uVar13 + 1;
      FUN_01834d58(puVar6);
      puVar6 = puVar6 + 8;
      puVar3 = puVar3 + 4;
    } while (uVar13 <= uVar15);
    iVar11 = 2;
    bVar21 = true;
    iVar12 = 2;
    puVar3 = &local_6c;
    if (param_5 <= &local_6c) goto LAB_01837f14;
    while (puVar6 = puVar3 + 4, iVar12 = iVar11, puVar6 <= param_5) {
      while( true ) {
        uVar13 = param_5[1];
        uVar15 = param_5[2];
        uVar7 = param_5[3];
        *puVar3 = *param_5;
        puVar3[1] = uVar13;
        puVar3[2] = uVar15;
        puVar3[3] = uVar7;
        if (iVar12 == 1) {
          if ((((&local_60 < &uStack_2cc && &uStack_2d0 < &local_60) ||
               (&uStack_2d0 < &local_5c && &local_60 < &uStack_2d0)) ||
              (local_31c = local_60 << 0x18 | (local_60 >> 8 & 0xff) << 0x10 |
                           (local_60 >> 0x10 & 0xff) << 8 | local_60 >> 0x18,
              &local_60 < &uStack_2cc && &uStack_2cc < &local_5c)) ||
             (&local_60 < &uStack_2c8 && &uStack_2cc < &local_60)) goto LAB_01837f04;
          uVar13 = local_31c + 1;
          uVar13 = uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18;
          if ((&uStack_2cc < local_4c && &local_50 < &uStack_2cc) ||
             (&local_50 < &uStack_2c8 && &uStack_2cc < &local_50)) goto LAB_01837f04;
          local_2f8 = param_3;
          if (1 < param_3) {
            local_2f8 = 2;
          }
          local_50 = uVar13;
          FUN_016dd606(&local_290,0,0x20);
          local_30c = param_2;
          local_308 = param_1;
          local_304 = param_3;
          if (&local_6c < &local_290 && local_2a0 < &local_6c) goto LAB_01837f04;
          goto LAB_01837ee8;
        }
        iVar11 = 1;
        bVar21 = param_5 <= puVar6;
        iVar12 = iVar11;
        puVar3 = puVar6;
        if (!bVar21) break;
LAB_01837f14:
        if ((bVar21 && puVar3 != param_5) && (puVar3 < param_5 + 4)) goto LAB_01837f04;
        puVar6 = puVar3 + 4;
      }
    }
LAB_01837f04:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1837f04);
    (*pcVar1)();
  }
LAB_01837298:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
LAB_01837ee8:
  if ((&local_6c < local_2a0) && (local_2a0 < &local_5c)) goto LAB_01837f04;
  if (local_304 != 1) {
    if ((&local_5c < &local_290 && local_2a0 < &local_5c) ||
       ((&local_5c < local_2a0 && (local_2a0 < local_4c)))) goto LAB_01837f04;
    uVar15 = (uVar13 ^ uVar13 >> 6) & 0xcc00cc;
    uVar16 = uVar13 ^ uVar15 ^ uVar15 << 6;
    uVar13 = (uVar16 ^ uVar16 >> 0xc) & 0xf0f0;
    uVar16 = uVar16 ^ uVar13;
    uVar17 = uVar16 ^ uVar13 << 0xc;
    uVar13 = (uStack_58 ^ uStack_58 >> 6) & 0xcc00cc;
    uVar8 = uStack_58 ^ uVar13 ^ uVar13 << 6;
    uVar13 = (uStack_54 ^ uStack_54 >> 6) & 0xcc00cc;
    uVar7 = uStack_54 ^ uVar13 ^ uVar13 << 6;
    uVar13 = (local_5c ^ local_5c >> 6) & 0xcc00cc;
    uVar13 = local_5c ^ uVar13 ^ uVar13 << 6;
    uVar15 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
    uVar9 = uVar8 ^ uVar15 ^ uVar15 << 0xc;
    uVar15 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
    uVar7 = uVar7 ^ uVar15;
    uVar8 = uVar7 ^ uVar15 << 0xc;
    uVar15 = (uVar13 ^ uVar13 >> 0xc) & 0xf0f0;
    uVar13 = uVar13 ^ uVar15;
    uVar15 = uVar13 ^ uVar15 << 0xc;
    local_28c = (uVar9 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | uVar13 & 0xff | uVar16 << 0x18;
    local_274 = (uVar8 >> 0x18) << 0x10 | (uVar9 >> 0x18) << 8 | uVar15 >> 0x18 |
                uVar17 & 0xff000000;
    local_27c = (uVar15 & 0xffffff) >> 0x10 | uVar8 & 0xff0000 | uVar9 >> 8 & 0xff00 |
                (uVar17 >> 0x10) << 0x18;
    local_284 = (uVar13 & 0xffff) >> 8 | uVar9 & 0xff00 | (uVar8 & 0xff00) << 8 |
                (uVar17 >> 8) << 0x18;
  }
  uVar15 = (uStack_68 ^ uStack_68 >> 6) & 0xcc00cc;
  uVar13 = (local_60 ^ local_60 >> 6) & 0xcc00cc;
  uVar15 = uVar15 ^ uStack_68 ^ uVar15 << 6;
  uVar8 = uVar13 ^ local_60 ^ uVar13 << 6;
  uVar7 = (local_6c ^ local_6c >> 6) & 0xcc00cc;
  uVar13 = (uStack_64 ^ uStack_64 >> 6) & 0xcc00cc;
  uVar7 = local_6c ^ uVar7 ^ uVar7 << 6;
  uVar16 = uStack_64 ^ uVar13 ^ uVar13 << 6;
  uVar9 = (uVar15 ^ uVar15 >> 0xc) & 0xf0f0;
  uVar13 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
  uVar8 = uVar8 ^ uVar13;
  uVar15 = uVar15 ^ uVar9 ^ uVar9 << 0xc;
  uVar9 = uVar8 ^ uVar13 << 0xc;
  uVar17 = (uVar16 ^ uVar16 >> 0xc) & 0xf0f0;
  uVar13 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
  uVar16 = uVar17 ^ uVar16;
  uVar7 = uVar7 ^ uVar13;
  uVar17 = uVar16 ^ uVar17 << 0xc;
  uVar13 = uVar7 ^ uVar13 << 0xc;
  puVar5 = local_4c + 1;
  local_290 = uVar7 & 0xff | uVar8 << 0x18 | (uVar15 & 0xff) << 8 | (uVar16 & 0xff) << 0x10;
  local_288 = (uVar7 & 0xffff) >> 8 | (uVar9 >> 8) << 0x18 | uVar15 & 0xff00 |
              (uVar17 & 0xff00) << 8;
  uVar8 = (local_28c ^ local_290 >> 1) & 0x55555555;
  local_290 = local_290 ^ uVar8 << 1;
  local_280 = (uVar13 & 0xffffff) >> 0x10 | (uVar9 >> 0x10) << 0x18 | uVar17 & 0xff0000 |
              uVar15 >> 8 & 0xff00;
  uVar7 = (local_284 ^ local_288 >> 1) & 0x55555555;
  local_284 = local_284 ^ uVar7;
  local_288 = local_288 ^ uVar7 << 1;
  local_278 = uVar9 & 0xff000000 | uVar13 >> 0x18 | (uVar15 >> 0x18) << 8 | (uVar17 >> 0x18) << 0x10
  ;
  uVar13 = (local_27c ^ local_280 >> 1) & 0x55555555;
  local_27c = local_27c ^ uVar13;
  local_28c = local_28c ^ uVar8;
  local_280 = local_280 ^ uVar13 << 1;
  uVar13 = (local_274 ^ local_278 >> 1) & 0x55555555;
  local_274 = local_274 ^ uVar13;
  local_278 = local_278 ^ uVar13 << 1;
  local_2d4 = local_4c + 2;
  FUN_01835104(local_270 + 9,param_4[0x3c],&local_290);
  local_2f0 = 0;
  puVar20 = local_4c + 3;
  uVar13 = (local_28c ^ local_290 >> 1) & 0x55555555;
  local_270[1] = local_28c ^ uVar13;
  local_270[0] = local_290 ^ uVar13 << 1;
  uVar13 = (local_284 ^ local_288 >> 1) & 0x55555555;
  local_270[3] = local_284 ^ uVar13;
  local_270[2] = local_288 ^ uVar13 << 1;
  uVar13 = (local_27c ^ local_280 >> 1) & 0x55555555;
  local_270[5] = local_27c ^ uVar13;
  local_270[4] = local_280 ^ uVar13 << 1;
  uVar13 = (local_274 ^ local_278 >> 1) & 0x55555555;
  local_270[7] = local_274 ^ uVar13;
  local_270[6] = local_278 ^ uVar13 << 1;
  puVar3 = puVar20;
  puVar6 = local_270;
  do {
    puVar10 = puVar3 + -3;
    if ((puVar10 < &uStack_2c8) && (&uStack_2c8 < puVar5)) goto LAB_01837f04;
    uVar9 = *puVar6;
    uVar8 = puVar6[2];
    uVar15 = puVar6[6];
    uVar13 = puVar6[4];
    uVar7 = uVar9 & 0xff | uVar15 << 0x18 | (uVar8 & 0xff) << 8 | (uVar13 & 0xff) << 0x10;
    uVar16 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
    uVar7 = uVar7 ^ uVar16 ^ uVar16 << 0xc;
    uVar16 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
    if ((puVar10 < &uStack_2c4 && &uStack_2c8 < puVar10) ||
       ((puVar3[-3] = uVar7 ^ uVar16 ^ uVar16 << 6, puVar5 < &uStack_2c4 &&
        (&uStack_2c4 < local_2d4)))) goto LAB_01837f04;
    uVar7 = (uVar9 & 0xffff) >> 8 | uVar8 & 0xff00 | (uVar15 >> 8) << 0x18 | (uVar13 & 0xff00) << 8;
    uVar16 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
    uVar7 = uVar7 ^ uVar16 ^ uVar16 << 0xc;
    uVar16 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
    if ((puVar5 < &uStack_2c0 && &uStack_2c4 < puVar5) ||
       ((puVar3[-2] = uVar7 ^ uVar16 ^ uVar16 << 6, local_2d4 < &uStack_2c0 &&
        (&uStack_2c0 < puVar3)))) goto LAB_01837f04;
    uVar7 = (uVar9 & 0xffffff) >> 0x10 | uVar13 & 0xff0000 | (uVar15 >> 0x10) << 0x18 |
            uVar8 >> 8 & 0xff00;
    uVar16 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
    uVar7 = uVar7 ^ uVar16 ^ uVar16 << 0xc;
    uVar16 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
    if ((&uStack_2c0 < local_2d4 && local_2d4 < &uStack_2bc) ||
       ((puVar3[-1] = uVar7 ^ uVar16 ^ uVar16 << 6, puVar3 < &uStack_2bc &&
        (&uStack_2bc < puVar3 + 1)))) goto LAB_01837f04;
    uVar15 = uVar15 & 0xff000000 | uVar9 >> 0x18 | (uVar8 >> 0x18) << 8 | (uVar13 >> 0x18) << 0x10;
    uVar13 = (uVar15 ^ uVar15 >> 0xc) & 0xf0f0;
    uVar15 = uVar15 ^ uVar13 ^ uVar13 << 0xc;
    uVar13 = (uVar15 ^ uVar15 >> 6) & 0xcc00cc;
    if (&uStack_2bc < puVar3 && puVar3 < &uStack_2b8) goto LAB_01837f04;
    *puVar3 = uVar15 ^ uVar13 ^ uVar13 << 6;
    puVar5 = puVar5 + 4;
    local_2f0 = local_2f0 + 1;
    local_2d4 = local_2d4 + 4;
    puVar3 = puVar3 + 4;
    puVar6 = puVar6 + 1;
  } while (local_2f0 != local_2f8);
  puVar5 = local_308 + 3;
  puVar19 = local_30c + 2;
  puVar18 = local_308 + 2;
  puVar14 = local_30c + 1;
  puVar10 = local_308 + 1;
  puVar3 = local_308;
  puVar6 = local_30c;
  local_2d4 = local_30c + 3;
  do {
    if ((((((puVar3 < &uStack_2b4 && &uStack_2b8 < puVar3) ||
           (((puVar3 < &uStack_2b8 && (&uStack_2b8 < puVar10)) ||
            (puVar4 = puVar20 + -3, puVar4 < &local_2b0 && &uStack_2b4 < puVar4)))) ||
          ((puVar4 < &uStack_2b4 && (&uStack_2b4 < puVar20 + -2)))) ||
         (((puVar6 < &uStack_2b8 && (&uStack_2b8 < puVar14)) ||
          ((((puVar6 < &uStack_2b4 && &uStack_2b8 < puVar6 ||
             (*puVar6 = puVar20[-3] ^ *puVar3, puVar10 < &uStack_2b4 && &uStack_2b8 < puVar10)) ||
            ((puVar10 < &uStack_2b8 && (&uStack_2b8 < puVar18)))) ||
           (puVar4 = puVar20 + -2, puVar4 < &local_2b0 && &uStack_2b4 < puVar4)))))) ||
        ((((puVar4 < &uStack_2b4 && (&uStack_2b4 < puVar20 + -1)) ||
          ((puVar14 < &uStack_2b8 && (&uStack_2b8 < puVar19)))) ||
         (((puVar14 < &uStack_2b4 && &uStack_2b8 < puVar14 ||
           (*puVar14 = *puVar4 ^ *puVar10, puVar18 < &uStack_2b4 && &uStack_2b8 < puVar18)) ||
          ((puVar18 < &uStack_2b8 && (&uStack_2b8 < puVar5)))))))) ||
       (((((puVar4 = puVar20 + -1, puVar4 < &local_2b0 && &uStack_2b4 < puVar4 ||
           ((puVar4 < &uStack_2b4 && (&uStack_2b4 < puVar20)))) ||
          ((puVar19 < &uStack_2b8 && (&uStack_2b8 < local_2d4)))) ||
         (((puVar19 < &uStack_2b4 && &uStack_2b8 < puVar19 ||
           (*puVar19 = *puVar4 ^ *puVar18, &uStack_2b8 < puVar5 && puVar5 < &uStack_2b4)) ||
          ((puVar5 < &uStack_2b8 && (&uStack_2b8 < puVar5 + 1)))))) ||
        (((&uStack_2b4 < puVar20 && puVar20 < &local_2b0 ||
          ((puVar20 < &uStack_2b4 && (&uStack_2b4 < puVar20 + 1)))) ||
         (((local_2d4 < &uStack_2b8 && (&uStack_2b8 < local_2d4 + 1)) ||
          (local_2d4 < &uStack_2b4 && &uStack_2b8 < local_2d4)))))))) goto LAB_01837f04;
    *local_2d4 = *puVar20 ^ *puVar5;
    puVar3 = puVar3 + 4;
    puVar6 = puVar6 + 4;
    puVar5 = puVar5 + 4;
    puVar20 = puVar20 + 4;
    puVar19 = puVar19 + 4;
    puVar18 = puVar18 + 4;
    puVar14 = puVar14 + 4;
    puVar10 = puVar10 + 4;
    local_2d4 = local_2d4 + 4;
  } while (local_308 + local_2f8 * 4 != puVar3);
  local_304 = local_304 - local_2f8;
  if (local_304 == 0) goto LAB_01837298;
  local_308 = local_308 + 8;
  local_30c = local_30c + 8;
  uVar15 = local_31c + 2;
  local_31c = local_31c + 3;
  uVar13 = local_31c * 0x1000000 | (local_31c >> 8 & 0xff) << 0x10 | (local_31c >> 0x10 & 0xff) << 8
           | local_31c >> 0x18;
  local_60 = uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18;
  local_2f8 = local_304;
  if (1 < local_304) {
    local_2f8 = 2;
  }
  local_50 = uVar13;
  FUN_016dd606(&local_290,0,0x20);
  local_31c = uVar15;
  goto LAB_01837ee8;
}

