// FUN_0122b3d0 @ 0122b3d0 size=2132 calls_out=20 calls_in=1
// strings: miner | miner | miner | miner

void FUN_0122b3d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char **ppcVar10;
  undefined2 *puVar11;
  undefined2 *local_4e4;
  char **local_4d8;
  char **local_4d0;
  undefined2 *local_4cc;
  undefined2 *local_4c4;
  char **local_4c0;
  undefined2 *local_4bc;
  undefined1 auStack_4b8 [216];
  int local_3e0;
  undefined1 local_3dc;
  undefined4 local_380;
  undefined2 *local_37c;
  undefined2 *local_378;
  undefined1 auStack_374 [180];
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined1 auStack_2b4 [20];
  undefined2 *local_2a0;
  char **local_298;
  undefined2 *local_294;
  undefined2 *local_290;
  undefined1 auStack_28c [116];
  undefined1 auStack_218 [96];
  int local_1b8;
  undefined1 local_1b4;
  char **local_1b0;
  undefined2 *local_1ac;
  undefined2 *local_1a8;
  undefined1 auStack_1a4 [52];
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 auStack_164 [20];
  undefined1 auStack_150 [88];
  char **local_f8;
  undefined2 *local_f4;
  undefined2 *local_f0;
  undefined1 auStack_ec [52];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_ac [20];
  char *local_98;
  undefined4 local_94;
  
  uVar7 = *(uint *)(param_2 + 0x14);
  if (uVar7 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar8 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar7);
      if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar8 == 0x5b) {
          cVar3 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar3;
          if (cVar3 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar7 + 1;
            local_1b4 = 1;
            local_1b8 = param_2;
            FUN_01965170(&local_380,&local_1b8);
            if ((char)local_380 == '\x01') {
              puVar11 = local_37c;
LAB_0122b980:
              puVar6 = (undefined2 *)0x0;
              ppcVar10 = (char **)0x2;
            }
            else {
              if (local_380._1_1_ == '\0') {
                puVar11 = (undefined2 *)FUN_014b5c7c(0,&DAT_01c249bc,&DAT_01d064b8);
                goto LAB_0122b980;
              }
              FUN_0124b70c(&local_380,local_1b8);
              puVar11 = local_378;
              puVar6 = local_37c;
              ppcVar10 = local_380;
              if (local_380 == (char **)&DAT_00000005 && local_37c == (undefined2 *)0x0)
              goto LAB_0122b980;
              FUN_01bed4e2(&local_298,auStack_374,0x54);
              FUN_01bed4e2(auStack_150,&local_298,0x54);
              FUN_01bed4e2(auStack_1a4,auStack_150,0x54);
              local_1ac = puVar6;
              local_1b0 = ppcVar10;
              local_1a8 = puVar11;
              FUN_01965170(&local_380,&local_1b8);
              if ((char)local_380 == '\x01') {
                puVar11 = local_37c;
LAB_0122b968:
                FUN_019bb7e0(local_170,local_16c);
                FUN_00b8a16c(auStack_164);
                goto LAB_0122b980;
              }
              if (local_380._1_1_ == '\0') {
                puVar11 = (undefined2 *)FUN_014b5c7c(1,&DAT_01c249bc,&DAT_01d064b8);
                goto LAB_0122b968;
              }
              FUN_0122c304(&local_380,local_1b8);
              puVar11 = local_378;
              puVar6 = local_37c;
              ppcVar10 = local_380;
              if (local_380 == (char **)0x2 && local_37c == (undefined2 *)0x0) goto LAB_0122b968;
              FUN_01bed4e2(&local_298,auStack_374,0x74);
              FUN_01bed4e2(&local_380,&local_298,0x74);
              FUN_01bed4e2(&local_98,&local_380,0x74);
              FUN_01bed4e2(&local_3e0,&local_1b0,0x60);
            }
            *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
            local_298 = ppcVar10;
            local_294 = puVar6;
            local_290 = puVar11;
            FUN_01bed4e2(auStack_28c,&local_98,0x74);
            FUN_01bed4e2(auStack_218,&local_3e0,0x60);
            puVar11 = (undefined2 *)FUN_01964fb0(param_2);
            FUN_01bed4e2(&local_380,&local_298,0xe0);
            local_2a0 = puVar11;
            if (!(local_380 != (char **)0x2 || local_37c != (undefined2 *)0x0)) goto LAB_0122b9f8;
            goto LAB_0122bab4;
          }
        }
        else {
          if (uVar8 != 0x7b) {
            puVar11 = (undefined2 *)FUN_019659c8(param_2,&local_380,&DAT_01c24abc);
            goto LAB_0122bbb0;
          }
          cVar3 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar3;
          if (cVar3 != '\0') {
            local_4bc = local_f0;
            *(uint *)(param_2 + 0x14) = uVar7 + 1;
            local_4c0 = (char **)&DAT_00000005;
            local_3dc = 1;
            local_f8 = (char **)0x5;
            local_f4 = (undefined2 *)0x0;
            local_4d8 = (char **)0x2;
            puVar11 = (undefined2 *)0x0;
            local_4c4 = (undefined2 *)0x0;
            pcVar9 = "miner";
            local_4d0 = (char **)&DAT_00000005;
            local_4cc = (undefined2 *)0x0;
            local_3e0 = param_2;
            goto LAB_0122b500;
          }
        }
        local_380 = (char **)0x18;
        goto LAB_0122b42c;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(param_2 + 0x14) = uVar7;
    } while (*(uint *)(param_2 + 0x10) != uVar7);
  }
  local_380 = (char **)0x5;
