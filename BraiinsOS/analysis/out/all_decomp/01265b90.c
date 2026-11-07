// FUN_01265b90 @ 01265b90 size=548 calls_out=7 calls_in=9
// strings: 

void FUN_01265b90(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int extraout_r2;
  int *piVar4;
  int extraout_r3;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  byte local_18;
  int local_14;
  
  uVar2 = 0;
  piVar4 = *(int **)(*(int *)(param_2 + 0x10) + 0x58);
  if (*piVar4 == 1) {
    if (param_5 < (uint)piVar4[1]) goto LAB_01265cc0;
    bVar1 = *(byte *)(piVar4 + 7);
    bVar7 = (bVar1 & 1) != 0;
    if (bVar7) {
      bVar1 = *(byte *)(piVar4 + 8);
    }
    if (((bVar7 && (bVar1 & 2) != 0) && (piVar4[2] == 1)) && ((uint)piVar4[3] < param_5))
    goto LAB_01265cc0;
  }
  uVar8 = thunk_FUN_016de0ee();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  piVar4 = (int *)((int)uVar8 + extraout_r3);
  if ((char)piVar4[1] == '\0') {
    do {
      bVar7 = (bool)hasExclusiveAccess(0x18d912c);
    } while (!bVar7);
    if (DAT_018d912c == 0) {
      DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
    }
    iVar6 = DAT_018d912c + 1;
    *piVar4 = DAT_018d912c;
    DAT_018d912c = iVar6;
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  iVar6 = *piVar4;
  DataMemoryBarrier(0xb);
  if (iVar6 == *(int *)(extraout_r2 + 0x2f8)) {
    bVar7 = true;
    DataMemoryBarrier(0xb);
    *(undefined4 *)(extraout_r2 + 0x2f8) = 1;
    iVar5 = *(int *)(iVar3 + 0xc);
    local_18 = 0;
    local_24 = 1;
    iVar3 = *(int *)(iVar3 + 8) + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8;
    local_20 = iVar6;
    local_1c = extraout_r2;
  }
  else {
    FUN_01265df8(&local_24,extraout_r2,iVar6);
    iVar5 = *(int *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 8) + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8;
    if (local_24 == 1) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
  }
  (**(code **)(iVar5 + 0x28))(local_30,iVar3);
  iVar3 = local_20;
  if (bVar7) {
    local_14 = local_20;
    if (local_20 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(1,&DAT_00414ca0,&local_14,0);
    }
    DataMemoryBarrier(0xb);
    *(int *)(local_1c + 0x2f8) = local_20;
  }
  else if ((local_18 & 1) == 0) {
    FUN_0126617c(local_1c,local_20);
  }
  else {
    FUN_012632b4(local_20);
    thunk_FUN_016d3fb4(iVar3);
  }
  uVar2 = local_30[0];
LAB_01265cc0:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0x80000001;
  return;
}

