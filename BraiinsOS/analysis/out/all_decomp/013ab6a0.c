// FUN_013ab6a0 @ 013ab6a0 size=224 calls_out=2 calls_in=0
// strings: 

void FUN_013ab6a0(undefined4 *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = param_4[4];
  uVar3 = 0;
  if ((uint)param_4[5] < uVar1) goto LAB_013ab74c;
  if (*param_4 - 1U < 2) {
    if ((uint)param_4[3] <= uVar1) goto LAB_013ab74c;
    uVar2 = (uint)*(byte *)(param_4[2] + uVar1);
    bVar4 = *(byte *)(param_2 + 4) != uVar2;
    if (bVar4) {
      param_2 = (uint)*(byte *)(param_2 + 5);
    }
    if (bVar4 && param_2 != uVar2) goto LAB_013ab74c;
    local_1c = uVar1 + 1;
  }
  else {
    FUN_013ac66c(&local_24,param_2 + 4,param_4[2],param_4[3],uVar1,param_4[5]);
    if (local_24 == 0) {
      *param_1 = 0;
      return;
    }
    if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
  }
  uVar3 = 1;
  param_1[1] = 0;
  param_1[2] = local_1c;
LAB_013ab74c:
  *param_1 = uVar3;
  return;
}

