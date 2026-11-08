// FUN_0128d6f8 @ 0128d6f8 size=244 calls_out=6 calls_in=1
// strings: 

void FUN_0128d6f8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 uStack_11;
  
  uVar3 = FUN_015bb1b4(param_2);
  if ((int)uVar3 == 0) {
    local_28 = &uStack_11;
    local_24 = &LAB_01293510;
    FUN_00600d2c(param_1,&DAT_00570448,&local_28);
    uVar2 = 0x146;
  }
  else {
    FUN_00c49650(&local_28,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    if ((char)local_28 == '\0') {
      param_1[2] = local_20;
      param_1[3] = local_1c;
      *param_1 = 0x80000005;
      return;
    }
    iVar1 = thunk_FUN_016d4a50(0x28);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x28);
    }
    FUN_016dd1aa(iVar1,&DAT_003b6b38,0x28);
    uVar2 = 0x149;
    *param_1 = 0x28;
    param_1[1] = iVar1;
    param_1[2] = 0x28;
  }
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = uVar2;
  return;
}

