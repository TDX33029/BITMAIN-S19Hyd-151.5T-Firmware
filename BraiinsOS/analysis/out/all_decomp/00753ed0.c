// FUN_00753ed0 @ 00753ed0 size=328 calls_out=5 calls_in=4
// strings: 

void FUN_00753ed0(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  char local_24;
  char local_23;
  undefined4 local_22;
  undefined2 local_1e;
  uint local_1c;
  
  iVar1 = param_4[1];
  if (iVar1 == 0x7fffffff) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\x04';
    return;
  }
  iVar2 = param_4[2];
  if (iVar2 == iVar1) {
    FUN_00f5f538(param_4,0x40);
    iVar1 = param_4[1];
    iVar2 = param_4[2];
  }
  uVar4 = iVar2 - iVar1;
  local_2c = 0;
  uVar3 = *param_4 + iVar1;
  local_30 = 0;
  local_38 = uVar3;
  local_34 = uVar4;
  local_28 = uVar3;
  FUN_01642868(&local_24,param_2,param_3,&local_38);
  if (local_24 != '\x04') {
    if (local_24 == '\x05') {
      *param_1 = '\x05';
      return;
    }
    *(undefined4 *)(param_1 + 2) = local_22;
    *(undefined2 *)(param_1 + 6) = local_1e;
    param_1[1] = local_23;
    *param_1 = local_24;
    return;
  }
  if (local_34 < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_30,local_34,&DAT_018acc90);
  }
  local_1c = local_38;
  if (uVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00fa8e5c(&local_28,&local_1c,&DAT_018a4784);
  }
  if (uVar4 < local_30) {
    local_38 = local_30;
    local_34 = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_38);
  }
  *(uint *)(param_1 + 4) = local_30;
  *param_1 = '\x04';
  param_4[1] = iVar1 + local_30;
  return;
}

