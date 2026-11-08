// FUN_00b59634 @ 00b59634 size=300 calls_out=6 calls_in=0
// strings: 

void FUN_00b59634(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar2 = *param_2;
    piVar3 = (int *)thunk_FUN_016d4a50(8);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    puVar4 = &DAT_0186dac4;
    *(undefined1 *)(piVar3 + 1) = 0;
    *piVar3 = iVar2 + 0xc;
    param_2[1] = (int)piVar3;
    param_2[2] = (int)&DAT_0186dac4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870740);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870740);
  case '\x03':
    piVar3 = (int *)param_2[1];
    puVar4 = (undefined *)param_2[2];
  }
  (**(code **)(puVar4 + 0xc))(&local_88,piVar3,param_3);
  if (local_80 == &DAT_3b9aca04) {
    param_1[2] = &DAT_3b9aca04;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  local_58 = local_88;
  uStack_54 = uStack_84;
  puStack_50 = local_80;
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  local_40 = local_70;
  uStack_3c = uStack_6c;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  puVar5 = (undefined4 *)param_2[2];
  iVar2 = param_2[1];
  pcVar1 = (code *)*puVar5;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = puStack_50;
  param_1[3] = uStack_4c;
  param_1[4] = uStack_48;
  param_1[5] = uStack_44;
  param_1[6] = local_40;
  param_1[7] = uStack_3c;
  param_1[8] = uStack_38;
  param_1[9] = uStack_34;
  param_1[10] = uStack_30;
  param_1[0xb] = uStack_2c;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

