// FUN_013a93d0 @ 013a93d0 size=212 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_013a93d0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  if (uVar1 <= uVar2) {
    if (*param_3 - 1U < 2) {
      FUN_013c85b8(&local_1c,param_1,param_3[2],param_3[3],uVar1,uVar2);
    }
    else {
      FUN_013c8468(&local_1c,param_1,param_3[2],param_3[3],uVar1,uVar2);
    }
    if (local_1c != 0) {
      if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
      if (param_5 != 0) {
        *param_4 = local_18 + 1;
      }
      if (1 < param_5) {
        param_4[1] = local_14 + 1;
      }
      return 1;
    }
  }
  return 0;
}

