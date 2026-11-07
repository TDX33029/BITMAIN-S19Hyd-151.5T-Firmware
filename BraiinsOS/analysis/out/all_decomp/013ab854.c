// FUN_013ab854 @ 013ab854 size=268 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013ab854(uint param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  if ((uint)param_3[5] < uVar2) {
    return 0;
  }
  if (*param_3 - 1U < 2) {
    if ((uint)param_3[3] <= uVar2) {
      return 0;
    }
    uVar1 = (uint)*(byte *)(param_3[2] + uVar2);
    bVar3 = *(byte *)(param_1 + 4) != uVar1;
    if (bVar3) {
      param_1 = (uint)*(byte *)(param_1 + 5);
    }
    if (bVar3 && param_1 != uVar1) {
      return 0;
    }
    local_14 = uVar2 + 1;
    local_18 = uVar2;
  }
  else {
    FUN_013ac66c(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar2,param_3[5]);
    if (local_1c == 0) {
      return 0;
    }
    if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  if (param_5 == 0) {
    return 1;
  }
  if (param_5 != 1) {
    local_14 = local_14 + 1;
  }
  *param_4 = local_18 + 1;
  if (param_5 != 1) {
    param_4[1] = local_14;
  }
  return 1;
}

