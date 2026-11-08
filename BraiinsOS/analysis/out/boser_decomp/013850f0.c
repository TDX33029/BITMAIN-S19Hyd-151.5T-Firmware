// FUN_013850f0 @ 013850f0 size=340 calls_out=2 calls_in=6
// strings: invalid initial receive window

void FUN_013850f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  local_28 = 0;
  local_2c = 0;
  local_20 = 0;
  local_24 = 0;
  iVar1 = FUN_013808d0(&local_24,param_4);
  if (iVar1 != 0) {
    local_1c = 3;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("invalid initial receive window",0x1e,&local_1c,&DAT_01d20ac8);
  }
  if (!SCARRY4(local_20,param_4)) {
    local_20 = local_20 + param_4;
  }
  iVar1 = FUN_013808d0(&local_2c,param_3);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056c3c8,0x20,&local_1c,&DAT_01d20ac8);
  }
  param_1[0xe] = local_2c;
  param_1[6] = &DAT_3b9aca00;
  *(undefined1 *)(param_1 + 8) = 6;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  param_1[0x18] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0xf] = local_28;
  param_1[0x10] = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *(undefined4 *)((int)param_1 + 0xea) = 0;
  param_1[0x35] = param_2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x12] = local_24;
  param_1[0x13] = local_20;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

