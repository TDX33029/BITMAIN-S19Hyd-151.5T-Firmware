// FUN_00ead84c @ 00ead84c size=120 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_00ead84c(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  bVar1 = *param_1 != 0 || param_1[1] != 0;
  if (bVar1) {
    FUN_019b9f84(&local_38);
    local_34 = 0x1d;
    local_30 = *param_1;
    iStack_2c = param_1[1];
    iStack_28 = param_1[2];
    iStack_24 = param_1[3];
    local_38 = param_2;
    iVar2 = FUN_00eacad8(&local_38);
  }
  else {
    iVar2 = param_1[2];
  }
  return CONCAT44(iVar2,(uint)bVar1);
}

