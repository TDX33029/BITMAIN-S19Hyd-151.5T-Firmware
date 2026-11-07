// FUN_014cad74 @ 014cad74 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_014cad74(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20 [4];
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 0xc)) {
    local_20[0] = *piVar1;
    *(int **)(param_2 + 4) = piVar1 + 4;
    if (local_20[0] != -0x7fffffeb) {
      piVar3 = (int *)((uint)local_20 | 4);
      iVar2 = piVar1[2];
      iVar4 = piVar1[3];
      *piVar3 = piVar1[1];
      piVar3[1] = iVar2;
      piVar3[2] = iVar4;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      FUN_014f8b2c(&local_30,local_20);
      if (uStack_24._1_1_ == '\x02') {
        *(undefined1 *)((int)param_1 + 0xd) = 3;
        *param_1 = local_30;
        return;
      }
      *param_1 = local_30;
      param_1[1] = uStack_2c;
      param_1[2] = uStack_28;
      param_1[3] = uStack_24;
      return;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 2;
  return;
}

