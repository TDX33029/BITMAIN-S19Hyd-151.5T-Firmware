// FUN_01a4aa04 @ 01a4aa04 size=196 calls_out=4 calls_in=4
// strings: internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

void FUN_01a4aa04(undefined4 *param_1,int param_2)

{
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_88 [84];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                 ,0xc5,&DAT_01d2c074);
  }
  FUN_01a61bd0(auStack_88);
  FUN_01bed4e2(&local_e0,auStack_88,0x54);
  if (*(int *)(param_2 + 0x30) != -0x80000000) {
    FUN_01a49de4((int *)(param_2 + 0x30));
  }
  if (local_34 == 2) {
    *param_1 = local_e0;
    param_1[1] = uStack_dc;
    param_1[2] = uStack_d8;
    param_1[0x15] = 8;
  }
  else {
    FUN_01bed4e2(param_1,&local_e0,0x54);
    param_1[0x15] = local_34;
    param_1[0x16] = local_30;
    param_1[0x17] = uStack_2c;
    param_1[0x18] = uStack_28;
    param_1[0x19] = uStack_24;
  }
  return;
}

