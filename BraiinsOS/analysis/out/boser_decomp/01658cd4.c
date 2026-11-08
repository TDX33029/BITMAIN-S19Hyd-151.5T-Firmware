// FUN_01658cd4 @ 01658cd4 size=628 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01658cd4(longlong *param_1,int param_2,undefined4 *******param_3,undefined4 param_4,
                 int *param_5)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 local_7c [2];
  undefined4 local_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int *local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  uint local_3c;
  undefined4 *******local_38;
  undefined4 *******pppppppuStack_34;
  undefined4 *******pppppppuStack_30;
  uint local_2c;
  
  piStack_70 = param_5;
  uStack_6c = 0;
  local_64 = 0;
  local_68 = param_5;
  local_7c[0] = 0;
  local_74 = param_4;
  FUN_016bed40(&local_60,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  uVar11 = local_50;
  uVar6 = local_54;
  piVar2 = *(int **)(*(int *)(param_2 + 0x10) + 0x58);
  local_60._0_4_ = 0;
  if (*piVar2 == 1) {
    lVar10 = (ulonglong)local_60._4_4_ << 0x20;
    if (param_5 < (int *)piVar2[1]) goto LAB_01658eb0;
    bVar1 = *(byte *)(piVar2 + 7);
    bVar8 = (bVar1 & 1) != 0;
    if (bVar8) {
      bVar1 = *(byte *)(piVar2 + 8);
    }
    if (((bVar8 && (bVar1 & 2) != 0) && (piVar2[2] == 1)) &&
       (piVar2 = (int *)piVar2[3], lVar10 = (ulonglong)local_60._4_4_ << 0x20, piVar2 < param_5))
    goto LAB_01658eb0;
  }
  uVar9 = thunk_FUN_01bee35a(piVar2,0x1cc);
  piVar2 = (int *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)piVar2[1] == '\0') {
    do {
      bVar8 = (bool)hasExclusiveAccess(0x1d4f0ac);
    } while (!bVar8);
    if (DAT_01d4f0ac == 0) {
      DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
    }
    iVar3 = DAT_01d4f0ac + 1;
    *piVar2 = DAT_01d4f0ac;
    DAT_01d4f0ac = iVar3;
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  pppppppuVar5 = (undefined4 *******)*piVar2;
  DataMemoryBarrier(0xb);
  if (pppppppuVar5 == (undefined4 *******)param_3[0xbe]) {
    DataMemoryBarrier(0xb);
    param_3[0xbe] = (undefined4 ******)0x1;
    local_2c = local_2c & 0xffffff00;
    local_38 = (undefined4 *******)&DAT_00000001;
    pppppppuStack_34 = pppppppuVar5;
    pppppppuStack_30 = param_3;
  }
  else {
    FUN_0133e834(&local_38,param_3);
  }
  pppppppuVar5 = local_38;
  local_48 = local_38;
  local_44 = pppppppuStack_34;
  local_40 = pppppppuStack_30;
  local_3c = local_2c;
  bVar8 = ((uint)local_38 & 1) == 0;
  pppppppuVar4 = &local_48;
  if (bVar8) {
    pppppppuVar4 = pppppppuStack_34;
  }
  if (!bVar8) {
    pppppppuVar4 = pppppppuStack_30;
  }
  lVar10 = (**(code **)(*(int *)(param_2 + 0xc) + 0x30))
                     (*(int *)(param_2 + 8) +
                      (*(int *)(*(int *)(param_2 + 0xc) + 8) - 1U & 0xfffffff8) + 8,pppppppuVar4,
                      local_7c,uVar6,uVar11);
  if (((uint)pppppppuVar5 & 1) == 0) {
    if ((local_3c & 1) == 0) {
      FUN_016590f4();
    }
    else {
      FUN_01659294(local_44);
    }
  }
  else {
    local_38 = local_44;
    if (local_44 == (undefined4 *******)0x2) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(1,&DAT_005288a8,&local_38,0,uVar11,&DAT_01d06ca0);
    }
    DataMemoryBarrier(0xb);
    local_40[0xbe] = local_44;
  }
  if ((int)lVar10 != 0) {
    iVar3 = *(int *)(*(int *)(param_2 + 0x10) + 0x58);
    uVar6 = *(undefined4 *)(iVar3 + 0x10);
    iVar7 = *(int *)(iVar3 + 0x14);
    *param_1 = lVar10;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *(undefined4 *)((int)param_1 + 0xc) = local_54;
    *(undefined4 *)(param_1 + 2) = local_50;
    *(undefined4 *)((int)param_1 + 0x14) = uStack_4c;
    iVar3 = iVar7 + 1;
    if (iVar7 == -1) {
      iVar3 = -1;
    }
    *(int *)((int)param_1 + 0x1c) = iVar3;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)(param_1 + 4) = param_4;
    *(int **)((int)param_1 + 0x24) = param_5;
    return;
  }
LAB_01658eb0:
  *(undefined4 *)param_1 = 2;
  local_60 = lVar10;
  FUN_0169f478(&local_60);
  return;
}

