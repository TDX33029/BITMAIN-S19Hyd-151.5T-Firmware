// FUN_00926834 @ 00926834 size=456 calls_out=9 calls_in=2
// strings: 

void FUN_00926834(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined1 auStack_120 [88];
  undefined *local_c8;
  undefined *puStack_c4;
  undefined *puStack_c0;
  undefined4 *local_b8;
  undefined *local_b4;
  undefined *local_b0;
  undefined *local_ac;
  undefined *puStack_a8;
  undefined1 auStack_a4 [84];
  undefined4 *local_50;
  undefined *local_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x32)) {
  case 0:
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[1] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0c0e8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0c0e8);
  }
  FUN_0092895c(&local_b8,param_2 + 1);
  puStack_c0 = local_ac;
  puStack_c4 = local_b0;
  local_c8 = local_b4;
  puVar3 = local_b8;
  if (local_b8 == (undefined4 *)0x80000006) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar1 = 3;
  }
  else {
    if (*(char *)(param_2 + 0x31) == '\x03') {
      FUN_009267f4(param_2 + 2);
    }
    if (puVar3 == (undefined4 *)&DAT_80000005) {
      puVar4 = (undefined *)0x0;
      puVar3 = (undefined4 *)&DAT_00000003;
    }
    else {
      local_50 = puVar3;
      local_b8 = &local_30;
      local_4c = local_c8;
      puStack_48 = puStack_c4;
      puStack_44 = puStack_c0;
      local_28 = 0;
      local_30 = 0;
      local_ac = (undefined *)0x0;
      local_2c = 1;
      local_b0 = (undefined *)0x60000020;
      local_b4 = &DAT_01c0c0b0;
      iVar2 = FUN_00aeeb78(&local_50,&local_b8);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c0c0d8,&DAT_01d30334);
      }
      local_40 = local_30;
      uStack_3c = local_2c;
      uStack_38 = local_28;
      FUN_01a70fd4(&local_b8,0xd);
      FUN_00927378(&local_50);
      puVar4 = local_b4;
      puVar3 = local_b8;
      local_c8 = local_b0;
      puStack_c4 = local_ac;
      puStack_c0 = puStack_a8;
      FUN_01bed4e2(auStack_120,auStack_a4,0x54);
    }
    *param_1 = puVar3;
    param_1[1] = puVar4;
    param_1[2] = local_c8;
    param_1[3] = puStack_c4;
    param_1[4] = puStack_c0;
    FUN_01bed4e2(param_1 + 5,auStack_120,0x54);
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0x32) = uVar1;
  return;
}

