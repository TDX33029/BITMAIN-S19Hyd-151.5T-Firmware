// FUN_013a9198 @ 013a9198 size=200 calls_out=3 calls_in=0
// strings: 

void FUN_013a9198(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar1 = param_4[4];
  uVar2 = param_4[5];
  if (uVar1 <= uVar2) {
    if (*param_4 - 1U < 2) {
      FUN_013c85b8(&local_1c,param_2,param_4[2],param_4[3],uVar1,uVar2);
    }
    else {
      FUN_013c8468(&local_1c,param_2,param_4[2],param_4[3],uVar1,uVar2);
    }
    if (local_1c != 0) {
      if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
      param_1[1] = local_18;
      param_1[2] = local_14;
      param_1[3] = 0;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}

