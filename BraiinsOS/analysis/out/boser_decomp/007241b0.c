// FUN_007241b0 @ 007241b0 size=352 calls_out=0 calls_in=1
// strings: 

void FUN_007241b0(undefined1 *param_1,int param_2,uint param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  
  uVar5 = 0x3a;
  if (param_4 == '\0') {
    uVar3 = *(uint *)(param_2 + 0x10);
    if (uVar3 == 0) goto LAB_00724308;
    iVar1 = *(int *)(param_2 + 0xc);
    iVar2 = 0;
    if (uVar3 != 1) {
      iVar4 = 0;
      do {
        iVar2 = iVar4 + (uVar3 >> 1);
        uVar3 = uVar3 - (uVar3 >> 1);
        if (param_3 < *(uint *)(iVar2 * 0x160 + iVar1 + 0x15c)) {
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
      } while (1 < uVar3);
    }
    uVar3 = *(uint *)(iVar2 * 0x160 + iVar1 + 0x15c);
    if (uVar3 == param_3) goto LAB_00724308;
    if (uVar3 < param_3) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 == 0) goto LAB_00724308;
    iVar2 = iVar2 * 0x160 + iVar1 + -0x160;
  }
  else {
    if ((param_4 != '\x01') || (uVar3 = *(uint *)(param_2 + 0x18), uVar3 == 0)) goto LAB_00724308;
    iVar1 = *(int *)(param_2 + 0x14);
    iVar2 = 0;
    if (uVar3 != 1) {
      iVar4 = 0;
      do {
        iVar2 = iVar4 + (uVar3 >> 1);
        uVar3 = uVar3 - (uVar3 >> 1);
        if (param_3 < *(uint *)(iVar1 + iVar2 * 0x120 + 0x118)) {
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
      } while (1 < uVar3);
    }
    uVar3 = *(uint *)(iVar1 + iVar2 * 0x120 + 0x118);
    if (uVar3 == param_3) goto LAB_00724308;
    if (uVar3 < param_3) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 == 0) goto LAB_00724308;
    iVar2 = iVar1 + iVar2 * 0x120 + -0x120;
  }
  if ((*(int *)(iVar2 + 0xb8) == 0) && (*(uint *)(iVar2 + 0xbc) <= param_3)) {
    param_3 = param_3 - *(uint *)(iVar2 + 0xbc);
    iVar1 = 4;
    if (*(char *)(iVar2 + 0xd9) == '\b') {
      iVar1 = 0xc;
    }
    uVar3 = (iVar1 + *(int *)(iVar2 + 0xdc)) - *(uint *)(iVar2 + 0xd4);
    if ((uVar3 <= param_3) && (uVar5 = 0x3a, param_3 - uVar3 < *(uint *)(iVar2 + 0xd4))) {
      uVar5 = 0x4f;
      *(int *)(param_1 + 4) = iVar2;
      *(uint *)(param_1 + 8) = param_3;
    }
  }
LAB_00724308:
  *param_1 = uVar5;
  return;
}

