// FUN_01706210 @ 01706210 size=1144 calls_out=15 calls_in=1
// strings: reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client

undefined4 FUN_01706210(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 local_428;
  int *local_420;
  undefined4 local_41c;
  undefined *local_418;
  undefined1 local_404;
  int *local_370;
  undefined1 auStack_198 [176];
  undefined8 local_e8;
  undefined1 auStack_e0 [176];
  int local_30;
  int local_2c;
  int *local_28;
  code *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x2ac)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1940c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1940c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x2a8)) {
    case 0:
      puVar5 = *(undefined4 **)(param_1 + 0x2a0);
      goto LAB_01706544;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1f140);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1f140);
    case 3:
      puVar5 = *(undefined4 **)(param_1 + 0x2a4);
      goto LAB_01706548;
    }
  }
  *(undefined2 *)(param_1 + 0x2ad) = 0x101;
  FUN_01bed4e2(&local_428,param_1,0x290);
  uVar9 = FUN_017367e8(&local_428);
  if ((uVar9 & 1) == 0) {
    *(int *)(param_1 + 0x298) = (int)(uVar9 >> 0x20);
    *(undefined1 *)(param_1 + 0x2ae) = 0;
    uVar9 = FUN_01712b44(*(undefined4 *)(param_1 + 0x294),0);
    iVar7 = (int)(uVar9 >> 0x20);
    if ((uVar9 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x2ad) = 0;
      *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x290);
LAB_01706624:
      do {
        *(undefined1 *)(param_1 + 0x2a8) = 0;
        puVar5 = (undefined4 *)(param_1 + 0x29c);
        *(undefined4 **)(param_1 + 0x2a0) = puVar5;
LAB_01706544:
        *(undefined4 **)(param_1 + 0x2a4) = puVar5;
LAB_01706548:
        FUN_017445a8(&local_428,*puVar5,param_2);
        lVar10 = local_428;
        uVar8 = 1;
        uVar3 = 1;
        if (local_428 == 4) {
          uVar3 = 3;
        }
        *(undefined1 *)(param_1 + 0x2a8) = uVar3;
        if (local_428 == 4) {
          uVar3 = 3;
          goto LAB_0170675c;
        }
        FUN_01bed4e2(auStack_198,&local_420,0xb0);
        piVar4 = local_370;
        if (lVar10 == 3) goto LAB_01706644;
        local_e8 = lVar10;
        FUN_01bed4e2(auStack_e0,auStack_198,0xb0);
        local_28 = piVar4;
        lVar10 = FUN_0173a7d0(*(undefined4 *)(param_1 + 0x298),&local_e8);
        local_404 = 0;
        local_420 = piVar4;
        local_428 = lVar10;
        piVar4 = (int *)FUN_01705b4c(&local_428,&DAT_01d1941c);
        if (*piVar4 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar4);
          if (bVar2) {
            *piVar4 = 0x84;
            goto LAB_01706624;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar4[2] + 0x10))();
      } while( true );
    }
    local_30 = iVar7;
    if (DAT_01d51b00 != 0) {
      local_28 = &local_30;
      local_24 = FUN_01702fbc;
      local_418 = &DAT_01d193ec;
      local_41c = 0x19;
      local_420 = (int *)0x50c15b;
      local_428._4_4_ = 0x19;
      local_428._0_4_ = "reqwest::blocking::client";
      FUN_0193b350(&DAT_005b5343,&local_28,1,&local_428);
    }
    if (local_30 != 0) {
      FUN_01702f28(local_30);
    }
    piVar4 = *(int **)(param_1 + 0x298);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703cd8(*(undefined4 *)(param_1 + 0x298));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2ae) = 0;
    uVar9 = FUN_01712b44(*(undefined4 *)(param_1 + 0x294));
    iVar7 = (int)(uVar9 >> 0x20);
    if ((uVar9 & 1) != 0) {
      local_30 = iVar7;
      if (DAT_01d51b00 != 0) {
        local_28 = &local_30;
        local_24 = FUN_01702fbc;
        local_418 = &DAT_01d193fc;
        local_41c = 0x19;
        local_420 = (int *)0x50c15b;
        local_428._4_4_ = 0x19;
        local_428._0_4_ = "reqwest::blocking::client";
        FUN_0193b350(&DAT_00596e89,&local_28,1,&local_428);
      }
      if (local_30 != 0) {
        FUN_01702f28(local_30);
      }
    }
  }
  FUN_01703470(param_1 + 0x290);
  uVar8 = 0;
  uVar3 = 1;
LAB_0170675c:
  *(undefined1 *)(param_1 + 0x2ac) = uVar3;
  return uVar8;
LAB_01706644:
  if (4 < DAT_01d51b00) {
    uVar11 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar6 = *(uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
    if (uVar6 < 3) {
      piVar4 = (int *)FUN_019b03e8();
    }
    else {
      piVar4 = (int *)(uVar6 - 8);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1706778);
        (*pcVar1)();
      }
    }
    local_30 = piVar4[2];
    local_2c = piVar4[3];
    local_24 = FUN_01203168;
    local_28 = &local_30;
    local_418 = &DAT_01d1942c;
    local_41c = 0x19;
    local_420 = (int *)0x50c15b;
    local_428._4_4_ = 0x19;
    local_428._0_4_ = "reqwest::blocking::client";
    FUN_0193b350(&DAT_005871b3,&local_28,5,&local_428);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar4);
    }
  }
  FUN_01703470(param_1 + 0x29c);
  piVar4 = *(int **)(param_1 + 0x298);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + -1;
  uVar8 = 0;
  uVar3 = 1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01703cd8(*(undefined4 *)(param_1 + 0x298));
  }
  goto LAB_0170675c;
}

