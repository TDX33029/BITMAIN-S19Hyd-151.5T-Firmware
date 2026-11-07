// FUN_010e9e7c @ 010e9e7c size=468 calls_out=8 calls_in=0
// strings: 

void FUN_010e9e7c(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char local_48;
  undefined2 local_47;
  undefined1 local_45;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  iVar4 = param_2[1];
  uVar5 = param_2[2];
  iVar1 = FUN_015f7aa0(iVar4,uVar5,&DAT_005680ec,4);
  if (iVar1 == 0) {
    FUN_015ed628(&local_40,&DAT_005680ec,4,iVar4,uVar5);
    if (local_40 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01885e10);
    }
    uVar2 = local_40;
    uVar3 = local_3c;
    uVar5 = local_38;
  }
  else {
    uVar2 = 0;
    uVar3 = iVar4;
  }
  local_40 = 0;
  local_34 = (uint)local_34._2_2_ << 0x10;
  local_3c = 0x1b6;
  local_38 = 0x101;
  FUN_015ec1bc(&local_48,&local_40,uVar3,uVar5);
  if (local_48 == '\x04') {
    FUN_01010d08(&local_40,uVar3,uVar5);
    if ((char)local_40 == '\x04') {
      FUN_010114a0(&local_40,local_44);
      if (local_40 != 0x80000000) {
        param_1[1] = local_3c;
        *param_1 = local_40;
        param_1[2] = local_38;
        param_1[3] = local_34;
        param_1[4] = uStack_30;
        param_1[5] = uStack_2c;
        param_1[6] = local_28;
        param_1[7] = local_44;
        goto joined_r0x010ea03c;
      }
      param_1[1] = local_3c;
      *param_1 = 0x80000000;
      param_1[2] = local_38;
    }
    else {
      *param_1 = 0x80000000;
      param_1[1] = local_40;
      param_1[2] = local_3c;
    }
    FUN_016dffb2(local_44);
  }
  else {
    *(char *)(param_1 + 1) = local_48;
    *(undefined1 *)((int)param_1 + 7) = local_45;
    *(undefined2 *)((int)param_1 + 5) = local_47;
    param_1[2] = local_44;
    *param_1 = 0x80000000;
  }
joined_r0x010ea03c:
  if ((uVar2 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  return;
}

