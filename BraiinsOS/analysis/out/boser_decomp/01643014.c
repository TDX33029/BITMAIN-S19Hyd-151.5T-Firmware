// FUN_01643014 @ 01643014 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_01643014(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 uStack_11;
  
  puVar1 = (uint *)(param_2 + 2);
  if (*param_2 == 1) {
    uVar2 = param_2[3];
    local_20 = *(undefined8 *)puVar1;
    if ((int)uVar2 < 0) {
      local_28[0] = 1;
      uVar3 = FUN_01967740(local_28,&uStack_11,&DAT_01d064f8);
      param_1[1] = uVar3;
    }
    else {
      param_1[2] = *puVar1;
      param_1[3] = uVar2;
    }
    *param_1 = (uint)((int)uVar2 < 0);
  }
  else if (*param_2 == 2) {
    uVar2 = *puVar1;
    uVar3 = param_2[3];
    *param_1 = 0;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  else {
    local_20 = *(undefined8 *)puVar1;
    local_28[0] = 3;
    uVar2 = FUN_01967538(local_28,&uStack_11,&DAT_01d064f8);
    *param_1 = 1;
    param_1[1] = uVar2;
  }
  return;
}

