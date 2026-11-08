// FUN_0187bb7c @ 0187bb7c size=132 calls_out=4 calls_in=1
// strings: 

void FUN_0187bb7c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  if (param_1[0x16] == -0x80000000) {
    piVar2 = (int *)param_1[0x1a];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1a],param_1[0x1b]);
    }
    if (param_1[0x17] != -0x80000000) {
      FUN_019bb7e0(param_1[0x17],param_1[0x18]);
    }
  }
  else {
    FUN_0187bc4c(param_1 + 0x1c);
    FUN_0187bc4c(param_1 + 0x2d);
    FUN_0187bc8c(param_1 + 0x16);
  }
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))
              (param_1 + 0x13,param_1[0x11],param_1[0x12],*(code **)(param_1[0x10] + 0x10),unaff_r4,
               unaff_r5);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_017793c0(param_1);
  return;
}

