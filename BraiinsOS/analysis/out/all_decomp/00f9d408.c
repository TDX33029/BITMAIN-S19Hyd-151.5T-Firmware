// FUN_00f9d408 @ 00f9d408 size=384 calls_out=5 calls_in=3
// strings: 

void FUN_00f9d408(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined *local_24;
  undefined1 **local_20;
  code *local_1c;
  
  local_44 = param_3 + 0x2a;
  local_38 = 0;
  local_3c = 1;
  local_40 = 0;
  if (*(undefined1 **)(param_2 + 0x120) == (undefined1 *)0x0) {
    if (*(undefined1 **)(param_2 + 0x34) != &DAT_00110000) {
      local_20 = &local_30;
      local_28 = &local_44;
      local_1c = FUN_00faaf34;
      local_24 = &DAT_00fa17d8;
      local_30 = *(undefined1 **)(param_2 + 0x34);
      FUN_00fa948c(&local_40,&DAT_018808d4,&DAT_0035dbcc,&local_28);
    }
  }
  else {
    local_2c = *(undefined4 *)(param_2 + 0x124);
    local_20 = &local_30;
    local_28 = &local_44;
    local_1c = (code *)&DAT_0157d360;
    local_24 = &DAT_00fa17d8;
    local_30 = *(undefined1 **)(param_2 + 0x120);
    FUN_00fa948c(&local_40,&DAT_018808d4,&DAT_0035dbd8,&local_28);
  }
  FUN_00f9caac(&local_28,param_2,param_3,param_4);
  ppuVar3 = local_20;
  puVar2 = local_24;
  if ((undefined1 **)(local_40 - local_38) < local_20) {
    FUN_00f991dc(&local_40,local_38,local_20,1,1);
  }
  iVar1 = local_38;
  FUN_016dd1aa(local_3c + local_38,puVar2,ppuVar3);
  local_38 = iVar1 + (int)ppuVar3;
  if (local_28 != (int *)0x0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

