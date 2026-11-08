// FUN_00ebae64 @ 00ebae64 size=392 calls_out=6 calls_in=1
// strings: 

void FUN_00ebae64(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0x5d);
  if (cVar1 == '\0') {
    FUN_00d824a4(param_1 + 0x14);
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00ebb168(param_1 + 0x60);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00d8378c(param_1 + 0xa0);
      uVar3 = *(undefined4 *)(param_1 + 0x94);
      puVar5 = *(undefined4 **)(param_1 + 0x98);
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      if (*(int *)(param_1 + 0x84) != 0) {
        piVar4 = *(int **)(param_1 + 0x80);
        iVar6 = 1 - *(int *)(param_1 + 0x84);
        do {
          if (*piVar4 == 2 && piVar4[1] == 0) {
            (*(code *)**(undefined4 **)piVar4[2])();
          }
          else {
            FUN_00f247dc(piVar4);
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x44;
        } while (iVar6 != 1);
      }
      if (*(int *)(param_1 + 0x7c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
      }
      iVar6 = *(int *)(param_1 + 0x78) + 1;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x74) + 8);
      while (iVar6 = iVar6 + -1, iVar6 != 0) {
        (**(code **)(puVar5[-2] + 0x10))(puVar5 + 1,puVar5[-1],*puVar5);
        puVar5 = puVar5 + 5;
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
      }
      iVar6 = *(int *)(param_1 + 0x6c) + 1;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x68) + 8);
      while (iVar6 = iVar6 + -1, iVar6 != 0) {
        (**(code **)(puVar5[-2] + 0x10))(puVar5 + 1,puVar5[-1],*puVar5);
        puVar5 = puVar5 + 5;
      }
      if (*(int *)(param_1 + 100) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
      }
    }
    FUN_00d824a4(param_1 + 0x14);
  }
  FUN_00d8256c(param_1);
  return;
}

