// FUN_00f3fafc @ 00f3fafc size=328 calls_out=8 calls_in=1
// strings: 

int FUN_00f3fafc(int *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint local_58 [7];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  
  if (*param_1 != 0) {
    local_58[0] = 10;
    iVar1 = FUN_0157c50c(local_58,0,0);
    return iVar1;
  }
  iVar1 = FUN_00f3f38c(param_1,param_2,7);
  if (iVar1 == 0) {
    if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
    }
    iVar2 = param_1[4];
    iVar1 = param_1[5];
    local_34 = param_1[6];
    param_1[4] = -0x80000000;
    if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
    }
    local_3c = iVar2;
    local_38 = iVar1;
    if (*param_3 == '\x06') {
      local_30[0] = '\0';
    }
    else {
      FUN_00f3f6a4(local_30,param_3);
      if (local_30[0] == '\x06') {
        if (iVar2 == 0) {
          return local_2c;
        }
        thunk_FUN_016d3fb4(iVar1);
        return local_2c;
      }
    }
    FUN_00f45bb4(local_58,param_1 + 1,&local_3c,local_30);
    iVar1 = 0;
    if ((local_58[0] & 0xff) != 6) {
      FUN_00f3732c(local_58);
      return 0;
    }
  }
  return iVar1;
}

