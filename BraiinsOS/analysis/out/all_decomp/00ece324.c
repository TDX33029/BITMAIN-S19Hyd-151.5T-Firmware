// FUN_00ece324 @ 00ece324 size=368 calls_out=8 calls_in=1
// strings: 

int FUN_00ece324(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_58 [28];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  
  if (*param_1 != 0) {
    local_30 = 10;
    iVar1 = FUN_0157c50c(&local_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_00ecf2d0(param_1,&DAT_00563e40,0x10);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  local_3c = param_1[4];
  local_38 = param_1[5];
  local_34 = param_1[6];
  param_1[4] = -0x80000000;
  if (local_3c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  if ((param_2 & 1) == 0) {
    uVar2 = 4;
    local_28 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (local_28 == (undefined4 *)0x0) goto LAB_00ece488;
    *local_28 = 0x6f747561;
    local_2c = 4;
  }
  else {
    uVar2 = 6;
    local_28 = (undefined4 *)thunk_FUN_016d4a50(6);
    if (local_28 == (undefined4 *)0x0) {
LAB_00ece488:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
    *(undefined2 *)(local_28 + 1) = 0x6c61;
    *local_28 = 0x756e616d;
    local_2c = 6;
  }
  local_30 = CONCAT31(local_30._1_3_,3);
  local_24 = local_2c;
  FUN_00e9dc08(local_58,param_1 + 1,&local_3c,&local_30);
  if (local_58[0] != '\x06') {
    FUN_005c37bc(local_58);
  }
  return 0;
}

