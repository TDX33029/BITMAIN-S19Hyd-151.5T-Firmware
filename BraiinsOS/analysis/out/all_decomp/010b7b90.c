// FUN_010b7b90 @ 010b7b90 size=168 calls_out=1 calls_in=1
// strings: 

void FUN_010b7b90(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar2 = (int *)param_1[5];
      if (*param_1 != 0) {
        if (param_1[1] == 0) {
          piVar3 = (int *)param_1[2];
          iVar4 = *piVar3;
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)piVar3[1];
            pcVar1 = (code *)*puVar5;
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(iVar4);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(iVar4);
            }
          }
          thunk_FUN_016d3fb4(piVar3);
        }
        else {
          (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
        }
      }
      thunk_FUN_016d3fb4(param_1);
      param_1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}

