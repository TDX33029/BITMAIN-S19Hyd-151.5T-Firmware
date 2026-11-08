// FUN_01426734 @ 01426734 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_01426734(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  puVar1 = (undefined4 *)FUN_0141ea00(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    (**(code **)*puVar1)(&local_28,puVar1 + 3,puVar1[1],puVar1[2]);
    local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)(puVar1 + 4));
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    param_1[3] = uStack_1c;
    param_1[4] = local_18;
  }
  return;
}

