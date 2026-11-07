// FUN_01613604 @ 01613604 size=124 calls_out=1 calls_in=1
// strings: 

void FUN_01613604(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 local_1c [3];
  
  if (param_2[1] == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)*param_2;
    param_2[1] = param_2[1] + -1;
    puVar4 = (undefined1 *)*puVar3;
    if (puVar4 == (undefined1 *)puVar3[1]) {
      *param_1 = 0x80000005;
      return;
    }
    uVar1 = *puVar4;
    *puVar3 = puVar4 + 1;
    local_1c[0] = 0x80000005;
    FUN_00f2cc28(local_1c);
    uVar2 = 1;
    *(undefined1 *)((int)param_1 + 5) = uVar1;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0x8000000a;
  return;
}

