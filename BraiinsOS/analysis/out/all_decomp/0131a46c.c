// FUN_0131a46c @ 0131a46c size=744 calls_out=10 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_0131a46c(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int **local_60;
  undefined4 local_5c;
  int local_4c;
  int *local_48;
  int *local_44;
  undefined4 **local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  iVar8 = 0;
  if (uVar3 != 0) {
    iVar10 = *(int *)(param_2 + 4);
    iVar9 = uVar3 * 0x78;
    iVar8 = iVar10;
    do {
      uVar13 = *(uint *)(iVar8 + 0x3c);
      if (*(uint *)(iVar8 + 0x38) < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar13,*(uint *)(iVar8 + 0x38),&DAT_01890988);
      }
      iVar5 = *(int *)(iVar8 + 0x34);
      iVar7 = uVar13 * 0x1c;
      while (iVar7 != 0) {
        if (*(char *)(iVar5 + 0xc) != '\x01') goto LAB_0131a508;
        pcVar1 = (char *)(iVar5 + 0x18);
        iVar7 = iVar7 + -0x1c;
        iVar5 = iVar5 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_0131a508:
          local_30 = &DAT_018d88dc;
          DataMemoryBarrier(0xb);
          if (DAT_018d88dc != 0) {
            local_40 = &local_30;
            local_60 = (int **)&local_40;
            FUN_015eedc4(&DAT_018d88dc,0,&local_60,&DAT_0188f08c,&DAT_0188e9dc);
          }
          uVar4 = 0;
          iVar8 = *(int *)(DAT_018d88e0 + 0x68);
          uVar6 = 1;
          if (*(char *)(iVar8 + 0xc) == '\x01') {
            uVar6 = *(undefined4 *)(iVar8 + 4);
            uVar4 = *(undefined4 *)(iVar8 + 8);
          }
          *param_1 = 1;
          param_1[1] = 3;
          param_1[2] = uVar6;
          param_1[3] = uVar4;
          return;
        }
      }
      iVar8 = iVar8 + 0x78;
    } while (iVar8 != iVar10 + uVar3 * 0x78);
    iVar8 = 0;
    do {
      uVar3 = FUN_012fa894(iVar10);
      iVar7 = 1;
      if (0x7f < uVar3) {
        iVar7 = 2;
        if (0x3fff < uVar3) {
          iVar7 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar7 = 5, uVar3 < 0x10000000)) {
          iVar7 = 4;
        }
      }
      iVar10 = iVar10 + 0x78;
      iVar9 = iVar9 + -0x78;
      iVar8 = iVar8 + uVar3 + iVar7 + 2;
    } while (iVar9 != 0);
  }
  iVar9 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  piVar11 = (int *)(iVar9 + iVar8);
  *(int **)(param_2 + 0x14) = piVar11;
  if ((int)piVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,piVar11);
  }
  if (piVar11 == (int *)0x0) {
    iVar8 = 1;
    piVar12 = (int *)0x0;
  }
  else {
    iVar8 = thunk_FUN_016d4a50(piVar11);
    piVar12 = piVar11;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,piVar11);
    }
  }
  local_44 = (int *)0x0;
  local_60 = (undefined4 **)0x80000001;
  local_4c = iVar8;
  local_48 = piVar11;
  FUN_01300ecc(&local_40,param_2,&local_60);
  if (local_40 == (undefined4 **)0x4) {
    if (local_60 < (undefined4 **)0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_2c = 0;
    local_30 = local_48;
    local_3c = 0;
    local_40 = (undefined4 **)local_44;
    if (local_48 != local_44) {
      FUN_00faf26c(&local_30,&local_40,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x131a754);
      (*pcVar2)();
    }
    *param_1 = 0;
    param_1[1] = piVar12;
    param_1[2] = iVar8;
    param_1[3] = piVar11;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_40;
    param_1[2] = local_3c;
    param_1[3] = uStack_38;
    if (0 < (int)local_60) {
      thunk_FUN_016d3fb4(local_5c);
    }
    if (piVar12 != (int *)0x0) {
      thunk_FUN_016d3fb4(iVar8);
      return;
    }
  }
  return;
}

