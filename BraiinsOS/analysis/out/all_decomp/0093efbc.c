// FUN_0093efbc @ 0093efbc size=380 calls_out=5 calls_in=5
// strings: Testboard braiins 1362-1x1 | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

undefined4 FUN_0093efbc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  if (*param_1 == '\x01') {
    local_2c = 1;
    local_28 = 0;
    local_24 = &local_30;
    local_30 = 0;
    local_18 = 0;
    local_1c = &DAT_60000020;
    local_20 = (undefined4 *)&DAT_01868058;
    iVar1 = FUN_00faace8(&local_24,(&PTR_s_Testboard_braiins_1362_1x1_018b0898)[(byte)param_1[1]],
                         *(undefined4 *)(&DAT_0041ebd8 + (uint)(byte)param_1[1] * 4));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                   &DAT_01868070,&DAT_018af130);
    }
  }
  else {
    local_20 = (undefined4 *)&DAT_01868058;
    local_24 = &local_30;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    local_18 = 0;
    local_1c = &DAT_60000020;
    iVar1 = FUN_00934088(param_1[1],&local_24);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                   &DAT_01868070,&DAT_018af130);
    }
  }
  local_3c = local_2c;
  local_24 = &local_40;
  local_40 = local_30;
  local_38 = local_28;
  local_20 = &DAT_006043a8;
  uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_24);
  if (local_40 != 0) {
    thunk_FUN_016d3fb4(local_3c);
  }
  return uVar2;
}

