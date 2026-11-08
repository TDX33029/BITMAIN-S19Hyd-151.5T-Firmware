// FUN_019ea8f8 @ 019ea8f8 size=236 calls_out=3 calls_in=4
// strings: 

void FUN_019ea8f8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
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
    iVar1 = FUN_01bea62a(param_2[2],&local_1c,1);
    if (iVar1 == 0) {
      puVar2 = &local_20;
      local_1c = 0;
    }
    else {
      if (iVar1 == -1) {
        puVar2 = (uint *)FUN_01be3244();
        local_14 = *puVar2;
        local_20 = local_20 & 0xffffff00;
        local_18 = local_20;
        goto LAB_019ea9a0;
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
    FUN_019a8b40(&local_1c,param_2[3],5);
    if (local_1c != 0) {
LAB_019ea9a0:
      uVar3 = 1;
      local_20 = local_18;
      goto LAB_019ea9d4;
    }
    bVar4 = (local_18 & 1) != 0;
    if (bVar4) {
      *param_2 = 1;
      param_2[1] = local_14;
    }
    local_20 = (uint)bVar4;
  }
  uVar3 = 0;
LAB_019ea9d4:
  *param_1 = uVar3;
  param_1[1] = local_20;
  param_1[2] = local_14;
  return;
}

