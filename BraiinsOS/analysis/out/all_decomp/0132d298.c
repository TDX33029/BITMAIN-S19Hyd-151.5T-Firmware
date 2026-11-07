// FUN_0132d298 @ 0132d298 size=136 calls_out=1 calls_in=0
// strings: 

void FUN_0132d298(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_21;
  undefined1 *local_20;
  code *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1[4] == '\x01') {
    local_21 = puVar1[5];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    puVar2 = &DAT_00576294;
    local_14 = &LAB_00fac484;
    local_1c = FUN_00fac0c8;
    local_20 = &local_21;
    local_18 = puVar1;
  }
  else {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    puVar2 = &DAT_00595352;
    local_1c = (code *)&LAB_00fac484;
    local_20 = puVar1;
  }
  FUN_00fa948c(uVar3,uVar4,puVar2,&local_20);
  return;
}

