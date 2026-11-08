// FUN_011d156c @ 011d156c size=476 calls_out=4 calls_in=0
// strings: 

undefined8
FUN_011d156c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = *param_1;
  uVar3 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      return 0x188a36400000001;
    }
  }
  else {
    if (uVar3 == 1) {
      iVar4 = *(int *)(iVar1 + 0x10);
      puVar5 = *(undefined4 **)(iVar1 + 0xc);
      if (iVar4 == 1) {
        iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_5);
        if (iVar1 == 0) goto LAB_011d1660;
      }
      else if (iVar4 != 0) {
        puVar6 = puVar5 + iVar4 * 8;
        do {
          iVar1 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_5);
          if (iVar1 == 0) goto LAB_011d1660;
          puVar5 = puVar5 + 8;
        } while (puVar5 != puVar6);
      }
      return 0x188a36400000001;
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) {
        return 0x188a36400000001;
      }
      iVar4 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_5);
      iVar1 = iVar1 + -0x20;
      puVar5 = puVar5 + 8;
    } while (iVar4 != 0);
  }
LAB_011d1660:
  uVar7 = FUN_011cf8a8(param_1 + 5,param_2,param_3,param_4,param_5);
  FUN_01158f58(&local_44,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_30 = local_44;
  local_2c = iStack_40 + iStack_3c * 4;
  local_38 = iStack_40;
  local_34 = iStack_40;
  piVar2 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar2 = local_38;
  piVar2[1] = local_34;
  piVar2[2] = local_30;
  piVar2[3] = local_2c;
  return CONCAT44(&UNK_01889fe8,piVar2);
}

