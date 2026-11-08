// FUN_0168298c @ 0168298c size=184 calls_out=4 calls_in=1
// strings: 

void FUN_0168298c(undefined4 *param_1,int param_2)

{
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_78 [84];
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00414516,0xc5,&DAT_018adb88);
  }
  FUN_0167827c(auStack_78);
  FUN_016dd1aa(&local_d0,auStack_78,0x54);
  if (*(int *)(param_2 + 0x30) != -0x80000000) {
    FUN_00919614((int *)(param_2 + 0x30));
  }
  if (local_24 == 2) {
    *param_1 = local_d0;
    param_1[1] = uStack_cc;
    param_1[2] = uStack_c8;
    param_1[0x15] = 8;
    return;
  }
  FUN_016dd1aa(param_1,&local_d0,0x54);
  param_1[0x16] = local_20;
  param_1[0x17] = uStack_1c;
  param_1[0x18] = uStack_18;
  param_1[0x19] = uStack_14;
  param_1[0x15] = local_24;
  return;
}

