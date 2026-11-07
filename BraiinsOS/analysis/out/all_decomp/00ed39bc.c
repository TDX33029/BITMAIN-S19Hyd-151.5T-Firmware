// FUN_00ed39bc @ 00ed39bc size=336 calls_out=9 calls_in=1
// strings: 

int FUN_00ed39bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char local_60 [28];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_1 != 0) {
    local_38 = 10;
    iVar1 = FUN_0157c50c(&local_38,0,0);
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
  local_44 = param_1[4];
  local_40 = param_1[5];
  local_3c = param_1[6];
  param_1[4] = -0x80000000;
  if (local_44 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  if (param_5 < 0) {
    uVar2 = 0;
LAB_00ed3a34:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,param_5);
  }
  if (param_5 == 0) {
    iVar3 = 1;
    iVar1 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(param_5);
    if (iVar3 == 0) {
      uVar2 = 1;
      goto LAB_00ed3a34;
    }
    iVar1 = param_5;
  }
  FUN_016dd1aa(iVar3,param_4,param_5);
  iStack_2c = param_5;
  local_38 = CONCAT31(local_38._1_3_,3);
  local_34 = iVar1;
  iStack_30 = iVar3;
  FUN_00e9dc08(local_60,param_1 + 1,&local_44,&local_38);
  if (local_60[0] != '\x06') {
    FUN_005c37bc(local_60);
  }
  return 0;
}

