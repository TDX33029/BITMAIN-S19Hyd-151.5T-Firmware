// FUN_01554e10 @ 01554e10 size=248 calls_out=4 calls_in=0
// strings: 

void FUN_01554e10(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  if (*param_3 == '\0') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    local_38 = param_3;
    puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    local_24 = &LAB_015388d8;
    local_28 = (undefined1 *)&local_38;
    FUN_00664898(&local_34,&DAT_005b66fe,&local_28);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    *param_1 = 1;
    param_1[1] = puVar1;
    *puVar2 = 0x65707974;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 0;
    *puVar1 = 4;
    puVar1[1] = puVar2;
    puVar1[2] = 4;
    puVar1[3] = local_34;
    puVar1[4] = local_30;
    puVar1[5] = local_2c;
  }
  return;
}

