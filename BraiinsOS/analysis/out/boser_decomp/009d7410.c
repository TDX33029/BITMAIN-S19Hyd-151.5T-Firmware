// FUN_009d7410 @ 009d7410 size=324 calls_out=12 calls_in=1
// strings: 

void FUN_009d7410(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_0183d504(param_1 + 0x40);
  FUN_012840cc(param_1 + 0x53);
  FUN_019bb7e0(param_1[0x46],param_1[0x47]);
  FUN_01725b0c(param_1 + 0x4a);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0142e6dc(param_1);
  }
  if (param_1[0x39] != 0) {
    FUN_009d5b2c();
  }
  if (((*(byte *)(param_1 + 0x34) != 0xb) && (9 < *(byte *)(param_1 + 0x34))) &&
     (param_1[0x36] != 0)) {
    thunk_FUN_01be4678(param_1[0x35]);
  }
  if (param_1[0x2e] != 0) {
    FUN_01139b38(param_1[0x2e],param_1[0x2f]);
  }
  piVar2 = (int *)param_1[0x30];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x30],param_1[0x31],0,0,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
    }
  }
  piVar2 = (int *)param_1[0x32];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x32],param_1[0x33]);
    }
  }
  FUN_0172f038(param_1 + 0x10);
  FUN_01820710(param_1 + 0x24);
  if (param_1[0x22] == 0) {
    return;
  }
  FUN_009d76c4(param_1 + 0x23);
  return;
}

