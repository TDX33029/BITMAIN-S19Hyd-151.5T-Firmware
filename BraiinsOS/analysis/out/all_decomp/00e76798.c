// FUN_00e76798 @ 00e76798 size=344 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00e76854) */

void FUN_00e76798(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint local_28;
  uint local_24;
  
  if ((DAT_018dd988 & 0x7fffffff) != 0) goto LAB_00e768ac;
LAB_00e767b8:
  iVar7 = *param_1;
  puVar5 = (uint *)(iVar7 + 8);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (*(uint *)(iVar7 + 0x10) == *puVar5) {
    return;
  }
  uVar6 = *puVar5;
  local_28 = *(uint *)(iVar7 + 0xc);
  do {
    local_24 = uVar6 + 1;
    if (local_28 == uVar6) {
      uVar4 = local_24;
    }
    else {
      if (local_24 == local_28) break;
      uVar4 = local_28;
    }
    uVar2 = *puVar5;
    uVar3 = *(uint *)(iVar7 + 0xc);
    if (uVar2 == uVar6 && uVar3 == local_28) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = local_24;
          *(uint *)(iVar7 + 0xc) = uVar4;
          DataMemoryBarrier(0xb);
          FUN_00e76900(*(undefined4 *)(*(int *)(iVar7 + 0x14) + (uVar6 & 0xff) * 4));
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_004130bd,0x1f,&DAT_018ac3d0);
        }
        uVar2 = *puVar5;
        uVar3 = *(uint *)(iVar7 + 0xc);
      } while (uVar2 == uVar6 && uVar3 == local_28);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar6 = uVar2;
    local_28 = uVar3;
    if (*(uint *)(iVar7 + 0x10) == uVar2) {
      return;
    }
  } while( true );
  param_1 = (int *)FUN_015fef84(1,&local_28,&local_24,0);
LAB_00e768ac:
  iVar7 = FUN_015bf3f8();
  if (iVar7 == 0) {
    return;
  }
  goto LAB_00e767b8;
}

