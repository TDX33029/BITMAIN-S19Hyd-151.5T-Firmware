// FUN_00821d4c @ 00821d4c size=460 calls_out=7 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00821f08) */

void FUN_00821d4c(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  undefined1 local_34;
  byte *local_30;
  code *local_2c;
  undefined4 uStack_28;
  
  FUN_00821f3c(&local_44);
  if ((char)local_44 == '\x01') {
    *param_1 = 0x80000000;
    param_1[1] = local_40;
    return;
  }
  if (((param_3 & 0xff) == 0) || ((param_3 & 0xff) != 1)) {
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) {
      local_2c = FUN_00facb58;
      local_30 = param_2;
      FUN_00600d2c(&local_44,&DAT_00343198,&local_30);
      uVar3 = FUN_00808de4(&local_44);
      goto LAB_00821e24;
    }
    uVar3 = 2;
    pbVar2 = (byte *)thunk_FUN_016d4a50(2);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,2);
    }
    pbVar2[1] = 0x20;
    *pbVar2 = bVar1;
    local_3c = 2;
  }
  else {
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) {
      local_2c = FUN_00facb58;
      local_30 = param_2;
      FUN_00600d2c(&local_44,&DAT_00343198,&local_30);
      uVar3 = FUN_00808de4(&local_44);
LAB_00821e24:
      *param_1 = 0x80000000;
      param_1[1] = uVar3;
      return;
    }
    uVar3 = 4;
    pbVar2 = (byte *)thunk_FUN_016d4a50(4);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,4);
    }
    pbVar2[3] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0x20;
    local_3c = 4;
    *pbVar2 = bVar1;
  }
  local_38 = local_3c + 4;
  local_34 = local_44._1_1_;
  local_44 = uVar3;
  local_40 = pbVar2;
  FUN_00873188(&local_30,&local_44,param_3);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uStack_28;
  thunk_FUN_016d3fb4(pbVar2);
  return;
}

