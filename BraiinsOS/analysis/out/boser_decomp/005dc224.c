// FUN_005dc224 @ 005dc224 size=2704 calls_out=25 calls_in=2
// strings: /etc/bosminer_model.json | config_descriptor | config_descriptor | plus_config_descriptor | config_descriptor | config_descriptor

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005dc224(undefined4 *param_1)

{
  undefined4 *******pppppppuVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *******pppppppuVar10;
  uint uVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *******unaff_r9;
  undefined4 *******local_79c;
  undefined4 *******local_798;
  undefined4 *******local_794;
  undefined4 *******local_790;
  undefined4 *******local_788;
  undefined4 *******local_774;
  undefined4 *******local_770;
  undefined4 *******local_76c;
  undefined4 *******local_768;
  undefined4 *******local_760;
  undefined4 *******local_75c;
  undefined4 ******local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined8 local_74c;
  int local_744;
  undefined4 local_740;
  undefined8 local_73c;
  char local_734;
  undefined1 auStack_730 [336];
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 *******pppppppuStack_5d4;
  undefined1 auStack_570 [216];
  undefined4 local_498;
  undefined4 *******local_494;
  undefined4 *******local_490;
  undefined1 auStack_48c [84];
  undefined4 *******local_438;
  undefined4 *******local_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 *******pppppppuStack_424;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined1 auStack_3cc [140];
  undefined4 *******local_340;
  undefined4 *******local_338;
  undefined4 *******local_334;
  undefined4 *******local_330;
  undefined1 auStack_32c [180];
  undefined4 local_278;
  undefined4 local_274;
  undefined1 auStack_26c [20];
  undefined4 *******local_258;
  undefined4 *******local_254;
  undefined4 *******local_250;
  undefined1 auStack_24c [84];
  undefined4 *******local_1f8;
  undefined4 *******local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 *******pppppppuStack_1e4;
  undefined1 auStack_1e0 [112];
  undefined4 *******local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined4 *******local_164;
  undefined4 *******local_160;
  undefined1 auStack_15c [204];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *******pppppppuStack_84;
  undefined1 auStack_80 [91];
  undefined1 uStack_25;
  
  FUN_019a5900(&local_498,"/etc/bosminer_model.json",0x18);
  pppppppuVar5 = local_494;
  pppppppuVar4 = local_498;
  if (local_498 == (undefined4 *******)&DAT_80000000) {
    local_498 = local_494;
    local_494 = local_490;
    uVar7 = FUN_007afd78(&local_498);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = uVar7;
    return;
  }
  local_74c = FUN_013245a0(local_494);
  iVar8 = (int)((ulonglong)local_74c >> 0x20);
  local_744 = 0;
  local_734 = -0x80;
  local_740 = 0;
  local_750 = 0;
  local_754 = 1;
  local_758 = (undefined4 ******)0x0;
  local_73c = local_74c;
  if (iVar8 != 0) {
    do {
      uVar11 = (uint)*(byte *)((int)local_74c + local_744);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 != 0x5b) {
          if (uVar11 != 0x7b) {
            pppppppuVar6 = (undefined4 *******)FUN_019659c8(&local_758,&uStack_25,&DAT_01c24a6c);
            goto LAB_005dcc34;
          }
          local_744 = local_744 + 1;
          local_734 = '\x7f';
          local_16c = 1;
          local_170 = &local_758;
          pppppppuVar10 = (undefined4 *******)0x0;
          local_768 = (undefined4 *******)&DAT_00000006;
          pppppppuVar13 = &local_170;
          local_770 = local_330;
          local_334 = (undefined4 *******)0x0;
          local_338 = (undefined4 *******)0x2;
          local_788 = (undefined4 *******)0x403a0c;
          local_76c = (undefined4 *******)0x0;
          local_774 = (undefined4 *******)0x0;
          local_760 = (undefined4 *******)0x2;
          local_75c = (undefined4 *******)0x0;
          pppppppuVar6 = (undefined4 *******)&DAT_00800013;
          pppppppuVar12 = (undefined4 *******)0x2;
          goto LAB_005dc414;
        }
        local_744 = local_744 + 1;
        local_734 = '\x7f';
        local_16c = 1;
        local_170 = &local_758;
        FUN_01965170(&local_498,&local_170);
        pppppppuVar6 = (undefined4 *******)0x5b;
        if ((char)local_498 == '\x01') {
          pppppppuVar10 = local_494;
LAB_005dc738:
          pppppppuVar12 = (undefined4 *******)0x0;
          pppppppuVar13 = (undefined4 *******)0x2;
        }
        else {
          if (local_498._1_1_ == '\0') {
            pppppppuVar10 = (undefined4 *******)FUN_014b5c7c(0,&DAT_01c24994,&DAT_01d064b8);
            goto LAB_005dc738;
          }
          pppppppuVar6 = (undefined4 *******)&local_498;
          FUN_0122b3d0(pppppppuVar6,local_170);
          pppppppuVar10 = local_490;
          pppppppuVar12 = local_494;
          pppppppuVar13 = local_498;
          if (local_498 == (undefined4 *******)0x2 && local_494 == (undefined4 *******)0x0)
          goto LAB_005dc738;
          FUN_01bed4e2(&local_168,auStack_48c,0xd4);
          unaff_r9 = &local_338;
          FUN_01bed4e2(unaff_r9,&local_168,0xd4);
          FUN_01bed4e2(auStack_48c,unaff_r9,0xd4);
          FUN_01965170(&local_168,&local_170);
          if ((char)local_168 == '\x01') {
            pppppppuVar6 = local_164;
LAB_005dcb90:
            FUN_019bb7e0(local_3d8,local_3d4);
            FUN_00b8a16c(auStack_3cc);
            pppppppuVar12 = (undefined4 *******)0x0;
            pppppppuVar13 = (undefined4 *******)0x2;
            pppppppuVar10 = pppppppuVar6;
          }
          else {
            if (local_168._1_1_ == '\0') {
              pppppppuVar6 = (undefined4 *******)FUN_014b5c7c(1,&DAT_01c24994,&DAT_01d064b8);
              goto LAB_005dcb90;
            }
            FUN_0123ed48(&local_168,local_170);
            unaff_r9 = local_164;
            pppppppuVar6 = local_160;
            if (local_168 == &DAT_00000006 && local_164 == (undefined4 *******)0x0)
            goto LAB_005dcb90;
            local_75c = (undefined4 *******)local_168;
            FUN_01bed4e2(auStack_1e0,auStack_15c,0x6c);
            FUN_01bed4e2(&local_168,auStack_1e0,0x6c);
            FUN_01bed4e2(&local_5e0,&local_168,0x6c);
            FUN_01bed4e2(auStack_570,&local_338,0xd4);
          }
        }
        local_734 = local_734 + '\x01';
        local_338 = pppppppuVar13;
        local_334 = pppppppuVar12;
        local_330 = pppppppuVar10;
        FUN_01bed4e2(auStack_32c,auStack_570,0xd4);
        local_258 = local_75c;
        local_254 = unaff_r9;
        local_250 = pppppppuVar6;
        FUN_01bed4e2(auStack_24c,&local_5e0,0x6c);
        pppppppuVar10 = (undefined4 *******)FUN_01964fb0(&local_758);
        FUN_01bed4e2(&local_498,&local_338,0x158);
        pppppppuVar6 = local_490;
        local_340 = pppppppuVar10;
        if (local_498 == (undefined4 *******)0x2 && local_494 == (undefined4 *******)0x0) {
          pppppppuVar12 = (undefined4 *******)0x0;
          pppppppuVar13 = (undefined4 *******)0x2;
          if (pppppppuVar10 != (undefined4 *******)0x0) {
            FUN_01225578(pppppppuVar10);
          }
          goto LAB_005dc988;
        }
        if (pppppppuVar10 == (undefined4 *******)0x0) goto LAB_005dc974;
        FUN_012246bc(&local_498);
        goto LAB_005dc964;
      }
      local_744 = local_744 + 1;
    } while (iVar8 != local_744);
  }
  local_498 = (undefined4 *******)&DAT_00000005;
  pppppppuVar6 = (undefined4 *******)FUN_01964674(&local_758,&local_498);
  goto LAB_005dc2e0;
  while( true ) {
    pppppppuVar6 = local_170;
    unaff_r9 = (undefined4 *******)FUN_01965c98(local_170);
    if (unaff_r9 != (undefined4 *******)0x0) break;
    unaff_r9 = (undefined4 *******)FUN_01965eac(pppppppuVar6);
    if (unaff_r9 != (undefined4 *******)0x0) break;
LAB_005dc414:
    FUN_01965d20(&local_498,pppppppuVar13);
    pppppppuVar9 = local_170;
    if ((char)local_498 == '\x01') {
      unaff_r9 = local_494;
      break;
    }
    if (local_498._1_1_ != '\x01') {
      local_330 = local_770;
      local_334 = local_774;
      if (local_760 == (undefined4 *******)0x2 && local_75c == (undefined4 *******)0x0) {
        local_494 = (undefined4 *******)&DAT_0132b6a0;
        local_498 = (undefined4 *******)&local_168;
        pppppppuVar13 = (undefined4 *******)0x2;
        local_164 = (undefined4 *******)&DAT_00000011;
        local_168 = "config_descriptor";
        local_338 = pppppppuVar12;
        local_79c = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_498);
LAB_005dca68:
        local_75c = (undefined4 *******)0x0;
        local_760 = (undefined4 *******)0x2;
        pppppppuVar10 = (undefined4 *******)0x0;
        goto LAB_005dc814;
      }
      if (local_768 == (undefined4 *******)&DAT_00000006 && local_76c == (undefined4 *******)0x0) {
        local_76c = (undefined4 *******)0x0;
        local_768 = (undefined4 *******)&DAT_00000005;
        local_790 = pppppppuVar6;
        local_338 = pppppppuVar12;
      }
      else {
        local_338 = pppppppuVar12;
        FUN_01bed4e2(auStack_80,auStack_1e0,0x54);
        local_90 = local_5e0;
        uStack_8c = uStack_5dc;
        uStack_88 = uStack_5d8;
        pppppppuStack_84 = pppppppuStack_5d4;
        unaff_r9 = local_794;
      }
      FUN_01bed4e2(auStack_570,auStack_32c,0xd4);
      local_250 = local_798;
      goto LAB_005dc88c;
    }
    pppppppuVar1 = local_170 + 5;
    local_170[2] = (undefined4 ******)0x0;
    pppppppuVar9[5] = (undefined4 ******)((int)*pppppppuVar1 + 1);
    FUN_019686b4(&local_498,pppppppuVar9 + 3);
    unaff_r9 = local_494;
    if (local_498 == (undefined4 *******)0x2) break;
    if (local_490 == (undefined4 *******)&DAT_00000016) {
      iVar8 = thunk_FUN_01bed842(local_494,"plus_config_descriptor",0x16);
      unaff_r9 = local_170;
      if (iVar8 == 0) {
        if (local_768 != (undefined4 *******)&DAT_00000006 || local_76c != (undefined4 *******)0x0)
        {
          local_164 = (undefined4 *******)&DAT_00000016;
          local_788 = (undefined4 *******)0x403a1d;
LAB_005dcc5c:
          local_168 = (char *)local_788;
          local_498 = (undefined4 *******)&local_168;
          local_330 = local_770;
          local_334 = local_774;
          local_494 = (undefined4 *******)&DAT_0132b6a0;
          local_338 = pppppppuVar12;
          local_79c = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_498);
          pppppppuVar10 = local_75c;
          pppppppuVar13 = local_760;
          goto LAB_005dc814;
        }
        pppppppuVar9 = (undefined4 *******)FUN_01965c98(local_170);
        if (pppppppuVar9 == (undefined4 *******)0x0) {
          FUN_0123ed48(&local_498,unaff_r9);
          if (local_498 != (undefined4 *******)&DAT_00000006 || local_494 != (undefined4 *******)0x0
             ) {
            local_768 = local_498;
            local_76c = local_494;
            local_798 = local_490;
            FUN_01bed4e2(auStack_1e0,auStack_48c,0x54);
            local_790 = local_438;
            local_794 = local_434;
            local_5e0 = local_430;
            uStack_5dc = uStack_42c;
            uStack_5d8 = uStack_428;
            pppppppuStack_5d4 = pppppppuStack_424;
            pppppppuVar6 = pppppppuStack_424;
            goto LAB_005dc414;
          }
        }
        else {
          local_490 = pppppppuVar9;
        }
        local_330 = local_770;
        local_334 = local_774;
        local_79c = local_490;
        local_768 = pppppppuVar10;
        local_76c = pppppppuVar13;
        local_790 = pppppppuVar6;
        local_338 = pppppppuVar12;
        goto LAB_005dc840;
      }
    }
    else if (local_490 == (undefined4 *******)&DAT_00000011) {
      iVar8 = thunk_FUN_01bed842(local_494,"config_descriptor",0x11);
      pppppppuVar9 = local_170;
      if (iVar8 == 0) {
        if (local_760 != (undefined4 *******)0x2 || local_75c != (undefined4 *******)0x0) {
          local_164 = (undefined4 *******)&DAT_00000011;
          goto LAB_005dcc5c;
        }
        pppppppuVar6 = (undefined4 *******)FUN_01965c98(local_170);
        if (pppppppuVar6 == (undefined4 *******)0x0) {
          FUN_0122b3d0(&local_498,pppppppuVar9);
          local_79c = local_490;
          local_75c = local_494;
          unaff_r9 = local_498;
          if (local_498 != (undefined4 *******)0x2 || local_494 != (undefined4 *******)0x0) {
            FUN_01bed4e2(&local_168,auStack_48c,0xd4);
            FUN_01bed4e2(auStack_32c,&local_168,0xd4);
            local_770 = local_79c;
            local_760 = unaff_r9;
            local_774 = local_75c;
            pppppppuVar6 = local_75c;
            pppppppuVar12 = unaff_r9;
            goto LAB_005dc414;
          }
          pppppppuVar9 = local_494;
        }
        else {
          local_490 = pppppppuVar6;
        }
        local_330 = local_770;
        pppppppuVar6 = pppppppuVar9;
        local_79c = local_490;
        local_338 = pppppppuVar12;
        local_334 = local_774;
        goto LAB_005dca68;
      }
    }
  }
  local_330 = local_770;
  local_334 = local_774;
  local_79c = unaff_r9;
  local_338 = pppppppuVar12;
