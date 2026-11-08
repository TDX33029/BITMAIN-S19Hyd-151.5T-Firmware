// FUN_00cce710 @ 00cce710 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_00cce710(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uStack_11;
  
  if (*param_2 == '\x03') {
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)(param_2 + 4);
    param_1[1] = uVar2;
    param_1[2] = uVar1;
    return;
  }
  uVar1 = FUN_00f36124(param_2,&uStack_11,&DAT_01873de8);
  *param_1 = 0x80000000;
  param_1[1] = uVar1;
  FUN_00c01f94(param_2);
  return;
}

