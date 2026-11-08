// FUN_00f69404 @ 00f69404 size=320 calls_out=0 calls_in=1
// strings: 

void FUN_00f69404(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  if (*(int *)(param_2 + 0x78) != 1) {
LAB_00f69484:
    param_1[1] = 2;
    *param_1 = 1;
    return;
  }
  if (1 < *(uint *)(param_2 + 0x7c)) {
LAB_00f69498:
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (*(int *)(param_2 + 0x80) != 1) goto LAB_00f69484;
  if (0xb < *(uint *)(param_2 + 0x84)) goto LAB_00f69498;
  if (*(int *)(param_2 + 0x88) != 1) {
LAB_00f694f8:
    uVar1 = 2;
    goto LAB_00f694fc;
  }
  if (*(uint *)(param_2 + 0x8c) < 0x3c) {
    uVar3 = 0;
    puVar4 = (undefined1 *)0x0;
    uVar5 = 0;
    if (*(int *)(param_2 + 0x90) != 0) {
      uVar2 = *(uint *)(param_2 + 0x94);
      if (uVar2 < 0x3c) {
        uVar5 = uVar2;
      }
      else {
        uVar5 = 0x3b;
        puVar4 = &DAT_3b9aca00;
        if (uVar2 != 0x3c) goto LAB_00f694f0;
      }
    }
    if (*(int *)(param_2 + 0x98) == 1) {
      uVar3 = *(uint *)(param_2 + 0x9c);
      if (999999999 < uVar3) goto LAB_00f694f0;
      if (*(int *)(param_2 + 0x90) == 0) goto LAB_00f694f8;
    }
    if ((puVar4 + uVar3 < &DAT_3b9aca00) || (uVar5 == 0x3b)) {
      *(uint *)(param_1 + 4) =
           (*(uint *)(param_2 + 0x84) + *(uint *)(param_2 + 0x7c) * 0xc) * 0xe10 +
           *(uint *)(param_2 + 0x8c) * 0x3c + uVar5;
      *(undefined1 **)(param_1 + 8) = puVar4 + uVar3;
      *param_1 = 0;
      return;
    }
  }
LAB_00f694f0:
  uVar1 = 0;
LAB_00f694fc:
  param_1[1] = uVar1;
  *param_1 = 1;
  return;
}

