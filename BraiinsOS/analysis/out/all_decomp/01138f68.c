// FUN_01138f68 @ 01138f68 size=136 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01138f68(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_20;
  char local_1c;
  undefined1 local_1b;
  
  uVar1 = 1;
  iVar2 = *(int *)(*param_1 + 4);
  iVar3 = *(int *)(*param_1 + 8);
  local_1c = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  local_1b = 0;
  local_20 = param_2;
  FUN_007b9178(&local_20,iVar2,iVar2 + iVar3);
  if (local_1c == '\0') {
    uVar1 = (**(code **)(local_20[1] + 0xc))(*local_20,&DAT_00418ec5,1);
  }
  return uVar1;
}

