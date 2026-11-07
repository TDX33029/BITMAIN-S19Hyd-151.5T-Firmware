// FUN_016cf04c @ 016cf04c size=168 calls_out=3 calls_in=2
// strings: 

void FUN_016cf04c(int *param_1,int param_2)

{
  int unaff_r5;
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
  undefined4 local_30 [4];
  
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09c68);
    *(int *)(unaff_r5 + 0x20) = *(int *)(unaff_r5 + 0x20) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  local_30[0] = 8;
  FUN_01691d3c(&local_70,param_2 + 0x24,local_30);
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  if (local_70 == 0x2a) {
    param_1[2] = iStack_6c;
  }
  else {
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
  *param_1 = local_70;
  param_1[1] = iStack_6c;
  return;
}

