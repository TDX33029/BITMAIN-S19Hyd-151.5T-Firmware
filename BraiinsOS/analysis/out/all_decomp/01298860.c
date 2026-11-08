// FUN_01298860 @ 01298860 size=396 calls_out=9 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_01298860(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_58;
  undefined4 local_54;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_28 [2];
  
  uVar3 = *(uint *)(param_2 + 0x2c);
  if (*(uint *)(param_2 + 0x28) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  if (uVar3 != 0) {
    iVar4 = *(int *)(param_2 + 0x24);
    iVar5 = uVar3 * 0x50;
    do {
      FUN_01298d30(iVar4);
      iVar4 = iVar4 + 0x50;
      iVar5 = iVar5 + -0x50;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_012980c0(param_2);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    iVar2 = 1;
    iVar4 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar5);
    iVar4 = iVar5;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  local_3c = 0;
  local_58 = 0x80000001;
  local_44 = iVar2;
  local_40 = iVar5;
  FUN_01297d60(&local_38,param_2,&local_58);
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
      pcVar1 = (code *)software_udf(0xfdee,0x12989ec);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = iVar4;
    param_1[2] = iVar2;
    param_1[3] = iVar5;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = uStack_30;
    if (0 < (int)local_58) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(iVar2);
      return;
    }
  }
  return;
}

