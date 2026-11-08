// FUN_01a738c0 @ 01a738c0 size=160 calls_out=4 calls_in=45
// strings: 

void FUN_01a738c0(int *param_1,int param_2)

{
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int local_84;
  undefined1 auStack_80 [96];
  
  FUN_0160aaa4(&local_c8,*(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x28) + 3);
  FUN_01a73978(&local_88,param_2,&local_c8);
  if (local_88 == 3 && local_84 == 0) {
    param_1[2] = local_c8;
    param_1[3] = iStack_c4;
    param_1[4] = iStack_c0;
    param_1[5] = iStack_bc;
    param_1[6] = iStack_b8;
    param_1[7] = local_b4;
    param_1[8] = iStack_b0;
    param_1[9] = iStack_ac;
    param_1[10] = iStack_a8;
    param_1[0xb] = iStack_a4;
    param_1[0xc] = local_a0;
    param_1[0xd] = iStack_9c;
    param_1[0xe] = iStack_98;
    param_1[0xf] = iStack_94;
    param_1[0x10] = iStack_90;
    param_1[0x11] = iStack_8c;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(param_1 + 2,auStack_80,0x60);
    *param_1 = local_88;
    param_1[1] = local_84;
    FUN_017793c0(&local_c8);
  }
  return;
}

