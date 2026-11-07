// FUN_014bed7c @ 014bed7c size=200 calls_out=3 calls_in=1
// strings: 

void FUN_014bed7c(uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  undefined1 *local_28;
  code *local_24;
  undefined1 *local_20;
  code *local_1c;
  
  uVar3 = (uint)(param_2 < 0 && 0 < param_3);
  iVar4 = param_1 + uVar3;
  param_2 = param_2 + (uint)CARRY4(param_1,uVar3);
  uVar5 = FUN_01bf0fb0(iVar4,param_2,0x3c,0);
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar3 = (int)uVar2 >> 0x1f;
  uVar1 = (uint)uVar5 ^ uVar3;
  FUN_01bf0ff0(uVar1 - uVar3,(uVar2 ^ uVar3) - (uVar3 + (uVar1 < uVar3)),0x3c,0);
  local_38 = FUN_01bf0fb0(iVar4,param_2,0xe10,0);
  local_20 = auStack_30;
  local_1c = FUN_012fceb8;
  local_24 = FUN_012fceb8;
  local_28 = (undefined1 *)&local_38;
  FUN_012fa178(param_4,param_5,&DAT_004a51b6,&local_28);
  return;
}

