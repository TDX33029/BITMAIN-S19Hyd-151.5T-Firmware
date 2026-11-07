// FUN_018a79f4 @ 018a79f4 size=116 calls_out=3 calls_in=3
// strings: 

void FUN_018a79f4(uint *param_1,uint param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_r2;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[2];
  if (param_2 <= uVar2) {
    if (uVar2 == *param_1) {
      FUN_006666a0(param_1);
    }
    puVar5 = (undefined1 *)(param_1[1] + param_2);
    if (param_2 < uVar2) {
      FUN_01bed864(puVar5 + 1,puVar5,uVar2 - param_2);
    }
    param_1[2] = uVar2 + 1;
    *puVar5 = param_3;
    return;
  }
  uVar6 = FUN_00666488(1,0,param_4);
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  piVar1 = (int *)uVar6;
  uVar4 = piVar1[2];
  if (uVar4 < uVar2) {
    uVar2 = uVar2 - uVar4;
    if (*piVar1 - uVar4 < uVar2) {
      FUN_006520b4(piVar1,uVar4,uVar2,1,1);
      uVar4 = piVar1[2];
    }
    iVar3 = piVar1[1];
    puVar5 = (undefined1 *)(iVar3 + uVar4);
    if (1 < uVar2) {
      FUN_01bed93e(puVar5,extraout_r2,uVar2 - 1);
      uVar4 = (uVar2 - 1) + uVar4;
      puVar5 = (undefined1 *)(iVar3 + uVar4);
    }
    uVar2 = uVar4 + 1;
    *puVar5 = (char)extraout_r2;
  }
  piVar1[2] = uVar2;
  return;
}

