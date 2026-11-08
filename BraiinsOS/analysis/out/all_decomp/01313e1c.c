// FUN_01313e1c @ 01313e1c size=488 calls_out=9 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_01313e1c(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  iVar2 = FUN_012f5598(param_2);
  if (iVar2 == 0) {
    local_28 = &DAT_018d88b4;
    DataMemoryBarrier(0xb);
    if (DAT_018d88b4 != 0) {
      local_38 = &local_28;
      local_58 = (int **)&local_38;
      FUN_015eedc4(&DAT_018d88b4,0,&local_58,&DAT_0188f03c,&DAT_0188e9dc);
    }
    uVar4 = 0;
    iVar2 = *(int *)(DAT_018d88b8 + 0x68);
    uVar5 = 1;
    if (*(char *)(iVar2 + 0xc) == '\x01') {
      uVar5 = *(undefined4 *)(iVar2 + 4);
      uVar4 = *(undefined4 *)(iVar2 + 8);
    }
    *param_1 = 1;
    param_1[1] = 3;
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    return;
  }
  piVar3 = (int *)FUN_0130f7f8(param_2);
  if ((int)piVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,piVar3);
  }
  if (piVar3 == (int *)0x0) {
    iVar2 = 1;
    piVar6 = (int *)0x0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(piVar3);
    piVar6 = piVar3;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,piVar3);
    }
  }
  local_3c = (int *)0x0;
  local_58 = (undefined4 **)0x80000001;
  local_44 = iVar2;
  local_40 = piVar3;
  FUN_01310120(&local_38,param_2,&local_58);
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
      pcVar1 = (code *)software_udf(0xfdee,0x1314004);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = piVar6;
    param_1[2] = iVar2;
    param_1[3] = piVar3;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = uStack_30;
    if (0 < (int)local_58) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (piVar6 != (int *)0x0) {
      thunk_FUN_016d3fb4(iVar2);
      return;
    }
  }
  return;
}

