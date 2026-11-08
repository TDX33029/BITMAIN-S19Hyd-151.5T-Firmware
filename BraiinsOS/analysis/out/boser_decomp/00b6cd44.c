// FUN_00b6cd44 @ 00b6cd44 size=204 calls_out=5 calls_in=2
// strings: 

void FUN_00b6cd44(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xb4)) {
  case 0:
    *(undefined1 *)(param_2 + 0xb3) = 0;
    param_2[4] = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13cb8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13cb8);
  }
  FUN_00b6ce5c(&local_34,param_2 + 4);
  if (local_34 == &DAT_80000004) {
    *param_1 = 0x80000017;
    uVar1 = 3;
  }
  else {
    if (*(char *)(param_2 + 0xb3) == '\x03') {
      FUN_00b6cd04(param_2 + 8);
    }
    puVar2 = (undefined1 *)0x80000001;
    if (local_34 == (undefined1 *)0x80000003) {
      FUN_019bb7e0(local_30,local_2c);
      puVar2 = &DAT_80000016;
    }
    *param_1 = puVar2;
    param_1[1] = local_34;
    param_1[2] = local_30;
    param_1[3] = local_2c;
    param_1[4] = uStack_28;
    param_1[5] = uStack_24;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0xb4) = uVar1;
  return;
}

