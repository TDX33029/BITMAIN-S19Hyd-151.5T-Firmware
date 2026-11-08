// FUN_018f2ddc @ 018f2ddc size=452 calls_out=5 calls_in=2
// strings: 

void FUN_018f2ddc(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 auStack_48 [36];
  
  FUN_018f3024(&local_60);
  iVar5 = *param_2;
  (**(code **)(*(int *)(iVar5 + 0x14) + 0x14))(&local_54,*(undefined4 *)(iVar5 + 0x10));
  if (local_58 < local_54) {
    puVar3 = &DAT_01d23ed0;
  }
  else if (local_58 - local_54 < local_54) {
    puVar3 = &DAT_01d23ee0;
  }
  else {
    uVar1 = (local_58 - local_54) - local_54;
    if (uVar1 < local_50) {
      puVar3 = &DAT_01d23ef0;
    }
    else {
      uVar1 = uVar1 - local_50;
      if (local_50 <= uVar1) {
        uVar6 = *(undefined4 *)(iVar5 + 0x10);
        iVar7 = *(int *)(iVar5 + 0x14);
        FUN_019316f8(auStack_48,local_5c + local_54,local_54);
        iVar8 = local_5c + local_54 + local_54;
        iVar4 = iVar8 + local_50;
        uVar10 = (**(code **)(iVar7 + 0x10))(uVar6,auStack_48,iVar4,local_50);
        uVar6 = *(undefined4 *)(iVar5 + 0x10);
        iVar7 = *(int *)(iVar5 + 0x14);
        FUN_019316f8(auStack_48,local_5c,local_54);
        uVar11 = (**(code **)(iVar7 + 0xc))
                           (uVar6,auStack_48,iVar8,local_50,iVar4 + local_50,uVar1 - local_50);
        FUN_0134bd64(local_60,local_5c);
        uVar9 = *(uint *)(iVar5 + 0x20);
        iVar5 = *(int *)(iVar5 + 0x24);
        FUN_01443048(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        uVar1 = 0xffff0000;
        if (uVar9 < 0xffff0000) {
          uVar1 = uVar9;
        }
        uVar2 = 0xffff0000;
        if (iVar5 != -1) {
          uVar2 = uVar9;
        }
        *(int *)(param_1 + 8) = (int)uVar11;
        if (iVar5 == -1) {
          uVar2 = uVar1;
        }
        *(int *)(param_1 + 0xc) = (int)((ulonglong)uVar11 >> 0x20);
        *(undefined1 *)(param_1 + 0x31) = 1;
        *(uint *)(param_1 + 0x18) = uVar2;
        *(int *)(param_1 + 0x1c) = iVar5;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        FUN_01443048(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
        *(int *)(param_1 + 0x10) = (int)uVar10;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(int *)(param_1 + 0x14) = (int)((ulonglong)uVar10 >> 0x20);
        *(undefined1 *)(param_1 + 0x32) = 1;
        return;
      }
      puVar3 = &DAT_01d23f00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0053349c,0x13,puVar3);
}

