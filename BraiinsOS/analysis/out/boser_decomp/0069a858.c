// FUN_0069a858 @ 0069a858 size=648 calls_out=6 calls_in=1
// strings: 

void FUN_0069a858(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_60 [2];
  int local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44 [3];
  int local_38;
  int local_34;
  int local_30;
  byte local_2c;
  int local_28;
  
  uVar4 = 0x10100;
  uVar7 = 3;
  if (param_4 != 0 && param_3 != 0) {
    puVar2 = param_2 + param_3 * 6;
    uVar12 = thunk_FUN_01bee35a(puVar2,0x1cc);
    piVar10 = (int *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
    do {
      iVar9 = param_2[2];
      local_48 = 1;
      local_4c = param_5;
      local_50 = 0;
      local_54 = param_5;
      local_60[0] = 0;
      piVar3 = *(int **)(*(int *)(iVar9 + 0x10) + 0x58);
      if (*piVar3 == 1) {
        if ((uint)piVar3[1] <= param_5) {
          bVar1 = *(byte *)(piVar3 + 7);
          bVar11 = (bVar1 & 1) != 0;
          if (bVar11) {
            bVar1 = *(byte *)(piVar3 + 8);
          }
          if (((!bVar11 || (bVar1 & 2) == 0) || (piVar3[2] != 1)) || (param_5 <= (uint)piVar3[3]))
          goto LAB_0069a914;
        }
      }
      else {
LAB_0069a914:
        iVar5 = param_2[3];
        local_58 = param_4;
        if ((char)piVar10[1] == '\0') {
          do {
            bVar11 = (bool)hasExclusiveAccess(0x1d4f0ac);
          } while (!bVar11);
          if (DAT_01d4f0ac == 0) {
            DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
          }
          iVar8 = DAT_01d4f0ac + 1;
          *piVar10 = DAT_01d4f0ac;
          DAT_01d4f0ac = iVar8;
          *(undefined1 *)(piVar10 + 1) = 1;
        }
        iVar8 = *piVar10;
        DataMemoryBarrier(0xb);
        if (iVar8 == *(int *)(iVar5 + 0x2f8)) {
          bVar11 = true;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar5 + 0x2f8) = 1;
          iVar6 = *(int *)(iVar9 + 0xc);
          local_2c = 0;
          local_38 = 1;
          iVar9 = *(int *)(iVar9 + 8) + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8;
          local_34 = iVar8;
          local_30 = iVar5;
        }
        else {
          FUN_0069ab78(&local_38,iVar5,iVar8);
          iVar6 = *(int *)(iVar9 + 0xc);
          iVar9 = *(int *)(iVar9 + 8) + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8;
          if (local_38 == 1) {
            bVar11 = true;
            iVar5 = local_30;
          }
          else {
            bVar11 = false;
            iVar5 = local_34;
          }
        }
        (**(code **)(iVar6 + 0x28))(local_44,iVar9,iVar5,local_60);
        if (bVar11) {
          local_28 = local_34;
          if (local_34 == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01304210(1,&DAT_005288a8,&local_28,0);
          }
          DataMemoryBarrier(0xb);
          *(int *)(local_30 + 0x2f8) = local_34;
        }
        else if ((local_2c & 1) == 0) {
          FUN_0069ada4();
        }
        else {
          FUN_0069af44(local_34);
        }
        if (local_44[0] != 0) {
          uVar7 = *param_2;
          uVar4 = (uint)*(uint3 *)(param_2 + 1);
          goto LAB_0069a880;
        }
      }
      param_2 = param_2 + 6;
    } while (param_2 != puVar2);
    uVar7 = 3;
    uVar4 = 0x10100;
  }
LAB_0069a880:
  *param_1 = uVar7;
  param_1[1] = uVar4;
  return;
}

