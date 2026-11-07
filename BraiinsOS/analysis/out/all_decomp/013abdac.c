// FUN_013abdac @ 013abdac size=216 calls_out=2 calls_in=0
// strings: 

void FUN_013abdac(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = param_4[4];
  uVar2 = 0;
  if (uVar1 <= (uint)param_4[5]) {
    if (*param_4 - 1U < 2) {
      if (((uint)param_4[3] <= uVar1) || (*(char *)(param_2 + 4) != *(char *)(param_4[2] + uVar1)))
      goto LAB_013abe50;
      local_1c = uVar1 + 1;
    }
    else {
      FUN_013ac4b8(&local_24,param_2 + 4,param_4[2],param_4[3],uVar1,param_4[5]);
      if (local_24 == 0) {
        *param_1 = 0;
        return;
      }
      if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
    }
    uVar2 = 1;
    param_1[1] = 0;
    param_1[2] = local_1c;
  }
LAB_013abe50:
  *param_1 = uVar2;
  return;
}

