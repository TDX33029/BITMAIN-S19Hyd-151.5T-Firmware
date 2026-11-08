// FUN_011d1c0c @ 011d1c0c size=432 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_011d1c0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = *param_1;
  uVar4 = 1;
  if ((int)*(uint *)(iVar3 + 8) < 0) {
    uVar4 = *(uint *)(iVar3 + 8) ^ 0x80000000;
  }
  if (uVar4 == 0) {
    if (*(int *)(iVar3 + 0xc) != 0) {
      return 0x188a36400000001;
    }
  }
  else if (uVar4 == 1) {
    puVar6 = *(undefined4 **)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 1) {
      iVar3 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
      if (iVar3 == 0) {
        return 0x188a36400000001;
      }
    }
    else if (iVar3 != 0) {
      puVar5 = puVar6 + iVar3 * 8;
      do {
        iVar3 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
        if (iVar3 == 0) {
          return 0x188a36400000001;
        }
        puVar6 = puVar6 + 8;
      } while (puVar6 != puVar5);
    }
  }
  else {
    puVar6 = *(undefined4 **)(iVar3 + 0x10);
    iVar3 = *(int *)(iVar3 + 0x14) << 5;
    while (iVar3 != 0) {
      iVar1 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
      iVar3 = iVar3 + -0x20;
      puVar6 = puVar6 + 8;
      if (iVar1 == 0) {
        return 0x188a36400000001;
      }
    }
  }
  uVar7 = FUN_011cf8a8(param_1 + 5,param_2,param_3,param_4,param_5);
  FUN_01158f58(&iStack_44,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_30 = iStack_44;
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

