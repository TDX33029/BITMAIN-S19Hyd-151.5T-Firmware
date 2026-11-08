// FUN_01824c58 @ 01824c58 size=348 calls_out=4 calls_in=0
// strings: 

void FUN_01824c58(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  int iVar4;
  short local_54;
  undefined2 local_52;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 uStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    uVar3 = *param_2;
    iVar4 = param_2[1];
    param_2[2] = uVar3;
    param_2[3] = iVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e0ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e0ac);
  case 3:
    uVar3 = param_2[2];
    iVar4 = param_2[3];
  }
  (**(code **)(iVar4 + 0xc))(&local_54,uVar3);
  if (local_54 == 4) {
    *param_1 = 4;
    uVar1 = 3;
    goto LAB_01824da0;
  }
  FUN_018244e0(param_2[2],param_2[3],local_34,uStack_30,local_52);
  if (local_54 == 3) {
    uVar3 = 2;
    puVar2 = local_4c;
    if (local_50 == (undefined *)0x2) goto LAB_01824d84;
  }
  else {
    puVar2 = (undefined *)FUN_0183a5e4(&local_54);
    local_48 = &DAT_01d1e658;
    local_44 = extraout_r3;
LAB_01824d84:
    local_50 = puVar2;
    uVar3 = 3;
    local_4c = local_48;
  }
  *param_1 = uVar3;
  param_1[1] = local_50;
  param_1[2] = local_4c;
  uVar1 = 1;
  param_1[3] = local_48;
  param_1[4] = local_44;
LAB_01824da0:
  *(undefined1 *)(param_2 + 4) = uVar1;
  return;
}

