// FUN_010d1e2c @ 010d1e2c size=352 calls_out=5 calls_in=0
// strings: open pin in

void FUN_010d1e2c(undefined1 *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *local_44;
  uint local_40;
  char *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = *param_2;
  if ((uVar2 != 2) && ((uVar2 & 1) == 0)) {
    FUN_010ed06c(param_1,param_2[1],param_2[2]);
    return;
  }
  if (uVar2 != 2) {
    piVar3 = (int *)param_2[1];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf448(param_2[1],param_2[2]);
    }
  }
  *param_2 = 2;
  FUN_010ec06c(&local_44,param_2 + 3);
  if (local_44 == (int *)0x0) {
    local_30 = 3;
    local_38 = 0xb;
    local_3c = "open pin in";
    local_34 = local_40;
    uVar4 = FUN_010cf51c(&local_3c,&local_30);
    *(undefined4 *)(param_1 + 4) = uVar4;
    *param_1 = 1;
    return;
  }
  FUN_010ed06c(&local_30,local_44,local_40);
  if ((char)local_30 == '\x01') {
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = local_2c;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *local_44;
      bVar1 = (bool)hasExclusiveAccess(local_44);
    } while (!bVar1);
    *local_44 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf278(local_44,local_40);
      return;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = (uint)local_44;
    param_2[2] = local_40;
    param_1[1] = local_30._1_1_;
    *param_1 = 0;
  }
  return;
}

