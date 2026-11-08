// FUN_017cece4 @ 017cece4 size=232 calls_out=4 calls_in=0
// strings: 

void FUN_017cece4(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    uVar4 = *param_2;
    iVar5 = param_2[1];
    param_2[2] = uVar4;
    param_2[3] = iVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1c87c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1c87c);
  case 3:
    uVar4 = param_2[2];
    iVar5 = param_2[3];
  }
  (**(code **)(iVar5 + 0xc))(&local_34,uVar4);
  if (local_34 == (undefined *)0x2) {
    *param_1 = 4;
    uVar2 = 3;
    goto LAB_017cedb8;
  }
  FUN_017ce5f0(param_2[2],param_2[3]);
  if (((uint)local_34 & 1) == 0) {
    uVar4 = 2;
    puVar3 = local_2c;
    puVar1 = puStack_28;
    if (local_30 == (undefined *)0x2) goto LAB_017ced9c;
  }
  else {
    local_34 = local_30;
    local_30 = local_2c;
    local_2c = puStack_28;
    puStack_28 = (undefined *)uStack_24;
    puVar3 = (undefined *)FUN_017be1d4(&local_34);
    puVar1 = &DAT_01d1bf70;
LAB_017ced9c:
    local_2c = puVar1;
    uVar4 = 3;
    puStack_28 = local_2c;
    local_30 = puVar3;
  }
  *param_1 = uVar4;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  param_1[3] = puStack_28;
  param_1[4] = uStack_24;
  uVar2 = 1;
LAB_017cedb8:
  *(undefined1 *)(param_2 + 4) = uVar2;
  return;
}

