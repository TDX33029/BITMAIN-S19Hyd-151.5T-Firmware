// FUN_0076e208 @ 0076e208 size=652 calls_out=10 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_0076e208(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8c;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  iVar6 = *param_2;
  if (iVar6 == 0) {
LAB_0076e2c4:
    iVar5 = -0x80000000;
LAB_0076e2c8:
    *param_1 = iVar5;
  }
  else {
    while( true ) {
      piVar4 = *(int **)(iVar6 + 0xc);
      piVar2 = (int *)piVar4[0xb];
      DataMemoryBarrier(0xb);
      if (piVar2 != (int *)0x0) break;
      iVar5 = -0x7fffffff;
      DataMemoryBarrier(0xb);
      if (*(int **)(iVar6 + 8) == piVar4) {
        iVar5 = -0x80000000;
      }
      if (iVar5 != -0x7fffffff) {
        if (iVar5 == 0x7fffffff) {
          iVar5 = 0x7fffffff;
          goto LAB_0076e32c;
        }
        iVar5 = -0x7fffffff;
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar6 + 0x1c) == 0) {
          piVar2 = (int *)*param_2;
          if (piVar2 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013cf15c(*param_2);
            }
          }
          *param_2 = 0;
          goto LAB_0076e2c4;
        }
        goto LAB_0076e2c8;
      }
      FUN_01bea67c();
    }
    *(int **)(iVar6 + 0xc) = piVar2;
    if (*piVar4 != -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*tail).value.is_none()",0x29,&DAT_01d2d574);
    }
    iVar5 = *piVar2;
    if (iVar5 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
    }
    local_8c = piVar2[1];
    local_60 = piVar2[2];
    iStack_5c = piVar2[3];
    iStack_58 = piVar2[4];
    iStack_54 = piVar2[5];
    local_50 = piVar2[6];
    iStack_4c = piVar2[7];
    iStack_48 = piVar2[8];
    iStack_44 = piVar2[9];
    iStack_40 = piVar2[10];
    *piVar2 = -0x80000000;
    if (*piVar4 != -0x80000000) {
      FUN_019bb7e0(*piVar4,piVar4[1]);
    }
    thunk_FUN_01be4678(piVar4);
LAB_0076e32c:
    if ((*param_2 != 0) && (piVar2 = (int *)FUN_01438344(*param_2 + 0x10), piVar2 != (int *)0x0)) {
      FUN_01656cb0(&local_38,piVar2 + 2);
      if (local_38 == 1) {
        local_28 = local_30;
        local_2c = local_34;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01c087e0,&DAT_01d2debc);
      }
      iVar3 = *(int *)(local_34 + 8);
      *(undefined1 *)(local_34 + 0x10) = 0;
      *(undefined4 *)(local_34 + 8) = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(local_34 + 0xc));
      }
      FUN_00a97e8c(local_34,local_30);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014210d0(piVar2);
      }
    }
    DataMemoryBarrier(0xb);
    piVar2 = (int *)(iVar6 + 0x1c);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
    DataMemoryBarrier(0xb);
    *param_1 = iVar5;
    param_1[1] = local_8c;
    param_1[2] = local_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
  }
  return;
}

