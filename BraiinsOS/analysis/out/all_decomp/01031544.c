// FUN_01031544 @ 01031544 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_01031544(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 local_14;
  undefined4 *local_10;
  code *local_c;
  
  if (*param_1 == '\x01') {
    local_14 = *(undefined4 *)(param_1 + 4);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = (code *)&LAB_00fac484;
    puVar3 = &DAT_0058b9ad;
  }
  else {
    local_14 = CONCAT31(local_14._1_3_,param_1[1]);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = FUN_00fac0c8;
    puVar3 = &DAT_0058b771;
  }
  local_10 = &local_14;
  FUN_00fa948c(uVar1,uVar2,puVar3,&local_10);
  return;
}

