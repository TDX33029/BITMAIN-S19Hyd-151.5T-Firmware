// FUN_00716704 @ 00716704 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_00716704(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_c [4];
  
  FUN_01283524(&local_18,param_1);
  uVar2 = CONCAT44(local_14,local_10);
  if (local_10 == 0) {
    iVar1 = 0;
    uVar2 = (**(code **)(local_18 + 0x10))(local_c,local_14,0);
  }
  else {
    iVar1 = local_18;
  }
  local_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_10 = (int)uVar2;
  local_18 = iVar1;
  FUN_00715df0(&local_18);
  return;
}

