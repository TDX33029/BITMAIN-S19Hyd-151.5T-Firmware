// FUN_00b7b240 @ 00b7b240 size=1420 calls_out=18 calls_in=1
// strings: kernel release string is invalid unicode | boser_buildroot::bosopen/boser/boser-buildroot/src/bos.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::bosopen/boser/boser-buildroot/src/bos.rs

void FUN_00b7b240(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int local_7d4;
  undefined4 *local_7d0 [2];
  undefined2 local_7c8;
  undefined1 uStack_7c6;
  int iStack_7c5;
  undefined1 uStack_7c1;
  undefined1 *local_7c0;
  char local_746 [262];
  undefined2 *local_640;
  undefined4 *local_63c;
  undefined4 *local_638;
  undefined4 *local_4c0;
  undefined1 *local_4bc;
  undefined2 **local_340;
  undefined4 local_33c;
  undefined4 *local_338;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 **local_1b4;
  undefined2 local_1b0;
  undefined1 uStack_1ae;
  int iStack_1ad;
  undefined1 uStack_1a9;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 5)) {
  case 0:
    *(undefined1 *)(param_2 + 4) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c135d0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c135d0);
  case 3:
    if (*(char *)(param_2 + 4) != '\0') {
      if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1312c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1312c);
    }
  }
  iVar8 = 0;
  FUN_01bed93e(&local_1b0,0,0x186);
  iVar3 = FUN_01be6c6c(&local_1b0);
  iVar5 = iStack_1ad;
  if (iVar3 == -1) {
    piVar4 = (int *)FUN_01be3244();
    uVar7 = 0;
    if (*piVar4 - 1U < 0x85) {
      uVar7 = *(undefined4 *)(&DAT_005353c0 + (*piVar4 - 1U) * 4);
    }
    local_7d0[0] = (undefined4 *)FUN_01208780(uVar7);
  }
  else {
    local_1b8._0_3_ = CONCAT12(uStack_1ae,local_1b0);
    FUN_01bed4e2(&local_340,(uint)&local_1b0 | 7,0x17f);
    local_1bc._0_3_ = SUB43(local_1b8,0);
    FUN_01bed4e2(&local_4c0,&local_340,0x17f);
    local_7c8 = (undefined2)local_1bc;
    uStack_7c6 = local_1bc._2_1_;
    FUN_01bed4e2(&local_640,&local_4c0,0x17f);
    FUN_01bed4e2((uint)&local_7c8 | 7,&local_640,0x17f);
    iStack_7c5 = iVar5;
    do {
      if (local_746[iVar8] == '\0') goto LAB_00b7b368;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x41);
    iVar8 = 0x41;
LAB_00b7b368:
    FUN_012fbd94(&local_1b0,local_746,iVar8);
    if (CONCAT13((undefined1)iStack_1ad,CONCAT12(uStack_1ae,local_1b0)) != 1) {
      if (local_1a8 < 0) {
        uVar7 = 0;
LAB_00b7b580:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,local_1a8);
      }
      if (local_1a8 == 0) {
        local_7d4 = 0;
        puVar6 = (undefined4 *)&DAT_00000001;
      }
      else {
        uVar7 = 1;
        puVar6 = (undefined4 *)FUN_01298504(local_1a8,1);
        if (puVar6 == (undefined4 *)0x0) goto LAB_00b7b580;
        local_7d4 = local_1a8;
      }
      FUN_01bed4e2(puVar6,CONCAT13(uStack_1a9,iStack_1ad._1_3_),local_1a8);
      *(undefined1 *)(param_2 + 4) = 1;
      goto LAB_00b7b758;
    }
    FUN_019b9f84(&local_1b0);
    local_7d0[0] = (undefined4 *)
                   FUN_012c6a30("kernel release string is invalid unicode",0x28,&local_1b0);
  }
  local_7d4 = -0x80000000;
  local_1bc = local_7d0;
  *(undefined1 *)(param_2 + 4) = 1;
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d4c344 - 1 < 2 ||
       ((DAT_01d4c344 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c33c), cVar2 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d4c33c), iVar5 != 0)))) {
    iVar5 = *(int *)(DAT_01d4c33c + 0x20);
    if (iVar5 == 0) {
LAB_00b7b7d0:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13620);
    }
    local_1a8 = *(int *)(DAT_01d4c33c + 0x24);
    local_1a4 = *(undefined4 *)(DAT_01d4c33c + 0x28);
    local_63c = &local_1b8;
    local_338 = (undefined4 *)(DAT_01d4c33c + 0x1c);
    uVar7 = *local_338;
    uStack_1a9 = (undefined1)((uint)iVar5 >> 0x18);
    local_340 = &local_640;
    local_33c = 1;
    local_1b4 = &local_4c0;
    local_1a0 = 0;
    local_1b0 = (undefined2)uVar7;
    uStack_1ae = (undefined1)((uint)uVar7 >> 0x10);
    iStack_1ad._0_1_ = (undefined1)((uint)uVar7 >> 0x18);
    iStack_1ad = CONCAT31((int3)iVar5,(undefined1)iStack_1ad);
    local_638 = (undefined4 *)&DAT_01d2ea4c;
    local_1b8 = &DAT_00590e5f;
    local_4bc = &LAB_00a93404;
    local_640 = &local_1b0;
    local_4c0 = &local_1bc;
    FUN_01aaaecc(DAT_01d4c33c,&local_340);
    iVar5 = DAT_01d4c33c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_7c0 = *(undefined1 **)(DAT_01d4c33c + 0x18);
      uStack_7c1 = (undefined1)((uint)*(int *)(DAT_01d4c33c + 0x14) >> 0x18);
      local_7c8 = 1;
      uStack_7c6 = 0;
      iStack_7c5 = *(int *)(DAT_01d4c33c + 0x14) << 8;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar6[3])(pcVar1,&local_7c8);
      if (iVar3 != 0) {
        FUN_01aaa328(iVar5,pcVar1,puVar6[4],&local_7c8,&local_340);
      }
    }
  }
  else {
    iVar5 = DAT_01d4c33c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_33c = *(undefined4 *)(DAT_01d4c33c + 0x14);
      local_338 = *(undefined4 **)(DAT_01d4c33c + 0x18);
      local_340 = (undefined2 **)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar6[3])(pcVar1,&local_340);
      if (iVar3 != 0) {
        local_638 = (undefined4 *)(DAT_01d4c33c + 0x1c);
        uVar7 = *local_638;
        iVar3 = *(int *)(DAT_01d4c33c + 0x20);
        if (iVar3 == 0) goto LAB_00b7b7d0;
        local_640 = &local_7c8;
        local_1a8 = *(int *)(DAT_01d4c33c + 0x24);
        local_1a4 = *(undefined4 *)(DAT_01d4c33c + 0x28);
        uStack_7c1 = (undefined1)((uint)&local_1b8 >> 0x18);
        local_7c8 = SUB42(&local_1b0,0);
        uStack_7c6 = (undefined1)((uint)&local_1b0 >> 0x10);
        iStack_7c5._0_1_ = (undefined1)((uint)&local_1b0 >> 0x18);
        iStack_7c5 = CONCAT31((int3)&local_1b8,(undefined1)iStack_7c5);
        local_1a0 = 0;
        uStack_1a9 = (undefined1)((uint)iVar3 >> 0x18);
        local_1b0 = (undefined2)uVar7;
        uStack_1ae = (undefined1)((uint)uVar7 >> 0x10);
        iStack_1ad._0_1_ = (undefined1)((uint)uVar7 >> 0x18);
        iStack_1ad = CONCAT31((int3)iVar3,(undefined1)iStack_1ad);
        local_63c = (undefined4 *)&DAT_00000001;
        local_7c0 = &DAT_01d2ea4c;
        local_1b4 = &local_4c0;
        local_1b8 = &DAT_00590e5f;
        local_4bc = &LAB_00a93404;
        local_4c0 = &local_1bc;
        FUN_01aaa328(iVar5,pcVar1,puVar6[4],&local_340,&local_640);
      }
    }
  }
  puVar6 = local_7d0[0];
  local_1a8 = (**(code **)*local_7d0[0])(local_7d0[0]);
LAB_00b7b758:
  *param_1 = local_7d4;
  param_1[1] = (int)puVar6;
  *(undefined1 *)(param_2 + 5) = 1;
  param_1[2] = local_1a8;
  return;
}

