// FUN_0068cfe4 @ 0068cfe4 size=396 calls_out=6 calls_in=1
// strings: assertion failed: self.inner.semaphore.is_idle()

void FUN_0068cfe4(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint unaff_r8;
  int local_70 [10];
  int local_48 [9];
  
  piVar6 = local_70;
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *param_1 = -0x7fffffff;
      return;
    }
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  FUN_0069b77c(local_70,param_2 + 0x70,param_2 + 0x20);
  if (local_70[0] == -0x80000000) {
    DataMemoryBarrier(0xb);
    if (*(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1) {
      puVar4 = &DAT_01d2e18c;
LAB_0068d160:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar4);
    }
LAB_0068d118:
    *param_1 = -0x80000000;
  }
  else {
    if (local_70[0] == -0x7fffffff) {
      FUN_019f79e0(param_2 + 0x40,param_3);
      piVar6 = local_48;
      FUN_0069b77c(piVar6,param_2 + 0x70,param_2 + 0x20);
      if (local_48[0] == -0x80000000) {
        DataMemoryBarrier(0xb);
        if (*(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1) {
          puVar4 = &DAT_01d2e17c;
          goto LAB_0068d160;
        }
      }
      else {
        if (local_48[0] != -0x7fffffff) {
          FUN_019f8c54(param_2 + 0x80,1);
          goto LAB_0068d130;
        }
        if ((*(char *)(param_2 + 0x7c) == '\0') ||
           (DataMemoryBarrier(0xb), *(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1)) {
          *param_1 = -0x7fffffff;
          goto LAB_0068d144;
        }
      }
      goto LAB_0068d118;
    }
    FUN_019f8c54(param_2 + 0x80,1);
LAB_0068d130:
    iVar2 = piVar6[1];
    iVar3 = piVar6[2];
    iVar5 = piVar6[3];
    *param_1 = *piVar6;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar5;
    iVar2 = piVar6[5];
    iVar3 = piVar6[6];
    iVar5 = piVar6[7];
    iVar7 = piVar6[8];
    param_1[4] = piVar6[4];
    param_1[5] = iVar2;
    param_1[6] = iVar3;
    param_1[7] = iVar5;
    param_1[8] = iVar7;
  }
  uVar1 = 0;
LAB_0068d144:
  FUN_019edbc4(uVar1,unaff_r8);
  return;
}

