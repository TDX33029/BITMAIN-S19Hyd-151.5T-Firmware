// FUN_015ba604 @ 015ba604 size=220 calls_out=1 calls_in=1
// strings: 

void FUN_015ba604(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar4 = param_2[4];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  param_2[4] = iVar4 + 1;
  local_45 = (undefined1)((uint)uVar3 >> 0x18);
  local_46 = (undefined1)((uint)uVar3 >> 0x10);
  local_48 = (undefined1)uVar3;
  local_34 = 0;
  local_49 = (undefined1)((uint)uVar2 >> 0x18);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  iVar4 = param_2[3] + iVar4;
  local_4a = (undefined1)((uint)uVar2 >> 0x10);
  local_4c = (undefined1)uVar2;
  local_50 = (undefined1)uVar1;
  local_4d = (undefined1)((uint)uVar1 >> 0x18);
  local_4e = (undefined1)((uint)uVar1 >> 0x10);
  local_4f = (undefined1)((uint)uVar1 >> 8);
  local_41 = (undefined1)((uint)(iVar4 * 0x1000000) >> 0x18);
  local_42 = (undefined1)((uint)iVar4 >> 8);
  local_43 = (undefined1)((uint)iVar4 >> 0x10);
  local_44 = (undefined1)((uint)iVar4 >> 0x18);
  local_47 = (undefined1)((uint)uVar3 >> 8);
  local_4b = (undefined1)((uint)uVar2 >> 8);
  FUN_005ea43c(&local_30,param_1,&local_50);
  param_3[3] = uStack_24;
  param_3[2] = uStack_28;
  param_3[1] = uStack_2c;
  *param_3 = local_30;
  return;
}

