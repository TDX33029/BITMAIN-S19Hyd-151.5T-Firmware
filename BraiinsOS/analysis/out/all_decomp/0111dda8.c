// FUN_0111dda8 @ 0111dda8 size=216 calls_out=5 calls_in=2
// strings: 

void FUN_0111dda8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  int *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  
  iVar2 = param_2[1];
  local_1c = param_2[2];
  local_20 = iVar2;
  if ((local_1c & 1) == 0) {
    FUN_01126c98(&local_2c,iVar2,local_1c);
  }
  else {
    local_2c = &local_20;
    local_28 = &DAT_0157d360;
    FUN_00600d2c(&local_50,&DAT_0057f748,&local_2c);
    FUN_01126a54(&local_2c,&local_50);
  }
  if (local_2c == (int *)&DAT_80000000) {
    puStack_4c = local_28;
    uStack_48 = local_24;
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    local_50 = 0x80000007;
    FUN_0111dea8(&local_50);
    iVar1 = *param_2;
  }
  else {
    *param_1 = local_2c;
    param_1[1] = local_28;
    param_1[2] = local_24;
    iVar1 = *param_2;
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  return;
}

