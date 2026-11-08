// FUN_00e7f88c @ 00e7f88c size=288 calls_out=4 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_00e7f88c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *local_158 [60];
  int local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  local_54 = *(undefined4 *)(param_2 + 0x10);
  local_50 = *(undefined4 *)(param_2 + 0x14);
  local_48 = *(undefined4 *)(param_2 + 0x20);
  local_4c = 0;
  if (*(int *)(param_2 + 0x18) != -0x80000000) {
    local_4c = *(undefined4 *)(param_2 + 0x1c);
  }
  FUN_00953fa8(local_158,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),&local_54,
               *(undefined1 *)(param_2 + 0x24));
  if (local_68 != -0x80000000) {
    FUN_016dd1aa(param_1,local_158,0x100);
    return;
  }
  local_38 = 0;
  local_30 = &DAT_0187aa88;
  local_34 = &local_40;
  local_40 = 0;
  local_28 = 0;
  local_44 = local_158[0];
  local_3c = 1;
  local_2c = &DAT_60000020;
  iVar1 = FUN_00604528(&local_44,&local_34);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_21,
                 &DAT_0187aaa0,&DAT_018af130);
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  (**(code **)*local_158[0])(local_158[0]);
  param_1[0x3c] = 0x80000000;
  return;
}

