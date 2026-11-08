// FUN_016da3d8 @ 016da3d8 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_016da3d8(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_28;
  uint local_24;
  uint uStack_20;
  int local_1c;
  
  if (param_3 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    local_28 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    if (uVar2 + (0x7fffffff < local_28) != 0) {
      local_1c = (int)uVar3 >> 0x1f;
      local_24 = uVar2;
      uStack_20 = uVar3;
      uVar4 = thunk_FUN_016dde14(0x19e,param_1,param_2,&local_28,param_4,8,0);
      if ((int)uVar4 != -0x26) {
        FUN_016d3496((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_2);
        return;
      }
      local_28 = 0x7fffffff - ((int)uVar2 >> 0x1f);
    }
    puVar1 = &local_28;
    local_24 = uVar3;
  }
  thunk_FUN_016dde14(0x150,param_1,param_2,puVar1,param_4,8,0);
  FUN_016d3496();
  return;
}

