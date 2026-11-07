// FUN_00d38310 @ 00d38310 size=116 calls_out=4 calls_in=4
// strings: 

void FUN_00d38310(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00d36398(param_1[0x15]);
    if (param_1[0x12] != -0x80000000) {
      FUN_006a41c0();
    }
    FUN_00d383c8(param_1);
    return;
  }
  puVar3 = (undefined4 *)param_1[3];
  iVar2 = param_1[2];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

