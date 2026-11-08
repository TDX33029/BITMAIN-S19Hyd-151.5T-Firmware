// FUN_016bf83c @ 016bf83c size=312 calls_out=6 calls_in=2
// strings: 

int FUN_016bf83c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_340;
  uint local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  int local_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_30;
  int local_2c;
  int local_28;
  
  local_340 = 0;
  iVar2 = FUN_01be5878(&local_340,0x40,0x200);
  if ((iVar2 != 0) || (local_340 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(0x40,0x200);
  }
  local_28 = 0;
  local_2c = local_340;
  local_30 = 8;
  iVar2 = local_340;
  do {
    iVar1 = local_28;
    local_330 = 0;
    local_334 = 4;
    local_338 = 0;
    local_33c = local_33c & 0xffffff00;
    local_340 = 0;
    if (local_28 == local_30) {
      FUN_016b7b20(&local_30);
      iVar2 = local_2c;
    }
    iStack_3c = iVar1 + 1;
    piVar3 = (int *)(iVar2 + iVar1 * 0x40);
    *piVar3 = local_340;
    piVar3[1] = local_33c;
    piVar3[2] = local_338;
    piVar3[3] = local_334;
    piVar3[4] = local_330;
    piVar3[5] = local_32c;
    piVar3[6] = iStack_328;
    piVar3[7] = iStack_324;
    piVar3[8] = iStack_320;
    piVar3[9] = iStack_31c;
    piVar3[10] = local_318;
    piVar3[0xb] = iStack_314;
    piVar3[0xc] = iStack_310;
    piVar3[0xd] = iStack_30c;
    piVar3[0xe] = iStack_308;
    piVar3[0xf] = iStack_304;
    local_28 = iStack_3c;
  } while (iStack_3c != 8);
  local_44 = local_30;
  iStack_40 = local_2c;
  local_48 = 0;
  local_340 = 2;
  local_50 = param_1;
  local_4c = param_2;
  iVar2 = thunk_FUN_01be5118(0x308);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x308);
  }
  FUN_01bed4e2(iVar2,&local_340,0x308);
  return iVar2;
}

