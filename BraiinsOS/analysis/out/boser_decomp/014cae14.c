// FUN_014cae14 @ 014cae14 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_014cae14(undefined2 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char local_28;
  undefined1 local_27;
  undefined4 local_24;
  int local_20 [4];
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 0xc)) {
    local_20[0] = *piVar1;
    *(int **)(param_2 + 4) = piVar1 + 4;
    if (local_20[0] != -0x7fffffeb) {
      piVar2 = (int *)((uint)local_20 | 4);
      iVar3 = piVar1[2];
      iVar4 = piVar1[3];
      *piVar2 = piVar1[1];
      piVar2[1] = iVar3;
      piVar2[2] = iVar4;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      FUN_014f4a04(&local_28,local_20);
      if (local_28 != '\x01') {
        *(undefined1 *)((int)param_1 + 1) = local_27;
      }
      else {
        *(undefined4 *)(param_1 + 2) = local_24;
      }
      *(bool *)param_1 = local_28 == '\x01';
      return;
    }
  }
  *param_1 = 0x200;
  return;
}

