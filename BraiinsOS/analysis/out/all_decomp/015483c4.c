// FUN_015483c4 @ 015483c4 size=396 calls_out=7 calls_in=0
// strings: 

void FUN_015483c4(int *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int *local_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined2 local_28;
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x8000000f)) {
    iVar2 = *param_3;
    iVar1 = FUN_01515df8(param_4[8],param_4[9]);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar2 + 0x24c) + 1;
      if (*(int *)(iVar2 + 0x24c) == -1) {
        iVar1 = -1;
      }
      *(int *)(iVar2 + 0x24c) = iVar1;
      local_a0 = iVar2 + 0x38;
      local_9c = (int *)0x0;
      if (*(int *)(iVar2 + 0x228) != -0x80000000) {
        local_9c = (int *)(iVar2 + 0x228);
      }
      local_98 = CONCAT31(local_98._1_3_,*(undefined1 *)(iVar2 + 0x259));
      FUN_01542558(&local_c0,param_2,&local_a0,param_4 + 4);
      if (local_c0 == (undefined1 *)0x80000029) {
        *param_1 = -0x7fffffd7;
        param_1[1] = param_2;
        param_1[2] = (int)&DAT_018a7d74;
        FUN_015430a0(param_4);
        return;
      }
    }
    else {
      local_28 = 4;
      local_9c = (int *)0xd0001;
      local_a0 = -0x7fffffff;
      FUN_01525ed4(iVar2,&local_a0,*(char *)(iVar2 + 0x31) == '\x02');
      *(undefined1 *)(iVar2 + 0x255) = 1;
      local_bc = CONCAT31(local_bc._1_3_,6);
      local_c0 = &DAT_8000001c;
    }
    *param_1 = (int)local_c0;
    param_1[1] = local_bc;
    param_1[2] = iStack_b8;
    param_1[3] = iStack_b4;
    param_1[4] = local_b0;
    param_1[5] = iStack_ac;
    param_1[6] = iStack_a8;
    param_1[7] = iStack_a4;
  }
  else {
    FUN_015622b4(&local_a0,param_4,&DAT_0040c784,1,&DAT_0040c0b3,1);
    param_1[2] = local_98;
    param_1[3] = iStack_94;
    param_1[4] = iStack_90;
    param_1[5] = iStack_8c;
    param_1[6] = iStack_88;
    param_1[7] = iStack_84;
    *param_1 = local_a0;
    param_1[1] = (int)local_9c;
  }
  FUN_015430a0(param_4);
  FUN_01543148(param_2);
  thunk_FUN_016d3fb4(param_2);
  return;
}

