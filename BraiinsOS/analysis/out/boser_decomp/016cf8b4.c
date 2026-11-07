// FUN_016cf8b4 @ 016cf8b4 size=184 calls_out=3 calls_in=2
// strings: 

void FUN_016cf8b4(int *param_1,int param_2)

{
  int iVar1;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    if (*(int *)(param_2 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_2 + 0x28);
      local_30 = 9;
      FUN_01691d3c(&local_70,(int *)(param_2 + 0x24),&local_30);
      if (local_70 != 0x2a) {
        param_1[2] = local_68;
        param_1[3] = iStack_64;
        param_1[4] = iStack_60;
        param_1[5] = iStack_5c;
        param_1[6] = local_58;
        param_1[7] = iStack_54;
        param_1[8] = iStack_50;
        param_1[9] = iStack_4c;
        param_1[10] = iStack_48;
        param_1[0xb] = local_44;
        param_1[0xc] = iStack_40;
        param_1[0xd] = iStack_3c;
        param_1[0xe] = iStack_38;
        param_1[0xf] = iStack_34;
      }
      iVar1 = *(int *)(param_2 + 0x20);
      *param_1 = local_70;
      param_1[1] = iStack_6c;
      *(int *)(param_2 + 0x20) = iVar1 + 1;
      return;
    }
  }
  else {
    FUN_01306fc8(&DAT_01d09c98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_004ce2b9,0x1f,&DAT_01d07a4c);
}

