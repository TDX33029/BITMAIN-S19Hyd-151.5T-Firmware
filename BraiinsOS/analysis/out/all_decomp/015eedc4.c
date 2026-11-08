// FUN_015eedc4 @ 015eedc4 size=696 calls_out=3 calls_in=288
// strings: Once instance has previously been poisoned

void FUN_015eedc4(uint *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  undefined1 local_2c [8];
  
  uVar2 = *param_1;
  DataMemoryBarrier(0xb);
  if (param_2 == 0) {
LAB_015eef78:
    do {
      switch(uVar2 & 3) {
      case 0:
        goto switchD_015eef88_caseD_0;
      case 1:
        if ((uVar2 & 4) == 0) {
          uVar5 = uVar2 | 4;
          uVar2 = *param_1;
          if (uVar2 == 1) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (!bVar1) goto LAB_015ef018;
            *param_1 = uVar5;
            bVar1 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_015ef018:
            bVar1 = false;
            DataMemoryBarrier(0xb);
          }
          if (!bVar1) goto LAB_015eef78;
        }
        else {
          uVar5 = uVar2;
        }
        local_30 = 0;
        while (*param_1 == uVar5) {
          puVar4 = (undefined1 *)0x0;
          if (local_30 != 0) {
            puVar4 = local_2c;
          }
          uVar2 = FUN_016d6968(0xf0,param_1,0x89,uVar5,puVar4,0,0xffffffff);
          if ((uVar2 < 0x80000000) || (piVar3 = (int *)FUN_016d2bc8(), *piVar3 != 4)) break;
        }
        uVar2 = *param_1;
        DataMemoryBarrier(0xb);
        goto LAB_015eef78;
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("Once instance has previously been poisoned",0x55,param_5);
      }
      uVar5 = *param_1;
      if (uVar5 == uVar2) {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar2 & 4 | 1;
        }
      }
      else {
        bVar1 = false;
        ClearExclusiveLocal();
      }
      local_2c[0] = false;
      DataMemoryBarrier(0xb);
      uVar2 = uVar5;
    } while (!bVar1);
  }
  else {
LAB_015eee18:
    do {
      while( true ) {
        uVar5 = uVar2 & 3;
        if (uVar5 - 2 < 2) break;
        if (uVar5 != 1) {
          return;
        }
        if ((uVar2 & 4) == 0) {
          uVar5 = uVar2 | 4;
          uVar2 = *param_1;
          if (uVar2 == 1) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = uVar5;
              uVar2 = uVar5;
              goto LAB_015eeeb8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          DataMemoryBarrier(0xb);
        }
        else {
LAB_015eeeb8:
          local_30 = 0;
          while (*param_1 == uVar2) {
            puVar4 = (undefined1 *)0x0;
            if (local_30 != 0) {
              puVar4 = local_2c;
            }
            uVar5 = FUN_016d6968(0xf0,param_1,0x89,uVar2,puVar4,0,0xffffffff);
            if ((uVar5 < 0x80000000) || (piVar3 = (int *)FUN_016d2bc8(), *piVar3 != 4)) break;
          }
          uVar2 = *param_1;
          DataMemoryBarrier(0xb);
        }
      }
      uVar6 = *param_1;
      if (uVar6 != uVar2) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar2 = uVar6;
        goto LAB_015eee18;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar2 & 4 | 1;
      }
      DataMemoryBarrier(0xb);
      uVar2 = uVar6;
    } while (!bVar1);
    local_2c[0] = uVar5 == 2;
  }
  local_30 = 0;
  (**(code **)(param_4 + 0x10))(param_3,&local_30);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = local_30;
  if ((uVar2 & 4) != 0) {
    FUN_016d6968(0xf0,param_1,0x81,0x7fffffff);
  }
switchD_015eef88_caseD_0:
  return;
}

