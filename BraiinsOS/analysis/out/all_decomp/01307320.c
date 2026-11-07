// FUN_01307320 @ 01307320 size=480 calls_out=9 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_01307320(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_58;
  undefined4 local_54;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_28 [2];
  
  uVar2 = *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 8) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,*(uint *)(param_2 + 8),&DAT_01890988);
  }
  iVar5 = 0;
  if (uVar2 != 0) {
    iVar6 = *(int *)(param_2 + 4);
    iVar4 = uVar2 * 0x50;
    do {
      uVar2 = FUN_013077dc(iVar6);
      iVar3 = 1;
      if (0x7f < uVar2) {
        iVar3 = 2;
        if (0x3fff < uVar2) {
          iVar3 = 3;
        }
        if ((0x1fffff < uVar2) && (iVar3 = 5, uVar2 < 0x10000000)) {
          iVar3 = 4;
        }
      }
      iVar6 = iVar6 + 0x50;
      iVar4 = iVar4 + -0x50;
      iVar5 = iVar5 + uVar2 + iVar3 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  iVar4 = iVar4 + iVar5;
  *(int *)(param_2 + 0x14) = iVar4;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  if (iVar4 == 0) {
    iVar6 = 1;
    iVar5 = 0;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(iVar4);
    iVar5 = iVar4;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar4);
    }
  }
  local_3c = 0;
  local_58 = 0x80000001;
  local_44 = iVar6;
  local_40 = iVar4;
  FUN_01306b44(&local_38,param_2,&local_58);
  if (local_38 == 4) {
    if (local_58 < 0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_28[1] = 0;
    local_28[0] = local_40;
    local_34 = 0;
    local_38 = local_3c;
    if (local_40 != local_3c) {
      FUN_00faf26c(local_28,&local_38,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1307500);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = iVar5;
    param_1[2] = iVar6;
    param_1[3] = iVar4;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = uStack_30;
    if (0 < (int)local_58) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(iVar6);
      return;
    }
  }
  return;
}

