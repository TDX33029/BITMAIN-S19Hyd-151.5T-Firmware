// FUN_0157a234 @ 0157a234 size=156 calls_out=0 calls_in=5
// strings: 

void FUN_0157a234(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar4 = 7;
  uVar3 = 7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 1:
    param_1[1] = param_2[1];
    *param_1 = 0;
    return;
  case 3:
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 8) = uVar2;
    *param_1 = 5;
    return;
  case 4:
    *param_1 = 10;
    return;
  case 5:
    uVar3 = 0xb;
  case 0:
    *param_1 = uVar3;
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 2) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = uVar5;
    return;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  if (iVar1 != 1) {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (iVar1 == 1) {
    uVar4 = 2;
  }
  *param_1 = uVar4;
  return;
}

