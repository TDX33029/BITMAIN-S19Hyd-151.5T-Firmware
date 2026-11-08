// FUN_013ac048 @ 013ac048 size=276 calls_out=3 calls_in=0
// strings: 

void FUN_013ac048(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  if (uVar2 <= (uint)param_3[5]) {
    if (*param_3 - 1U < 2) {
      if ((uint)param_3[3] <= uVar2) {
        return;
      }
      if (*(char *)(param_1 + 4) != *(char *)(param_3[2] + uVar2)) {
        return;
      }
    }
    else {
      FUN_013ac4b8(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar2,param_3[5]);
      if (local_1c == 0) {
        return;
      }
      if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
    }
    if (param_4[1] == 0) {
      local_18 = 0;
      local_1c = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_003ce9ea,0x2a,&local_1c,&DAT_018943f8,&DAT_018943e8);
    }
    if (*(char *)*param_4 == '\0') {
      iVar1 = param_4[2];
      *(char *)*param_4 = '\x01';
      param_4[2] = iVar1 + 1;
      return;
    }
  }
  return;
}

