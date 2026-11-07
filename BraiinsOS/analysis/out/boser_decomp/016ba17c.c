// FUN_016ba17c @ 016ba17c size=1680 calls_out=10 calls_in=1
// strings: 

void FUN_016ba17c(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  int *extraout_r1;
  int *piVar7;
  undefined4 extraout_r3;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 extraout_r12;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  uint local_1298;
  undefined4 local_1294;
  int *local_1290;
  undefined4 uStack_128c;
  undefined4 uStack_1288;
  undefined4 local_1284;
  undefined4 local_1280;
  undefined4 uStack_127c;
  undefined4 uStack_1278;
  undefined4 uStack_1274;
  undefined4 local_1270;
  undefined4 local_126c;
  undefined4 local_1268;
  undefined4 local_1264;
  undefined4 local_1260;
  undefined4 local_125c;
  int *local_1258;
  undefined4 local_1254;
  undefined4 local_1250;
  uint local_124c;
  undefined2 local_1248;
  byte local_1246;
  undefined1 local_1245;
  undefined1 local_1244;
  undefined1 local_1243;
  undefined2 local_1242;
  uint local_d90;
  undefined4 uStack_d8c;
  int *local_d88;
  undefined4 uStack_d84;
  undefined4 uStack_d80;
  undefined4 local_d7c;
  undefined4 local_d78;
  undefined4 uStack_d74;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  undefined4 local_d68;
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d58;
  undefined4 local_d54;
  int *local_d50;
  undefined4 local_d4c;
  undefined4 local_d48;
  uint local_d44;
  ushort local_d40;
  byte local_d3e;
  undefined1 local_d3d;
  undefined1 local_d3c;
  undefined1 local_d3b;
  undefined2 local_d3a;
  int local_d38;
  int local_d34;
  uint local_d30 [160];
  int *local_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 local_aa4;
  undefined4 local_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  int local_828;
  int local_824;
  uint local_820 [160];
  int *local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined1 local_54c;
  undefined1 auStack_548 [12];
  undefined1 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  int *local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  uint uStack_51c;
  ushort local_518;
  undefined4 local_510;
  undefined4 local_508;
  undefined4 local_500;
  undefined1 local_4ec;
  byte local_4e8;
  undefined4 local_4e7;
  undefined1 local_4e3;
  undefined1 auStack_2b0 [652];
  
  if ((*(byte *)(param_2 + 0x45) == 2) || ((*(byte *)(param_2 + 0x45) & 1) != 0)) {
    local_534 = 0;
    local_4e7 = 0x2020202;
    local_4ec = 3;
    local_538 = 0;
    local_510 = 0;
    cVar8 = *(char *)(param_3 + 3);
    local_500 = 2;
    local_508 = 2;
    local_4e3 = 2;
    local_4e8 = *(byte *)(param_2 + 0x42) == 2 | *(byte *)(param_2 + 0x42) & 1;
    if (cVar8 != '\x02') {
      piVar7 = (int *)*param_3;
      do {
        iVar6 = *piVar7;
        bVar13 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar13);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_016ba808;
      uStack_aac = param_3[1];
      uStack_aa8 = param_3[2];
      local_ab0 = piVar7;
    }
    local_aa4 = CONCAT31(local_aa4._1_3_,cVar8);
    FUN_016c5e20(&local_1298,&local_538,&local_ab0);
    uVar9 = local_1254;
    local_1248 = CONCAT11(1,(undefined1)local_1248);
    local_d90 = local_1298;
    uStack_d8c = local_1294;
    local_d88 = local_1290;
    uStack_d84 = uStack_128c;
    uStack_d80 = uStack_1288;
    local_d7c = local_1284;
    local_d78 = local_1280;
    uStack_d74 = uStack_127c;
    uStack_d70 = uStack_1278;
    uStack_d6c = uStack_1274;
    local_538 = local_1268;
    local_534 = local_1264;
    uStack_530 = local_1260;
    uStack_52c = local_125c;
    local_528 = local_1258;
    uStack_524 = local_1254;
    uStack_520 = local_1250;
    uStack_51c = local_124c;
    local_518 = local_1248;
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    if (*(int *)(param_2 + 8) == 0) {
      uVar10 = 0x200000;
    }
    local_d68 = 1;
    bVar13 = cVar8 != '\x02';
    local_d50 = local_1258;
    local_d4c = local_1254;
    local_d48 = local_1250;
    local_d44 = local_124c;
    local_d40 = local_1248;
    local_d3d = 1;
    local_d58 = 1;
    local_d60 = 1;
    bVar2 = *(byte *)(param_2 + 0x49) == 2 | *(byte *)(param_2 + 0x49) & 1;
    local_d3a = local_1242;
    local_d3b = 0;
    local_d54 = 10;
    local_d5c = 3;
    local_d64 = uVar10;
    local_d3e = bVar2;
    local_d3c = bVar13;
    FUN_016c31a0(&local_538);
    uVar5 = local_d40;
    uVar3 = local_d90;
    uVar4 = (undefined1)local_d44;
    uVar11 = local_d44 & 0xff;
    piVar7 = extraout_r1;
    uVar12 = extraout_r3;
    if (uVar11 != 3 && uVar11 != 2) {
      do {
        iVar6 = *local_d50;
        bVar14 = (bool)hasExclusiveAccess(local_d50);
      } while (!bVar14);
      *local_d50 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_016ba808;
      piVar7 = local_d50;
      uVar12 = local_d48;
      uVar9 = local_d4c;
    }
    bVar14 = (local_d90 & 1) != 0;
    if (bVar14) {
      local_ab0 = local_d88;
      uStack_aac = uStack_d84;
      uStack_aa8 = uStack_d80;
      local_aa4 = local_d7c;
      local_aa0 = local_d78;
      uStack_a9c = uStack_d74;
      uStack_a98 = uStack_d70;
      uStack_a94 = uStack_d6c;
    }
    local_1298 = (uint)bVar14;
    local_1245 = 1;
    local_1248 = local_d40;
    local_124c = CONCAT31(local_124c._1_3_,(undefined1)local_d44);
    local_1294 = 0;
    local_1290 = local_ab0;
    uStack_128c = uStack_aac;
    uStack_1288 = uStack_aa8;
    local_1284 = local_aa4;
    local_1280 = local_aa0;
    uStack_127c = uStack_a9c;
    uStack_1278 = uStack_a98;
    uStack_1274 = uStack_a94;
    local_125c = 10;
    local_1243 = 0;
    local_1270 = 1;
    local_1260 = 1;
    local_1264 = 3;
    local_1268 = 1;
    local_126c = uVar10;
    local_1258 = piVar7;
    local_1254 = uVar9;
    local_1250 = uVar12;
    local_1246 = bVar2;
    local_1244 = bVar13;
    FUN_016c5eb4(&local_538,&local_1298);
    do {
      iVar6 = *param_4;
      bVar14 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar14);
    *param_4 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_016ba808:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16ba808);
      (*pcVar1)();
    }
    FUN_016c3230(&local_d38,&local_538,param_4);
    FUN_016b9f84(&local_538);
    if (local_d38 == 2 && local_d34 == 0) {
      if (local_d30[0] < 0x2a) {
        FUN_01338710(local_d30);
      }
LAB_016ba6ec:
      FUN_016b7bb4(&local_d50);
      goto LAB_016ba700;
    }
    FUN_01bed4e2(&local_ab0,&local_d38,0x288);
    uVar12 = 0x16ba52c;
    piVar7 = (int *)FUN_016c31a0(&local_538);
    uVar9 = extraout_r12;
    if (uVar11 != 3 && uVar11 != 2) {
      do {
        iVar6 = *local_d50;
        bVar14 = (bool)hasExclusiveAccess(local_d50);
      } while (!bVar14);
      *local_d50 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_016ba808;
      piVar7 = local_d50;
      uVar9 = local_d48;
      uVar12 = local_d4c;
    }
    bVar14 = (uVar3 & 1) != 0;
    if (bVar14) {
      local_5a0 = local_d88;
      uStack_59c = uStack_d84;
      uStack_598 = uStack_d80;
      uStack_594 = local_d7c;
      local_590 = local_d78;
      uStack_58c = uStack_d74;
      uStack_588 = uStack_d70;
      uStack_584 = uStack_d6c;
    }
    local_1298 = (uint)bVar14;
    local_1290 = local_5a0;
    uStack_128c = uStack_59c;
    uStack_1288 = uStack_598;
    local_1284 = uStack_594;
    local_1280 = local_590;
    uStack_127c = uStack_58c;
    uStack_1278 = uStack_588;
    uStack_1274 = uStack_584;
    local_125c = 10;
    local_1264 = 3;
    local_1294 = 0;
    local_1243 = 0;
    local_1245 = 1;
    local_1248 = uVar5 & 0xff00;
    local_124c = CONCAT31(local_124c._1_3_,uVar4);
    local_1260 = 1;
    local_1268 = 1;
    local_1270 = 1;
    local_53c = 2;
    local_126c = uVar10;
    local_1258 = piVar7;
    local_1254 = uVar12;
    local_1250 = uVar9;
    local_1246 = bVar2;
    local_1244 = bVar13;
    FUN_016c5e20(&local_5a0,&local_1298,auStack_548);
    local_54c = 0;
    FUN_01bed4e2(&local_1298,&local_5a0,0x58);
    FUN_016c5eb4(&local_538,&local_1298);
    do {
      iVar6 = *param_5;
      bVar13 = (bool)hasExclusiveAccess(param_5);
    } while (!bVar13);
    *param_5 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_016ba808;
    FUN_016c3230(&local_828,&local_538,param_5);
    FUN_016b9f84(&local_538);
    if (local_828 == 2 && local_824 == 0) {
      if (local_820[0] < 0x2a) {
        FUN_01338710(local_820);
      }
      FUN_016b9fb8(&local_d38);
      goto LAB_016ba6ec;
    }
    FUN_016c31a0(&local_1298);
    FUN_01bed4e2(&local_538,&local_d38,0x288);
    FUN_01bed4e2(auStack_2b0,&local_828,0x288);
    FUN_016b9f84(&local_1298);
    uVar10 = local_534;
    uVar9 = local_538;
    FUN_01bed4e2(&local_1298,&uStack_530,0x508);
    FUN_016b7bb4(&local_d50);
    if (cVar8 == '\x02') goto LAB_016ba74c;
    piVar7 = (int *)*param_3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar7;
      bVar13 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar13);
    *piVar7 = iVar6 + -1;
  }
  else {
    cVar8 = *(char *)(param_3 + 3);
LAB_016ba700:
    if (cVar8 == '\x02') {
      uVar10 = 0;
      uVar9 = 2;
      goto LAB_016ba74c;
    }
    piVar7 = (int *)*param_3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar7;
      bVar13 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar13);
    *piVar7 = iVar6 + -1;
    uVar10 = 0;
    uVar9 = 2;
  }
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*param_3,param_3[1]);
  }
LAB_016ba74c:
  *param_1 = uVar9;
  param_1[1] = uVar10;
  FUN_01bed4e2(param_1 + 2,&local_1298,0x508);
  return;
}

