// FUN_0191e300 @ 0191e300 size=140 calls_out=1 calls_in=4
// strings: 

void FUN_0191e300(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(param_4 + 0xc))(param_3);
  uVar2 = param_2[1];
  (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0x18))((int)uVar3,uVar2,param_2[2]);
  if (*(char *)(param_2 + 3) == '\0') {
    FUN_0134bd64(*param_2,uVar2);
    uVar2 = 0x80000000;
  }
  else {
    uVar2 = *param_2;
    uVar1 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar1;
  }
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined8 *)(param_1 + 5) = uVar3;
  *param_1 = uVar2;
  return;
}

