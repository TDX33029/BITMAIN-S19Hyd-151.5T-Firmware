// FUN_01a6bd8c @ 01a6bd8c size=244 calls_out=3 calls_in=4
// strings: 

void FUN_01a6bd8c(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = param_4[1];
  uVar2 = param_4[2];
  if (local_2c < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,local_2c,local_2c,&DAT_01d2cefc);
  }
  local_24 = 0;
  local_28 = 0;
  local_2c = local_2c - uVar2;
  local_30 = *param_4 + uVar2;
  FUN_019df8a4(&local_20,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_3,
               &local_30);
  if ((char)local_20 == '\x04') {
    if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_28,local_2c,&DAT_01d2e4e0);
    }
    uVar1 = local_28 + uVar2;
    if (CARRY4(local_28,uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2cf0c);
    }
    uVar2 = param_4[3];
    *(undefined1 *)param_1 = 4;
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    param_4[2] = uVar1;
    param_4[3] = uVar2;
  }
  else {
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}

