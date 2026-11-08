// FUN_01881e70 @ 01881e70 size=592 calls_out=9 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_01881e70(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
    param_1[2] = 0;
  }
  else {
    while( true ) {
      piVar6 = *(int **)(iVar5 + 0xc);
      piVar4 = (int *)piVar6[4];
      DataMemoryBarrier(0xb);
      if (piVar4 != (int *)0x0) break;
      DataMemoryBarrier(0xb);
      if (*(int **)(iVar5 + 8) == piVar6) {
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar5 + 0x1c) == 0) {
          piVar4 = (int *)*param_2;
          if (piVar4 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar1 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar1);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01853e68(*param_2);
            }
          }
          param_1[2] = 0;
          *param_2 = 0;
          goto LAB_01882048;
        }
        uVar3 = 1;
        goto LAB_0188204c;
      }
      FUN_01bea67c();
    }
    *(int **)(iVar5 + 0xc) = piVar4;
    if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*tail).value.is_none()",0x29,&DAT_01d2d574);
    }
    iVar7 = *piVar4;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
    }
    iVar8 = piVar4[3];
    *piVar4 = 0;
    iVar9 = piVar4[1];
    iVar10 = piVar4[2];
    if (*piVar6 != 0) {
      piVar4 = (int *)piVar6[1];
    }
    if (*piVar6 != 0 && piVar4 != (int *)0x0) {
      thunk_FUN_01be4678();
    }
    thunk_FUN_01be4678(piVar6);
    if ((*param_2 != 0) && (piVar4 = (int *)FUN_01438344(*param_2 + 0x10), piVar4 != (int *)0x0)) {
      FUN_01656cb0(&local_38,piVar4 + 2);
      if (local_38 == 1) {
        local_28 = local_30;
        local_2c = local_34;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d20dec,&DAT_01d2debc);
      }
      iVar2 = *(int *)(local_34 + 8);
      *(undefined1 *)(local_34 + 0x10) = 0;
      *(undefined4 *)(local_34 + 8) = 0;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 4))(*(undefined4 *)(local_34 + 0xc));
      }
      FUN_00a97e8c(local_34,local_30);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014210d0(piVar4);
      }
    }
    piVar4 = (int *)(iVar5 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + -1;
    DataMemoryBarrier(0xb);
    param_1[2] = iVar7;
    param_1[3] = iVar9;
    param_1[4] = iVar10;
    param_1[5] = iVar8;
  }
LAB_01882048:
  uVar3 = 0;
LAB_0188204c:
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

