// FUN_0152973c @ 0152973c size=300 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0152973c(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_70 [3];
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c [3];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar3 = 0;
  if ((*param_2 == '\x05') &&
     (local_50 = *(int *)(param_1 + 0x10), local_50 == *(int *)(param_2 + 0xc))) {
    local_4c[2] = *(uint *)(param_2 + 4);
    local_64 = *(undefined4 *)(param_1 + 0xc);
    local_70[2] = *(int *)(param_1 + 8);
    local_40 = *(undefined4 *)(param_2 + 8);
    local_2c = 0;
    if (local_4c[2] != 0) {
      local_2c = local_50;
    }
    local_4c[0] = (uint)(local_4c[2] != 0);
    if (local_70[2] == 0) {
      local_50 = 0;
    }
    local_70[0] = (uint)(local_70[2] != 0);
    local_24 = 0;
    local_28 = 0;
    local_38 = 0;
    local_4c[1] = 0;
    local_5c = 0;
    local_70[1] = 0;
    local_60 = local_70[0];
    local_58 = local_70[2];
    local_54 = local_64;
    local_3c = local_4c[0];
    local_34 = local_4c[2];
    local_30 = local_40;
    while( true ) {
      uVar4 = FUN_01a41998(local_70);
      iVar2 = (int)uVar4;
      uVar3 = 1;
      if (iVar2 == 0) break;
      uVar5 = FUN_01a41998(local_4c);
      iVar1 = (int)uVar5;
      if (iVar1 == 0) {
        return 1;
      }
      if (*(int *)(iVar2 + 8) != *(int *)(iVar1 + 8)) {
        return 0;
      }
      iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar1 + 4));
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = FUN_01578ae8((int)((ulonglong)uVar4 >> 0x20),(int)((ulonglong)uVar5 >> 0x20));
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return uVar3;
}

