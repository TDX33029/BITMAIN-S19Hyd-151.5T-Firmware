// FUN_0163bdc0 @ 0163bdc0 size=552 calls_out=6 calls_in=113
// strings: assertion failed: self.tail.is_none()

void FUN_0163bdc0(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 7) != '\x01') {
    return;
  }
  puVar6 = (uint *)*param_1;
  puVar4 = puVar6 + 1;
  if ((char)*puVar4 == '\0') {
    bVar7 = (bool)hasExclusiveAccess(puVar4);
    if (!bVar7) goto LAB_0163bfc4;
    *(char *)puVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0163bfc4:
    FUN_01280da8(puVar4);
  }
  FUN_0128236c(puVar4);
  uVar3 = *puVar6;
  DataMemoryBarrier(0xb);
  bVar8 = false;
  bVar7 = true;
  switch(param_1[6]) {
  case 0:
    break;
  case 1:
    bVar7 = false;
    break;
  case 2:
    bVar8 = true;
    bVar7 = false;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac71c);
  case 5:
    bVar7 = false;
  }
  puVar2 = param_1 + 2;
  puVar1 = puVar6 + 2;
  if (*puVar2 == 0) {
    puVar5 = (uint *)*puVar1;
    if (puVar5 != puVar2) goto LAB_0163becc;
    puVar5 = (uint *)param_1[3];
    *puVar1 = (uint)puVar5;
    if (puVar5 == (uint *)0x0) goto LAB_0163bebc;
LAB_0163be88:
    *puVar5 = *puVar2;
LAB_0163be90:
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    puVar5 = (uint *)param_1[3];
    *(uint **)(*puVar2 + 4) = puVar5;
    if (puVar5 != (uint *)0x0) goto LAB_0163be88;
LAB_0163bebc:
    if ((uint *)puVar6[3] == puVar2) {
      puVar6[3] = *puVar2;
      goto LAB_0163be90;
    }
  }
  puVar5 = (uint *)*puVar1;
LAB_0163becc:
  if (puVar5 == (uint *)0x0) {
    if (puVar6[3] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.tail.is_none()",0x25,&DAT_018acf1c);
    }
    if ((uVar3 & 3) == 1) {
      DataMemoryBarrier(0xb);
      *puVar6 = uVar3 & 0xfffffffc;
      DataMemoryBarrier(0xb);
    }
  }
  if (!bVar7 && !bVar8) {
    uVar9 = FUN_0163b4f4(puVar1,puVar6);
    if ((int)uVar9 != 0) {
      FUN_01282570(puVar4);
      if ((char)*puVar4 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar4);
          if (bVar7) {
            *(char *)puVar4 = '\0';
            goto LAB_0163bf5c;
          }
        } while ((char)*puVar4 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(puVar4);
LAB_0163bf5c:
                    /* WARNING: Could not recover jumptable at 0x0163bf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)uVar9 + 4))((int)((ulonglong)uVar9 >> 0x20));
      return;
    }
  }
  FUN_01282570(puVar4);
  if ((char)*puVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar7 = (bool)hasExclusiveAccess(puVar4);
      if (bVar7) {
        *(char *)puVar4 = '\0';
        return;
      }
    } while ((char)*puVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(puVar4);
  return;
}

