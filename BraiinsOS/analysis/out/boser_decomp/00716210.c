// FUN_00716210 @ 00716210 size=224 calls_out=1 calls_in=0
// strings: `value` is less than than `lower`

void FUN_00716210(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint local_38 [2];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar2 = param_2[2];
  (**(code **)(param_2[1] + 0x14))(local_38,*param_2);
  if (local_24 == 0 && (uVar2 <= local_28) <= local_24) {
    if ((local_38[0] & 1) == 0) {
      local_2c = 0;
      local_30 = uVar2;
    }
    else {
      bVar1 = (uVar2 <= local_30) <= local_2c;
      if (local_2c == 0 && bVar1) {
        uVar2 = local_30;
      }
      uVar3 = 0;
      if (local_2c == 0 && bVar1) {
        uVar3 = local_2c;
      }
      if (uVar3 <= local_24 && (uint)(local_28 <= uVar2) <= uVar3 - local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74("`value` is less than than `lower`",0x21,&DAT_01c07664);
      }
      local_30 = uVar2;
      local_2c = uVar3;
    }
  }
  else {
    local_24 = 0;
    local_2c = 0;
    local_30 = uVar2;
    local_28 = uVar2;
  }
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_30;
  param_1[3] = local_2c;
  param_1[4] = local_28;
  param_1[5] = local_24;
  return;
}

