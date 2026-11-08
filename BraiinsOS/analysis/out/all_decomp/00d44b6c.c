// FUN_00d44b6c @ 00d44b6c size=148 calls_out=4 calls_in=2
// strings: 

void FUN_00d44b6c(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uStack_11;
  
  if (*param_2 != '\x02') {
    uVar1 = FUN_00f36124(param_2,&uStack_11,&DAT_01873d48);
    FUN_00c01f94(param_2);
    param_1[1] = uVar1;
    *param_1 = 1;
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(param_2 + 8) == 0) {
    uVar2 = FUN_01845f30();
  }
  else if (*(int *)(param_2 + 8) == 1) {
    uVar2 = FUN_01845d5c();
  }
  *(undefined8 *)(param_1 + 2) = uVar2;
  *param_1 = 0;
  return;
}

