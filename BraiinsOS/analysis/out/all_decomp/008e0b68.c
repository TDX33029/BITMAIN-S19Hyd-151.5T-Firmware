// FUN_008e0b68 @ 008e0b68 size=960 calls_out=11 calls_in=5
// strings: BUG: poisoned lock

void FUN_008e0b68(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_3c;
  int *local_38;
  int *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int iStack_20;
  undefined4 local_1c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_008e0b94;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_008e0b94:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    uVar6 = (uint)local_24 >> 8;
    local_24 = (int *)CONCAT31((int3)uVar6,(char)uVar5);
    local_28 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: poisoned lock",0x12,&local_28,&DAT_01865a54,&DAT_018654d4);
  }
  uVar9 = *param_2;
  uVar6 = param_1[2];
  iVar8 = 4;
  iVar7 = 4;
  if (2 < uVar6) {
    iVar8 = uVar6 - 3;
  }
  if (2 < uVar9) {
    iVar7 = uVar9 - 3;
  }
  if ((iVar8 == iVar7) &&
     ((iVar8 != 4 ||
      ((uVar6 == uVar9 &&
       ((uVar6 == 0 ||
        (((param_1[3] == param_2[1] && (param_1[4] == param_2[2])) && (param_1[5] == param_2[3])))))
       ))))) {
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)
       ) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = 0;
    if (iVar7 == 2) {
      local_24 = (int *)((int)register0x00000054 + -0xc);
      software_interrupt(0);
      FUN_016d3496(param_1,0x81,1,param_5);
      return;
    }
  }
  else {
    uVar10 = param_2[1];
    uVar9 = param_2[2];
    uVar6 = param_2[3];
    param_1[2] = *param_2;
    param_1[3] = uVar10;
    param_1[4] = uVar9;
    param_1[5] = uVar6;
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)
       ) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,param_1,0x81,1);
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      local_3c = param_1[6];
      uVar5 = *param_2;
      piVar3 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      local_38 = &local_3c;
      local_34 = &DAT_00f5c97c;
      FUN_00600d2c(&local_28,&DAT_00590e71,&local_38);
      *piVar3 = (int)local_28;
      piVar3[1] = (int)local_24;
      piVar3[2] = iStack_20;
      piVar4 = (int *)thunk_FUN_016d4a50(8);
      iVar7 = DAT_018d8064;
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,8);
      }
      iVar8 = piVar3[2];
      *piVar4 = piVar3[1];
      piVar4[1] = iVar8;
      FUN_009b564c(&local_38,iVar7 + 8,piVar4,1);
      if (local_38 != (int *)&DAT_00000005) {
        local_1c = local_2c;
        local_28 = local_38;
        local_24 = local_34;
        iStack_20 = uStack_30;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01869dec,&DAT_01886b2c);
      }
      iVar7 = 4;
      if (2 < uVar5) {
        iVar7 = uVar5 - 3;
      }
      do {
        bVar2 = (bool)hasExclusiveAccess(local_34 + 2);
      } while (!bVar2);
      local_34[2] = iVar7;
      local_34[3] = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *local_34;
        bVar2 = (bool)hasExclusiveAccess(local_34);
      } while (!bVar2);
      *local_34 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0df4();
      }
      thunk_FUN_016d3fb4(piVar4);
      if (*piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
      thunk_FUN_016d3fb4(piVar3);
      return;
    }
  }
  return;
}

