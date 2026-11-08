// FUN_00df0a4c @ 00df0a4c size=416 calls_out=6 calls_in=1
// strings: 

void FUN_00df0a4c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_140;
  int local_13c;
  int local_138;
  undefined1 auStack_130 [12];
  int local_124;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined1 auStack_90 [12];
  int local_84;
  int local_2c;
  int local_28;
  
  FUN_00df0c40(auStack_130);
  if (local_124 == 2) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    FUN_00df0e04(param_2);
    return;
  }
  piVar3 = &local_d0;
  if ((*param_2 == 3 || *param_2 == 2) && (param_2[6] == -0x7fffffff && param_2[0xb] == -0x7fffffff)
     ) {
    piVar3 = &local_28;
  }
  *piVar3 = 0;
  iVar2 = thunk_FUN_01be5118(0x180);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x180);
  }
  FUN_01bed4e2(iVar2,auStack_130,0x60);
  local_138 = 1;
  local_140 = 4;
  local_d0 = *param_2;
  iStack_cc = param_2[1];
  iStack_c8 = param_2[2];
  iStack_c4 = param_2[3];
  iStack_c0 = param_2[4];
  local_bc = param_2[5];
  local_b8 = param_2[6];
  iStack_b4 = param_2[7];
  iStack_b0 = param_2[8];
  iStack_ac = param_2[9];
  local_a8 = param_2[10];
  local_a4 = param_2[0xb];
  iStack_a0 = param_2[0xc];
  iStack_9c = param_2[0xd];
  iStack_98 = param_2[0xe];
  iStack_94 = param_2[0xf];
  iVar4 = 0x60;
  local_13c = iVar2;
  while (iVar1 = local_138, FUN_00df0c40(auStack_90,&local_d0), local_84 != 2) {
    if (iVar1 == local_140) {
      piVar3 = &local_28;
      if ((local_d0 == 3 || local_d0 == 2) && (local_b8 == -0x7fffffff && local_a4 == -0x7fffffff))
      {
        piVar3 = &local_2c;
      }
      *piVar3 = 0;
      FUN_0132b898(&local_140,iVar1,1,8,0x60);
      iVar2 = local_13c;
    }
    FUN_01bed4e2(iVar2 + iVar4,auStack_90,0x60);
    local_138 = iVar1 + 1;
    iVar4 = iVar4 + 0x60;
  }
  FUN_00df0e04(&local_d0);
  *param_1 = local_140;
  param_1[1] = local_13c;
  param_1[2] = local_138;
  return;
}

