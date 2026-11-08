// FUN_0130ee90 @ 0130ee90 size=768 calls_out=10 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_0130ee90(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 ***pppuVar9;
  int iVar10;
  undefined4 ***pppuVar11;
  uint uVar12;
  uint uVar13;
  undefined4 ****local_58;
  undefined4 local_54;
  int local_44;
  undefined4 ***local_40;
  undefined4 ***local_3c;
  int ***local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 ***local_28;
  undefined4 local_24;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  if (uVar3 == 0) {
    iVar6 = 0;
    if (*(char *)(param_2 + 0x18) != '\x02') {
      iVar6 = 2;
    }
  }
  else {
    iVar8 = *(int *)(param_2 + 4);
    uVar13 = uVar3 * 0x78;
    iVar6 = iVar8;
    do {
      uVar12 = *(uint *)(iVar6 + 0x3c);
      if (*(uint *)(iVar6 + 0x38) < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar12,*(uint *)(iVar6 + 0x38),&DAT_01890988);
      }
      iVar10 = *(int *)(iVar6 + 0x34);
      iVar5 = uVar12 * 0x1c;
      while (iVar5 != 0) {
        if (*(char *)(iVar10 + 0xc) != '\x01') goto LAB_0130ef34;
        pcVar1 = (char *)(iVar10 + 0x18);
        iVar5 = iVar5 + -0x1c;
        iVar10 = iVar10 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_0130ef34:
          local_28 = (undefined4 ***)&DAT_018d88a4;
          DataMemoryBarrier(0xb);
          if (DAT_018d88a4 != 0) {
            local_38 = (int ***)&local_28;
            local_58 = &local_38;
            FUN_015eedc4(&DAT_018d88a4,0,&local_58,&DAT_0188f118,&DAT_0188e9dc);
          }
          uVar7 = 1;
          iVar6 = *(int *)(DAT_018d88a8 + 0x68);
          uVar4 = 0;
          if (*(char *)(iVar6 + 0xc) == '\x01') {
            uVar4 = *(undefined4 *)(iVar6 + 8);
            uVar7 = *(undefined4 *)(iVar6 + 4);
          }
          *param_1 = 1;
          param_1[1] = 3;
          param_1[2] = uVar7;
          param_1[3] = uVar4;
          return;
        }
      }
      iVar6 = iVar6 + 0x78;
    } while (iVar6 != iVar8 + uVar3 * 0x78);
    iVar6 = 0;
    if (*(char *)(param_2 + 0x18) != '\x02') {
      iVar6 = 2;
    }
    while (uVar3 != 0) {
      uVar3 = FUN_012fa894(iVar8);
      iVar5 = 1;
      if (0x7f < uVar3) {
        iVar5 = 2;
        if (0x3fff < uVar3) {
          iVar5 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar5 = 5, uVar3 < 0x10000000)) {
          iVar5 = 4;
        }
      }
      iVar8 = iVar8 + 0x78;
      iVar6 = iVar6 + uVar3 + iVar5 + 2;
      uVar13 = uVar13 - 0x78;
      uVar3 = uVar13;
    }
  }
  iVar8 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  pppuVar9 = (undefined4 ***)(iVar8 + iVar6);
  *(undefined4 ****)(param_2 + 0x14) = pppuVar9;
  if ((int)pppuVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,pppuVar9);
  }
  if (pppuVar9 == (undefined4 ***)0x0) {
    iVar6 = 1;
    pppuVar11 = (undefined4 ***)0x0;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(pppuVar9);
    pppuVar11 = pppuVar9;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pppuVar9);
    }
  }
  local_3c = (undefined4 ***)0x0;
  local_58 = (undefined4 ****)0x80000001;
  local_44 = iVar6;
  local_40 = pppuVar9;
  FUN_0130e084(&local_38,param_2,&local_58);
  if (local_38 == (undefined4 ***)0x4) {
    if (local_58 < (int ***)0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_24 = 0;
    local_28 = local_40;
    local_34 = 0;
    local_38 = local_3c;
    if (local_40 != local_3c) {
      FUN_00faf26c(&local_28,&local_38,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x130f190);
      (*pcVar2)();
    }
    *param_1 = 0;
    param_1[1] = pppuVar11;
    param_1[2] = iVar6;
    param_1[3] = pppuVar9;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = uStack_30;
    if (0 < (int)local_58) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (pppuVar11 != (undefined4 ***)0x0) {
      thunk_FUN_016d3fb4(iVar6);
      return;
    }
  }
  return;
}

