// FUN_0094f574 @ 0094f574 size=104 calls_out=1 calls_in=25
// strings: 

void FUN_0094f574(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    local_14 = 0;
    local_18 = 0x2501;
    local_1c = 0x80000000;
    uVar2 = FUN_0073696c(&local_1c);
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  else {
    puVar3 = (undefined1 *)*param_2;
    *(undefined1 *)(param_1 + 1) = *puVar3;
    *param_2 = puVar3 + 1;
    param_2[1] = iVar1 + -1;
  }
  *(bool *)param_1 = iVar1 == 0;
  return;
}

