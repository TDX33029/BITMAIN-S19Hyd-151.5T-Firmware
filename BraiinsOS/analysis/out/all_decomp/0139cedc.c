// FUN_0139cedc @ 0139cedc size=232 calls_out=6 calls_in=0
// strings: 

void FUN_0139cedc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *local_24;
  byte **local_20;
  code *local_1c;
  
  if (param_1[0x254] == 2) {
    if ((*param_1 == 2 && param_1[1] == 0) ||
       (iVar1 = FUN_0139d250(param_1,param_2 + 0xd8,param_3,param_4), iVar1 != 0)) {
LAB_0139cf60:
      if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018936e0);
      }
      FUN_01385768(param_1[0x2a4],(char)param_1[0x2a9],(int *)(param_2 + 0x268),param_3,param_4);
      return;
    }
  }
  else {
    local_24 = (byte *)FUN_0139cfec(param_1 + 0x144,param_3,param_4);
    if (local_24 != (byte *)0x0) {
      if (1 < *local_24) {
        local_20 = &local_24;
        local_1c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_20,&DAT_01892790);
      }
      thunk_FUN_016d3fb4();
      goto LAB_0139cf60;
    }
  }
  return;
}

