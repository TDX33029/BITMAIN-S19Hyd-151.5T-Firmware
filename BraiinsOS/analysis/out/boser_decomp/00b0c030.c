// FUN_00b0c030 @ 00b0c030 size=116 calls_out=2 calls_in=0
// strings: ^[a-zA-Z0-9@+:._-]+$ | BUG: invalid pool user regex

void FUN_00b0c030(int *param_1)

{
  undefined4 *puVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_0167a38c(&local_30,"^[a-zA-Z0-9@+:._-]+$",0x14);
  if (local_30 == 0) {
    puVar1 = (undefined4 *)((uint)&local_30 | 4);
    uStack_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: invalid pool user regex",0x1c,&uStack_20,&DAT_01c10bc8);
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  param_1[3] = iStack_24;
  return;
}

