// FUN_011d2290 @ 011d2290 size=476 calls_out=4 calls_in=0
// strings: 

void FUN_011d2290(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = *param_1;
  uVar4 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar4 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar4 == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) goto LAB_011d23e0;
  }
  else {
    if (uVar4 == 1) {
      puVar6 = *(undefined4 **)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 1) {
        iVar1 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
        if (iVar1 == 0) goto LAB_011d2340;
      }
      else if (iVar1 != 0) {
        puVar5 = puVar6 + iVar1 * 8;
        do {
          iVar1 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
          if (iVar1 == 0) goto LAB_011d2340;
          puVar6 = puVar6 + 8;
        } while (puVar6 != puVar5);
      }
LAB_011d23e0:
      uVar7 = FUN_011cf8a8(param_1 + 5,param_2,param_3,param_4,param_5);
      FUN_01158f58(&local_50,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      local_30 = local_50;
      local_2c = iStack_4c + iStack_48 * 4;
      local_38 = iStack_4c;
      local_34 = iStack_4c;
      piVar3 = (int *)thunk_FUN_016d4a50(0x10);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      goto LAB_011d243c;
    }
    puVar6 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) goto LAB_011d23e0;
      iVar2 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
      iVar1 = iVar1 + -0x20;
      puVar6 = puVar6 + 8;
    } while (iVar2 != 0);
  }
LAB_011d2340:
  uVar7 = FUN_011cf8a8(param_1 + 10,param_2,param_3,param_4,param_5);
  FUN_01158f58(&local_44,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_30 = local_44;
  local_2c = iStack_40 + iStack_3c * 4;
  local_38 = iStack_40;
  local_34 = iStack_40;
  piVar3 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
LAB_011d243c:
  *piVar3 = local_38;
  piVar3[1] = local_34;
  piVar3[2] = local_30;
  piVar3[3] = local_2c;
  return;
}

