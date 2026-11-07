// FUN_011877e8 @ 011877e8 size=240 calls_out=4 calls_in=2
// strings: 0  KeepAlive

undefined4 FUN_011877e8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = (uint *)(param_1 + 0x90);
  uVar1 = *puVar2;
  if (2 < uVar1) {
    return 0;
  }
  if (uVar1 == 0) {
    local_34 = 0;
    local_3c = "0\r\n\r\nKeepAlive";
    uVar4 = 5;
    local_40 = 3;
    local_38 = 5;
    FUN_01876978(param_1 + 0x128,&local_40);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar4 = 6;
    }
    if (*(uint *)(param_1 + 0x90) == 2) {
      uVar4 = 6;
    }
    if (2 < *(uint *)(param_1 + 0x90)) goto LAB_011878c8;
  }
  else {
    if (uVar1 == 1) {
      iVar5 = *(int *)(param_1 + 0x98);
      iVar3 = *(int *)(param_1 + 0x9c);
      if (iVar5 != 0 || iVar3 != 0) {
        FUN_0116c8d0(puVar2);
        *puVar2 = 6;
        uVar6 = FUN_01427b74(1,1);
        FUN_018540a0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),iVar5,iVar3);
        return (int)uVar6;
      }
    }
    uVar4 = 5;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar4 = 6;
    }
    if (uVar1 == 2) {
      uVar4 = 6;
    }
  }
  FUN_0116c8d0(puVar2);
LAB_011878c8:
  *puVar2 = uVar4;
  return 0;
}

