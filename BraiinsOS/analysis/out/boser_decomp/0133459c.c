// FUN_0133459c @ 0133459c size=552 calls_out=6 calls_in=0
// strings: 

undefined4
FUN_0133459c(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int extraout_r2;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_2c;
  int local_28;
  int local_24;
  byte local_20;
  int local_1c;
  
  uVar4 = param_3[4];
  iVar2 = *(int *)(param_1 + 0x10);
  if ((uVar4 == 0) || (uVar8 = 0, (*(byte *)(*(int *)(iVar2 + 0x58) + 0x1c) & 1) == 0)) {
    uVar7 = param_3[5];
    if (uVar7 < (uint)param_3[3]) {
      piVar3 = *(int **)(iVar2 + 0x58);
      if ((*(byte *)(piVar3 + 8) & 2) != 0) {
        return 0;
      }
    }
    else {
      piVar3 = *(int **)(iVar2 + 0x58);
    }
    if (*piVar3 == 1) {
      piVar5 = (int *)(uVar7 - uVar4);
      if (uVar7 < uVar4) {
        piVar5 = (int *)0x0;
      }
      if (piVar5 < (int *)piVar3[1]) {
        return 0;
      }
      if ((((*param_3 - 1U < 2) || ((*(byte *)(piVar3 + 7) & 1) != 0)) &&
          ((*(byte *)(piVar3 + 8) & 2) != 0)) &&
         ((piVar3[2] == 1 && (piVar3 = (int *)piVar3[3], piVar3 < piVar5)))) {
        return 0;
      }
    }
    uVar9 = thunk_FUN_01bee35a(piVar3,param_2,0x1cc);
    iVar2 = (int)((ulonglong)uVar9 >> 0x20);
    piVar3 = (int *)((int)uVar9 + extraout_r2);
    if ((char)piVar3[1] == '\0') {
      do {
        bVar1 = (bool)hasExclusiveAccess(0x1d4f0ac);
      } while (!bVar1);
      if (DAT_01d4f0ac == 0) {
        DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
      }
      iVar6 = DAT_01d4f0ac + 1;
      *piVar3 = DAT_01d4f0ac;
      DAT_01d4f0ac = iVar6;
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    iVar6 = *piVar3;
    DataMemoryBarrier(0xb);
    if (iVar6 == *(int *)(iVar2 + 0x2f8)) {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar2 + 0x2f8) = 1;
      local_20 = 0;
      local_2c = 1;
      local_28 = iVar6;
      local_24 = iVar2;
    }
    else {
      FUN_0133e834(&local_2c);
    }
    iVar2 = local_2c;
    if (local_2c == 1) {
      iVar6 = local_24;
    }
    else {
      iVar6 = local_28;
    }
    uVar8 = (**(code **)(*(int *)(param_1 + 0xc) + 0x30))
                      (*(int *)(param_1 + 8) +
                       (*(int *)(*(int *)(param_1 + 0xc) + 8) - 1U & 0xfffffff8) + 8,iVar6,param_3,
                       param_4,param_5);
    if (iVar2 == 0) {
      if ((local_20 & 1) == 0) {
        FUN_01334330();
      }
      else {
        FUN_013344d0(local_28);
      }
    }
    else {
      local_1c = local_28;
      if (local_28 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(1,&DAT_005288a8,&local_1c,0,param_5,&DAT_01d06ca0);
      }
      DataMemoryBarrier(0xb);
      *(int *)(local_24 + 0x2f8) = local_28;
    }
  }
  return uVar8;
}

