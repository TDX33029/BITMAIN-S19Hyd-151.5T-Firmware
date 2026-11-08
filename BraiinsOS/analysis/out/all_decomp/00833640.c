// FUN_00833640 @ 00833640 size=428 calls_out=6 calls_in=2
// strings: 

void FUN_00833640(int *param_1,int *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  int local_5c;
  undefined4 local_58;
  int local_54;
  char *local_50;
  undefined2 *local_4c;
  int *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  char local_31;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  
  iVar5 = param_2[1];
  local_3c = param_2[2];
  local_48 = &local_30;
  local_31 = (char)local_3c + (char)param_2[4] + '\x02';
  local_44 = 1;
  local_50 = &local_31;
  local_4c = (undefined2 *)0x1;
  local_30 = CONCAT31(local_30._1_3_,*(undefined1 *)((int)param_2 + 0x15));
  local_40 = iVar5;
  FUN_008adc98(&local_5c,&local_50,3);
  uVar1 = local_58;
  (*(code *)param_2[3])(&local_30,local_58,local_54);
  puVar4 = (undefined2 *)thunk_FUN_016d4a50(2);
  if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,2);
  }
  *puVar4 = 0xaa55;
  local_48 = (int *)0x2;
  local_50 = (char *)0x2;
  local_4c = puVar4;
  if (local_54 != 0) {
    FUN_007f5a44(&local_50,2,local_54,1,1);
  }
  piVar3 = local_48;
  puVar4 = local_4c;
  pcVar2 = local_50;
  FUN_016dd1aa((int)local_4c + (int)local_48,uVar1,local_54);
  uVar1 = local_2c;
  local_48 = (int *)((int)piVar3 + local_54);
  if ((uint)((int)pcVar2 - (int)local_48) < local_28) {
    FUN_007f5a44(&local_50,local_48,local_28,1,1);
    puVar4 = local_4c;
  }
  FUN_016dd1aa((int)puVar4 + (int)local_48,uVar1,local_28);
  *param_1 = (int)local_50;
  param_1[1] = (int)local_4c;
  param_1[2] = (int)local_48 + local_28;
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(local_2c);
  }
  if (local_5c != 0) {
    thunk_FUN_016d3fb4(local_58);
  }
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  return;
}

