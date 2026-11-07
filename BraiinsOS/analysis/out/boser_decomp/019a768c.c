// FUN_019a768c @ 019a768c size=680 calls_out=3 calls_in=65
// strings: Once instance has previously been poisoned

void FUN_019a768c(uint *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  undefined1 local_2c [8];
  
  uVar3 = *param_1;
  DataMemoryBarrier(0xb);
  if (param_2 == 0) {
LAB_019a7830:
    do {
      switch(uVar3 & 3) {
      case 0:
        goto switchD_019a7840_caseD_0;
      case 1:
        if ((uVar3 & 4) == 0) {
          uVar6 = uVar3 | 4;
          uVar3 = *param_1;
          if (uVar3 == 1) {
            bVar2 = (bool)hasExclusiveAccess(param_1);
            if (!bVar2) goto LAB_019a78d0;
            *param_1 = uVar6;
            bVar2 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_019a78d0:
            bVar2 = false;
            DataMemoryBarrier(0xb);
          }
          if (!bVar2) goto LAB_019a7830;
        }
        else {
          uVar6 = uVar3;
        }
        local_30 = 0;
        while (*param_1 == uVar6) {
          puVar5 = (undefined1 *)0x0;
          if (local_30 != 0) {
            puVar5 = local_2c;
          }
          uVar3 = FUN_01be6c3c(0xf0,param_1,0x89,uVar6,puVar5,0,0xffffffff);
          if ((uVar3 < 0x80000000) || (piVar4 = (int *)FUN_01be3244(), *piVar4 != 4)) break;
        }
        uVar3 = *param_1;
        DataMemoryBarrier(0xb);
        goto LAB_019a7830;
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("Once instance has previously been poisoned",0x55,param_5);
      }
      uVar6 = *param_1;
      if (uVar6 == uVar3) {
        bVar2 = (bool)hasExclusiveAccess(param_1);
        if (bVar2) {
          *param_1 = uVar3 & 4 | 1;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      local_2c[0] = false;
      DataMemoryBarrier(0xb);
      uVar3 = uVar6;
    } while (!bVar2);
  }
  else {
    do {
      while( true ) {
        uVar6 = uVar3 & 3;
        if (uVar6 - 2 < 2) break;
        if (uVar6 != 1) {
          return;
        }
        if ((uVar3 & 4) == 0) {
          uVar6 = uVar3 | 4;
          uVar3 = *param_1;
          if (uVar3 == 1) {
            bVar2 = (bool)hasExclusiveAccess(param_1);
            if (bVar2) {
              *param_1 = uVar6;
              uVar3 = uVar6;
              goto LAB_019a7770;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          DataMemoryBarrier(0xb);
        }
        else {
LAB_019a7770:
          local_30 = 0;
          while (*param_1 == uVar3) {
            puVar5 = (undefined1 *)0x0;
            if (local_30 != 0) {
              puVar5 = local_2c;
            }
            uVar6 = FUN_01be6c3c(0xf0,param_1,0x89,uVar3,puVar5,0,0xffffffff);
            if ((uVar6 < 0x80000000) || (piVar4 = (int *)FUN_01be3244(), *piVar4 != 4)) break;
          }
          uVar3 = *param_1;
          DataMemoryBarrier(0xb);
        }
      }
      uVar7 = *param_1;
      if (uVar7 == uVar3) {
        bVar2 = (bool)hasExclusiveAccess(param_1);
        if (bVar2) {
          *param_1 = uVar3 & 4 | 1;
        }
        bVar1 = 0;
        if (bVar2) {
          bVar1 = 0xff;
        }
      }
      else {
        bVar1 = 0;
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      uVar3 = uVar7;
    } while (!(bool)(bVar1 & 1));
    local_2c[0] = uVar6 == 2;
  }
  local_30 = 0;
  (**(code **)(param_4 + 0x10))(param_3,&local_30);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = local_30;
  if ((uVar3 & 4) != 0) {
    FUN_01be6c3c(0xf0,param_1,0x81,0x7fffffff);
  }
switchD_019a7840_caseD_0:
  return;
}

