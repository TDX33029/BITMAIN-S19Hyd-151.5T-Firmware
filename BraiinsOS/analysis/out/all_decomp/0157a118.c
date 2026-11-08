// FUN_0157a118 @ 0157a118 size=224 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0157a118(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_20;
  char local_1c;
  int local_18;
  undefined1 *local_14;
  
  local_18 = param_1;
  if (0x7fefffff < (*(uint *)(param_1 + 4) & 0x7fffffff)) {
    local_14 = &LAB_00fb1f30;
    uVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_18);
    return uVar1;
  }
  local_14 = &LAB_00fb1f30;
  local_1c = '\0';
  local_20 = param_2;
  iVar2 = FUN_00fa948c(&local_20,&DAT_018a930c,&DAT_00590e71,&local_18);
  if ((iVar2 == 0) &&
     ((local_1c != '\0' ||
      (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00410f52,2), iVar2 == 0)))) {
    return 0;
  }
  return 1;
}

