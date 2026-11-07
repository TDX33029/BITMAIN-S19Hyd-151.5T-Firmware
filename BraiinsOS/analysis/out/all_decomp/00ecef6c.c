// FUN_00ecef6c @ 00ecef6c size=320 calls_out=8 calls_in=1
// strings: 

int FUN_00ecef6c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  iVar1 = FUN_00ecf2d0(param_1);
  if (iVar1 == 0) {
    if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
    }
    iVar3 = param_1[4];
    iVar2 = param_1[5];
    local_34 = param_1[6];
    param_1[4] = -0x80000000;
    if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
    }
    local_3c = iVar3;
    local_38 = iVar2;
    FUN_0157a2e8(local_30);
    if (local_30[0] == '\x06') {
      iVar1 = local_2c;
      if (iVar3 != 0) {
        thunk_FUN_016d3fb4(iVar2);
        return local_2c;
      }
    }
    else {
      FUN_00e9dc08(local_58,param_1 + 1,&local_3c,local_30);
      iVar1 = 0;
      if ((local_58[0] & 0xff) != 6) {
        FUN_005c37bc(local_58);
        return 0;
      }
    }
  }
  return iVar1;
}

