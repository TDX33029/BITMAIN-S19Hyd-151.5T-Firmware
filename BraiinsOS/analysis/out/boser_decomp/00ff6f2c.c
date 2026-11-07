// FUN_00ff6f2c @ 00ff6f2c size=172 calls_out=3 calls_in=2
// strings: 

void FUN_00ff6f2c(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int extraout_r1;
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [148];
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  if (*param_2 < 2) {
    FUN_01bed4e2(auStack_b8,param_3,0x90);
    FUN_011ddc04(param_1,uVar2,uVar1,auStack_b8);
  }
  else {
    (**(code **)(uVar1 + 0xc))(uVar2);
    uVar3 = (**(code **)(extraout_r1 + 0x10))();
    FUN_01bed4e2(auStack_b8,param_3,0x90);
    FUN_011ddc04(param_1,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),auStack_b8);
    FUN_00fe4378(uVar2,uVar1);
  }
  return;
}