LAB_0122b42c:
  uVar4 = FUN_01964674(param_2,&local_380);
LAB_0122b43c:
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
LAB_0122b500:
  FUN_01965d20(&local_380,&local_3e0);
  if ((char)local_380 == '\x01') {
    puVar6 = local_37c;
    goto LAB_0122b7b4;
  }
  if (local_380._1_1_ != '\x01') {
    local_f8 = local_4c0;
    local_f0 = local_4bc;
    local_f4 = local_4c4;
    if (local_4d0 == (char **)&DAT_00000005 && local_4cc == (undefined2 *)0x0) {
      local_37c = &DAT_0132b6a0;
      local_380 = &local_98;
      local_94 = 5;
      local_98 = "miner";
      local_4e4 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_380);
    }
    else {
      if (local_4d8 != (char **)0x2 || puVar11 != (undefined2 *)0x0) {
        FUN_01bed4e2(&local_98,&local_298,0x74);
        FUN_01bed4e2(&local_1b0,&local_f8,0x60);
        goto LAB_0122ba40;
      }
      local_37c = &DAT_0132b6a0;
      local_380 = &local_98;
      local_94 = 6;
      local_98 = &DAT_004e98a7;
      local_4e4 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_380);
      FUN_0122471c(&local_f8);
    }
