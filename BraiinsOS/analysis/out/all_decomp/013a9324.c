// FUN_013a9324 @ 013a9324 size=164 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013a9324(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  uVar1 = 0;
  if (uVar2 <= uVar3) {
    if (*param_3 - 1U < 2) {
      FUN_013c85b8(&local_1c,param_1,param_3[2],param_3[3],uVar2,uVar3);
    }
    else {
      FUN_013c8468(&local_1c,param_1,param_3[2],param_3[3],uVar2,uVar3);
    }
    uVar1 = 0;
    if ((local_1c != 0) && (uVar1 = 1, local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  return uVar1;
}

