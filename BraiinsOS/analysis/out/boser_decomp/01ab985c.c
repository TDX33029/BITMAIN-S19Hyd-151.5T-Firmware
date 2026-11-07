// FUN_01ab985c @ 01ab985c size=240 calls_out=4 calls_in=5
// strings: 

undefined8 FUN_01ab985c(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int *local_3c;
  int **local_38;
  code *local_34;
  undefined4 uStack_30;
  int **local_28;
  code *local_24;
  undefined4 uStack_20;
  int *local_1c;
  
  local_3c = param_2;
  FUN_01ab440c(&local_28,param_1,*param_2 + -1);
  if (local_28 == (int **)0x0) {
    local_38 = &local_3c;
    local_34 = FUN_01ab2aac;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00531695,&local_38,&DAT_01d2ee34);
  }
  local_38 = local_28;
  local_34 = local_24;
  uStack_30 = uStack_20;
  local_28 = local_28 + 4;
  do {
    local_1c = *local_28;
    bVar1 = (bool)hasExclusiveAccess(local_28);
  } while (!bVar1);
  *local_28 = (int *)((int)local_1c + 1);
  if (local_1c == (int *)0x0) {
    local_28 = &local_3c;
    local_24 = FUN_01ab2aac;
                    /* WARNING: Subroutine does not return */
    FUN_01304210(1,&local_1c,&DAT_00533278,&DAT_005b8d95,&local_28,&DAT_01d2ee24);
  }
  uVar2 = *(undefined8 *)param_2;
  FUN_01ab4580(&local_38);
  return uVar2;
}

