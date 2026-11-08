// FUN_01aaafa8 @ 01aaafa8 size=548 calls_out=6 calls_in=525
// strings: 

/* WARNING: Removing unreachable block (ram,0x01aab178) */

char FUN_01aaafa8(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *unaff_r5;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  pcVar5 = (char *)((int)param_1 + 9);
  cVar6 = *pcVar5;
  if (cVar6 == '\0') {
    bVar8 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar1) {
        *pcVar5 = '\x01';
        goto LAB_01aaafec;
      }
      cVar6 = *pcVar5;
    } while (cVar6 == '\0');
  }
  bVar8 = false;
  ClearExclusiveLocal();
LAB_01aaafec:
  DataMemoryBarrier(0xb);
  if (!bVar8) {
    if (cVar6 != '\x02') {
      return '\x01';
    }
    goto LAB_01aab158;
  }
  DataMemoryBarrier(0xb);
  puVar2 = DAT_01d51aec;
  do {
    local_14 = puVar2;
    DataMemoryBarrier(0xb);
    param_1[1] = local_14;
    puVar2 = DAT_01d51aec;
    if (param_1 == local_14) {
      local_20 = param_1;
      FUN_01aab28c(&local_20,&local_14);
      goto LAB_01aab194;
    }
    if (DAT_01d51aec == local_14) {
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(0x1d51aec);
        if (bVar8) {
          bVar8 = true;
          DAT_01d51aec = param_1;
          goto LAB_01aab058;
        }
      } while (DAT_01d51aec == local_14);
    }
    bVar8 = false;
    ClearExclusiveLocal();
LAB_01aab058:
    DataMemoryBarrier(0xb);
  } while (!bVar8);
  DataMemoryBarrier(0xb);
  local_20 = (undefined4 *)0x0;
  unaff_r5 = &DAT_01d50d3c;
  if (DAT_01d50d18 == '\0') {
    DataMemoryBarrier(0xb);
    local_20 = param_1;
    if (DAT_01d50d3c != 2) {
      FUN_01aac100();
    }
    if (DAT_01d50d44 < 0x3ffffffe) {
      bVar8 = (bool)hasExclusiveAccess(0x1d50d44);
      if (!bVar8) goto LAB_01aab17c;
      DataMemoryBarrier(0xb);
      DAT_01d50d44 = DAT_01d50d44 + 1;
    }
    else {
LAB_01aab17c:
      FUN_0197a5c8(&DAT_01d50d44);
    }
    if ((char)DAT_01d50d4c != '\0') {
LAB_01aab194:
      local_1c = unaff_r5 + 2;
      local_20 = unaff_r5 + 5;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d2e858,&DAT_01d2e848);
    }
    local_18 = &DAT_01d50d44;
    local_1c = &DAT_01d50d50;
    local_20 = (undefined4 *)0x1;
  }
  local_14 = (undefined4 *)CONCAT31(local_14._1_3_,3);
  FUN_01aac4ec(local_20,&DAT_01d50d50,*param_1,&local_14);
  DataMemoryBarrier(0xb);
  uVar7 = 0;
  if (((uint)local_14 & 0xff) != 3) {
    uVar7 = (uint)local_14 & 0xff;
  }
  uVar3 = (char)uVar7;
  if (uVar7 != 2) {
    uVar3 = 1;
  }
  if (uVar7 == 0) {
    uVar3 = (char)uVar7;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  DataMemoryBarrier(0xb);
  FUN_01aab23c(&local_20);
  DataMemoryBarrier(0xb);
  *(undefined1 *)((int)param_1 + 9) = 2;
LAB_01aab158:
  cVar6 = *(char *)(param_1 + 2);
  cVar4 = cVar6;
  if (cVar6 != '\x02') {
    cVar4 = '\x01';
  }
  if (cVar6 == '\0') {
    cVar4 = cVar6;
  }
  return cVar4;
}

