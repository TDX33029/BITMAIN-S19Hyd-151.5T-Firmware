// FUN_006e82ec @ 006e82ec size=204 calls_out=1 calls_in=29
// strings: 

void FUN_006e82ec(int param_1,undefined1 param_2,uint param_3,uint param_4,uint param_5,uint param_6
                 )

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x91) == '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x8c);
  if (uVar1 == param_3) {
    uVar4 = *(uint *)(param_1 + 0x2c) + *(uint *)(param_1 + 0x20);
    if ((param_6 < uVar4) && (uVar4 - param_6 == 1)) {
      return;
    }
    if (param_4 <= *(uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0x20) = param_4;
    }
    if (param_5 <= *(uint *)(param_1 + 0x2c)) {
      *(uint *)(param_1 + 0x2c) = param_5;
    }
    if (param_3 <= uVar1) {
      iVar2 = 0x18;
      if (*(char *)(param_1 + 0x90) == '\x01') {
        iVar2 = 0x24;
      }
      if (uVar1 != param_3) {
        return;
      }
      goto LAB_006e8390;
    }
  }
  else if (param_3 <= uVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar2 = 0x18;
  *(uint *)(param_1 + 0x8c) = param_3;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    iVar2 = 0x24;
  }
LAB_006e8390:
  piVar3 = (int *)(param_1 + iVar2);
  iVar2 = piVar3[2];
  if (iVar2 == *piVar3) {
    FUN_018faa08(piVar3);
  }
  *(undefined1 *)(piVar3[1] + iVar2) = param_2;
  piVar3[2] = iVar2 + 1;
  return;
}

