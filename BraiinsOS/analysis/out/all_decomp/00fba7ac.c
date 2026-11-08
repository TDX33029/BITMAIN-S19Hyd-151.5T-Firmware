// FUN_00fba7ac @ 00fba7ac size=184 calls_out=3 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00fba80c) */

void FUN_00fba7ac(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_24;
  int local_20;
  int local_1c;
  
  do {
    iVar3 = 0;
    uVar4 = 1000;
    local_20 = 0;
LAB_00fba7c8:
    do {
      local_24 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        local_24 = uVar4;
      }
      if (iVar3 != 0) {
        local_24 = 0x7fffffff;
      }
      bVar5 = uVar4 < local_24;
      uVar4 = uVar4 - local_24;
      iVar3 = iVar3 - (uint)bVar5;
      iVar1 = FUN_016e041a(&local_24,&local_24);
      if (iVar1 == -1) {
        piVar2 = (int *)FUN_016d2bc8();
        local_1c = *piVar2;
        if (local_1c != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_015f3600(&local_1c,&DAT_005688c0,0,&DAT_018aadd0);
        }
        bVar5 = CARRY4(uVar4,local_24);
        uVar4 = uVar4 + local_24;
        iVar3 = iVar3 + ((int)local_24 >> 0x1f) + (uint)bVar5;
        local_1c = 4;
        if (0 < local_20) goto LAB_00fba7c8;
      }
      else {
        local_20 = 0;
      }
    } while (uVar4 != 0 || iVar3 != 0);
  } while( true );
}

