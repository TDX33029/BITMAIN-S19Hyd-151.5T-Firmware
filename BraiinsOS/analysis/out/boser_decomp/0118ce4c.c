// FUN_0118ce4c @ 0118ce4c size=224 calls_out=3 calls_in=2
// strings: filled must not become larger than initialized

void FUN_0118ce4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30;
  uint uStack_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uStack_2c = param_4[1];
  uVar1 = param_4[3];
  if (uStack_2c < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,uStack_2c,&DAT_01d292b4);
  }
  uVar2 = param_4[2];
  if (uStack_2c < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,uStack_2c,&DAT_01d2e4e0);
  }
  local_30 = *param_4;
  local_28 = uVar2;
  local_24 = uVar1;
  FUN_00eabeac(&local_20,param_2,param_3,&local_30);
  if ((char)local_20 == '\x04') {
    uVar2 = (local_24 - uVar1) + uVar2;
    if (uVar1 < uVar2) {
      param_4[3] = uVar2;
      uVar1 = uVar2;
    }
    if (uVar1 < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d20c4c);
    }
    param_4[2] = local_28;
    *(undefined1 *)param_1 = 4;
  }
  else {
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}

