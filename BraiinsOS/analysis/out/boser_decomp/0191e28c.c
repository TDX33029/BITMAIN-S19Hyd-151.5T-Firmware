// FUN_0191e28c @ 0191e28c size=88 calls_out=0 calls_in=2
// strings: 

void FUN_0191e28c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = (*param_5)(param_4);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  uVar1 = (undefined4)uVar4;
  pcVar3 = *(code **)(iVar2 + 0x18);
  (*pcVar3)(uVar1,param_2,param_3);
  (*pcVar3)(uVar1,param_6,param_7);
  (**(code **)(iVar2 + 0x14))(param_1,uVar1);
  return;
}

