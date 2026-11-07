// FUN_00f6c370 @ 00f6c370 size=280 calls_out=1 calls_in=2
// strings: 

void FUN_00f6c370(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  code *local_2c;
  int *local_28;
  code *local_24;
  int *local_20;
  code *local_1c;
  int *local_18;
  code *local_14;
  
  uVar1 = *param_1;
  uVar6 = uVar1;
  if ((int)uVar1 < 0) {
    uVar6 = -uVar1;
  }
  iVar3 = (int)(((ulonglong)uVar6 << 0x20) + (longlong)(int)uVar6 * -0x77777777 >> 0x20);
  iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  local_3c = uVar6 + iVar3 * -0x3c;
  uVar6 = iVar3 + (local_3c >> 0x1f);
  local_40 = 0x2b;
  if ((int)uVar1 < 0) {
    local_40 = 0x2d;
  }
  iVar3 = (int)(((ulonglong)uVar6 << 0x20) + (longlong)(int)uVar6 * -0x77777777 >> 0x20);
  if (local_3c < 0) {
    local_3c = local_3c + 0x3c;
  }
  local_34 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  local_38 = uVar6 + local_34 * -0x3c;
  local_34 = local_34 + (local_38 >> 0x1f);
  if (local_38 < 0) {
    local_38 = local_38 + 0x3c;
  }
  if (local_3c == 0) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    puVar2 = &DAT_0041413c;
  }
  else {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    local_18 = &local_3c;
    puVar2 = &DAT_0035d663;
    local_14 = FUN_00fac2b8;
  }
  local_20 = &local_38;
  local_28 = &local_34;
  local_30 = &local_40;
  local_1c = FUN_00fac2b8;
  local_24 = FUN_00fac2b8;
  local_2c = FUN_00faaf34;
  FUN_00fa948c(uVar4,uVar5,puVar2,&local_30);
  return;
}

