// FUN_00781854 @ 00781854 size=232 calls_out=3 calls_in=2
// strings: filled must not become larger than initialized

void FUN_00781854(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = param_4[1];
  uVar1 = param_4[3];
  if (local_2c < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,local_2c,&DAT_018acc80);
  }
  uVar2 = param_4[2];
  if (local_2c < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,local_2c,&DAT_018acc90);
  }
  local_30 = *param_4;
  local_28 = uVar2;
  local_24 = uVar1;
  FUN_0075d204(&local_20,param_2,param_3,&local_30);
  if ((char)local_20 != '\x04') {
    *param_1 = local_20;
    param_1[1] = local_1c;
    return;
  }
  uVar2 = (local_24 - uVar1) + uVar2;
  if (uVar1 < uVar2) {
    param_4[3] = uVar2;
    uVar1 = uVar2;
  }
  if (uVar1 < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_018a48a4);
  }
  param_4[2] = local_28;
  *(undefined1 *)param_1 = 4;
  return;
}

