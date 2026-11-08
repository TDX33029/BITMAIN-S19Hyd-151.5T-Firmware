// FUN_01486574 @ 01486574 size=784 calls_out=12 calls_in=1
// strings: 

undefined4 FUN_01486574(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_418;
  undefined4 auStack_410 [7];
  undefined1 local_3f4;
  undefined4 local_360;
  undefined1 auStack_188 [176];
  undefined8 local_d8;
  undefined1 auStack_d0 [176];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x2ac)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6adc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6adc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x2a8)) {
    case 0:
      puVar4 = *(undefined4 **)(param_1 + 0x2a0);
      *(undefined4 **)(param_1 + 0x2a4) = puVar4;
      goto LAB_0148681c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a6a6c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018a6a6c);
    case 3:
      puVar4 = *(undefined4 **)(param_1 + 0x2a4);
      local_418 = CONCAT44(local_418._4_4_,(undefined4)local_418);
      local_d8 = CONCAT44(local_d8._4_4_,(undefined4)local_d8);
      goto LAB_0148681c;
    }
  }
  *(undefined2 *)(param_1 + 0x2ad) = 0x101;
  FUN_016dd1aa(&local_418,param_1,0x290);
  uVar7 = FUN_01461548(&local_418);
  if ((uVar7 & 1) == 0) {
    *(int *)(param_1 + 0x298) = (int)(uVar7 >> 0x20);
    *(undefined1 *)(param_1 + 0x2ae) = 0;
    uVar7 = FUN_0146bfb8(*(undefined4 *)(param_1 + 0x294),0);
    iVar6 = (int)(uVar7 >> 0x20);
    if ((uVar7 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x2ad) = 0;
      *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x290);
LAB_014868f0:
      do {
        *(undefined1 *)(param_1 + 0x2a8) = 0;
        puVar4 = (undefined4 *)(param_1 + 0x29c);
        *(undefined4 **)(param_1 + 0x2a4) = puVar4;
        *(undefined4 **)(param_1 + 0x2a0) = puVar4;
LAB_0148681c:
        FUN_0148d7c0(&local_418,*puVar4,param_2);
        lVar8 = local_418;
        uVar5 = 1;
        if (local_418 == 4) {
          uVar5 = 3;
        }
        *(undefined1 *)(param_1 + 0x2a8) = uVar5;
        if (local_418 == 4) {
          *(undefined1 *)(param_1 + 0x2ac) = 3;
          return 1;
        }
        FUN_016dd1aa(auStack_188,auStack_410,0xb0);
        uVar2 = local_360;
        if (lVar8 == 3) goto LAB_0148691c;
        local_d8 = lVar8;
        FUN_016dd1aa(auStack_d0,auStack_188,0xb0);
        lVar8 = FUN_014671ac(*(undefined4 *)(param_1 + 0x298),&local_d8);
        local_3f4 = 0;
        auStack_410[0] = uVar2;
        local_418 = lVar8;
        piVar3 = (int *)FUN_014a5f14(&local_418,&DAT_018a6aec);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(piVar3);
          if (bVar1) {
            *piVar3 = 0x84;
            goto LAB_014868f0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      } while( true );
    }
    if (iVar6 != 0) {
      FUN_0145d684(iVar6);
    }
    piVar3 = *(int **)(param_1 + 0x298);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a4788(*(undefined4 *)(param_1 + 0x298));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2ae) = 0;
    uVar7 = FUN_0146bfb8(*(undefined4 *)(param_1 + 0x294));
    iVar6 = (int)(uVar7 >> 0x20);
    if ((uVar7 & 1) != 0 && iVar6 != 0) {
      FUN_0145d684(iVar6);
    }
  }
  FUN_0148f59c(*(undefined4 *)(param_1 + 0x290));
  piVar3 = *(int **)(param_1 + 0x290);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a44c0(*(undefined4 *)(param_1 + 0x290));
  }
LAB_01486634:
  *(undefined1 *)(param_1 + 0x2ac) = 1;
  return 0;
LAB_0148691c:
  FUN_0148f59c(*(undefined4 *)(param_1 + 0x29c));
  piVar3 = *(int **)(param_1 + 0x29c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a44c0(*(undefined4 *)(param_1 + 0x29c));
  }
  piVar3 = *(int **)(param_1 + 0x298);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a4788(*(undefined4 *)(param_1 + 0x298));
  }
  goto LAB_01486634;
}

