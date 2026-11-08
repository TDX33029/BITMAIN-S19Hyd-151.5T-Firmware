// FUN_00ff0a2c @ 00ff0a2c size=624 calls_out=7 calls_in=0
// strings: 

undefined4
FUN_00ff0a2c(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  int local_38;
  int local_34;
  int local_30;
  byte local_2c;
  int local_28;
  
  uVar6 = param_3[4];
  piVar8 = *(int **)(*(int *)(param_1 + 0x10) + 0x58);
  if (((uVar6 == 0) || (uVar9 = 0, (*(byte *)(piVar8 + 7) & 1) == 0)) &&
     ((uVar4 = param_3[5], (uint)param_3[3] <= uVar4 ||
      (uVar9 = 0, (*(byte *)(piVar8 + 8) & 2) == 0)))) {
    if (*piVar8 == 1) {
      uVar7 = uVar4 - uVar6;
      if (uVar4 < uVar6) {
        uVar7 = 0;
      }
      if (uVar7 < (uint)piVar8[1]) {
        return 0;
      }
      if ((((*param_3 - 1U < 2) || ((*(byte *)(piVar8 + 7) & 1) != 0)) &&
          ((*(byte *)(piVar8 + 8) & 2) != 0)) && ((piVar8[2] == 1 && ((uint)piVar8[3] < uVar7)))) {
        return 0;
      }
    }
    uVar11 = thunk_FUN_016de0ee();
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    iVar5 = (int)uVar11;
    if (*(char *)(iVar5 + 0x234) == '\0') {
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18d912c);
      } while (!bVar1);
      if (DAT_018d912c == 0) {
        DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
      }
      iVar2 = DAT_018d912c + 1;
      *(int *)(iVar5 + 0x230) = DAT_018d912c;
      DAT_018d912c = iVar2;
      *(undefined1 *)(iVar5 + 0x234) = 1;
    }
    iVar5 = *(int *)(iVar5 + 0x230);
    DataMemoryBarrier(0xb);
    if (iVar5 == *(int *)(iVar3 + 0x2f8)) {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar3 + 0x2f8) = 1;
      iVar10 = *(int *)(param_1 + 0xc);
      local_2c = 0;
      local_38 = 1;
      iVar2 = *(int *)(param_1 + 8) + (*(int *)(iVar10 + 8) - 1U & 0xfffffff8) + 8;
      local_34 = iVar5;
      local_30 = iVar3;
    }
    else {
      FUN_010046b4(&local_38,iVar3,iVar5,*(int *)(iVar3 + 0x2f8));
      iVar10 = *(int *)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 8) + (*(int *)(iVar10 + 8) - 1U & 0xfffffff8) + 8;
      if (local_38 == 1) {
        iVar3 = local_30;
      }
      else {
        iVar3 = local_34;
      }
    }
    iVar5 = local_38;
    uVar9 = (**(code **)(iVar10 + 0x30))(iVar2,iVar3);
    iVar3 = local_34;
    if (iVar5 == 0) {
      if ((local_2c & 1) == 0) {
        FUN_00fef7a8(local_30,local_34);
        return uVar9;
      }
      FUN_00ff029c(local_34);
      thunk_FUN_016d3fb4(iVar3);
      return uVar9;
    }
    local_28 = local_34;
    if (local_34 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(1,&DAT_00414ca0,&local_28,0,param_5,&DAT_0188af78);
    }
    DataMemoryBarrier(0xb);
    *(int *)(local_30 + 0x2f8) = local_34;
  }
  return uVar9;
}

