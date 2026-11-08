// FUN_009f2014 @ 009f2014 size=312 calls_out=6 calls_in=1
// strings: 

void FUN_009f2014(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *local_24 [3];
  
  uVar6 = *param_1;
  puVar7 = (uint *)param_1[1];
  FUN_009f2220(puVar7 + 0x1c,uVar6,param_2);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((puVar7[8] & ~puVar7[0x12]) == *puVar7) {
    DataMemoryBarrier(0xb);
    uVar5 = puVar7[0x12];
    if ((uVar5 & puVar7[8]) == 0) goto LAB_009f20a8;
  }
  puVar2 = (uint *)(param_2 + 0x14);
  uVar5 = *puVar2;
  if (uVar5 == 0) {
    uVar5 = 1;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
      if (bVar1) {
        *puVar2 = 1;
        goto LAB_009f20a4;
      }
    } while (*puVar2 == 0);
  }
  ClearExclusiveLocal();
LAB_009f20a4:
  DataMemoryBarrier(0xb);
LAB_009f20a8:
  puVar3 = (undefined4 *)param_1[2];
  iVar4 = FUN_009efc50(param_2,uVar5,*puVar3,puVar3[1],puVar3[2]);
  if (iVar4 - 1U < 2) {
    FUN_009f2414(local_24,puVar7 + 0x1c,uVar6);
    if (local_24[0] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0186b3bc);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *local_24[0];
      bVar1 = (bool)hasExclusiveAccess(local_24[0]);
    } while (!bVar1);
    *local_24[0] = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fbaa00();
      return;
    }
  }
  else if (iVar4 != 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0186b3ac);
  }
  return;
}

