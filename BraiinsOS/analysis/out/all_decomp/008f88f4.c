// FUN_008f88f4 @ 008f88f4 size=240 calls_out=2 calls_in=2
// strings: 

void FUN_008f88f4(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [48];
  int local_48;
  undefined1 local_44;
  undefined1 auStack_43 [43];
  
  puVar3 = (uint *)*param_2;
  if (puVar3 == (uint *)param_2[1]) {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  }
  *param_2 = (int)(puVar3 + 4);
  param_2[2] = param_2[2] + 1;
  uVar1 = 0x15;
  if ((int)*puVar3 < 0) {
    uVar1 = *puVar3 ^ 0x80000000;
  }
  uVar4 = 2;
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      puVar3 = (uint *)puVar3[1];
    }
    else if (uVar1 == 0x12) goto LAB_008f89b8;
    FUN_00915d28(&local_48,puVar3);
    iVar2 = 2;
    if (local_48 != 2) {
      FUN_016dd1aa(auStack_78,auStack_43,0x2b);
      iVar2 = local_48;
    }
    uVar4 = local_44;
    if (iVar2 != 2) {
      *(undefined1 *)(param_1 + 1) = local_44;
      *param_1 = iVar2;
      FUN_016dd1aa((int)param_1 + 5,auStack_78,0x2b);
      return;
    }
  }
LAB_008f89b8:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}

