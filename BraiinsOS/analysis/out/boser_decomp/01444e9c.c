// FUN_01444e9c @ 01444e9c size=276 calls_out=2 calls_in=3
// strings: 

void FUN_01444e9c(undefined1 *param_1,char *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char local_8c;
  char local_8b;
  int iStack_84;
  undefined1 auStack_80 [48];
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iStack_84 = param_3[3];
  if (*param_2 == '\x04') {
    local_8c = param_2[1];
    local_8b = param_2[2];
    (**(code **)(iVar1 + 0x10))(&iStack_84,iVar2,param_3[2]);
  }
  else {
    local_8b = (char)((uint)iVar2 >> 8);
    local_8c = (char)iVar2;
    local_50 = *(undefined4 *)param_2;
    uStack_4c = *(undefined4 *)(param_2 + 4);
    local_48 = *(int *)(param_2 + 8);
    local_44 = *(undefined4 *)(param_2 + 0xc);
    local_40 = *(undefined4 *)(param_2 + 0x10);
    local_3c = *(undefined4 *)(param_2 + 0x14);
    uStack_38 = *(undefined4 *)(param_2 + 0x18);
    uStack_34 = *(undefined4 *)(param_2 + 0x1c);
    uStack_30 = *(undefined4 *)(param_2 + 0x20);
    uStack_2c = *(undefined4 *)(param_2 + 0x24);
    uStack_28 = *(undefined4 *)(param_2 + 0x28);
    if (iVar1 != 0) {
      if (local_48 != 0) {
        (**(code **)(local_48 + 0x10))(&local_3c,local_44,local_40);
      }
      local_44 = CONCAT31(CONCAT21(local_44._2_2_,local_8b),local_8c);
      local_48 = iVar1;
      FUN_01bed4e2((int)&local_44 + 2,(int)param_3 + 6,10);
      uVar3 = (undefined1)local_50;
      local_8c = local_50._1_1_;
      local_8b = local_50._2_1_;
      FUN_01bed4e2(auStack_80,(uint)&local_50 | 3,0x29);
      goto LAB_01444f8c;
    }
    FUN_0143bfe8(&local_50);
  }
  uVar3 = 4;
LAB_01444f8c:
  param_1[2] = local_8b;
  param_1[1] = local_8c;
  *param_1 = uVar3;
  FUN_01bed4e2(param_1 + 3,auStack_80,0x29);
  return;
}

