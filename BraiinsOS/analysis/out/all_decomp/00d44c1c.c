// FUN_00d44c1c @ 00d44c1c size=256 calls_out=3 calls_in=0
// strings: 

void FUN_00d44c1c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_38;
  int local_34;
  int local_30;
  char local_2c;
  char local_2b;
  int local_28;
  
  iVar1 = *param_2;
  local_30 = 0;
  uVar3 = *(uint *)(iVar1 + 100);
  uVar4 = *(uint *)(iVar1 + 0x68);
  local_34 = 4;
  local_38 = 0;
  if ((uVar3 <= uVar4) && ((*(byte *)(iVar1 + 0x6c) & 1) == 0)) {
    iVar2 = 0;
    iVar1 = 4;
    do {
      FUN_00894508(&local_2c,param_2,uVar3);
      if (local_2c != '\0') {
        *param_1 = -0x80000000;
        param_1[1] = local_28;
        if (local_38 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_34);
        return;
      }
      if (local_2b != '\0') {
        if (iVar2 == local_38) {
          FUN_00d64d00(&local_38);
          iVar1 = local_34;
        }
        *(uint *)(iVar1 + iVar2 * 4) = uVar3;
        iVar2 = iVar2 + 1;
        local_30 = iVar2;
      }
    } while ((uVar3 < uVar4) && (uVar3 = uVar3 + (uVar3 < uVar4), uVar3 <= uVar4));
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
}

