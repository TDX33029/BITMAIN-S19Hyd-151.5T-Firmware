// FUN_01836ca8 @ 01836ca8 size=1424 calls_out=4 calls_in=4
// strings: 

undefined8 FUN_01836ca8(uint *param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint auStack_20c [120];
  int local_2c;
  
  uVar3 = param_3[0x3c];
  uVar6 = 0;
  local_2c = DAT_018ddaf8;
  puVar7 = auStack_20c;
  do {
    if (&local_240 < param_3 && param_3 < &local_230) goto LAB_01837234;
    iVar2 = 2;
    puVar14 = puVar7;
    while( true ) {
      if ((param_3 < &local_240) && (&local_240 < param_3 + 4)) goto LAB_01837234;
      local_234 = param_3[3];
      local_240 = *param_3;
      local_23c = param_3[1];
      local_238 = param_3[2];
      *puVar14 = local_240;
      puVar14[2] = local_23c;
      puVar14[4] = local_238;
      puVar14[6] = local_234;
      if (iVar2 == 1) break;
      iVar2 = 1;
      puVar14 = puVar14 + 1;
    }
    uVar6 = uVar6 + 1;
    FUN_01834d58(puVar7);
    puVar7 = puVar7 + 8;
    param_3 = param_3 + 4;
  } while (uVar6 <= uVar3);
  puVar7 = &local_250;
  FUN_016dd606(&local_230,0,0x20);
  if ((param_1 <= puVar7 || &local_240 <= param_1) &&
     ((puVar7 <= param_1 || (param_1 + 4 <= puVar7)))) {
    local_250 = *param_1;
    local_24c = param_1[1];
    local_248 = param_1[2];
    local_244 = param_1[3];
    uVar10 = (local_250 ^ local_250 >> 6) & 0xcc00cc;
    uVar6 = (local_24c ^ local_24c >> 6) & 0xcc00cc;
    uVar4 = uVar10 ^ local_250 ^ uVar10 << 6;
    uVar12 = local_24c ^ uVar6 ^ uVar6 << 6;
    uVar6 = (local_244 ^ local_244 >> 6) & 0xcc00cc;
    uVar10 = (uVar4 ^ uVar4 >> 0xc) & 0xf0f0;
    uVar6 = local_244 ^ uVar6 ^ uVar6 << 6;
    uVar9 = (local_248 ^ local_248 >> 6) & 0xcc00cc;
    uVar8 = (uVar12 ^ uVar12 >> 0xc) & 0xf0f0;
    uVar11 = local_248 ^ uVar9 ^ uVar9 << 6;
    uVar13 = uVar12 ^ uVar8 ^ uVar8 << 0xc;
    uVar9 = (uVar6 ^ uVar6 >> 0xc) & 0xf0f0;
    uVar4 = uVar4 ^ uVar10;
    uVar6 = uVar6 ^ uVar9;
    uVar8 = uVar4 ^ uVar10 << 0xc;
    uVar10 = uVar6 ^ uVar9 << 0xc;
    uVar9 = (uVar11 ^ uVar11 >> 0xc) & 0xf0f0;
    uVar11 = uVar11 ^ uVar9;
    uVar12 = uVar11 ^ uVar9 << 0xc;
    uVar9 = uVar4 & 0xff | uVar6 << 0x18 | (uVar13 & 0xff) << 8 | (uVar11 & 0xff) << 0x10;
    uVar4 = (uVar4 & 0xffff) >> 8 | (uVar10 >> 8) << 0x18 | uVar13 & 0xff00 | (uVar12 & 0xff00) << 8
    ;
    uVar11 = uVar10 & 0xff000000 | uVar8 >> 0x18 | (uVar13 >> 0x18) << 8 | (uVar12 >> 0x18) << 0x10;
    uVar6 = (uVar8 & 0xffffff) >> 0x10 | (uVar10 >> 0x10) << 0x18 | uVar12 & 0xff0000 |
            uVar13 >> 8 & 0xff00;
    local_230 = uVar9 & 0x55555555;
    local_22c = uVar9 >> 1 & 0x55555555;
    local_228 = uVar4 & 0x55555555;
    local_224 = uVar4 >> 1 & 0x55555555;
    local_220 = uVar6 & 0x55555555;
    local_21c = uVar6 >> 1 & 0x55555555;
    local_218 = uVar11 & 0x55555555;
    local_214 = uVar11 >> 1 & 0x55555555;
    FUN_01835104(auStack_20c,uVar3,&local_230);
    if ((&uStack_260 <= param_2) || (param_2 + 1 <= &uStack_260)) {
      puVar14 = &uStack_260;
      if (param_2 <= &uStack_260) {
        puVar14 = (uint *)0x0;
      }
      if (&uStack_260 < param_2) {
        puVar14 = (uint *)&DAT_00000001;
      }
      uVar6 = ((local_224 ^ local_228 >> 1) & 0x55555555) << 1 ^ local_228;
      uVar9 = ((local_22c ^ local_230 >> 1) & 0x55555555) << 1 ^ local_230;
      uVar3 = ((local_21c ^ local_220 >> 1) & 0x55555555) << 1 ^ local_220;
      uVar4 = ((local_214 ^ local_218 >> 1) & 0x55555555) << 1 ^ local_218;
      uVar10 = uVar9 & 0xff | uVar4 << 0x18 | (uVar6 & 0xff) << 8 | (uVar3 & 0xff) << 0x10;
      uVar8 = (uVar10 ^ uVar10 >> 0xc) & 0xf0f0;
      uVar10 = uVar10 ^ uVar8 ^ uVar8 << 0xc;
      uVar8 = (uVar10 ^ uVar10 >> 6) & 0xcc00cc;
      if (&uStack_25c <= param_2) {
        puVar14 = (uint *)0x0;
      }
      if (puVar14 == (uint *)0x0) {
        puVar14 = param_2 + 1;
        *param_2 = uVar10 ^ uVar8 ^ uVar8 << 6;
        if ((&uStack_25c <= puVar14) || (param_2 + 2 <= &uStack_25c)) {
          puVar5 = &uStack_25c;
          if (puVar14 <= &uStack_25c) {
            puVar5 = (uint *)0x0;
          }
          uVar10 = (uVar9 & 0xffff) >> 8 | (uVar4 >> 8) << 0x18 | uVar6 & 0xff00 |
                   (uVar3 & 0xff00) << 8;
          if (&uStack_25c < puVar14) {
            puVar5 = (uint *)&DAT_00000001;
          }
          uVar8 = (uVar10 ^ uVar10 >> 0xc) & 0xf0f0;
          uVar10 = uVar10 ^ uVar8 ^ uVar8 << 0xc;
          uVar8 = (uVar10 ^ uVar10 >> 6) & 0xcc00cc;
          if (&uStack_258 <= puVar14) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 == (uint *)0x0) {
            puVar14 = param_2 + 2;
            param_2[1] = uVar10 ^ uVar8 ^ uVar8 << 6;
            if ((&uStack_258 <= puVar14) || (param_2 + 3 <= &uStack_258)) {
              puVar5 = &uStack_258;
              if (puVar14 <= &uStack_258) {
                puVar5 = (uint *)0x0;
              }
              uVar10 = (uVar9 & 0xffffff) >> 0x10 | (uVar4 >> 0x10) << 0x18 | uVar3 & 0xff0000 |
                       uVar6 >> 8 & 0xff00;
              if (&uStack_258 < puVar14) {
                puVar5 = (uint *)&DAT_00000001;
              }
              uVar8 = (uVar10 ^ uVar10 >> 0xc) & 0xf0f0;
              uVar10 = uVar10 ^ uVar8 ^ uVar8 << 0xc;
              uVar8 = (uVar10 ^ uVar10 >> 6) & 0xcc00cc;
              if (&uStack_254 <= puVar14) {
                puVar5 = (uint *)0x0;
              }
              if (puVar5 == (uint *)0x0) {
                puVar14 = param_2 + 3;
                param_2[2] = uVar10 ^ uVar8 ^ uVar8 << 6;
                if ((&uStack_254 <= puVar14) || (param_2 + 4 <= &uStack_254)) {
                  uVar3 = uVar4 & 0xff000000 | uVar9 >> 0x18 | (uVar6 >> 0x18) << 8 |
                          (uVar3 >> 0x18) << 0x10;
                  bVar15 = puVar7 <= puVar14;
                  if (bVar15) {
                    puVar7 = (uint *)0x0;
                  }
                  uVar6 = (uVar3 ^ uVar3 >> 0xc) & 0xf0f0;
                  if (!bVar15) {
                    puVar7 = (uint *)&DAT_00000001;
                  }
                  uVar3 = uVar3 ^ uVar6 ^ uVar6 << 0xc;
                  if (puVar14 <= &uStack_254) {
                    puVar7 = (uint *)0x0;
                  }
                  uVar6 = (uVar3 ^ uVar3 >> 6) & 0xcc00cc;
                  if (puVar7 == (uint *)0x0) {
                    param_2[3] = uVar3 ^ uVar6 ^ uVar6 << 6;
                    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                      FUN_016d2b78();
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01837234:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1837234);
  (*pcVar1)();
}

