// FUN_019634e0 @ 019634e0 size=212 calls_out=1 calls_in=0
// strings: .0a boolean

undefined4 FUN_019634e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_20;
  char local_1c;
  int local_18;
  code *local_14;
  
  local_18 = param_1;
  if ((*(uint *)(param_1 + 4) & 0x7fffffff) < 0x7ff00000) {
    local_14 = FUN_013025ec;
    local_1c = '\0';
    local_20 = param_2;
    iVar2 = FUN_012fa178(&local_20,&DAT_01d271c4,&DAT_00590e5f,&local_18);
    if ((iVar2 == 0) &&
       ((local_1c != '\0' ||
        (iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,".0a boolean",2), iVar2 == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    local_14 = FUN_013025ec;
    uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_18);
  }
  return uVar1;
}

