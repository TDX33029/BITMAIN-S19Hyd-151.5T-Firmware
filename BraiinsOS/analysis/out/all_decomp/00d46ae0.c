// FUN_00d46ae0 @ 00d46ae0 size=132 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00d46ae0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_20;
  char local_1c;
  undefined1 local_1b;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  uVar1 = 1;
  local_1c = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  local_1b = 0;
  local_20 = param_2;
  FUN_008cf9ec(&local_20,iVar2,iVar2 + iVar3);
  if (local_1c == '\0') {
    uVar1 = (**(code **)(local_20[1] + 0xc))(*local_20,&DAT_00418ec5,1);
  }
  return uVar1;
}

