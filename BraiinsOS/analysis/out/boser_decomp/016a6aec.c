// FUN_016a6aec @ 016a6aec size=204 calls_out=3 calls_in=0
// strings: invalid match span

undefined4
FUN_016a6aec(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = param_3[4];
  uVar3 = 0;
  uVar2 = param_3[5];
  if (uVar1 <= uVar2) {
    if (*param_3 - 1U < 2) {
      FUN_016bc70c(&local_24,param_1,param_3[2],param_3[3],uVar1,uVar2);
    }
    else {
      FUN_016bc5b0(&local_24,param_1,param_3[2],param_3[3],uVar1,uVar2);
    }
    if (local_24 == 1) {
      if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
      uVar3 = 1;
      if (param_5 != 0) {
        *param_4 = local_20 + 1;
      }
      if (1 < param_5) {
        param_4[1] = local_1c + 1;
      }
    }
  }
  return uVar3;
}

