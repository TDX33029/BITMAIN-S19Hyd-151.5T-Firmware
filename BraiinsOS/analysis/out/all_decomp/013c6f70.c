// FUN_013c6f70 @ 013c6f70 size=188 calls_out=3 calls_in=4
// strings: 

void FUN_013c6f70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_c;
  
  uVar2 = param_2[2];
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_018942e8);
  }
  if ((*(byte *)param_2[1] & 2) != 0) {
    local_c = uVar2 - 0xd & 3;
    if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_c,&DAT_00568f30,0);
    }
    if (uVar2 < 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(9,0xd,uVar2,&DAT_018943a8);
    }
    *(uint *)((byte *)param_2[1] + 9) = uVar2 - 0xd >> 2;
  }
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return;
}

