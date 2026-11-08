// FUN_00fb974c @ 00fb974c size=328 calls_out=4 calls_in=6
// strings: 

void FUN_00fb974c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_4c;
  uint local_48;
  undefined1 auStack_44 [16];
  undefined4 *local_34;
  code *local_30;
  uint local_2c;
  code *local_28;
  uint local_24;
  code *local_20;
  uint local_1c;
  code *local_18;
  undefined1 uStack_11;
  
  local_4c = *param_1;
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
    local_34 = &local_4c;
    local_1c = (uint)local_34 | 3;
    local_24 = (uint)local_34 | 2;
    local_2c = (uint)local_34 | 1;
    local_18 = FUN_00fac0c8;
    local_20 = FUN_00fac0c8;
    local_28 = FUN_00fac0c8;
    local_30 = FUN_00fac0c8;
    FUN_00fa948c(*param_2,param_2[1],&DAT_0059406e,&local_34);
    return;
  }
  local_48 = 0;
  local_34 = &local_4c;
  local_1c = (uint)local_34 | 3;
  local_24 = (uint)local_34 | 2;
  local_2c = (uint)local_34 | 1;
  local_18 = FUN_00fac0c8;
  local_20 = FUN_00fac0c8;
  local_28 = FUN_00fac0c8;
  local_30 = FUN_00fac0c8;
  iVar1 = FUN_00fa948c(&local_48,&DAT_018812cc,&DAT_0059406e,&local_34);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_11,&DAT_018811fc,&DAT_018812e4);
  }
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_48,0xf,&DAT_018812f4);
  }
  FUN_00faace8(param_2,auStack_44);
  return;
}

