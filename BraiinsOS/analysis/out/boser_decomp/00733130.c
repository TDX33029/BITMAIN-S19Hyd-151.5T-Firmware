// FUN_00733130 @ 00733130 size=2216 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00733130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *******pppppppuVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *******pppppppuVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *******extraout_r12;
  int iVar10;
  undefined8 uVar11;
  int local_3b0;
  undefined4 *******local_3ac;
  int local_3a8;
  undefined4 *******local_3a4;
  int local_3a0;
  undefined4 *******local_39c;
  int local_394;
  undefined4 *******local_390;
  int local_38c;
  int local_388;
  uint local_384;
  undefined4 *******local_380;
  int local_37c;
  undefined4 *******local_378;
  undefined4 *******local_374;
  undefined4 local_358;
  int local_354;
  undefined4 *******local_350;
  int local_34c;
  uint local_348;
  int local_344;
  undefined1 auStack_340 [160];
  undefined4 ******local_2a0;
  undefined4 local_29c;
  int local_298;
  undefined4 local_294;
  undefined4 *******local_290;
  int local_28c;
  uint local_288;
  int local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 *******pppppppuStack_278;
  undefined4 uStack_274;
  int local_270;
  undefined4 *******local_26c;
  int local_268;
  undefined4 *******local_264;
  undefined4 *******local_260;
  int local_25c;
  int local_258;
  undefined4 *******local_254;
  undefined4 *******local_250;
  undefined4 *******local_24c;
  undefined4 *******local_248;
  undefined4 *******local_240;
  int iStack_23c;
  undefined4 *******pppppppuStack_238;
  int iStack_234;
  undefined4 *******local_230;
  int iStack_22c;
  undefined4 *******pppppppuStack_228;
  int iStack_224;
  undefined4 *******local_220;
  int local_21c;
  undefined8 local_218;
  undefined4 *******local_210;
  undefined4 local_180;
  int local_17c;
  undefined4 *******local_178;
  int local_174;
  undefined4 *******local_170;
  int iStack_16c;
  uint local_e0;
  int local_dc;
  undefined4 *******local_d8;
  int local_d4;
  undefined4 *******local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_b4;
  undefined4 *******local_38;
  int local_34;
  undefined4 *******local_30;
  int local_2c;
  
  FUN_007305c4(&local_358,param_2[0x1b],param_2[0x1c],*param_2,param_2[1],param_3[10]);
  local_258 = local_354;
  puVar5 = param_1 + 2;
  if ((char)local_358 != 'O') {
    *(undefined2 *)((int)param_1 + 9) = local_358._1_2_;
    param_1[4] = local_350;
    param_1[5] = local_34c;
    *param_1 = 2;
    *(undefined1 *)((int)param_1 + 0xb) = local_358._3_1_;
    param_1[1] = 0;
    param_1[3] = local_354;
    *(char *)(param_1 + 2) = (char)local_358;
    return;
  }
  local_34c = param_3[5];
  local_288 = param_3[6];
  local_284 = param_3[7];
  local_350 = (undefined4 *******)param_3[4];
  local_2a0 = (undefined4 ******)*param_3;
  local_29c = param_3[1];
  local_298 = param_3[2];
  local_294 = param_3[3];
  local_280 = param_3[8];
  local_d8 = &local_2a0;
  local_358 = (uint)(local_298 - 3U < 2);
  local_27c = param_3[9];
  pppppppuVar7 = (undefined4 *******)param_3[10];
  uStack_274 = param_3[0xb];
  local_24c = (undefined4 *******)&DAT_0000000c;
  local_254 = (undefined4 *******)&DAT_00000008;
  if ((local_280 & 0xff00) == 0x800) {
    local_254 = (undefined4 *******)&DAT_00000010;
    local_24c = (undefined4 *******)&DAT_00000014;
  }
  if ((4 < local_280 >> 0x10 & *(byte *)(param_2 + 0x1e)) == 0) {
    local_254 = (undefined4 *******)0x0;
    local_24c = (undefined4 *******)0x0;
  }
  local_348 = 0x2f;
  local_d4 = local_354 + 8;
  local_260 = (undefined4 *******)0x0;
  local_25c = 0;
  local_344 = 0;
  local_354 = 0;
  local_268 = 0;
  local_270 = 0;
  local_250 = (undefined4 *******)0x0;
  local_b4 = 0;
  local_d0 = (undefined4 *******)0x0;
  local_290 = local_350;
  local_28c = local_34c;
  pppppppuStack_278 = pppppppuVar7;
  local_248 = local_24c;
  local_e0 = local_288;
  local_dc = local_284;
  FUN_00718e24(&local_180,&local_e0);
  iVar8 = local_cc;
  pppppppuVar2 = local_d0;
  if ((char)local_180 == 'O') {
    if (local_d0 == (undefined4 *******)0x0) {
      param_1[3] = 0;
      cVar3 = 'E';
      goto LAB_00733700;
    }
    iVar10 = 0x7332e4;
    uVar11 = FUN_0134c25c(local_c8);
    local_210 = &local_d0;
    local_21c = iVar8;
    local_220 = pppppppuVar2;
    if ((int)((ulonglong)uVar11 >> 0x20) == 0) {
      bVar6 = false;
      local_378 = (undefined4 *******)&DAT_0000002e;
      local_38c = 0;
      local_390 = (undefined4 *******)&DAT_0000002e;
      local_394 = 0;
      local_37c = 0;
      local_374 = (undefined4 *******)&DAT_0000002e;
      local_3a4 = extraout_r12;
    }
    else {
      local_390 = (undefined4 *******)&DAT_0000002e;
      pppppppuVar7 = &local_230;
      local_384 = local_358;
      local_388 = local_354;
      local_394 = 0;
      local_374 = (undefined4 *******)&DAT_0000002e;
      local_38c = 0;
      local_378 = (undefined4 *******)&DAT_0000002e;
      local_37c = 0;
      bVar6 = false;
      local_218 = uVar11;
      do {
        puVar1 = (undefined4 *)uVar11;
        iVar8 = (int)((ulonglong)uVar11 >> 0x20) + -1;
        puVar9 = puVar1 + 4;
        uVar11 = CONCAT44(iVar8,puVar9);
        local_38 = (undefined4 *******)*puVar1;
        local_34 = puVar1[1];
        local_30 = (undefined4 *******)puVar1[2];
        local_2c = puVar1[3];
        FUN_00716a3c(&local_180,&local_220,local_210[3][8]);
        local_230 = local_178;
        iStack_22c = local_174;
        pppppppuStack_228 = local_170;
        iStack_224 = iStack_16c;
        if (local_180 == (undefined4 *******)&DAT_0000002e && local_17c == 0) {
          local_240 = local_178;
          iStack_23c = local_174;
          pppppppuStack_238 = local_170;
          iStack_234 = iStack_16c;
          *puVar5 = local_178;
          param_1[3] = local_174;
          param_1[4] = local_170;
          param_1[5] = iStack_16c;
          *param_1 = 2;
          param_1[1] = 0;
          goto LAB_00733710;
        }
        local_240 = local_178;
        iStack_23c = local_174;
        pppppppuStack_238 = local_170;
        iStack_234 = iStack_16c;
        uVar4 = (uint)local_170 & 0xffff;
        local_218._0_4_ = puVar9;
        local_218._4_4_ = iVar8;
        if (uVar4 < 0x73) {
          if (uVar4 < 0x11) {
            if (uVar4 == 3) {
              FUN_00717f68(&local_38,&local_180);
              local_3a4 = local_30;
              local_3a8 = local_2c;
              local_390 = local_38;
              local_394 = local_34;
            }
            else if (uVar4 == 0x10) {
              FUN_00717f68(&local_38,&local_180);
              if (((uint)local_38 ^ 0x10) == 0 && local_34 == 0) {
                local_380 = local_30;
              }
              bVar6 = (bool)((((uint)local_38 ^ 0x10) == 0 && local_34 == 0) | bVar6);
            }
          }
          else if (uVar4 == 0x11) {
            FUN_00717f68(&local_38,&local_180);
            local_3ac = local_30;
            local_3b0 = local_2c;
            local_378 = local_38;
            local_37c = local_34;
          }
          else if (uVar4 == 0x1b) {
            FUN_00717f68(&local_38,&local_180);
            local_39c = local_30;
            local_3a0 = local_2c;
            local_374 = local_38;
            local_38c = local_34;
          }
          else if ((uVar4 == 0x72) &&
                  (FUN_00717f68(&local_38,&local_180),
                  local_38 == (undefined4 *******)&DAT_0000001c && local_34 == 0)) {
            local_254 = local_30;
          }
        }
        else if (uVar4 < 0x2131) {
          if (uVar4 == 0x73) {
LAB_007334c4:
            FUN_00717f68(&local_38,&local_180);
            if (local_38 == (undefined4 *******)&DAT_0000000b && local_34 == 0) {
              local_250 = local_30;
            }
          }
          else if (uVar4 == 0x74) {
LAB_0073353c:
            FUN_00717f68(&local_38,&local_180);
            if (local_38 == (undefined4 *******)&DAT_00000017 && local_34 == 0) {
              local_248 = local_30;
            }
          }
          else if ((uVar4 == 0x8c) &&
                  (FUN_00717f68(&local_38,&local_180),
                  local_38 == (undefined4 *******)&DAT_00000012 && local_34 == 0)) {
            local_24c = local_30;
          }
        }
        else if (uVar4 == 0x2131) {
          if (local_384 == 0 && local_388 == 0) {
            FUN_00717f68(&local_38,&local_180);
            local_384 = 0;
            local_388 = 0;
            if (local_38 == (undefined4 *******)&DAT_0000002d && local_34 == 0) {
              local_350 = local_30;
              local_34c = local_2c;
              local_354 = 0;
              local_388 = 0;
              local_358 = 1;
              local_384 = 1;
            }
          }
        }
        else {
          if (uVar4 == 0x2132) goto LAB_0073353c;
          if (uVar4 == 0x2133) goto LAB_007334c4;
        }
      } while (iVar8 != 0);
      iVar10 = local_3a8;
      uVar11 = local_218;
    }
    if (local_210[5] == (undefined4 ******)0x0) {
      local_210[5] = (undefined4 ******)0x1;
      local_210[6] = (undefined4 ******)((int)local_220 - (int)*local_210);
    }
    iVar8 = 0;
    local_218 = uVar11;
    if (local_390 != (undefined4 *******)&DAT_0000002e || local_394 != 0) {
      local_230 = local_390;
      iStack_22c = local_394;
      pppppppuStack_228 = local_3a4;
      iStack_224 = iVar10;
      FUN_0071d020(&local_e0,param_2,local_280._1_1_,local_254,&local_230);
      iVar8 = local_dc;
      pppppppuVar7 = local_d8;
      if ((char)local_e0 != 'O') {
        iVar8 = 0;
      }
    }
    local_264 = (undefined4 *******)0x0;
    iVar10 = 0;
    local_270 = iVar8;
    local_26c = pppppppuVar7;
    if (local_374 != (undefined4 *******)&DAT_0000002e || local_38c != 0) {
      local_38 = local_374;
      local_30 = local_39c;
      local_2c = local_3a0;
      local_34 = local_38c;
      FUN_0071d020(&local_e0,param_2,local_280._1_1_,local_254,&local_38);
      local_264 = local_d8;
      iVar10 = local_dc;
      if ((local_e0 & 0xff) != 0x4f) {
        iVar10 = 0;
      }
    }
    local_268 = iVar10;
    if (!bVar6) {
      iVar8 = 0;
      uVar4 = 0x2f;
LAB_007338fc:
      FUN_0072452c(&local_348);
      local_348 = uVar4;
      local_344 = iVar8;
      FUN_01bed4e2(auStack_340,&local_220,0xa0);
      if (local_378 == (undefined4 *******)&DAT_0000002e && local_37c == 0) {
LAB_007339c4:
        FUN_01bed4e2(param_1,&local_358,0x118);
        return;
      }
      local_180 = local_378;
      local_178 = local_3ac;
      local_174 = local_3b0;
      local_17c = local_37c;
      FUN_0071d258(&local_e0,param_2[2],param_2[3],local_280,local_250,&local_180);
      if ((local_e0 & 1) == 0) {
        if (((uint)local_d8 & 1) != 0) {
          local_260 = local_d0;
          local_25c = local_cc;
        }
        goto LAB_007339c4;
      }
      *param_1 = 2;
      param_1[1] = 0;
      *puVar5 = local_d8;
      param_1[3] = local_d4;
      param_1[4] = local_d0;
      param_1[5] = local_cc;
      goto LAB_00733710;
    }
    FUN_0071e15c(&local_e0,param_2[8],param_2[9],local_380,local_280 & 0xff,iVar10,local_264,iVar8,
                 pppppppuVar7);
    iVar8 = local_dc;
    uVar4 = local_e0;
    if (local_e0 != 0x2f || local_dc != 0) {
      FUN_01bed4e2(&local_180,&local_d8,0xa0);
      FUN_01bed4e2(&local_220,&local_180,0xa0);
      goto LAB_007338fc;
    }
    local_180 = local_d8;
    local_17c = local_d4;
    local_178 = local_d0;
    local_174 = local_cc;
    *puVar5 = local_d8;
    param_1[3] = local_d4;
    param_1[4] = local_d0;
    param_1[5] = local_cc;
  }
  else {
    *(undefined2 *)((int)param_1 + 9) = local_180._1_2_;
    *(undefined1 *)((int)param_1 + 0xb) = local_180._3_1_;
    param_1[3] = local_17c;
    param_1[4] = local_178;
    param_1[5] = local_174;
    cVar3 = (char)local_180;
LAB_00733700:
    *(char *)(param_1 + 2) = cVar3;
  }
  *param_1 = 2;
  param_1[1] = 0;
LAB_00733710:
  FUN_007244d4(&local_358);
  return;
}

