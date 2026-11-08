// FUN_00d4a478 @ 00d4a478 size=156 calls_out=2 calls_in=1
// strings: 

int FUN_00d4a478(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint local_34 [3];
  int local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    local_28 = param_2[1];
    local_14 = param_2[2];
    local_20 = 0;
    local_34[1] = 0;
    local_34[2] = iVar1;
    local_1c = iVar1;
    local_18 = local_28;
  }
  local_34[0] = (uint)(iVar1 != 0);
  local_24 = local_34[0];
  do {
    uVar2 = FUN_01ad61b4(local_34);
    if ((int)uVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_00ec4e54(param_1,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  } while (iVar1 == 0);
  return iVar1;
}

