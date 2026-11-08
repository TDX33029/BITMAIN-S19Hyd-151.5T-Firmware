// FUN_017185b4 @ 017185b4 size=252 calls_out=1 calls_in=40
// strings: 

int FUN_017185b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return param_1;
  }
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (uVar3 == *(uint *)(param_1 + 0xc)) {
    if (uVar3 == 0) {
      iVar2 = 0x80;
      uVar4 = 0x20;
    }
    else {
      uVar4 = uVar3 * 3 >> 1;
      if ((uVar3 * 3 >> 1 <= uVar3) || (0x3fffffff < uVar4)) goto LAB_0171864c;
      iVar2 = uVar4 << 2;
    }
    iVar2 = FUN_0177ad5c(*(undefined4 *)(param_1 + 4),iVar2);
    if (iVar2 == 0) {
LAB_0171864c:
      *(undefined2 *)(param_1 + 0x14) = 0x101;
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 8);
    *(int *)(param_1 + 4) = iVar2;
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  *(undefined4 *)(iVar2 + uVar3 * 4) = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 0;
}