LAB_0122b940:
    puVar11 = (undefined2 *)0x0;
    local_4d8 = (char **)0x2;
    goto LAB_0122ba40;
  }
  *(undefined4 *)(local_3e0 + 8) = 0;
  *(int *)(local_3e0 + 0x14) = *(int *)(local_3e0 + 0x14) + 1;
  FUN_019686b4(&local_380,local_3e0 + 0xc);
  puVar6 = local_37c;
  if (local_380 == (char **)0x2) goto LAB_0122b7b4;
  if (local_378 == (undefined2 *)0x6) {
    iVar5 = thunk_FUN_01bed842(local_37c,&DAT_004e98a7,6);
    iVar1 = local_3e0;
    if (iVar5 == 0) {
      if (local_4d8 != (char **)0x2 || puVar11 != (undefined2 *)0x0) {
        local_94 = 6;
        pcVar9 = &DAT_004e98a7;
LAB_0122bbd4:
        local_f8 = local_4c0;
        local_380 = &local_98;
        local_f0 = local_4bc;
        local_f4 = local_4c4;
        local_37c = &DAT_0132b6a0;
        local_98 = pcVar9;
        puVar6 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_380);
        goto LAB_0122b7bc;
      }
      puVar6 = (undefined2 *)FUN_01965c98(local_3e0);
      if (puVar6 == (undefined2 *)0x0) {
        FUN_0122c304(&local_380,iVar1);
        puVar11 = local_37c;
        local_4d8 = local_380;
        puVar6 = local_378;
        if (local_380 == (char **)0x2 && local_37c == (undefined2 *)0x0) goto LAB_0122b7b4;
        local_4e4 = local_378;
        FUN_01bed4e2(&local_298,auStack_374,0x74);
        goto LAB_0122b500;
      }
      local_378 = puVar6;
LAB_0122b7b4:
      local_f0 = local_4bc;
      local_f8 = local_4c0;
      local_f4 = local_4c4;
LAB_0122b7bc:
      puVar11 = (undefined2 *)0x0;
      local_4d8 = (char **)0x2;
      local_4e4 = puVar6;
      if (local_4d0 != (char **)&DAT_00000005 || local_4cc != (undefined2 *)0x0) {
        FUN_019bb7e0(local_b8,local_b4);
        FUN_00b8a16c(auStack_ac);
      }
LAB_0122ba40:
      *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
      local_298 = local_4d8;
      local_294 = puVar11;
      local_290 = local_4e4;
      FUN_01bed4e2(auStack_28c,&local_98,0x74);
      FUN_01bed4e2(auStack_218,&local_1b0,0x60);
      puVar11 = (undefined2 *)FUN_019650c4(param_2);
      FUN_01bed4e2(&local_380,&local_298,0xe0);
      local_2a0 = puVar11;
      if (local_380 == (char **)0x2 && local_37c == (undefined2 *)0x0) {
LAB_0122b9f8:
        puVar11 = local_378;
        puVar6 = (undefined2 *)0x0;
        ppcVar10 = (char **)0x2;
        if (local_2a0 != (undefined2 *)0x0) {
          FUN_01225578(local_2a0);
        }
      }
      else {
LAB_0122bab4:
        puVar2 = local_2a0;
        puVar11 = local_378;
        puVar6 = local_37c;
        ppcVar10 = local_380;
        if (local_2a0 == (undefined2 *)0x0) {
          FUN_01bed4e2(auStack_4b8,auStack_374,0xd4);
        }
        else {
          FUN_019bb7e0(local_2c0,local_2bc);
          FUN_00b8a16c(auStack_2b4);
          puVar6 = (undefined2 *)0x0;
          ppcVar10 = (char **)0x2;
          puVar11 = puVar2;
        }
      }
      if (ppcVar10 != (char **)0x2 || puVar6 != (undefined2 *)0x0) {
        FUN_01bed4e2(param_1 + 3,auStack_4b8,0xd4);
        *param_1 = ppcVar10;
        param_1[1] = puVar6;
        param_1[2] = puVar11;
        return;
      }
LAB_0122bbb0:
      uVar4 = FUN_01966f00(puVar11,param_2);
      goto LAB_0122b43c;
    }
  }
  else if (local_378 == (undefined2 *)0x5) {
    iVar5 = thunk_FUN_01bed842(local_37c,"miner",5);
    iVar1 = local_3e0;
    if (iVar5 == 0) {
      if (local_4d0 != (char **)&DAT_00000005 || local_4cc != (undefined2 *)0x0) {
        local_94 = 5;
        goto LAB_0122bbd4;
      }
      puVar6 = (undefined2 *)FUN_01965c98(local_3e0);
      if (puVar6 == (undefined2 *)0x0) {
        FUN_0124b70c(&local_380,iVar1);
        puVar2 = local_378;
        puVar6 = local_37c;
        local_4d0 = local_380;
        if (local_380 != (char **)&DAT_00000005 || local_37c != (undefined2 *)0x0) {
          local_4cc = local_37c;
          FUN_01bed4e2(&local_98,auStack_374,0x54);
          FUN_01bed4e2(auStack_ec,&local_98,0x54);
          local_4bc = puVar2;
          local_4c0 = local_4d0;
          local_4c4 = puVar6;
          goto LAB_0122b500;
        }
      }
      else {
        local_378 = puVar6;
      }
      local_f0 = local_4bc;
      local_f8 = local_4c0;
      local_f4 = local_4c4;
      local_4e4 = local_378;
      goto LAB_0122b940;
    }
  }
  iVar1 = local_3e0;
  puVar6 = (undefined2 *)FUN_01965c98(local_3e0);
  if ((puVar6 != (undefined2 *)0x0) ||
     (puVar6 = (undefined2 *)FUN_01965eac(iVar1), puVar6 != (undefined2 *)0x0)) goto LAB_0122b7b4;
  goto LAB_0122b500;
}

