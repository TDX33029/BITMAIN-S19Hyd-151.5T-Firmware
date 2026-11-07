// FUN_0190dfd4 @ 0190dfd4 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_0190dfd4(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x24);
  uVar1 = (**(code **)(iVar3 + 0x24))(uVar2);
  uVar4 = (**(code **)(iVar3 + 0x1c))(uVar2);
  *(undefined8 *)(param_1 + 2) = uVar4;
  param_1[1] = extraout_r1;
  *param_1 = uVar1;
  return;
}

