// FUN_00d50b90 @ 00d50b90 size=148 calls_out=2 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00d50bfc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00d50b90(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_2c = *(int *)(param_3 + 0x44);
  local_28 = *(undefined4 *)(param_3 + 0x48);
  uVar1 = 0;
  local_14 = *(undefined4 *)(param_3 + 0x4c);
  if (local_2c == 0) {
    local_14 = 0;
  }
  local_34 = (uint)(local_2c != 0);
  local_20 = 0;
  local_30 = 0;
  local_24 = local_34;
  local_1c = local_2c;
  local_18 = local_28;
  uVar2 = FUN_00c38908(&local_34);
  while ((int)uVar2 != 0) {
    uVar1 = FUN_016d5578(uVar1,param_2,(int)*(undefined8 *)((int)((ulonglong)uVar2 >> 0x20) + 0x30))
    ;
    uVar2 = FUN_00c38908(&local_34);
  }
  return uVar1;
}

