// FUN_0172f480 @ 0172f480 size=840 calls_out=9 calls_in=0
// strings: cannot clone `Sender` -- too many outstanding senders

void FUN_0172f480(int param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  uint local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  int *local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  int local_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  int *local_3ac;
  undefined4 *local_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  
  piVar11 = *(int **)(param_1 + 0x74);
  if (piVar11 != (int *)0x0) {
    do {
      iVar5 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_0172f7c8;
  }
  piVar8 = &local_418;
  if (*(char *)(param_2 + 0xf) == '\0') {
    if (*(char *)((int)param_2 + 0x3d) == '\0') {
      local_3f8 = param_2[0xb];
      uStack_3f4 = param_2[0xc];
      uStack_3f0 = param_2[0xd];
      uStack_3ec = param_2[0xe];
      local_408 = param_2[7];
      uStack_404 = param_2[8];
      uStack_400 = param_2[9];
      uStack_3fc = param_2[10];
      local_3e8 = local_3e8 & 0xffffff00;
      uVar14 = FUN_01765618(&local_408,param_3);
      iVar5 = (int)(uVar14 >> 0x20);
      if ((uVar14 & 1) == 0) {
        FUN_0172f9f0(&local_408);
        bVar2 = false;
        if (iVar5 == 0) {
          bVar4 = false;
          uVar13 = 0;
        }
        else {
          FUN_01a69838(iVar5);
          bVar4 = false;
          uVar13 = 0;
        }
      }
      else {
        if (*(char *)(param_1 + 0x48) == '\x02') {
          uVar12 = 2;
          puVar7 = (undefined4 *)0x2;
        }
        else {
          piVar8 = *(int **)(param_1 + 0x40);
          puVar6 = (uint *)(piVar8 + 8);
          uVar9 = piVar8[8];
          DataMemoryBarrier(0xb);
          do {
            if (uVar9 == (piVar8[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("cannot clone `Sender` -- too many outstanding senders",0x35,
                           &DAT_01d2df0c);
            }
            uVar10 = *puVar6;
            if (uVar10 == uVar9) {
              DataMemoryBarrier(0xb);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar6);
                if (bVar2) {
                  *puVar6 = uVar9 + 1;
                  bVar2 = true;
                  uVar9 = uVar10;
                  goto LAB_0172f5e8;
                }
                uVar10 = *puVar6;
              } while (uVar10 == uVar9);
            }
            bVar2 = false;
            ClearExclusiveLocal();
            uVar9 = uVar10;
LAB_0172f5e8:
            DataMemoryBarrier(0xb);
          } while (!bVar2);
          do {
            iVar5 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_0172f7c8;
          puVar7 = (undefined4 *)thunk_FUN_01be5118(0x1c);
          if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x1c);
          }
          uVar12 = 0;
          puVar7[6] = 0;
          *puVar7 = 1;
          puVar7[1] = 1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
        }
        if (piVar11 != (int *)0x0) {
          do {
            iVar5 = *piVar11;
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_0172f7c8;
        }
        local_3d0 = local_408;
        local_3cc = uStack_404;
        local_3c8 = uStack_400;
        uStack_3c4 = uStack_3fc;
        local_3c0 = local_3f8;
        local_3bc = uStack_3f4;
        uStack_3b8 = uStack_3f0;
        uStack_3b4 = uStack_3ec;
        uStack_3b0 = local_3e8;
        bVar2 = false;
        local_3dc = 0;
        local_3e0 = 4;
        local_3a4 = CONCAT31(local_3a4._1_3_,uVar12);
        local_3d8 = 1;
        local_3d4 = piVar11;
        local_3ac = piVar8;
        local_3a8 = puVar7;
        FUN_017652a8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
        bVar4 = false;
        uVar13 = 0;
      }
    }
    else {
      uVar13 = 0;
      bVar2 = true;
      bVar4 = true;
    }
  }
  else {
    uVar13 = param_2[7];
    bVar4 = true;
    local_418 = param_2[8];
    uStack_414 = param_2[9];
    uStack_410 = param_2[10];
    bVar2 = false;
  }
  piVar8 = *(int **)(param_1 + 0x50);
  do {
    iVar5 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = iVar5 + 1;
  if (-1 < iVar5) {
    local_3a8 = *(undefined4 **)(param_1 + 0x54);
    local_3bc = param_2[3];
    uStack_3b8 = param_2[4];
    uStack_3b4 = param_2[5];
    uStack_3b0 = param_2[6];
    local_3c8 = local_418;
    uStack_3c4 = uStack_414;
    local_3c0 = uStack_410;
    local_3a4 = *param_2;
    uStack_3a0 = param_2[1];
    uStack_39c = param_2[2];
    local_3dc = 0;
    local_3e0 = 5;
    local_3d0 = 1;
    local_3d8 = 1;
    local_3d4 = piVar11;
    local_3cc = uVar13;
    local_3ac = piVar8;
    FUN_017652a8();
    if (bVar2) {
      FUN_0172f0d8(param_2 + 7);
    }
    if (bVar4) {
      FUN_0182e3a0(param_2 + 0xb);
    }
    return;
  }
LAB_0172f7c8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x172f7c8);
  (*pcVar1)();
}

