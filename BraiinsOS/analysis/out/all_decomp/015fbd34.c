// FUN_015fbd34 @ 015fbd34 size=196 calls_out=3 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015fbda0) */

void FUN_015fbd34(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  bVar3 = param_1 == 0 && param_2 == 0;
  if (param_1 == 0 && param_2 == 0) {
    bVar3 = param_3 == 0;
  }
  if (!bVar3) {
LAB_015fbd5c:
    do {
      local_24 = 0x7fffffff;
      if (param_1 < 0x7fffffff) {
        local_24 = param_1;
      }
      if (param_2 != 0) {
        local_24 = 0x7fffffff;
      }
      bVar3 = param_1 < local_24;
      param_1 = param_1 - local_24;
      param_2 = param_2 - (uint)bVar3;
      local_20 = param_3;
      iVar1 = FUN_016e041a(&local_24,&local_24);
      param_3 = 0;
      if (iVar1 == -1) {
        piVar2 = (int *)FUN_016d2bc8();
        local_1c = *piVar2;
        if (local_1c != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_015f3600(&local_1c,&DAT_005688c0,0,&DAT_018aadd0);
        }
        bVar3 = CARRY4(param_1,local_24);
        param_1 = param_1 + local_24;
        param_2 = param_2 + ((int)local_24 >> 0x1f) + (uint)bVar3;
        local_1c = 4;
        param_3 = local_20;
        if (0 < local_20) goto LAB_015fbd5c;
      }
    } while (param_1 != 0 || param_2 != 0);
  }
  return;
}

