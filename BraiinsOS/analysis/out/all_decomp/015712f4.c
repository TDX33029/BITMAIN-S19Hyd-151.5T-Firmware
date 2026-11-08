// FUN_015712f4 @ 015712f4 size=496 calls_out=8 calls_in=1
// strings: 

void FUN_015712f4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_70;
  int local_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_5c = 0x1b6;
  local_58 = 1;
  local_60 = 0;
  local_54 = local_54 & 0xffff0000;
  FUN_015ec1bc(&local_38,&local_60,param_1,param_2);
  iVar1 = local_34;
  if ((char)local_38 != '\x04') {
    local_6c = local_38;
    iStack_68 = local_34;
    uStack_64 = 0;
    local_70 = 3;
    FUN_015718b4(param_3,&local_70,param_1,param_2);
    return;
  }
  iVar3 = thunk_FUN_016d4a50(0x2000);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  local_4c = iVar1;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0x2000;
  local_60 = iVar3;
  while( true ) {
    while (FUN_01573254(&local_38,&local_60,FUN_01571a84,&LAB_01571a6c), iVar2 = local_28,
          iVar3 = local_2c, iVar1 = local_30, local_38 != 0) {
      if (local_34 == 5) goto LAB_01571464;
      if (local_34 == 6) goto LAB_015714b4;
      local_3c = local_28;
      local_40 = local_2c;
      local_44 = local_30;
      local_48 = local_34;
      FUN_015718b4(param_3,&local_48,param_1,param_2);
    }
    if (local_30 == -0x80000000) break;
    if ((char)local_34 == '\0') {
LAB_01571464:
      iVar5 = param_3[2];
      if (iVar5 == *param_3) {
        FUN_01571c94(param_3);
      }
      param_3[2] = iVar5 + 1;
      piVar4 = (int *)(param_3[1] + iVar5 * 0xc);
      *piVar4 = iVar1;
      piVar4[1] = iVar3;
      piVar4[2] = iVar2;
    }
    else if (local_30 != 0) {
      thunk_FUN_016d3fb4(local_2c);
    }
  }
LAB_015714b4:
  if (local_5c != 0) {
    thunk_FUN_016d3fb4(local_60);
  }
  FUN_016dffb2(local_4c);
  return;
}

