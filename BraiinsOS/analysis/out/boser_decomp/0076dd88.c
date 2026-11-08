// FUN_0076dd88 @ 0076dd88 size=680 calls_out=11 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_0076dd88(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_270 [192];
  int local_1b0;
  int local_1ac;
  undefined1 local_1a8;
  int local_f0;
  undefined1 auStack_ec [192];
  int local_2c;
  undefined1 local_28;
  
  iVar3 = *param_2;
  if (iVar3 == 0) {
LAB_0076de5c:
    uVar2 = 0x80000000;
LAB_0076de60:
    *param_1 = uVar2;
  }
  else {
    while( true ) {
      piVar6 = *(int **)(iVar3 + 0xc);
      piVar4 = (int *)piVar6[0x31];
      DataMemoryBarrier(0xb);
      if (piVar4 != (int *)0x0) break;
      iVar5 = -0x7fffffff;
      DataMemoryBarrier(0xb);
      if (*(int **)(iVar3 + 8) == piVar6) {
        iVar5 = -0x80000000;
      }
      if (iVar5 != -0x7fffffff) {
        if (iVar5 != 0x7fffffff) {
          uVar2 = 0x80000001;
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar3 + 0x1c) == 0) {
            piVar4 = (int *)*param_2;
            if (piVar4 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar3 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar3 + -1;
              if (iVar3 == 1) {
                DataMemoryBarrier(0xb);
                FUN_013cf318(*param_2);
              }
            }
            *param_2 = 0;
            goto LAB_0076de5c;
          }
          goto LAB_0076de60;
        }
        FUN_01bed4e2(auStack_270,&local_1b0,0xc0);
        iVar5 = 0x7fffffff;
        goto LAB_0076dee0;
      }
      FUN_01bea67c();
    }
    *(int **)(iVar3 + 0xc) = piVar4;
    if (*piVar6 != -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*tail).value.is_none()",0x29,&DAT_01d2d574);
    }
    iVar5 = *piVar4;
    if (iVar5 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
    }
    FUN_01bed4e2(auStack_ec,piVar4 + 1,0xc0);
    *piVar4 = -0x80000000;
    local_f0 = iVar5;
    if (*piVar6 != -0x80000000) {
      FUN_00783aa0(piVar6);
    }
    thunk_FUN_01be4678(piVar6);
    FUN_01bed4e2(&local_1b0,auStack_ec,0xc0);
    FUN_01bed4e2(auStack_270,&local_1b0,0xc0);
LAB_0076dee0:
    local_f0 = iVar5;
    FUN_01bed4e2((uint)&local_f0 | 4,auStack_270,0xc0);
    if ((*param_2 != 0) && (piVar4 = (int *)FUN_01438344(*param_2 + 0x10), piVar4 != (int *)0x0)) {
      FUN_01656cb0(&local_1b0,piVar4 + 2);
      if (local_1b0 == 1) {
        local_28 = local_1a8;
        local_2c = local_1ac;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01c087e0,&DAT_01d2debc);
      }
      iVar5 = *(int *)(local_1ac + 8);
      *(undefined1 *)(local_1ac + 0x10) = 0;
      *(undefined4 *)(local_1ac + 8) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(local_1ac + 0xc));
      }
      FUN_00a97e8c(local_1ac,local_1a8);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014210d0(piVar4);
      }
    }
    piVar4 = (int *)(iVar3 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + -1;
    DataMemoryBarrier(0xb);
    FUN_01bed4e2(param_1,&local_f0,0xc4);
  }
  return;
}