LAB_005dc814:
  if (local_76c != (undefined4 *******)(uint)(local_768 < &DAT_00000005) ||
      (uint)((int)local_76c - (int)(uint)(local_768 < &DAT_00000005)) <
      (uint)((undefined1 *)0x1 < (undefined1 *)((int)local_768 + -5))) {
    FUN_019bb7e0(local_790,local_794);
  }
  local_768 = pppppppuVar10;
  local_76c = pppppppuVar13;
  local_790 = pppppppuVar6;
  unaff_r9 = local_79c;
LAB_005dc840:
  bVar2 = local_760 == (undefined4 *******)0x2;
  bVar3 = local_75c == (undefined4 *******)0x0;
  local_75c = (undefined4 *******)0x0;
  local_760 = (undefined4 *******)0x2;
  local_250 = local_79c;
  if (!(bVar2 && bVar3)) {
    FUN_019bb7e0(local_278,local_274);
    FUN_00b8a16c(auStack_26c);
  }
LAB_005dc88c:
  local_734 = local_734 + '\x01';
  local_334 = local_75c;
  local_338 = local_760;
  local_330 = local_79c;
  FUN_01bed4e2(auStack_32c,auStack_570,0xd4);
  local_258 = local_768;
  local_254 = local_76c;
  FUN_01bed4e2(auStack_24c,auStack_80,0x54);
  local_1f0 = local_90;
  uStack_1ec = uStack_8c;
  uStack_1e8 = uStack_88;
  pppppppuStack_1e4 = pppppppuStack_84;
  local_1f8 = local_790;
  local_1f4 = unaff_r9;
  pppppppuVar10 = (undefined4 *******)FUN_019650c4(&local_758);
  FUN_01bed4e2(&local_498,&local_338,0x158);
  pppppppuVar6 = local_490;
  local_340 = pppppppuVar10;
  if (local_498 == (undefined4 *******)0x2 && local_494 == (undefined4 *******)0x0) {
    pppppppuVar12 = (undefined4 *******)0x0;
    pppppppuVar13 = (undefined4 *******)0x2;
    if (pppppppuVar10 != (undefined4 *******)0x0) {
      FUN_01225578(pppppppuVar10);
    }
  }
  else if (pppppppuVar10 == (undefined4 *******)0x0) {
LAB_005dc974:
    pppppppuVar6 = local_490;
    pppppppuVar12 = local_494;
    pppppppuVar13 = local_498;
    FUN_01bed4e2(auStack_730,auStack_48c,0x14c);
  }
  else {
    FUN_012246bc(&local_498);
LAB_005dc964:
    pppppppuVar12 = (undefined4 *******)0x0;
    pppppppuVar13 = (undefined4 *******)0x2;
    pppppppuVar6 = pppppppuVar10;
  }
