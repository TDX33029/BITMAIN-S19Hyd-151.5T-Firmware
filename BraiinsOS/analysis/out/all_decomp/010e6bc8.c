// FUN_010e6bc8 @ 010e6bc8 size=264 calls_out=3 calls_in=0
// strings: 

void FUN_010e6bc8(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 local_2c [3];
  
  puVar4 = (undefined4 *)*param_2;
  iVar5 = param_2[1];
  if ((uint)(iVar5 - (int)puVar4) < 4) {
    param_1[1] = 0x80000005;
    param_1[2] = puVar4;
    param_1[3] = 4;
    *param_1 = 1;
    return;
  }
  local_2c[0] = 0x80000005;
  FUN_00f2cc28(local_2c);
  puVar2 = puVar4 + 1;
  uVar3 = *puVar4;
  *param_2 = (int)puVar2;
  if ((uint)(iVar5 - (int)puVar2) < 2) {
    uStack_30 = 2;
    puStack_34 = puVar2;
    local_38 = -0x7ffffffb;
  }
  else {
    local_2c[0] = 0x80000005;
    FUN_00f2cc28(local_2c);
    uVar1 = *(undefined2 *)(puVar4 + 1);
    *param_2 = (int)puVar4 + 6;
    FUN_010e5938(&local_38,param_2,uVar1);
    if (local_38 == -0x7ffffff6) {
      if (puStack_34 == (undefined4 *)0x0) {
        FUN_01613578(param_1 + 1,1,&DAT_01885c50,&DAT_018ab990);
        *param_1 = 1;
        return;
      }
      param_1[1] = puStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uVar3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = local_38;
  param_1[2] = puStack_34;
  param_1[3] = uStack_30;
  *param_1 = 1;
  return;
}

