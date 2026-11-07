// FUN_0160f2f0 @ 0160f2f0 size=296 calls_out=1 calls_in=1
// strings: 

void FUN_0160f2f0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_2c [3];
  
  puVar4 = (undefined4 *)*param_2;
  iVar6 = param_2[1];
  if ((uint)(iVar6 - (int)puVar4) < 4) {
    param_1[3] = 4;
    param_1[1] = 0x80000005;
    param_1[2] = puVar4;
    *param_1 = 1;
    return;
  }
  local_2c[0] = 0x80000005;
  FUN_00f2cc28(local_2c);
  puVar1 = puVar4 + 1;
  uVar8 = *puVar4;
  *param_2 = (int)puVar1;
  if ((uint)(iVar6 - (int)puVar1) < 4) {
    uVar8 = 4;
  }
  else {
    local_2c[0] = 0x80000005;
    FUN_00f2cc28(local_2c);
    puVar1 = puVar4 + 2;
    *param_2 = (int)puVar1;
    if ((uint)(iVar6 - (int)puVar1) < 4) {
      uVar8 = 4;
      param_1[1] = 0x80000005;
      goto LAB_0160f390;
    }
    uVar5 = puVar4[1];
    local_2c[0] = 0x80000005;
    FUN_00f2cc28(local_2c);
    puVar1 = puVar4 + 3;
    *param_2 = (int)puVar1;
    if (7 < (uint)(iVar6 - (int)puVar1)) {
      uVar7 = puVar4[2];
      local_2c[0] = 0x80000005;
      FUN_00f2cc28(local_2c);
      uVar2 = puVar4[3];
      *param_2 = (int)(puVar4 + 5);
      uVar3 = puVar4[4];
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      param_1[4] = uVar8;
      param_1[5] = uVar5;
      param_1[6] = uVar7;
      *param_1 = 0;
      return;
    }
    uVar8 = 8;
  }
  param_1[1] = 0x80000005;
LAB_0160f390:
  param_1[2] = puVar1;
  param_1[3] = uVar8;
  *param_1 = 1;
  return;
}

