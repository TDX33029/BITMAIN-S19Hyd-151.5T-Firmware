// FUN_00debb28 @ 00debb28 size=112 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00debb28(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int iStack_30;
  undefined4 local_28;
  undefined1 *local_24;
  int local_14;
  
  local_24 = (undefined1 *)&local_40;
  local_40 = *param_1;
  iStack_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  iStack_30 = param_1[4];
  iVar2 = param_1[6];
  local_28 = 7;
  local_14 = iVar2;
  uVar1 = FUN_00fe3438(&local_28);
  local_28 = uVar1;
  FUN_0196bf0c(iVar2,&local_40);
  if (local_40 == 4 || local_40 == 2) {
    FUN_019bb7e0(local_38,local_34);
  }
  return uVar1;
}

