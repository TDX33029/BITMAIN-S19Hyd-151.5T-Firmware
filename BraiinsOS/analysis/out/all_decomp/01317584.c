// FUN_01317584 @ 01317584 size=368 calls_out=8 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_01317584(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_28 [2];
  
  FUN_013171b0(&local_58);
  if (local_58 != 4) {
    *param_1 = 1;
    param_1[1] = local_58;
    param_1[2] = local_54;
    param_1[3] = uStack_50;
    return;
  }
  iVar2 = FUN_0130c068(param_2);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar2);
  }
  if (iVar2 == 0) {
    iVar3 = 1;
    iVar4 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar2);
    iVar4 = iVar2;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar2);
    }
  }
  local_3c = 0;
  local_58 = 0x80000001;
  local_44 = iVar3;
  local_40 = iVar2;
  FUN_0130cbfc(&local_38,param_2,&local_58);
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
      pcVar1 = (code *)software_udf(0xfdee,0x13176f4);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = iVar4;
    param_1[2] = iVar3;
    param_1[3] = iVar2;
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
      thunk_FUN_016d3fb4(iVar3);
      return;
    }
  }
  return;
}

