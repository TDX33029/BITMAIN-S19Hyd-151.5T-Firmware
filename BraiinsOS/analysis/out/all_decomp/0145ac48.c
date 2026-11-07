// FUN_0145ac48 @ 0145ac48 size=224 calls_out=3 calls_in=0
// strings: 

void FUN_0145ac48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
    FUN_00faa36c(uVar2,local_2c,local_2c,&DAT_018a5e10);
  }
  local_24 = 0;
  local_28 = 0;
  local_2c = local_2c - uVar2;
  local_30 = *param_4 + uVar2;
  FUN_01640de0(&local_20,param_2,param_3,&local_30);
  if ((char)local_20 != '\x04') {
    *param_1 = local_20;
    param_1[1] = local_1c;
    return;
  }
  if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_28,local_2c,&DAT_018acc90);
  }
  uVar1 = local_28 + uVar2;
  if (CARRY4(local_28,uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_018a5e00);
  }
  uVar2 = param_4[3];
  *(undefined1 *)param_1 = 4;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  param_4[2] = uVar1;
  param_4[3] = uVar2;
  return;
}

