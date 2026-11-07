// FUN_00677ad8 @ 00677ad8 size=184 calls_out=2 calls_in=2
// strings: 

void FUN_00677ad8(uint *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined1 uStack_9;
  
  puVar2 = (uint *)(param_2 + 2);
  if (*param_2 == 1) {
    uVar3 = *puVar2;
    uVar1 = param_2[3];
    *param_1 = 0;
    param_1[2] = uVar3;
    param_1[3] = uVar1;
  }
  else if (*param_2 == 2) {
    uVar3 = param_2[3];
    local_18 = *(undefined8 *)puVar2;
    if ((int)uVar3 < 0) {
      local_20[0] = 2;
      uVar1 = FUN_01967740(local_20,&uStack_9,&DAT_01c2375c);
      param_1[1] = uVar1;
    }
    else {
      param_1[2] = *puVar2;
      param_1[3] = uVar3;
    }
    *param_1 = (uint)((int)uVar3 < 0);
  }
  else {
    local_18 = *(undefined8 *)puVar2;
    local_20[0] = 3;
    uVar3 = FUN_01967538(local_20,&uStack_9,&DAT_01c2375c);
    *param_1 = 1;
    param_1[1] = uVar3;
  }
  return;
}

