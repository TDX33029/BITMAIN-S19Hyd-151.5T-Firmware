// FUN_0168ba9c @ 0168ba9c size=176 calls_out=3 calls_in=4
// strings: 

void FUN_0168ba9c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_1c;
  
  uVar2 = param_2[2];
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d077ec);
  }
  if ((*(byte *)param_2[1] & 2) != 0) {
    local_1c = uVar2 - 0xd & 3;
    if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_1c,&DAT_00533278,0);
    }
    if (uVar2 < 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(9,0xd,uVar2,&DAT_01d078dc);
    }
    *(uint *)((byte *)param_2[1] + 9) = uVar2 - 0xd >> 2;
  }
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return;
}

