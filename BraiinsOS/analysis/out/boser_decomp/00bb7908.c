// FUN_00bb7908 @ 00bb7908 size=260 calls_out=5 calls_in=3
// strings: 

void FUN_00bb7908(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x32)) {
  case 0:
    iVar2 = *(int *)*param_2;
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[1] = iVar2 + 0x6c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1832c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1832c);
  }
  FUN_00b99540(&local_30,param_2 + 1);
  if (local_30 == (undefined1 *)0x80000006) {
    uVar1 = 3;
    *param_1 = 3;
  }
  else {
    if (*(char *)(param_2 + 0x31) == '\x03') {
      FUN_00b99500(param_2 + 2);
    }
    if (local_30 == &DAT_80000005) {
      puVar3 = (undefined4 *)((uint)&local_58 | 4);
      *puVar3 = local_2c;
      puVar3[1] = uStack_28;
      puVar3[2] = uStack_24;
      local_58 = 2;
    }
    else {
      FUN_00e856e0(&local_58,&local_30);
    }
    *param_1 = local_58;
    param_1[1] = uStack_54;
    param_1[2] = uStack_50;
    param_1[3] = uStack_4c;
    uVar1 = 1;
    param_1[4] = local_48;
    param_1[5] = uStack_44;
    param_1[6] = uStack_40;
    param_1[7] = uStack_3c;
    param_1[8] = uStack_38;
  }
  *(undefined1 *)(param_2 + 0x32) = uVar1;
  return;
}

