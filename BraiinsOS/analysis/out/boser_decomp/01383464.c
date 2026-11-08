// FUN_01383464 @ 01383464 size=236 calls_out=1 calls_in=6
// strings: 

void FUN_01383464(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar1 = *(char *)(param_2 + 0x90);
  if (cVar1 == '\x03') {
    *(undefined1 *)param_1 = 3;
    return;
  }
  if (cVar1 == '\0') {
    local_3c = *(undefined4 *)(param_2 + 0x94);
    uStack_38 = *(undefined4 *)(param_2 + 0x98);
    uVar2 = *(undefined1 *)(param_2 + 0x91);
    local_40 = local_40 & 0xffffff00;
  }
  else {
    if (cVar1 != '\x01') {
      uVar2 = *(undefined1 *)(param_2 + 0x91);
      if (*(int *)(param_2 + 0x94) == -0x80000000) {
        local_28 = 0x80000000;
      }
      else {
        FUN_006666fc(&local_28,*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c));
      }
      puVar3 = (undefined4 *)((uint)&local_40 | 4);
      *puVar3 = local_28;
      puVar3[1] = uStack_24;
      puVar3[2] = uStack_20;
      local_40 = CONCAT31(CONCAT21(local_40._2_2_,uVar2),2);
      goto LAB_0138353c;
    }
    (*(code *)**(undefined4 **)(param_2 + 0x98))
              (&uStack_38,param_2 + 0xa4,*(undefined4 *)(param_2 + 0x9c),
               *(undefined4 *)(param_2 + 0xa0));
    uVar2 = *(undefined1 *)(param_2 + 0x91);
    local_3c = *(undefined4 *)(param_2 + 0x94);
    local_40 = CONCAT31(local_40._1_3_,1);
  }
  local_40._0_2_ = CONCAT11(uVar2,(undefined1)local_40);
LAB_0138353c:
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  param_1[4] = uStack_30;
  param_1[5] = uStack_2c;
  return;
}

