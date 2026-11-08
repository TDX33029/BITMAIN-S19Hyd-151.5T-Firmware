// FUN_013139d4 @ 013139d4 size=180 calls_out=2 calls_in=0
// strings: 

void FUN_013139d4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 **local_14;
  
  iVar1 = FUN_012f5598(param_2);
  if (iVar1 != 0) {
    *param_1 = 4;
    return;
  }
  local_1c = &DAT_018d88b4;
  DataMemoryBarrier(0xb);
  if (DAT_018d88b4 != 0) {
    local_18 = &local_1c;
    local_14 = &local_18;
    FUN_015eedc4(&DAT_018d88b4,0,&local_14,&DAT_0188f03c,&DAT_0188e9dc);
  }
  iVar1 = DAT_018d88b8;
  *param_1 = 3;
  iVar1 = *(int *)(iVar1 + 0x68);
  if (*(char *)(iVar1 + 0xc) == '\0') {
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

