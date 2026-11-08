// FUN_013a8410 @ 013a8410 size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_013a8410(int param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  if (uVar1 <= uVar2) {
    if (*param_3 - 1U < 2) {
      FUN_013c8af0(&local_24,param_1 + 4,param_3[2],param_3[3],uVar1,uVar2);
    }
    else {
      FUN_013c8974(&local_24,param_1 + 4,param_3[2],param_3[3],uVar1,uVar2);
    }
    if (local_24 != 0) {
      if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
      if (param_5 != 0) {
        *param_4 = local_20 + 1;
      }
      if (1 < param_5) {
        param_4[1] = local_1c + 1;
      }
      return 1;
    }
  }
  return 0;
}

