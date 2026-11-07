// FUN_011b78b8 @ 011b78b8 size=244 calls_out=4 calls_in=0
// strings: 

void FUN_011b78b8(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char **local_20;
  undefined1 *local_1c;
  
  if (*param_3 == '\0') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  local_34 = param_3;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  local_20 = &local_34;
  local_1c = &LAB_011f23f8;
  FUN_00600d2c(&local_30,&DAT_005911d9,&local_20);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *puVar2 = 0x65707974;
  *param_1 = 1;
  param_1[1] = puVar1;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  *puVar1 = 4;
  puVar1[1] = puVar2;
  puVar1[2] = 4;
  puVar1[3] = local_30;
  puVar1[4] = local_2c;
  puVar1[5] = local_28;
  return;
}

