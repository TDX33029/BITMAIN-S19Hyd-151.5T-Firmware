// FUN_009d795c @ 009d795c size=868 calls_out=8 calls_in=1
// strings: cannot clone `Sender` -- too many outstanding senders

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009d795c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  int local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  uint local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  int *local_3d4;
  int local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
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
  
  piVar12 = *(int **)(param_1 + 0x74);
  if (piVar12 != (int *)0x0) {
    do {
      iVar6 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_009d7cc0;
  }
  if (*(char *)(param_2 + 0xf) == '\0') {
    if (*(char *)((int)param_2 + 0x3d) != '\0') {
      uVar14 = 0;
      bVar2 = true;
      goto LAB_009d79e4;
    }
    piVar9 = &local_410;
    local_400 = param_2[0xb];
    uStack_3fc = param_2[0xc];
    uStack_3f8 = param_2[0xd];
    uStack_3f4 = param_2[0xe];
    local_410 = param_2[7];
    uStack_40c = param_2[8];
    uStack_408 = param_2[9];
    uStack_404 = param_2[10];
    local_3f0 = local_3f0 & 0xffffff00;
    local_3e8 = FUN_009d7ec4(piVar9,param_3);
    uVar5 = local_3e8 >> 0x20;
    if ((local_3e8 & 1) == 0) {
      FUN_009d7e58(&local_410);
      if ((int)uVar5 != 0) {
        FUN_009d5b2c((int)&local_3e8 + 4);
      }
    }
    else {
      if (*(char *)(param_1 + 0x48) == '\x02') {
        uVar13 = 2;
        puVar8 = (undefined4 *)0x2;
      }
      else {
        piVar9 = *(int **)(param_1 + 0x40);
        puVar7 = (uint *)(piVar9 + 8);
        uVar10 = piVar9[8];
        DataMemoryBarrier(0xb);
        do {
          if (uVar10 == (piVar9[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("cannot clone `Sender` -- too many outstanding senders",0x35,&DAT_01d2df0c)
            ;
          }
          uVar11 = *puVar7;
          if (uVar11 == uVar10) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar7);
              if (bVar2) {
                *puVar7 = uVar10 + 1;
                bVar2 = true;
                uVar10 = uVar11;
                goto LAB_009d7ad4;
              }
              uVar11 = *puVar7;
            } while (uVar11 == uVar10);
          }
          bVar2 = false;
          ClearExclusiveLocal();
          uVar10 = uVar11;
LAB_009d7ad4:
          DataMemoryBarrier(0xb);
        } while (!bVar2);
        do {
          iVar6 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_009d7cc0;
        puVar8 = (undefined4 *)thunk_FUN_01be5118(0x1c);
        if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        uVar13 = 0;
        puVar8[6] = 0;
        *puVar8 = 1;
        puVar8[1] = 1;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
      }
      if (piVar12 != (int *)0x0) {
        do {
          iVar6 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_009d7cc0;
      }
      local_3d0 = local_410;
      local_3cc = uStack_40c;
      local_3c8 = uStack_408;
      uStack_3c4 = uStack_404;
      local_3c0 = local_400;
      local_3bc = uStack_3fc;
      uStack_3b8 = uStack_3f8;
      uStack_3b4 = uStack_3f4;
      uStack_3b0 = local_3f0;
      local_3dc = 0;
      local_3e0 = 4;
      local_3a4 = CONCAT31(local_3a4._1_3_,uVar13);
      local_3d8 = 1;
      local_3d4 = piVar12;
      local_3ac = piVar9;
      local_3a8 = puVar8;
      FUN_009d8084(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
    bVar2 = false;
    bVar4 = false;
    uVar14 = 0;
  }
  else {
    uVar14 = param_2[7];
    bVar2 = false;
    local_420 = param_2[8];
    uStack_41c = param_2[9];
    uStack_418 = param_2[10];
LAB_009d79e4:
    bVar4 = true;
  }
  piVar9 = *(int **)(param_1 + 0x50);
  do {
    iVar6 = *piVar9;
    bVar3 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar3);
  *piVar9 = iVar6 + 1;
  if (-1 < iVar6) {
    local_3a8 = *(undefined4 **)(param_1 + 0x54);
    local_3bc = param_2[3];
    uStack_3b8 = param_2[4];
    uStack_3b4 = param_2[5];
    uStack_3b0 = param_2[6];
    local_3c8 = local_420;
    uStack_3c4 = uStack_41c;
    local_3c0 = uStack_418;
    local_3a4 = *param_2;
    uStack_3a0 = param_2[1];
    uStack_39c = param_2[2];
    local_3dc = 0;
    local_3e0 = 5;
    local_3d0 = 1;
    local_3d8 = 1;
    local_3d4 = piVar12;
    local_3cc = uVar14;
    local_3ac = piVar9;
    FUN_009d8084();
    if (bVar2) {
      FUN_01a697b8(param_2 + 7);
    }
    iVar6 = 0;
    if (bVar4) {
      iVar6 = param_2[0xb];
    }
    if (bVar4 && iVar6 != 0) {
      (**(code **)(iVar6 + 0x10))(param_2 + 0xe,param_2[0xc],param_2[0xd]);
    }
    return;
  }
LAB_009d7cc0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x9d7cc0);
  (*pcVar1)();
}

