// FUN_0185430c @ 0185430c size=396 calls_out=3 calls_in=1
// strings: 

void FUN_0185430c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_c0 [168];
  
  uVar4 = *(uint *)(*param_2 + 0x80);
  DataMemoryBarrier(0xb);
  puVar2 = (uint *)(*param_2 + 0x80);
  do {
    if ((uVar4 & 1) != 0) {
      FUN_01bed4e2(param_1,param_3,0xa8);
      return;
    }
    if (uVar4 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
    uVar5 = *puVar2;
    if (uVar5 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar4 + 2;
          bVar1 = true;
          uVar4 = uVar5;
          goto LAB_01854378;
        }
        uVar5 = *puVar2;
      } while (uVar5 == uVar4);
    }
    bVar1 = false;
    ClearExclusiveLocal();
    uVar4 = uVar5;
LAB_01854378:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      FUN_01bed4e2(auStack_c0,param_3,0xa8);
      iVar6 = *param_2;
      puVar2 = (uint *)(iVar6 + 0x24);
      do {
        uVar4 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar4 + 1;
      DataMemoryBarrier(0xb);
      iVar3 = FUN_017c547c(iVar6 + 0x20,uVar4);
      FUN_01bed4e2((short)(uVar4 & 0xf) * 0xa8 + iVar3,auStack_c0,0xa8);
      puVar2 = (uint *)(iVar3 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (uVar4 & 0xf);
      puVar2 = (uint *)(iVar6 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar4 | 2;
      DataMemoryBarrier(0xb);
      if (uVar4 == 0) {
        iVar3 = *(int *)(iVar6 + 0x40);
        *(undefined4 *)(iVar6 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x44));
        }
      }
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
  } while( true );
}

