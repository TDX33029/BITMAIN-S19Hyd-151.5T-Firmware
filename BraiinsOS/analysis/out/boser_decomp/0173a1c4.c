// FUN_0173a1c4 @ 0173a1c4 size=120 calls_out=1 calls_in=1
// strings: 

void FUN_0173a1c4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  local_30 = 0;
  uStack_2c = 0x46;
  uStack_28 = 0;
  uStack_24 = 0;
  puVar1 = (undefined4 *)FUN_0160ab20(param_2,&local_30);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    (**(code **)*puVar1)(&local_30,puVar1 + 3,puVar1[1],puVar1[2]);
    local_20 = CONCAT31(local_20._1_3_,*(undefined1 *)(puVar1 + 4));
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    param_1[3] = uStack_24;
    param_1[4] = local_20;
  }
  return;
}

