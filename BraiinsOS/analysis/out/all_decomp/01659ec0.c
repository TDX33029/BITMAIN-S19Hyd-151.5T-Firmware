// FUN_01659ec0 @ 01659ec0 size=356 calls_out=7 calls_in=52
// strings: assertion failed: prev.ref_count() >= 1

void FUN_01659ec0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *unaff_r7;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  iVar5 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_01659f18;
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  bVar7 = *(char *)(iVar5 + 0x32) != '\x02';
  if (bVar7) {
    unaff_r7 = *(int **)(iVar5 + 0x20);
  }
  if (bVar7 && unaff_r7 != (int *)0x0) {
    iVar5 = *unaff_r7;
    bVar7 = iVar5 == 0;
    if (bVar7) {
      iVar5 = unaff_r7[1];
    }
    if (bVar7 && param_1 == iVar5) {
      if (unaff_r7[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018ad0bc);
      }
      puVar6 = (uint *)unaff_r7[3];
      unaff_r7[2] = -1;
      if (puVar6 != (uint *)0x0) {
        uVar2 = *puVar6;
        uVar1 = puVar6[3];
        if (uVar1 == uVar2) {
          FUN_0165c8e8(puVar6);
          uVar2 = *puVar6;
          uVar1 = puVar6[3];
        }
        uVar4 = puVar6[2] + uVar1;
        puVar6[3] = uVar1 + 1;
        uVar3 = uVar4 - uVar2;
        if (uVar4 < uVar2) {
          uVar3 = uVar4;
        }
        *(uint **)(puVar6[1] + uVar3 * 4) = param_2;
        *(uint *)(param_1 + 0xa8) = uVar1 + 1;
        unaff_r7[2] = unaff_r7[2] + 1;
        return;
      }
      unaff_r7[2] = 0;
      DataMemoryBarrier(0xb);
      do {
        uVar1 = *param_2;
        bVar7 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar7);
      *param_2 = uVar1 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      if ((uVar1 & 0xffffffc0) == 0x40) {
        (**(code **)(param_2[2] + 8))(param_2);
        return;
      }
      return;
    }
  }
LAB_01659f18:
  FUN_0163bc70(param_1 + 0x128,param_2);
  FUN_01647770(param_1 + 0x180);
  return;
}

