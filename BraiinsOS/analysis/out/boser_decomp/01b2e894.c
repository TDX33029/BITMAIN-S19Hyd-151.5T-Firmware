// FUN_01b2e894 @ 01b2e894 size=220 calls_out=1 calls_in=39
// strings: 

int FUN_01b2e894(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return param_1;
  }
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (uVar2 == *(uint *)(param_1 + 0xc)) {
    if (uVar2 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = uVar2 * 3 >> 1;
      if ((uVar2 * 3 >> 1 <= uVar2) || (0x3fffffff < uVar3)) goto LAB_01b2e950;
    }
    iVar1 = FUN_01b6b414(*(undefined4 *)(param_1 + 4),uVar3 << 2);
    if (iVar1 == 0) {
LAB_01b2e950:
      *(undefined2 *)(param_1 + 0x14) = 0x101;
      return 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(uint *)(param_1 + 0xc) = uVar3;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) = uVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 0;
}

