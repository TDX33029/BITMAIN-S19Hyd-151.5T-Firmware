// FUN_0165244c @ 0165244c size=232 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_0165244c(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined4 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  uVar7 = (*(code *)puVar4[3])(puVar5);
  iVar1 = (int)uVar7;
  if (iVar1 == 0) {
    return 2;
  }
  iVar6 = puVar4[1];
  if (iVar6 == 0x50) {
    iVar1 = puVar4[2];
  }
  if (iVar6 == 0x50 && iVar1 == 4) {
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(puVar5);
    }
    *puVar5 = uVar7;
    *(undefined1 *)((int)puVar5 + 0x4c) = 0;
  }
  else {
    puVar2 = (undefined8 *)thunk_FUN_016d4a50(0x50);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x50);
    }
    *(undefined1 *)((int)puVar2 + 0x4c) = 0;
    pcVar3 = (code *)*puVar4;
    *puVar2 = uVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(puVar5);
    }
    if (iVar6 != 0) {
      thunk_FUN_016d3fb4(puVar5);
    }
    *param_1 = (int)puVar2;
  }
  param_1[1] = (int)&DAT_018acdbc;
  return 1;
}

