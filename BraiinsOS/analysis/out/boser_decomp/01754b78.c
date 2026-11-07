// FUN_01754b78 @ 01754b78 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_01754b78(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  (**(code **)(param_2[1] + 0xc))(&local_24,*param_2);
  if (local_24 == 1) {
    uVar1 = 1;
  }
  else {
    uVar4 = 0;
    if (local_20 == 0) {
      puVar2 = &local_28;
      uVar5 = (ulonglong)local_28;
    }
    else {
      uVar5 = FUN_016f8580(local_20,local_1c);
      puVar2 = &local_2c;
    }
    local_28 = (uint)uVar5;
    *puVar2 = (uint)(uVar5 >> 0x20);
    if (local_28 == 0) {
      iVar3 = 4;
    }
    else {
      param_1[1] = local_28;
      iVar3 = 8;
      uVar4 = local_2c;
    }
    *(uint *)((int)param_1 + iVar3) = uVar4;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

