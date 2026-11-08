// FUN_0109f250 @ 0109f250 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_0109f250(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *local_18;
  uint uStack_14;
  undefined1 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  uVar1 = 1;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    uStack_14 = param_1[2];
    local_18 = (uint *)param_1[1];
    puVar2 = &DAT_00590e71;
    local_c = &DAT_0157d360;
  }
  else {
    if (uVar1 == 1) {
      puVar2 = &DAT_00590e71;
      local_c = (undefined4 *)&LAB_01110b14;
    }
    else {
      param_1 = param_1 + 1;
      local_c = (undefined4 *)&DAT_01090d8c;
      puVar2 = &DAT_00576015;
    }
    local_18 = param_1;
  }
  FUN_00fa948c(*param_2,param_2[1],puVar2,&local_10);
  return;
}

