// FUN_00ece200 @ 00ece200 size=272 calls_out=7 calls_in=1
// strings: 

int FUN_00ece200(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  char local_50 [28];
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  if (*param_1 == 1) {
    if (param_3 == 0x1e) {
      thunk_FUN_016dd50a(param_2,&DAT_003c519d,0x1e);
    }
    local_28 = 10;
    iVar1 = FUN_0157c50c(&local_28,0,0);
    return iVar1;
  }
  iVar1 = FUN_00ecf2d0(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  local_34 = param_1[4];
  iStack_30 = param_1[5];
  iStack_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (local_34 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  local_28 = CONCAT31(CONCAT21(local_28._2_2_,param_4),1);
  FUN_00e9dc08(local_50,param_1 + 1,&local_34,&local_28);
  if (local_50[0] != '\x06') {
    FUN_005c37bc(local_50);
  }
  return 0;
}

