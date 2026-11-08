// FUN_007131b4 @ 007131b4 size=328 calls_out=5 calls_in=1
// strings: 

void FUN_007131b4(uint *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 unaff_r4;
  uint uVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 unaff_lr;
  
  iVar1 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)param_1[3];
      uVar3 = param_1[2];
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(uVar3);
        return;
      }
    }
    return;
  }
  uVar3 = param_1[0x24];
  puVar5 = (undefined4 *)param_1[0x25];
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar3);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_01be4678(uVar3);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  if ((9 < (byte)param_1[0x1b]) && (param_1[0x1d] != 0)) {
    thunk_FUN_01be4678(param_1[0x1c]);
  }
  if (1 < (byte)param_1[0x10]) {
    piVar4 = (int *)param_1[0x11];
    (**(code **)(*piVar4 + 0x10))
              (piVar4 + 3,piVar4[1],piVar4[2],*(code **)(*piVar4 + 0x10),unaff_r4,unaff_r5,unaff_r6,
               unaff_lr);
    thunk_FUN_01be4678(piVar4);
  }
  (**(code **)(param_1[0x12] + 0x10))(param_1 + 0x15,param_1[0x13],param_1[0x14]);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x19,param_1[0x17],param_1[0x18]);
  FUN_0142e6dc(param_1);
  FUN_0178e884(param_1[0x20]);
  FUN_00b19860(param_1[0x22],param_1[0x23]);
  return;
}

