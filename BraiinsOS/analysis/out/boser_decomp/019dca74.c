// FUN_019dca74 @ 019dca74 size=364 calls_out=5 calls_in=2
// strings: 

void FUN_019dca74(undefined4 *param_1,short *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*param_2 != 3) {
    uVar4 = *(undefined4 *)(param_2 + 2);
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 6);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 10);
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    uVar7 = *(undefined4 *)(param_2 + 0xe);
    param_1[4] = *(undefined4 *)(param_2 + 8);
    param_1[5] = uVar4;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    *param_2 = 2;
    return;
  }
  iVar5 = *(int *)(param_2 + 2);
  local_30 = 2;
  uVar2 = FUN_019ec670(param_3);
  uVar3 = 0;
  if ((uVar2 & 0xff) != 2) {
    uVar3 = uVar2;
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 & 0xffffff;
    (**(code **)(*(int *)(iVar5 + 8) + 0xc))(iVar5,&local_30,param_3);
    if ((local_30 == 2) && ((uVar3 >> 8 & 1) != 0)) {
      uVar8 = thunk_FUN_01bee35a(local_24,0x20);
      iVar5 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
      if (*(char *)(iVar5 + 0x38) != '\x01') {
        if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_019dcb74;
        FUN_019a2bcc(iVar5,&LAB_019efb68);
        *(undefined1 *)(iVar5 + 0x38) = 1;
      }
      *(char *)(iVar5 + 0x31) = (char)(uVar3 >> 0x10);
      *(char *)(iVar5 + 0x30) = (char)(uVar3 >> 8);
    }
    else if (local_30 != 2) {
      if ((local_30 & 1) == 0) {
        if (uStack_2c == 0) {
          uVar1 = 4;
          uVar3 = local_24;
          local_24 = local_30;
          uStack_2c = uStack_28;
        }
        else {
          uVar1 = 3;
          uVar3 = uStack_28;
        }
        param_1[1] = uStack_2c;
        param_1[2] = uVar3;
        param_1[3] = local_24;
        param_1[4] = uStack_20;
        *(undefined2 *)param_1 = uVar1;
        return;
      }
      FUN_019ecf50(&local_30,uStack_20,uStack_1c);
      param_1[1] = local_30;
      param_1[2] = uStack_2c;
      uVar1 = 4;
      goto LAB_019dcb78;
    }
  }
  else {
    FUN_019ee134(&local_30);
  }
LAB_019dcb74:
  uVar1 = 5;
LAB_019dcb78:
  *(undefined2 *)param_1 = uVar1;
  return;
}

