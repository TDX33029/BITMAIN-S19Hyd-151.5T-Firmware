// FUN_0094da10 @ 0094da10 size=1632 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094da10(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint unaff_r5;
  undefined1 *puVar5;
  undefined1 *unaff_r7;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_r11;
  uint *puVar8;
  uint local_604;
  undefined1 *local_600;
  undefined1 *local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint local_5f0;
  uint local_5ec;
  undefined1 *local_5e8;
  uint local_5e4;
  uint local_5e0;
  uint local_5dc;
  uint local_5d8;
  undefined1 *local_5d4;
  uint local_5d0;
  undefined1 *local_5cc;
  uint local_5c8;
  uint uStack_5c4;
  uint uStack_5c0;
  uint local_5b8;
  uint uStack_5b4;
  uint uStack_5b0;
  uint uStack_5ac;
  uint uStack_5a8;
  uint local_5a0;
  uint uStack_59c;
  uint uStack_598;
  uint uStack_594;
  uint uStack_590;
  uint local_588;
  uint uStack_584;
  uint uStack_580;
  uint uStack_57c;
  uint uStack_578;
  undefined1 auStack_570 [224];
  uint local_490;
  uint uStack_48c;
  uint uStack_488;
  uint local_480;
  uint uStack_47c;
  uint uStack_478;
  uint uStack_474;
  uint uStack_470;
  uint local_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint uStack_458;
  uint local_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint uStack_440;
  undefined1 auStack_438 [224];
  undefined1 *local_358;
  undefined1 *local_354;
  undefined1 *local_350;
  undefined1 auStack_34c [220];
  uint local_270;
  uint uStack_26c;
  uint uStack_268;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1bc;
  undefined1 *local_1b8;
  uint local_1b4 [3];
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined1 *local_80;
  int local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar5 = (undefined1 *)*param_2;
  param_2[1] = param_2[1] - 1;
  FUN_0094f574(&local_1c0,puVar5);
  if ((char)local_1c0 == '\x01') {
    puVar4 = local_1bc;
  }
  else {
    uVar2 = (uint)local_1c0 >> 8 & 0xff;
    if (uVar2 == 0) {
      puVar7 = (undefined1 *)0x0;
      puVar6 = (undefined1 *)0x2;
LAB_0094db0c:
      FUN_01bed4e2(param_1 + 3,auStack_570,0xdc);
      param_1[0x3d] = local_5d0;
      param_1[0x3e] = (uint)local_5d4;
      param_1[0x3a] = (uint)puVar5;
      param_1[0x3b] = unaff_r5;
      param_1[0x3c] = (uint)unaff_r7;
      param_1[0x3f] = local_588;
      param_1[0x40] = uStack_584;
      param_1[0x41] = uStack_580;
      param_1[0x42] = uStack_57c;
      param_1[0x43] = uStack_578;
      param_1[0x46] = local_5dc;
      param_1[0x47] = local_5e0;
      param_1[0x44] = local_5f8;
      param_1[0x45] = local_5d8;
      param_1[0x48] = (uint)local_5e8;
      param_1[0x49] = local_5a0;
      param_1[0x4a] = uStack_59c;
      param_1[0x4b] = uStack_598;
      param_1[0x4c] = uStack_594;
      param_1[0x4d] = uStack_590;
      param_1[0x50] = local_5ec;
      param_1[0x51] = local_5f0;
      param_1[0x4e] = local_5f4;
      param_1[0x4f] = local_5e4;
      param_1[0x52] = (uint)local_5fc;
      param_1[0x53] = local_5b8;
      param_1[0x54] = uStack_5b4;
      param_1[0x55] = uStack_5b0;
      param_1[0x56] = uStack_5ac;
      param_1[0x57] = uStack_5a8;
      param_1[0x58] = local_604;
      param_1[0x59] = local_5c8;
      param_1[0x5a] = uStack_5c4;
      param_1[0x5b] = uStack_5c0;
      param_1[0x5c] = (uint)local_600;
      param_1[0x5d] = (uint)local_5cc;
      *param_1 = (uint)puVar6;
      param_1[1] = (uint)puVar7;
      goto LAB_0094dcb4;
    }
    if (uVar2 == 1) {
      FUN_00a8d9e4(&local_1c0,puVar5);
      unaff_r11 = local_1b8;
      puVar7 = local_1bc;
      puVar6 = local_1c0;
      puVar4 = local_1b8;
      if (local_1c0 != (undefined1 *)0x2 || local_1bc != (undefined1 *)0x0) {
        FUN_01bed4e2(auStack_34c,local_1b4,0xdc);
        local_354 = puVar7;
        local_358 = puVar6;
        local_350 = unaff_r11;
        local_7c = 7;
        local_80 = puVar5;
        FUN_0094e544(&local_1c0,&local_80);
        local_600 = local_1bc;
        if (local_1c0 == (undefined1 *)0x2) {
          puVar4 = local_1bc;
        }
        else {
          if (((uint)local_1c0 & 1) == 0) {
            uVar3 = 0;
          }
          else {
            FUN_0094e544(&local_1c0,&local_80);
            iVar1 = local_7c;
            puVar4 = local_80;
            local_5cc = local_1bc;
            if (local_1c0 == (undefined1 *)0x2) {
              puVar4 = local_1bc;
              goto LAB_0094dc9c;
            }
            if (((uint)local_1c0 & 1) == 0) {
              uVar3 = 1;
            }
            else {
              if (local_7c != 0) {
                FUN_009c98e8(&local_1c0,local_80);
                unaff_r5 = local_1b4[0];
                puVar5 = local_1b8;
                if (local_1c0 != (undefined1 *)0x1) {
                  uVar3 = 3;
                  if (iVar1 == 1) goto LAB_0094dc84;
                  local_7c = iVar1 + -2;
                  FUN_009c98e8(&local_1c0,puVar4);
                  if (local_1c0 != (undefined1 *)0x1) {
                    local_5d0 = local_1b4[0];
                    FUN_0094f9a0(&local_1c0,&local_80);
                    local_5d8 = local_1a4;
                    local_5f8 = local_1a8;
                    puVar4 = local_1c0;
                    if (local_1a8 != 0x80000002) {
                      puVar8 = (uint *)((uint)&local_1c0 | 4);
                      local_5d4 = local_1c0;
                      local_78 = *puVar8;
                      uStack_74 = puVar8[1];
                      uStack_70 = puVar8[2];
                      uStack_6c = puVar8[3];
                      uStack_68 = puVar8[4];
                      if (local_1a8 == 0x80000001) {
                        uVar3 = 4;
                        goto LAB_0094dc84;
                      }
                      local_5dc = local_1a0;
                      local_5e0 = local_19c;
                      FUN_0094f9a0(&local_1c0,&local_80);
                      uVar2 = local_1a4;
                      local_5f4 = local_1a8;
                      puVar4 = local_1c0;
                      if (local_1a8 != 0x80000002) {
                        local_5e8 = local_1c0;
                        puVar8 = (uint *)((uint)&local_1c0 | 4);
                        local_60 = *puVar8;
                        uStack_5c = puVar8[1];
                        uStack_58 = puVar8[2];
                        uStack_54 = puVar8[3];
                        uStack_50 = puVar8[4];
                        if (local_1a8 == 0x80000001) {
                          puVar4 = (undefined1 *)FUN_00a9d070(5,&DAT_01c0c3a8,&DAT_01d064b8);
                        }
                        else {
                          local_5e4 = local_1a4;
                          local_5ec = local_1a0;
                          local_5f0 = local_19c;
                          FUN_0094f9a0(&local_1c0,&local_80);
                          puVar4 = local_1c0;
                          if (local_1a8 != 0x80000002) {
                            puVar8 = (uint *)((uint)&local_1c0 | 4);
                            local_5fc = local_1c0;
                            local_480 = *puVar8;
                            uStack_47c = puVar8[1];
                            uStack_478 = puVar8[2];
                            uStack_474 = puVar8[3];
                            uStack_470 = puVar8[4];
                            local_48 = local_1a4;
                            uStack_44 = local_1a0;
                            uStack_40 = local_19c;
                            local_604 = local_1a8;
                            local_38 = local_480;
                            uStack_34 = uStack_47c;
                            uStack_30 = uStack_478;
                            uStack_2c = uStack_474;
                            uStack_28 = uStack_470;
                            if (local_1a8 != 0x80000001) {
                              local_d8 = local_1a4;
                              uStack_d4 = local_1a0;
                              uStack_d0 = local_19c;
                              local_450 = local_78;
                              uStack_44c = uStack_74;
                              uStack_448 = uStack_70;
                              uStack_444 = uStack_6c;
                              uStack_440 = uStack_68;
                              local_468 = local_60;
                              uStack_464 = uStack_5c;
                              uStack_460 = uStack_58;
                              uStack_45c = uStack_54;
                              uStack_458 = uStack_50;
                              local_270 = local_1a4;
                              uStack_26c = local_1a0;
                              uStack_268 = local_19c;
                              local_218 = local_1a4;
                              uStack_214 = local_1a0;
                              uStack_210 = local_19c;
                              local_490 = local_1a4;
                              uStack_48c = local_1a0;
                              uStack_488 = local_19c;
                              local_260 = local_480;
                              uStack_25c = uStack_47c;
                              uStack_258 = uStack_478;
                              uStack_254 = uStack_474;
                              uStack_250 = uStack_470;
                              local_248 = local_468;
                              uStack_244 = uStack_464;
                              uStack_240 = uStack_460;
                              uStack_23c = uStack_45c;
                              uStack_238 = uStack_458;
                              local_230 = local_450;
                              uStack_22c = uStack_44c;
                              uStack_228 = uStack_448;
                              uStack_224 = uStack_444;
                              uStack_220 = uStack_440;
                              local_208 = local_480;
                              uStack_204 = uStack_47c;
                              uStack_200 = uStack_478;
                              uStack_1fc = uStack_474;
                              uStack_1f8 = uStack_470;
                              local_1f0 = local_468;
                              uStack_1ec = uStack_464;
                              uStack_1e8 = uStack_460;
                              uStack_1e4 = uStack_45c;
                              uStack_1e0 = uStack_458;
                              local_1d8 = local_450;
                              uStack_1d4 = uStack_44c;
                              uStack_1d0 = uStack_448;
                              uStack_1cc = uStack_444;
                              uStack_1c8 = uStack_440;
                              local_c8 = local_480;
                              uStack_c4 = uStack_47c;
                              uStack_c0 = uStack_478;
                              uStack_bc = uStack_474;
                              uStack_b8 = uStack_470;
                              local_b0 = local_468;
                              uStack_ac = uStack_464;
                              uStack_a8 = uStack_460;
                              uStack_a4 = uStack_45c;
                              uStack_a0 = uStack_458;
                              local_98 = local_450;
                              uStack_94 = uStack_44c;
                              uStack_90 = uStack_448;
                              uStack_8c = uStack_444;
                              uStack_88 = uStack_440;
                              FUN_01bed4e2(auStack_438,auStack_34c,0xdc);
                              FUN_01bed4e2(auStack_570,auStack_438,0xdc);
                              local_588 = local_450;
                              uStack_584 = uStack_44c;
                              uStack_580 = uStack_448;
                              uStack_57c = uStack_444;
                              uStack_578 = uStack_440;
                              local_5a0 = local_468;
                              uStack_59c = uStack_464;
                              uStack_598 = uStack_460;
                              uStack_594 = uStack_45c;
                              uStack_590 = uStack_458;
                              local_5b8 = local_480;
                              uStack_5b4 = uStack_47c;
                              uStack_5b0 = uStack_478;
                              uStack_5ac = uStack_474;
                              uStack_5a8 = uStack_470;
                              local_5c8 = local_490;
                              uStack_5c4 = uStack_48c;
                              uStack_5c0 = uStack_488;
                              unaff_r7 = local_1b8;
                              goto LAB_0094db0c;
                            }
                            puVar4 = (undefined1 *)FUN_00a9d070(6,&DAT_01c0c3a8,&DAT_01d064b8);
                          }
                          if (local_5f4 != 0x80000000) {
                            FUN_0132b958(local_5f4,uVar2,8,0x28);
                          }
                        }
                      }
                      if (local_5f8 != 0x80000000) {
                        FUN_0132b958(local_5f8,local_5d8,8,0x28);
                      }
                    }
                    goto LAB_0094dc9c;
                  }
                }
                puVar4 = local_1bc;
                goto LAB_0094dc9c;
              }
              uVar3 = 2;
            }
          }
LAB_0094dc84:
          puVar4 = (undefined1 *)FUN_00a9d070(uVar3,&DAT_01c0c3a8,&DAT_01d064b8);
        }
LAB_0094dc9c:
        FUN_00b9a764(&local_358);
      }
    }
    else {
      local_1c0 = &DAT_80000004;
      local_1bc = (undefined1 *)uVar2;
      puVar4 = (undefined1 *)FUN_0073696c(&local_1c0);
    }
  }
  *param_1 = 4;
  param_1[1] = 0;
  unaff_r11 = puVar4;
LAB_0094dcb4:
  param_1[2] = (uint)unaff_r11;
  return;
}

