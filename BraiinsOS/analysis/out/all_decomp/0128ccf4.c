// FUN_0128ccf4 @ 0128ccf4 size=236 calls_out=5 calls_in=1
// strings: 

void FUN_0128ccf4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = FUN_015bb1b4(param_2);
  if ((int)uVar2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0x80000005;
    return;
  }
  FUN_00c49650(local_20,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  if (local_20[0] == '\0') {
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = local_18;
    param_1[5] = local_14;
    *param_1 = 0x80000005;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(0x28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar1,&DAT_003b6b38,0x28);
  *param_1 = 0x28;
  param_1[1] = iVar1;
  param_1[2] = 0x28;
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = 0x158;
  return;
}

