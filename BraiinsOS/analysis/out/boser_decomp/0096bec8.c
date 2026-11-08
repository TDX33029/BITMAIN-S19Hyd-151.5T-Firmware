// FUN_0096bec8 @ 0096bec8 size=132 calls_out=4 calls_in=0
// strings: 

void FUN_0096bec8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_170 [188];
  undefined1 local_b4;
  undefined1 auStack_b0 [136];
  undefined4 local_28;
  undefined4 local_24;
  
  uVar4 = FUN_011d9e94(param_2,param_4);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar2 = *(undefined4 *)(param_3 + 0x88);
  uVar3 = *(undefined4 *)(param_3 + 0x8c);
  FUN_01bed4e2(auStack_b0,param_3,0x88);
  local_28 = uVar2;
  local_24 = uVar3;
  FUN_01a651bc(auStack_170,(int)uVar4,uVar1,auStack_b0);
  local_b4 = 0;
  FUN_01bed4e2(param_1,auStack_170,0xc0);
  FUN_017ce5f0((int)uVar4,uVar1);
  return;
}

