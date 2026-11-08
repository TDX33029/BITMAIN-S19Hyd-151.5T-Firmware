// FUN_012232c4 @ 012232c4 size=176 calls_out=1 calls_in=2
// strings: 

void FUN_012232c4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28 [4];
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 0xc)) {
    local_28[0] = *piVar1;
    *(int **)(param_2 + 4) = piVar1 + 4;
    if (local_28[0] != -0x7fffffeb) {
      piVar3 = (int *)((uint)local_28 | 4);
      iVar2 = piVar1[2];
      iVar4 = piVar1[3];
      *piVar3 = piVar1[1];
      piVar3[1] = iVar2;
      piVar3[2] = iVar4;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      FUN_0123c38c(&local_58,local_28);
      if (local_58 == 2) {
        *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
        *param_1 = 2;
        return;
      }
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = iStack_50;
      param_1[3] = iStack_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = iStack_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      return;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}

