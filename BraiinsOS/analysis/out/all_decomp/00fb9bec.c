// FUN_00fb9bec @ 00fb9bec size=136 calls_out=1 calls_in=0
// strings: 

void FUN_00fb9bec(undefined1 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_21;
  undefined1 *local_20;
  code *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  if (param_1[4] == '\x01') {
    local_21 = param_1[5];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    local_20 = &local_21;
    puVar1 = &DAT_00576294;
    local_14 = &LAB_00fac484;
    local_1c = FUN_00fac0c8;
    local_18 = param_1;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar1 = &DAT_00595352;
    local_1c = (code *)&LAB_00fac484;
    local_20 = param_1;
  }
  FUN_00fa948c(uVar2,uVar3,puVar1,&local_20);
  return;
}

