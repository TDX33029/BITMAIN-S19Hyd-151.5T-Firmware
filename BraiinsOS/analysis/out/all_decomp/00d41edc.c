// FUN_00d41edc @ 00d41edc size=624 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00d4207c) */
/* WARNING: Removing unreachable block (ram,0x00d42084) */
/* WARNING: Removing unreachable block (ram,0x00d42088) */
/* WARNING: Removing unreachable block (ram,0x00d420e0) */
/* WARNING: Removing unreachable block (ram,0x00d420f0) */
/* WARNING: Removing unreachable block (ram,0x00d420f4) */
/* WARNING: Removing unreachable block (ram,0x00d42100) */
/* WARNING: Removing unreachable block (ram,0x00d42104) */
/* WARNING: Removing unreachable block (ram,0x00d42114) */
/* WARNING: Removing unreachable block (ram,0x00d42118) */
/* WARNING: Removing unreachable block (ram,0x00d42090) */
/* WARNING: Removing unreachable block (ram,0x00d42098) */
/* WARNING: Removing unreachable block (ram,0x00d420a4) */
/* WARNING: Removing unreachable block (ram,0x00d420ac) */
/* WARNING: Removing unreachable block (ram,0x00d420b8) */
/* WARNING: Removing unreachable block (ram,0x00d420bc) */
/* WARNING: Removing unreachable block (ram,0x00d420d0) */
/* WARNING: Removing unreachable block (ram,0x00d420dc) */
/* WARNING: Removing unreachable block (ram,0x00d42124) */
/* WARNING: Removing unreachable block (ram,0x00d42130) */

void FUN_00d41edc(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar2 + 0x10) < 0) {
      puVar3 = (uint *)(iVar2 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 != 0) {
LAB_00d41f50:
      do {
        FUN_00cf4fd4(&local_28,param_1);
        if (local_28 == 0x80000015) {
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) {
            return;
          }
          FUN_016da3a8();
        }
        else if (local_28 == 0x80000014) {
          return;
        }
      } while ((local_28 & 0xfffffffe) == 0x80000014);
      uVar5 = 3;
      if ((int)local_28 < 0) {
        uVar5 = local_28 ^ 0x80000000;
      }
      puVar4 = local_20;
      if (uVar5 != 2) goto code_r0x00d41fc4;
      for (; local_1c != 0; local_1c = local_1c + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_1c = 0;
      puVar4 = local_20;
      puVar6 = local_24;
      puVar3 = (uint *)((uint)&local_28 | 4);
      if (local_24 != (undefined1 *)0x0) {
        do {
          *puVar4 = 0;
          puVar6 = puVar6 + -1;
          puVar4 = puVar4 + 1;
        } while (puVar6 != (undefined1 *)0x0);
      }
      goto LAB_00d42054;
    }
  }
  return;
code_r0x00d41fc4:
  if (uVar5 == 3) {
    if (local_20 != (undefined1 *)0x0) {
      puVar4 = local_24;
      do {
        *puVar4 = 0;
        local_20 = local_20 + -1;
        puVar4 = puVar4 + 1;
      } while (local_20 != (undefined1 *)0x0);
    }
    local_20 = (undefined1 *)0x0;
    uVar5 = local_28;
    puVar4 = local_24;
    puVar3 = &local_28;
    if (local_28 != 0) {
      do {
        *puVar4 = 0;
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
      puVar3 = &local_28;
    }
LAB_00d42054:
    if (*puVar3 != 0) {
      thunk_FUN_016d3fb4(puVar3[1]);
    }
  }
  goto LAB_00d41f50;
}

