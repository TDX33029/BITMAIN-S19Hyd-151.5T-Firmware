// FUN_0142234c @ 0142234c size=588 calls_out=10 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_0142234c(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int local_38;
  int local_34;
  uint local_30;
  int iStack_2c;
  int local_28;
  undefined1 local_24;
  
  iVar10 = *param_2;
  if (iVar10 == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      piVar11 = *(int **)(iVar10 + 0xc);
      piVar6 = (int *)piVar11[5];
      DataMemoryBarrier(0xb);
      if (piVar6 != (int *)0x0) break;
      DataMemoryBarrier(0xb);
      if (*(int **)(iVar10 + 8) == piVar11) {
        uVar9 = 2;
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar10 + 0x1c) == 0) {
          piVar6 = (int *)*param_2;
          if (piVar6 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar6;
              bVar1 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar1);
            *piVar6 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01421460(*param_2);
            }
          }
          uVar9 = 0;
          *param_2 = 0;
        }
        goto LAB_01422524;
      }
      FUN_01bea67c();
    }
    *(int **)(iVar10 + 0xc) = piVar6;
    if (*piVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*tail).value.is_none()",0x29,&DAT_01d2d574);
    }
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
    }
    local_38 = piVar6[1];
    local_34 = piVar6[2];
    local_30 = piVar6[3];
    iStack_2c = piVar6[4];
    *piVar6 = 0;
    if (*piVar11 != 0) {
      FUN_01427238(piVar11 + 1);
    }
    thunk_FUN_01be4678(piVar11);
    iVar5 = iStack_2c;
    uVar4 = local_30;
    iVar3 = local_34;
    iVar2 = local_38;
    if ((*param_2 != 0) && (piVar6 = (int *)FUN_01438344(*param_2 + 0x10), piVar6 != (int *)0x0)) {
      FUN_01656cb0(&local_38,piVar6 + 2);
      iVar8 = local_34;
      if (local_38 == 1) {
        local_24 = (undefined1)local_30;
        local_28 = local_34;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf478c,&DAT_01d2debc);
      }
      uVar12 = local_30 & 0xff;
      iVar7 = *(int *)(local_34 + 8);
      *(undefined1 *)(local_34 + 0x10) = 0;
      *(undefined4 *)(local_34 + 8) = 0;
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 4))(*(undefined4 *)(local_34 + 0xc));
      }
      FUN_00a97e8c(iVar8,uVar12);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014210d0(piVar6);
      }
    }
    piVar6 = (int *)(iVar10 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + -1;
    DataMemoryBarrier(0xb);
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = uVar4;
    param_1[4] = iVar5;
    uVar9 = 1;
  }
LAB_01422524:
  *param_1 = uVar9;
  return;
}

