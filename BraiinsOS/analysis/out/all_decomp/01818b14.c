// FUN_01818b14 @ 01818b14 size=256 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01818b14(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     (((piVar4 = *(int **)(param_1 + 0x1c), piVar4 == (int *)0x0 || (param_1 != *piVar4)) ||
      (0x1f < piVar4[1] - 0x3f34U)))) {
    return 0xfffffffe;
  }
  uVar1 = piVar4[3];
  piVar4[0xb] = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & 1;
  }
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[8] = 0;
  if (uVar1 != 0) {
    *(uint *)(param_1 + 0x30) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar3 = piVar4 + 0x14d;
  piVar4[6] = 0x8000;
  piVar4[0x1c] = (int)piVar3;
  piVar4[0x14] = (int)piVar3;
  piVar4[0x15] = (int)piVar3;
  piVar4[2] = 0;
  piVar4[4] = 0;
  piVar4[9] = 0;
  piVar4[5] = -1;
  piVar4[0xf] = 0;
  piVar4[0x10] = 0;
  piVar4[1] = 0x3f34;
  piVar4[0x6f1] = 1;
  piVar4[0x6f2] = -1;
  return 0;
}

