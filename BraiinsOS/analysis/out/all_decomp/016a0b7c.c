// FUN_016a0b7c @ 016a0b7c size=544 calls_out=4 calls_in=1
// strings: stderr

/* WARNING: Type propagation algorithm not settling */

void FUN_016a0b7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_a8;
  undefined4 local_a4;
  uint ***local_a0;
  char *local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7f;
  undefined4 local_7b;
  uint ***local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  char **local_64;
  undefined4 *local_60;
  undefined4 ****local_5c;
  code *local_58;
  undefined4 local_54;
  undefined1 local_4c;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 ****local_38;
  code *local_34;
  char ***local_30;
  code *local_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  uint ****local_20;
  undefined4 *local_1c;
  char *local_18;
  undefined4 local_14;
  
  local_28 = (undefined1 *)&local_a8;
  local_7f = 0x1512;
  local_30 = &local_64;
  local_94 = -0x7ffffffe;
  local_58 = (code *)0x80000002;
  local_9c = "=";
  local_80 = 0;
  local_84 = 0;
  local_47 = 0;
  local_4b = 0;
  local_7b = 0x15;
  local_98 = 1;
  local_a0 = (undefined4 ***)0x80000000;
  local_88 = 1;
  local_3f = 0x15;
  local_43 = 0x15;
  local_4c = 1;
  local_5c = (undefined4 ****)0x5;
  local_64 = (char **)0x80000000;
  local_24 = &DAT_0157d360;
  local_2c = FUN_01273a6c;
  local_34 = FUN_01273a6c;
  local_a8 = param_2;
  local_a4 = param_3;
  local_60 = (undefined4 *)param_1;
  local_38 = &local_a0;
  FUN_00600d2c(&local_70,&DAT_005770ee,&local_38);
  if (((uint)local_64 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_60);
  }
  if ((-0x7ffffffe < (int)local_58) && (local_58 != (code *)0x0)) {
    thunk_FUN_016d3fb4(local_54);
  }
  local_38 = (undefined4 ****)local_70;
  local_34 = (code *)local_6c;
  local_30 = (char ***)uStack_68;
  if (((uint)local_a0 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_9c);
  }
  if ((-0x7ffffffe < local_94) && (local_94 != 0)) {
    thunk_FUN_016d3fb4(local_90);
  }
  local_1c = &DAT_006043a8;
  local_18 = "stderr";
  local_14 = 6;
  local_20 = (uint ****)&local_38;
  FUN_015ee5cc(&local_70,&DAT_018dd9d8,&DAT_00580c3b,&local_20);
  if ((char)local_70 != '\x04') {
    local_58 = FUN_015ef5b4;
    local_64 = &local_18;
    local_9c = (char *)local_6c;
    local_a0 = local_70;
    local_60 = &DAT_015bee04;
    local_5c = &local_a0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056faa6,&local_64,&DAT_018aab78);
  }
  if (local_38 != (undefined4 ****)0x0) {
    thunk_FUN_016d3fb4(local_34);
  }
  return;
}

