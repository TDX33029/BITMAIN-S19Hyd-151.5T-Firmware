// FUN_018b8eec @ 018b8eec size=1304 calls_out=18 calls_in=0
// strings: TLS 1.3; server CertificateVerify

void FUN_018b8eec(char *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *local_3d0;
  undefined1 *local_3cc;
  int local_38c;
  int local_388;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  int *local_36c;
  undefined *local_368;
  undefined4 local_364;
  undefined *local_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined1 auStack_330 [64];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [232];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if ((*param_4 < 0) || ((undefined1 *)param_4[3] != &DAT_80000009)) {
    FUN_018c5504(&local_370,param_4,&DAT_0052389f,1,&DAT_0052383b,1);
    local_3d0._0_3_ = (undefined3)((uint)local_370 >> 8);
    piVar9 = local_36c;
    if ((char)local_370 == '\x14') goto LAB_018b8f74;
    param_1[3] = local_370._3_1_;
    *(undefined2 *)(param_1 + 1) = local_370._1_2_;
    *(int **)(param_1 + 4) = local_36c;
    *(undefined **)(param_1 + 8) = local_368;
    *(undefined4 *)(param_1 + 0xc) = local_364;
    *param_1 = (char)local_370;
  }
  else {
    piVar9 = param_4 + 4;
LAB_018b8f74:
    if (4 < DAT_01d51b00) {
      local_3d0 = param_2 + 0xd1;
      local_3cc = &LAB_018a8014;
      local_360 = &DAT_01d225e4;
      local_364 = 0x15;
      local_368 = &DAT_0051dc34;
      local_36c = (int *)&DAT_00000015;
      local_370 = &DAT_0051dc34;
      FUN_0193b350(&DAT_0059cf06,&local_3d0,5,&local_370);
    }
    iVar8 = param_2[0xd3];
    if (iVar8 != 0) {
      iVar6 = param_2[0xd2];
      local_370 = (undefined *)CONCAT31(local_370._1_3_,3);
      FUN_018b9584(&local_370);
      FUN_019ac130(&local_370,0);
      iVar4 = param_2[0xd7];
      local_38c = param_2[0xd8];
      iVar7 = 0;
      if (iVar4 != -0x80000000) {
        iVar7 = param_2[0xd9];
      }
      iVar3 = *(int *)(param_2[0xca] + 0x4c);
      if (iVar4 == -0x80000000) {
        local_38c = 4;
      }
      local_388 = local_38c + iVar7 * 0xc;
      (**(code **)(iVar3 + 0xc))
                (&local_370,
                 *(int *)(param_2[0xca] + 0x48) + (*(int *)(iVar3 + 8) - 1U & 0xfffffff8) + 8,iVar6,
                 iVar6 + 0xc,iVar8 + -1,param_2 + 0xcc,&local_38c,&DAT_01d225f4,param_2[0xd5],
                 param_2[0xd6],local_370,local_36c,local_368);
      iVar8 = *param_3;
      if ((char)local_370 != '\x14') {
        FUN_018e1ae4(&local_3d0,iVar8,&local_370);
        cVar1 = (char)local_3d0;
        if ((char)local_3d0 != '\x14') {
          FUN_01bed4e2(param_1 + 1,(uint)&local_3d0 | 1,0xf);
          *param_1 = cVar1;
          goto LAB_018b93c4;
        }
      }
      local_2b0 = param_2[0xc0];
      local_2ac = param_2[0xc1];
      local_2a8 = param_2[0xc2];
      local_2f0 = param_2[0xb0];
      uStack_2ec = param_2[0xb1];
      uStack_2e8 = param_2[0xb2];
      uStack_2e4 = param_2[0xb3];
      uStack_2e0 = param_2[0xb4];
      local_2dc = param_2[0xb5];
      uStack_2d8 = param_2[0xb6];
      uStack_2d4 = param_2[0xb7];
      uStack_2d0 = param_2[0xb8];
      uStack_2cc = param_2[0xb9];
      local_2c8 = param_2[0xba];
      uStack_2c4 = param_2[0xbb];
      uStack_2c0 = param_2[0xbc];
      uStack_2bc = param_2[0xbd];
      uStack_2b8 = param_2[0xbe];
      uStack_2b4 = param_2[0xbf];
      puVar2 = param_2 + 0x90;
      uVar5 = param_2[0xc4];
      FUN_01bed4e2(&local_370,puVar2,0x80);
      local_2a0 = uVar5;
      FUN_0189039c(&local_3d0,&local_370);
      iVar7 = *(int *)(param_2[0xca] + 0x4c);
      iVar4 = *(int *)(param_2[0xca] + 0x48);
      iVar6 = *(int *)(iVar7 + 8);
      FUN_018cf278(&local_37c,&local_3d0,"TLS 1.3, server CertificateVerify");
      if (param_2[0xd3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d22610);
      }
      (**(code **)(iVar7 + 0x14))
                (&local_370,iVar4 + (iVar6 - 1U & 0xfffffff8) + 8,local_378,local_374,param_2[0xd2],
                 piVar9);
      if ((char)local_370 != '\x14') {
        FUN_018e1ae4(&local_38c,iVar8,&local_370);
        cVar1 = (char)local_38c;
        if ((char)local_38c != '\x14') {
          FUN_01bed4e2(param_1 + 1,(uint)&local_38c | 1,0xf);
          *param_1 = cVar1;
          FUN_0134bd64(local_37c,local_378);
          goto LAB_018b93c4;
        }
      }
      FUN_0134bd64(local_37c,local_378);
      local_370 = (undefined *)param_2[0xd1];
      local_36c = (int *)param_2[0xd2];
      local_368 = (undefined *)param_2[0xd3];
      piVar9 = (int *)(iVar8 + 0x8c);
      if (*piVar9 != -0x80000000) {
        FUN_006a41c0(piVar9);
      }
      *piVar9 = (int)local_370;
      *(int **)(iVar8 + 0x90) = local_36c;
      *(undefined **)(iVar8 + 0x94) = local_368;
      if (-1 < *param_4) {
        FUN_018dc0bc(puVar2,param_4[1],param_4[2]);
      }
      uVar5 = param_2[0xca];
      local_40 = param_2[0xcc];
      uStack_3c = param_2[0xcd];
      uStack_38 = param_2[0xce];
      uStack_34 = param_2[0xcf];
      uStack_30 = param_2[0xd0];
      local_370 = (undefined *)*param_2;
      local_36c = (int *)param_2[1];
      local_368 = (undefined *)param_2[2];
      local_364 = param_2[3];
      local_360 = (undefined *)param_2[4];
      local_35c = param_2[5];
      uStack_358 = param_2[6];
      uStack_354 = param_2[7];
      uStack_350 = param_2[8];
      uStack_34c = param_2[9];
      local_348 = param_2[10];
      uStack_344 = param_2[0xb];
      uStack_340 = param_2[0xc];
      uStack_33c = param_2[0xd];
      uStack_338 = param_2[0xe];
      uStack_334 = param_2[0xf];
      uVar10 = param_2[0xcb];
      FUN_01bed4e2(auStack_130,puVar2,0xe8);
      FUN_01bed4e2(auStack_330,param_2 + 0x10,0x1e8);
      local_148 = param_2[0x8a];
      uStack_144 = param_2[0x8b];
      uStack_140 = param_2[0x8c];
      uStack_13c = param_2[0x8d];
      uStack_138 = param_2[0x8e];
      uStack_134 = param_2[0x8f];
      local_48 = uVar5;
      local_44 = uVar10;
      iVar8 = thunk_FUN_01be5118(0x348);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x348);
      }
      FUN_01bed4e2(iVar8,&local_370,0x348);
      *(int *)(param_1 + 4) = iVar8;
      *(undefined **)(param_1 + 8) = &DAT_01d22620;
      *param_1 = '\x14';
      FUN_018b7074(param_4);
      FUN_0134bd64(param_2[0xd4],param_2[0xd5]);
      if (param_2[0xd7] != -0x80000000) {
        FUN_018a8274(param_2 + 0xd7);
      }
      goto LAB_018b93d4;
    }
    *param_1 = '\x03';
  }
LAB_018b93c4:
  FUN_018b7074(param_4);
  FUN_018b8de4(param_2);
LAB_018b93d4:
  thunk_FUN_01be4678(param_2);
  return;
}

