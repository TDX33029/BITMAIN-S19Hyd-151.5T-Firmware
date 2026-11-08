// FUN_012fa2a0 @ 012fa2a0 size=764 calls_out=10 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_012fa2a0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int **local_58;
  undefined4 local_54;
  int local_44;
  int *local_40;
  int *local_3c;
  undefined4 **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int *local_28;
  undefined4 local_24;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  iVar7 = *(int *)(param_2 + 4);
  if (uVar3 != 0) {
    iVar10 = iVar7;
    do {
      uVar12 = *(uint *)(iVar10 + 0x3c);
      if (*(uint *)(iVar10 + 0x38) < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar12,*(uint *)(iVar10 + 0x38),&DAT_01890988);
      }
      iVar8 = *(int *)(iVar10 + 0x34);
      iVar5 = uVar12 * 0x1c;
      while (iVar5 != 0) {
        if (*(char *)(iVar8 + 0xc) != '\x01') goto LAB_012fa3a0;
        pcVar1 = (char *)(iVar8 + 0x18);
        iVar5 = iVar5 + -0x1c;
        iVar8 = iVar8 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_012fa3a0:
          local_28 = &DAT_018d885c;
          DataMemoryBarrier(0xb);
          if (DAT_018d885c != 0) {
            local_38 = &local_28;
            local_58 = (int **)&local_38;
            FUN_015eedc4(&DAT_018d885c,0,&local_58,&DAT_0188f17c,&DAT_0188e9dc);
          }
          uVar6 = 1;
          iVar7 = *(int *)(DAT_018d8860 + 0x68);
          uVar4 = 0;
          if (*(char *)(iVar7 + 0xc) == '\x01') {
            uVar4 = *(undefined4 *)(iVar7 + 8);
            uVar6 = *(undefined4 *)(iVar7 + 4);
          }
          *param_1 = 1;
          param_1[1] = 3;
          param_1[2] = uVar6;
          param_1[3] = uVar4;
          return;
        }
      }
      iVar10 = iVar10 + 0x78;
    } while (iVar10 != iVar7 + uVar3 * 0x78);
  }
  iVar10 = 0;
  if (*(char *)(param_2 + 0x18) != '\x02') {
    iVar10 = 2;
  }
  if (*(char *)(param_2 + 0x19) != '\x02') {
    iVar10 = iVar10 + 2;
  }
  if (uVar3 != 0) {
    iVar5 = uVar3 * 0x78;
    do {
      uVar3 = FUN_012fa894(iVar7);
      iVar8 = 1;
      if (0x7f < uVar3) {
        iVar8 = 2;
        if (0x3fff < uVar3) {
          iVar8 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar8 = 5, uVar3 < 0x10000000)) {
          iVar8 = 4;
        }
      }
      iVar7 = iVar7 + 0x78;
      iVar5 = iVar5 + -0x78;
      iVar10 = iVar10 + uVar3 + iVar8 + 2;
    } while (iVar5 != 0);
  }
  iVar7 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  piVar9 = (int *)(iVar7 + iVar10);
  *(int **)(param_2 + 0x14) = piVar9;
  if ((int)piVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,piVar9);
  }
  if (piVar9 == (int *)0x0) {
    iVar7 = 1;
    piVar11 = (int *)0x0;
  }
  else {
    iVar7 = thunk_FUN_016d4a50(piVar9);
    piVar11 = piVar9;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,piVar9);
    }
  }
  local_3c = (int *)0x0;
  local_58 = (undefined4 **)0x80000001;
  local_44 = iVar7;
  local_40 = piVar9;
  FUN_012f9858(&local_38,param_2,&local_58);
  if (local_38 == (undefined4 **)0x4) {
    if (local_58 < (undefined4 **)0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_24 = 0;
    local_28 = local_40;
    local_34 = 0;
    local_38 = (undefined4 **)local_3c;
    if (local_40 != local_3c) {
      FUN_00faf26c(&local_28,&local_38,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x12fa59c);
      (*pcVar2)();
    }
    *param_1 = 0;
    param_1[1] = piVar11;
    param_1[2] = iVar7;
    param_1[3] = piVar9;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = uStack_30;
    if (0 < (int)local_58) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (piVar11 != (int *)0x0) {
      thunk_FUN_016d3fb4(iVar7);
      return;
    }
  }
  return;
}

