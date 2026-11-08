// FUN_00f3f5a0 @ 00f3f5a0 size=216 calls_out=6 calls_in=3
// strings: 

undefined4 FUN_00f3f5a0(int *param_1)

{
  int iVar1;
  int iVar2;
  char local_50 [28];
  int local_34;
  int local_30;
  int local_2c;
  char local_28 [4];
  undefined4 local_24;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  iVar2 = param_1[4];
  iVar1 = param_1[5];
  local_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  local_34 = iVar2;
  local_30 = iVar1;
  FUN_00f3f6a4(local_28);
  if (local_28[0] == '\x06') {
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(iVar1);
    }
    return local_24;
  }
  FUN_00f45bb4(local_50,param_1 + 1,&local_34,local_28);
  if (local_50[0] != '\x06') {
    FUN_00f3732c(local_50);
  }
  return 0;
}

