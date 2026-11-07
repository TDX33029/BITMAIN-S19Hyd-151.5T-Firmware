// FUN_00e9135c @ 00e9135c size=396 calls_out=8 calls_in=2
// strings: 

void FUN_00e9135c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_110 [88];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [84];
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 **local_30;
  code *local_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x32)) {
  case 0:
    iVar3 = *(int *)*param_2;
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[1] = iVar3 + 0x6c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1816c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1816c);
  }
  FUN_00b99540(&local_a8,param_2 + 1);
  uStack_b0 = uStack_9c;
  uStack_b4 = local_a0;
  local_b8 = local_a4;
  piVar1 = local_a8;
  if (local_a8 == (int *)0x80000006) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    if (*(char *)(param_2 + 0x31) == '\x03') {
      FUN_00b99500(param_2 + 2);
    }
    if (piVar1 == (int *)&DAT_80000005) {
      local_a4 = 0;
      local_a8 = (int *)0x3;
    }
    else {
      local_30 = &local_40;
      local_40 = piVar1;
      local_3c = local_b8;
      uStack_38 = uStack_b4;
      uStack_34 = uStack_b0;
      local_2c = FUN_00aeeb78;
      FUN_00664898(&local_a8,&DAT_005ba7dc,&local_30);
      local_30 = (undefined4 **)local_a8;
      local_2c = (code *)local_a4;
      uStack_28 = local_a0;
      FUN_01a70fd4(&local_a8,0xd,&local_30);
      FUN_00c42328(&local_40);
      local_b8 = local_a0;
      uStack_b4 = uStack_9c;
      uStack_b0 = uStack_98;
      FUN_01bed4e2(auStack_110,auStack_94,0x54);
    }
    *param_1 = local_a8;
    param_1[1] = local_a4;
    param_1[2] = local_b8;
    param_1[3] = uStack_b4;
    param_1[4] = uStack_b0;
    FUN_01bed4e2(param_1 + 5,auStack_110,0x54);
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x32) = uVar2;
  return;
}

