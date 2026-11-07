// FUN_012a3e64 @ 012a3e64 size=476 calls_out=8 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_012a3e64(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_60;
  undefined4 local_5c;
  undefined1 *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  uVar4 = *param_2;
  uVar2 = FUN_01337c54(param_2[4]);
  if ((uVar4 & 1) != 0) {
    uVar2 = uVar2 + 9;
  }
  param_2[5] = uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar2);
  }
  if (uVar2 == 0) {
    puVar3 = &DAT_00000001;
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined1 *)thunk_FUN_016d4a50(uVar2);
    uVar4 = uVar2;
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  local_44 = 0;
  local_60 = 0x80000001;
  local_4c = puVar3;
  local_48 = uVar2;
  if ((*param_2 & 1) != 0) {
    uVar5 = *(ulonglong *)(param_2 + 2);
    if (uVar2 < 5) {
      local_30 = CONCAT35(local_30._5_3_,9);
      FUN_01328914(&local_40,&local_60,&local_30,1);
      if (local_40 != 4) goto LAB_012a3fcc;
    }
    else {
      *puVar3 = 9;
      local_44 = 1;
    }
    local_30 = uVar5;
    FUN_01328914(&local_40,&local_60,&local_30,8);
    if (local_40 != 4) goto LAB_012a3fcc;
  }
  FUN_01328b10(&local_40,&local_60,param_2[4]);
  if (local_40 == 4) {
    if (local_60 < 0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_30 = (ulonglong)local_48;
    local_3c = 0;
    local_40 = local_44;
    if (local_48 != local_44) {
      FUN_00faf26c(&local_30,&local_40,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x12a4040);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = uVar4;
    param_1[2] = puVar3;
    param_1[3] = uVar2;
    return;
  }
LAB_012a3fcc:
  *param_1 = 1;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  if (0 < (int)local_60) {
    thunk_FUN_016d3fb4(local_5c);
  }
  if (uVar4 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar3);
  return;
}

