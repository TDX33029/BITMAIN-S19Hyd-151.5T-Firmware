// FUN_0124a420 @ 0124a420 size=172 calls_out=2 calls_in=1
// strings: 

void FUN_0124a420(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90 [28];
  undefined1 local_20;
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 0xc)) {
    iVar2 = *piVar1;
    *(int **)(param_2 + 4) = piVar1 + 0x1c;
    if (iVar2 != 4) {
      FUN_01bed4e2((uint)local_90 | 4,piVar1 + 1,0x6c);
      local_20 = 0;
      local_90[0] = iVar2;
      FUN_0123c5a0(&local_c0,local_90);
      if (local_c0 == 2) {
        *(undefined1 *)(param_1 + 1) = (undefined1)local_bc;
        *param_1 = 2;
        return;
      }
      *param_1 = local_c0;
      param_1[1] = local_bc;
      param_1[2] = iStack_b8;
      param_1[3] = iStack_b4;
      param_1[4] = iStack_b0;
      param_1[5] = iStack_ac;
      param_1[6] = local_a8;
      param_1[7] = iStack_a4;
      param_1[8] = iStack_a0;
      param_1[9] = iStack_9c;
      param_1[10] = iStack_98;
      param_1[0xb] = iStack_94;
      return;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}

