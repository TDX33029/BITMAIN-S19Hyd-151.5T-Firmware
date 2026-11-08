// FUN_0160ed0c @ 0160ed0c size=228 calls_out=3 calls_in=1
// strings: 

void FUN_0160ed0c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = 0;
  iVar2 = 0x15;
  uStack_20 = 0;
  uStack_1c = 0;
  iStack_24 = iVar2;
  iVar1 = FUN_0160ab20(param_2);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 8);
    FUN_0160ad0c(&local_28,0,iVar2,uVar3);
    if (local_28 == -0x7fffffff) {
      local_48 = 0x80000000;
    }
    else {
      FUN_0160ec7c(&local_48,&local_28);
    }
    FUN_0160ad0c(&local_28,1,iVar2,uVar3);
    if (local_28 != -0x7fffffff) {
      FUN_0160ec7c(&local_38,&local_28);
      goto LAB_0160ed5c;
    }
  }
  else {
    local_48 = 0x80000000;
  }
  local_38 = 0x80000000;
LAB_0160ed5c:
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = local_38;
  param_1[4] = uStack_34;
  param_1[5] = uStack_30;
  return;
}

