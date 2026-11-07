// FUN_0155ee38 @ 0155ee38 size=424 calls_out=11 calls_in=7
// strings: properties

void FUN_0155ee38(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [148];
  uint local_124 [3];
  int local_118;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 auStack_100 [136];
  undefined1 local_78;
  int local_70 [5];
  undefined4 local_5c;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = param_3[2];
  FUN_0153bf58(&local_1e8,iVar3);
  FUN_0155f038(auStack_1b8,param_2,"properties",10);
  local_124[2] = *param_3;
  local_118 = param_3[1];
  if (local_124[2] == 0) {
    iVar3 = 0;
  }
  local_124[0] = (uint)(local_124[2] != 0);
  local_110 = 0;
  local_124[1] = 0;
  local_114 = local_124[0];
  local_10c = local_124[2];
  local_108 = local_118;
  local_104 = iVar3;
  while( true ) {
    uVar4 = FUN_01a41998(local_124);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    iVar3 = (int)uVar4;
    if (iVar3 == 0) {
      *param_1 = local_1e8;
      param_1[1] = uStack_1e4;
      param_1[2] = uStack_1e0;
      param_1[3] = uStack_1dc;
      param_1[4] = uStack_1d8;
      param_1[5] = uStack_1d4;
      param_1[6] = local_1d0;
      param_1[7] = uStack_1cc;
      param_1[8] = uStack_1c8;
      param_1[9] = uStack_1c4;
      param_1[10] = uStack_1c0;
      param_1[0xb] = uStack_1bc;
      FUN_014ff9e0(auStack_1b8);
      return;
    }
    FUN_0155f038(auStack_100,auStack_1b8,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    FUN_006666fc(&local_5c,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    uVar1 = FUN_016731b0(local_78,uVar2);
    FUN_0156aca8(&local_50,auStack_100,uVar2,uVar1);
    if (local_50 == 0) break;
    local_30 = local_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    local_34 = local_4c;
    local_38 = local_50;
    FUN_01541508(local_70,&local_1e8,&local_5c,&local_38);
    if (local_70[0] != 0) {
      FUN_014fdb74(local_70);
    }
    FUN_014ff9e0(auStack_100);
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  FUN_019bb7e0(local_5c,local_58);
  FUN_014ff9e0(auStack_100);
  FUN_014ff9e0(auStack_1b8);
  FUN_0152aae0(&local_1e8);
  return;
}

