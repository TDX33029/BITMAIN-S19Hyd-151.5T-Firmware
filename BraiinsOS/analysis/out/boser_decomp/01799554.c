// FUN_01799554 @ 01799554 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_01799554(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return;
    }
    FUN_017998e0(param_1 + 2);
    FUN_0187266c((char)param_1[0x4e],param_1[0x4f]);
    return;
  }
  FUN_017998e0(param_1 + 0x46);
  if ((char)param_1[0x42] == '\x14') {
    puVar3 = (undefined4 *)param_1[0x44];
    iVar1 = param_1[0x43];
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar1);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar1);
    }
  }
  else {
    FUN_0177fbb4();
  }
  FUN_01781388(param_1);
  if ((char)param_1[0x3d] != '\x14') {
    FUN_0177fbb4();
  }
  FUN_019bb7e0(param_1[0x3a],param_1[0x3b]);
  return;
}

