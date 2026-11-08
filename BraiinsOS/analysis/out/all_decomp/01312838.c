// FUN_01312838 @ 01312838 size=380 calls_out=6 calls_in=0
// strings: 

void FUN_01312838(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 ***pppuVar2;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 ***local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  undefined4 **local_14;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 1;
  local_48 = 0x80000000;
  local_44 = param_3;
  iVar1 = FUN_012f6cb4(param_2);
  if (iVar1 == 0) {
    local_18 = &DAT_018d88ac;
    DataMemoryBarrier(0xb);
    if (DAT_018d88ac != 0) {
      local_14 = &local_18;
      local_28 = &local_14;
      FUN_015eedc4(&DAT_018d88ac,0,&local_28,&DAT_0188f1a4,&DAT_0188e9dc);
    }
    iVar1 = *(int *)(DAT_018d88b0 + 0x68);
    pppuVar2 = (undefined4 ***)0x3;
    if (*(char *)(iVar1 + 0xc) == '\x01') {
      local_24 = *(undefined4 *)(iVar1 + 4);
      local_20 = *(undefined4 *)(iVar1 + 8);
    }
    else {
      local_24 = 1;
      local_20 = 0;
    }
LAB_01312924:
    *param_1 = pppuVar2;
    param_1[1] = local_24;
    param_1[2] = local_20;
  }
  else {
    FUN_0130c364(param_2);
    FUN_0130d344(&local_28,param_2,&local_48);
    if (local_28 != (undefined4 ***)&DAT_00000004) {
      pppuVar2 = local_28;
      goto LAB_01312924;
    }
    if (0x80000000 < local_48) {
      *param_1 = 4;
      return;
    }
    FUN_013287bc(&local_28,&local_48);
    if (local_28 != (undefined4 ***)&DAT_00000004) {
      *param_1 = local_28;
      param_1[1] = local_24;
      param_1[2] = local_20;
      if (0x7fffffff < local_48) {
        return;
      }
      goto LAB_01312934;
    }
    *param_1 = 4;
  }
  if ((int)local_48 < 0) {
    return;
  }
LAB_01312934:
  if (local_48 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_44);
  return;
}

