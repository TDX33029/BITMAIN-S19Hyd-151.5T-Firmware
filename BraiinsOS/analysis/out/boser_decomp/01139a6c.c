// FUN_01139a6c @ 01139a6c size=164 calls_out=4 calls_in=4
// strings: 

void FUN_01139a6c(uint *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  iVar1 = 0;
  if ((uint)(uVar3 < 4) <= -uVar4) {
    iVar1 = uVar3 - 3;
  }
  if (iVar1 == 1) {
    puVar5 = (undefined4 *)param_1[3];
    uVar3 = param_1[2];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(uVar3);
      return;
    }
  }
  else if ((iVar1 == 0) && (FUN_01139b38(param_1[0x2a],param_1[0x2b]), uVar3 != 3 || uVar4 != 0)) {
    FUN_01139bc4();
    FUN_009d5b68(param_1 + 0x22);
    return;
  }
  return;
}

