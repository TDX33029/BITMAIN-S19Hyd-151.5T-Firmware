// FUN_0168fe7c @ 0168fe7c size=1004 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0168fe7c(uint *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 in_stack_00000000;
  undefined *local_74;
  undefined *local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint *local_40;
  undefined1 local_3c;
  uint local_38;
  uint uStack_34;
  undefined1 *puStack_30;
  
  puVar12 = param_1 + 6;
  do {
    if (*puVar12 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar12);
      goto LAB_0168feac;
    }
    bVar13 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar13);
  *puVar12 = 1;
  DataMemoryBarrier(0xb);
LAB_0168feac:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[7];
  }
  else {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
    cVar1 = (char)param_1[7];
  }
  if (cVar1 != '\0') {
    local_3c = (undefined1)uVar6;
    local_40 = puVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_004148bc,0xf,&local_40,&DAT_018adee0,&DAT_018adf10);
  }
  FUN_0165a798(&local_60);
  local_50 = param_1[8];
  uStack_4c = param_1[9];
  uStack_48 = param_1[10];
  FUN_015f3c24(&local_40,&local_60,&local_50);
  uVar3 = param_1[1];
  puVar11 = puStack_30;
  uVar9 = local_38;
  uVar10 = uStack_34;
  if (((uint)local_40 & 1) != 0) {
    uVar10 = 0;
    uVar9 = 0;
    puVar11 = (undefined1 *)0x0;
  }
  if (uVar9 == *param_1 && uVar10 == uVar3) {
    if (puVar11 < (undefined1 *)param_1[2]) {
LAB_016900c0:
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
        *(undefined1 *)(param_1 + 7) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar12;
        bVar13 = (bool)hasExclusiveAccess(puVar12);
      } while (!bVar13);
      *puVar12 = 0;
      goto LAB_01690150;
    }
  }
  else if (uVar10 <= uVar3 && (uint)(*param_1 <= uVar9) <= uVar10 - uVar3) goto LAB_016900c0;
  DataMemoryBarrier(0xb);
  puVar4 = param_1 + 0xf;
  do {
    uVar3 = *puVar4;
    bVar13 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar13);
  *puVar4 = 0;
  DataMemoryBarrier(0xb);
  uVar8 = param_1[5];
  uVar5 = param_1[0xc];
  if (uVar8 <= uVar5) {
    local_70 = &DAT_018adf20;
LAB_01690248:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,uVar8,local_70);
  }
  DataMemoryBarrier(0xb);
  *(uint *)(param_1[4] + uVar5 * 4) = uVar3;
  DataMemoryBarrier(0xb);
  uVar8 = param_1[5];
  if (uVar8 == 0) {
    local_74 = &DAT_018adf30;
LAB_0169026c:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(local_74);
  }
  uVar3 = *param_1;
  uVar7 = param_1[1];
  FUN_0184606c(param_1[0xc] + 1,uVar8);
  local_70 = &DAT_018adf40;
  local_74 = &DAT_018adf60;
  uVar5 = extraout_r1;
  if (uVar9 != uVar3 || uVar10 != uVar7) goto LAB_0168fff8;
LAB_0168ffe4:
  if ((undefined1 *)param_1[2] < puVar11) {
    do {
      if (uVar8 <= uVar5) goto LAB_01690248;
      DataMemoryBarrier(0xb);
      *(undefined4 *)(param_1[4] + uVar5 * 4) = 0;
      DataMemoryBarrier(0xb);
      uVar3 = *param_1;
      uVar7 = param_1[1];
      if (uVar10 <= uVar7 && (uint)(uVar3 <= uVar9) <= uVar10 - uVar7) {
LAB_0169021c:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_004148cb,0x23,&DAT_018adf50);
      }
      bVar13 = uVar9 < uVar3;
      uVar9 = uVar9 - uVar3;
      uVar10 = uVar10 - (uVar7 + bVar13);
      if (puVar11 < (undefined1 *)param_1[2]) {
        if (uVar9 == 0 && uVar10 == 0) goto LAB_0169021c;
        bVar13 = uVar9 == 0;
        uVar9 = uVar9 - 1;
        puVar11 = &DAT_3b9aca00 + (int)puVar11;
        uVar10 = uVar10 - bVar13;
      }
      puVar11 = puVar11 + -(int)param_1[2];
      if ((undefined1 *)0x3b9ac9ff < puVar11) {
        bVar14 = 0xfffffffe < uVar9;
        uVar9 = uVar9 + 1;
        bVar13 = CARRY4(uVar10,(uint)bVar14);
        uVar10 = uVar10 + bVar14;
        if (bVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
        }
        puVar11 = puVar11 + -1000000000;
      }
      uVar8 = param_1[5];
      if (uVar8 == 0) goto LAB_0169026c;
      FUN_0184606c(uVar5 + 1,uVar8);
      uVar5 = extraout_r1_00;
      if (uVar9 == uVar3 && uVar10 == uVar7) goto LAB_0168ffe4;
LAB_0168fff8:
      if (uVar10 < uVar7 || uVar7 - uVar10 < (uint)(uVar9 <= uVar3)) break;
    } while( true );
  }
  param_1[8] = local_60;
  param_1[9] = local_5c;
  param_1[0xc] = uVar5;
  param_1[10] = local_58;
  if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar2 = FUN_015bf3f8(), iVar2 == 0))
  {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar12;
    bVar13 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar13);
  *puVar12 = 0;
LAB_01690150:
  if (uVar6 == 2) {
    software_interrupt(0);
    FUN_016d3496(puVar12,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

