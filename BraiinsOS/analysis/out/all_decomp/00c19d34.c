// FUN_00c19d34 @ 00c19d34 size=904 calls_out=12 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00c19fdc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00c19d34(undefined4 *param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 in_d0;
  undefined4 uVar9;
  double dVar8;
  undefined4 in_s3;
  undefined8 unaff_d8;
  undefined8 uVar10;
  undefined8 unaff_d9;
  undefined8 uVar11;
  undefined8 unaff_d10;
  int local_750;
  undefined2 *local_74c;
  undefined4 local_748;
  undefined1 auStack_744 [44];
  undefined4 local_718;
  int local_710;
  undefined4 local_70c;
  int local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  uint local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 local_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined1 auStack_6b0 [224];
  int local_5d0;
  undefined2 *local_5cc;
  undefined4 local_5c8;
  undefined1 auStack_5c4 [12];
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 local_580;
  byte local_56f;
  undefined1 auStack_568 [432];
  int local_3b8;
  int local_3b4;
  int local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  uint local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_368;
  undefined8 local_360;
  uint local_348;
  undefined4 local_344;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 auStack_120 [224];
  
  piVar6 = *(int **)(param_3 + 2);
  if (piVar6 != (int *)0x0) {
    local_340 = *param_3;
    local_338 = param_3[1];
  }
  local_348 = (uint)(piVar6 != (int *)0x0);
  piVar5 = &local_5d0;
  local_344 = 0;
  FUN_00c1a128(piVar5,*(undefined4 *)(param_3 + 3),*(undefined4 *)(param_3 + 5),
               *(undefined4 *)((int)param_3 + 0x2c));
  if (local_5d0 == 5 && local_5cc == (undefined2 *)0x0) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_5c8;
  }
  else {
    FUN_016dd1aa(auStack_744,auStack_5c4,0x54);
    local_74c = local_5cc;
    local_750 = local_5d0;
    local_748 = local_5c8;
    uVar9 = (undefined4)((ulonglong)in_d0 >> 0x20);
    if (piVar6 == (int *)0x0) {
      FUN_008b6468(local_718,uVar9,local_718,auStack_120,*(undefined4 *)(param_2 + 0x230),&local_750
                  );
      FUN_016dd1aa(&local_5d0,auStack_120,0xe0);
      local_3a4 = 0;
      local_3a8 = 5;
    }
    else {
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + 1;
      if (iVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xc1a0b8);
        (*pcVar1)();
      }
      uVar10 = *param_3;
      uVar11 = param_3[1];
      FUN_008b6468((int)uVar10,uVar9,(int)uVar11,auStack_6b0,*(undefined4 *)(param_2 + 0x230),
                   &local_750);
      FUN_00c1c258(&local_348,param_2);
      FUN_00baa728((int)uVar10,uVar9,(int)uVar11,in_s3,(int)*(undefined8 *)(piVar6[2] + 0x160),
                   &local_5d0,&local_348);
      puVar4 = (undefined2 *)thunk_FUN_016d4a50(2);
      if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,2);
      }
      piVar5 = (int *)(uint)local_56f;
      *puVar4 = 0x100;
      local_348 = local_3a0;
      local_344 = local_39c;
      local_340 = CONCAT44(local_394,local_398);
      local_338 = CONCAT44(uStack_38c,local_390);
      uStack_330 = uStack_388;
      uStack_32c = uStack_384;
      uStack_328 = uStack_380;
      uStack_324 = uStack_37c;
      local_320 = local_5b8;
      uStack_31c = uStack_5b4;
      uStack_318 = uStack_5b0;
      uStack_314 = uStack_5ac;
      uStack_310 = uStack_5a8;
      uStack_30c = uStack_5a4;
      FUN_00b1042c(auStack_568);
      FUN_016d5298((int)local_368);
      dVar8 = (double)CONCAT44(uVar9,(int)local_368);
      param_2 = (uint)(0.0 < dVar8) * (int)(longlong)dVar8;
      puVar7 = (undefined4 *)(local_3b4 + 4);
      for (; local_3b0 != 0; local_3b0 = local_3b0 + -1) {
        if (puVar7[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        puVar7 = puVar7 + 4;
      }
      if (local_3b8 != 0) {
        thunk_FUN_016d3fb4(local_3b4);
      }
      FUN_016dd1aa(&local_5d0,auStack_6b0,0xe0);
      local_6f0 = local_348;
      uStack_6ec = local_344;
      uStack_6e8 = (undefined4)local_340;
      uStack_6e4 = local_340._4_4_;
      uStack_6e0 = (undefined4)local_338;
      local_6dc = local_338._4_4_;
      uStack_6d8 = uStack_330;
      uStack_6d4 = uStack_32c;
      uStack_6d0 = uStack_328;
      uStack_6cc = uStack_324;
      local_6c8 = local_320;
      uStack_6c4 = uStack_31c;
      uStack_6c0 = uStack_318;
      uStack_6bc = uStack_314;
      uStack_6b8 = uStack_310;
      uStack_6b4 = uStack_30c;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + -1;
      local_5cc = puVar4;
      unaff_d8 = local_368;
      unaff_d9 = local_580;
      unaff_d10 = local_360;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1420(piVar6);
      }
      else {
      }
    }
    FUN_016dd1aa(param_1,&local_5d0,0xe0);
    param_1[0x38] = local_3a8;
    param_1[0x39] = local_3a4;
    param_1[0x3a] = local_6f0;
    param_1[0x3b] = uStack_6ec;
    param_1[0x3c] = uStack_6e8;
    param_1[0x3d] = uStack_6e4;
    param_1[0x3e] = uStack_6e0;
    param_1[0x3f] = local_6dc;
    param_1[0x40] = uStack_6d8;
    param_1[0x41] = uStack_6d4;
    param_1[0x42] = uStack_6d0;
    param_1[0x43] = uStack_6cc;
    param_1[0x44] = local_6c8;
    param_1[0x45] = uStack_6c4;
    param_1[0x46] = uStack_6c0;
    param_1[0x47] = uStack_6bc;
    param_1[0x48] = uStack_6b8;
    param_1[0x49] = uStack_6b4;
    *(char *)(param_1 + 0x54) = (char)piVar5;
    param_1[0x50] = 2;
    param_1[0x51] = local_5cc;
    param_1[0x52] = 2;
    param_1[0x53] = param_2;
    *(undefined8 *)(param_1 + 0x4a) = unaff_d8;
    *(undefined8 *)(param_1 + 0x4c) = unaff_d10;
    *(undefined8 *)(param_1 + 0x4e) = unaff_d9;
    if (local_710 != 0) {
      thunk_FUN_016d3fb4(local_70c);
    }
    FUN_00ce19cc(local_700,local_6fc);
    if (local_704 != 0) {
      thunk_FUN_016d3fb4(local_700);
    }
  }
  return;
}

