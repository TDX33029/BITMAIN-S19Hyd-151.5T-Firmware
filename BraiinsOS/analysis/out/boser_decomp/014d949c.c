// FUN_014d949c @ 014d949c size=116 calls_out=2 calls_in=2
// strings: 

void FUN_014d949c(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    if (param_1[2] == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[1];
  }
  else {
    bVar6 = uVar1 == 1;
    if (bVar6) {
      uVar1 = (uint)(byte)param_1[1];
    }
    if (!bVar6 || uVar1 != 3) {
      return;
    }
    puVar3 = (undefined4 *)param_1[2];
    uVar4 = *puVar3;
    puVar5 = (undefined4 *)puVar3[1];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(uVar4);
    }
  }
  thunk_FUN_01be4678(puVar3);
  return;
}

