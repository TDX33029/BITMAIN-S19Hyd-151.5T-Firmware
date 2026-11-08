// FUN_013e0d88 @ 013e0d88 size=704 calls_out=11 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_013e0d88(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 auStack_180 [112];
  int local_110;
  int local_10c;
  undefined1 local_108;
  uint local_a0;
  undefined1 auStack_9c [112];
  int local_2c;
  undefined1 local_28;
  
  iVar6 = *param_2;
  if (iVar6 == 0) {
    *param_1 = 0x80000001;
  }
  else {
    while( true ) {
      piVar5 = *(int **)(iVar6 + 0xc);
      puVar7 = (uint *)piVar5[0x1d];
      DataMemoryBarrier(0xb);
      if (puVar7 == (uint *)0x0) {
        uVar8 = 0x80000002;
        DataMemoryBarrier(0xb);
        if (*(int **)(iVar6 + 8) == piVar5) {
          uVar8 = 0x80000001;
        }
      }
      else {
        *(uint **)(iVar6 + 0xc) = puVar7;
        if (*piVar5 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: (*tail).value.is_none()",0x29,&DAT_01d2d574);
        }
        uVar8 = *puVar7;
        if (uVar8 == 0x80000001) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
        }
        FUN_01bed4e2(auStack_9c,puVar7 + 1,0x70);
        *puVar7 = 0x80000001;
        local_a0 = uVar8;
        if (*piVar5 != -0x7fffffff) {
          FUN_013ceb50(piVar5);
        }
        thunk_FUN_01be4678(piVar5);
        FUN_01bed4e2(&local_110,auStack_9c,0x70);
      }
      uVar2 = uVar8;
      if (uVar8 < 0x80000001) {
        uVar2 = 0;
      }
      if ((uVar2 & 0x7fffffff) != 2) break;
      FUN_01bea67c();
    }
    if (((uVar2 & 0x7fffffff) == 0) &&
       (FUN_01bed4e2(auStack_180,&local_110,0x70), uVar8 != 0x80000001)) {
      local_a0 = uVar8;
      FUN_01bed4e2((uint)&local_a0 | 4,auStack_180,0x70);
      if ((*param_2 != 0) && (piVar5 = (int *)FUN_01438344(*param_2 + 0x10), piVar5 != (int *)0x0))
      {
        FUN_01656cb0(&local_110,piVar5 + 2);
        if (local_110 == 1) {
          local_28 = local_108;
          local_2c = local_10c;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cf2f98,&DAT_01d2debc);
        }
        iVar3 = *(int *)(local_10c + 8);
        *(undefined1 *)(local_10c + 0x10) = 0;
        *(undefined4 *)(local_10c + 8) = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(local_10c + 0xc));
        }
        FUN_00a97e8c(local_10c,local_108);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014210d0(piVar5);
        }
      }
      piVar5 = (int *)(iVar6 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = *piVar5 + -1;
      DataMemoryBarrier(0xb);
      FUN_01bed4e2(param_1,&local_a0,0x74);
    }
    else {
      uVar4 = 0x80000002;
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar6 + 0x1c) == 0) {
        piVar5 = (int *)*param_2;
        if (piVar5 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_013cea14(*param_2);
          }
        }
        *param_2 = 0;
        uVar4 = 0x80000001;
      }
      *param_1 = uVar4;
    }
  }
  return;
}

