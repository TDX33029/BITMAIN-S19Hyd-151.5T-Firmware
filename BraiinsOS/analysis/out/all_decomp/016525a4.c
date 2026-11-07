// FUN_016525a4 @ 016525a4 size=256 calls_out=3 calls_in=3
// strings: 

void FUN_016525a4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*param_2 == 1) {
    local_14 = param_2[1];
    local_20 = 1;
  }
  else if (param_2[3] == -1) {
    local_1c = 0;
    iVar1 = FUN_016da356(param_2[2],&local_1c,1);
    if (iVar1 == 0) {
      puVar2 = &local_20;
      local_1c = 0;
    }
    else {
      if (iVar1 == -1) {
        puVar2 = (uint *)FUN_016d2bc8();
        local_14 = *puVar2;
        local_20 = local_20 & 0xffffff00;
        local_18 = local_20;
        goto LAB_01652654;
      }
      local_20 = 1;
      *param_2 = 1;
      param_2[1] = local_1c;
      puVar2 = &local_24;
    }
    *puVar2 = local_1c;
    local_14 = local_24;
  }
  else {
    FUN_015f05c4(&local_1c,param_2[3],5);
    if (local_1c != 0) {
LAB_01652654:
      *param_1 = 1;
      param_1[1] = local_18;
      param_1[2] = local_14;
      return;
    }
    bVar3 = (local_18 & 1) != 0;
    if (bVar3) {
      *param_2 = 1;
      param_2[1] = local_14;
    }
    local_20 = (uint)bVar3;
  }
  *param_1 = 0;
  param_1[1] = local_20;
  param_1[2] = local_14;
  return;
}

