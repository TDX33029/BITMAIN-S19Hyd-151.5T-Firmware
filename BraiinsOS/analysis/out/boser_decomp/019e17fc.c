// FUN_019e17fc @ 019e17fc size=240 calls_out=1 calls_in=2
// strings: 

uint * FUN_019e17fc(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_20;
  uint local_1c;
  
  iVar7 = *param_1;
  puVar2 = (uint *)(iVar7 + 8);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar4 = *puVar2;
  local_20 = *(uint *)(iVar7 + 0xc);
  do {
    uVar3 = uVar4;
    if (*(uint *)(iVar7 + 0x10) == uVar3) {
      return (uint *)0x0;
    }
    local_1c = uVar3 + 1;
    if (local_20 == uVar3) {
      uVar6 = local_1c;
    }
    else {
      if (local_1c == local_20) {
        puVar2 = (uint *)FUN_019b6878(1,&local_20,&local_1c,0);
        DataMemoryBarrier(0xb);
        do {
          uVar4 = *puVar2;
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = uVar4 - 0x40;
        DataMemoryBarrier(0xb);
        if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
        }
        if ((uVar4 & 0xffffffc0) == 0x40) {
                    /* WARNING: Could not recover jumptable at 0x019d8da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar2 = (uint *)(**(code **)(puVar2[2] + 8))();
          return puVar2;
        }
        return puVar2;
      }
      uVar6 = local_20;
    }
    uVar4 = *puVar2;
    uVar5 = *(uint *)(iVar7 + 0xc);
    if (uVar4 == uVar3 && uVar5 == local_20) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = local_1c;
          *(uint *)(iVar7 + 0xc) = uVar6;
          bVar1 = true;
          goto LAB_019e189c;
        }
        uVar4 = *puVar2;
        uVar5 = *(uint *)(iVar7 + 0xc);
      } while (uVar4 == uVar3 && uVar5 == local_20);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_019e189c:
    DataMemoryBarrier(0xb);
    local_20 = uVar5;
    if (bVar1) {
      return *(uint **)(*(int *)(iVar7 + 0x14) + (uVar3 & 0xff) * 4);
    }
  } while( true );
}