LAB_005dc988:
  if (pppppppuVar13 != (undefined4 *******)0x2 || pppppppuVar12 != (undefined4 *******)0x0) {
    FUN_01bed4e2(&local_338,auStack_730,0x14c);
    local_498 = pppppppuVar13;
    local_494 = pppppppuVar12;
    local_490 = pppppppuVar6;
    FUN_01bed4e2(auStack_48c,&local_338,0x14c);
    pppppppuVar10 = (undefined4 *******)FUN_01964600(&local_758);
    if (pppppppuVar10 != (undefined4 *******)0x0) {
      FUN_012246bc(&local_498);
      pppppppuVar12 = (undefined4 *******)0x0;
      pppppppuVar13 = (undefined4 *******)0x2;
      pppppppuVar6 = pppppppuVar10;
    }
    goto LAB_005dc2ec;
  }
LAB_005dcc34:
  pppppppuVar6 = (undefined4 *******)FUN_01966f00(pppppppuVar6,&local_758);
LAB_005dc2e0:
  pppppppuVar12 = (undefined4 *******)0x0;
  pppppppuVar13 = (undefined4 *******)0x2;
LAB_005dc2ec:
  FUN_019bb7e0(local_758,local_754);
  if (pppppppuVar13 == (undefined4 *******)0x2 && pppppppuVar12 == (undefined4 *******)0x0) {
    uVar7 = FUN_0124a3d0(pppppppuVar6);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = uVar7;
  }
  else {
    *param_1 = pppppppuVar13;
    param_1[1] = pppppppuVar12;
    param_1[2] = pppppppuVar6;
    FUN_01bed4e2(param_1 + 3,&local_338,0x14c);
  }
  FUN_019bb7e0(pppppppuVar4,pppppppuVar5);
  return;
}

