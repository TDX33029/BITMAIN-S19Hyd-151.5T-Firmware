// FUN_008ee7b0 @ 008ee7b0 size=1224 calls_out=8 calls_in=7
// strings: 

void FUN_008ee7b0(undefined1 *param_1,undefined1 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 local_55;
  undefined1 auStack_54 [12];
  byte local_48 [4];
  undefined4 *local_44;
  undefined1 *local_38;
  code *local_34;
  
  local_34 = FUN_008eee18;
  local_38 = &local_55;
  local_55 = param_2;
  FUN_00600d2c(auStack_54,&DAT_0057785b,&local_38);
  puVar2 = (undefined4 *)FUN_008e9500(auStack_54);
  uVar4 = *(undefined4 *)(param_1 + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar9 = FUN_008e8e20(uVar4,puVar2);
    puVar2 = (undefined4 *)(uVar9 >> 0x20);
    if ((uVar9 & 1) != 0 && puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
    }
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 != 0) {
      piVar7 = (int *)(iVar3 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
          puVar6 = (uint *)(iVar3 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar1);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar3 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar6;
          bVar1 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar1);
        *puVar6 = uVar8 | 2;
        DataMemoryBarrier(0xb);
        if (uVar8 == 0) {
          iVar5 = *(int *)(iVar3 + 0x18);
          *(undefined4 *)(iVar3 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar1);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar5 != 0) {
            (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar3 + 0x1c));
          }
        }
      }
      piVar7 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 8));
        return;
      }
    }
    break;
  case 1:
    FUN_008e8b74(uVar4);
    goto LAB_008eec84;
  case 2:
    uVar9 = FUN_008e8e20(uVar4,puVar2);
    puVar2 = (undefined4 *)(uVar9 >> 0x20);
    if ((uVar9 & 1) != 0 && puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
    }
    break;
  case 3:
    uVar9 = FUN_008e8e20(uVar4,puVar2);
    puVar2 = (undefined4 *)(uVar9 >> 0x20);
    if ((uVar9 & 1) != 0 && puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
    }
    break;
  case 4:
    local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
    local_34 = (code *)puVar2;
    FUN_008e91c0(local_48,uVar4,&local_38);
    if ((local_48[0] & 1) != 0) {
      (**(code **)*local_44)();
    }
    break;
  case 5:
    local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
    local_34 = (code *)puVar2;
    FUN_008e91c0(local_48,uVar4,&local_38);
    if ((local_48[0] & 1) != 0) {
      (**(code **)*local_44)();
    }
    break;
  case 6:
    local_38 = (undefined1 *)0x1;
    local_34 = (code *)puVar2;
    FUN_008e8ff0(local_48,uVar4,&local_38);
    if ((local_48[0] & 1) != 0) {
      (**(code **)*local_44)();
    }
    break;
  case 7:
    local_38 = (undefined1 *)0x1;
    local_34 = (code *)puVar2;
    FUN_008e8ff0(local_48,uVar4,&local_38);
    if ((local_48[0] & 1) != 0) {
      (**(code **)*local_44)();
    }
    break;
  case 8:
    FUN_008e8ccc(uVar4,0);
LAB_008eec84:
    (**(code **)*puVar2)(puVar2);
  }
  return;
}

