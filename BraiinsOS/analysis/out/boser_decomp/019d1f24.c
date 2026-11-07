// FUN_019d1f24 @ 019d1f24 size=508 calls_out=7 calls_in=3
// strings: 

void FUN_019d1f24(uint *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d50410 != 2) {
    FUN_019d2158();
  }
  FUN_019d21ac(&local_38);
  if (local_38 == 1) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d28c20,&DAT_01d28c10);
  }
  uVar8 = *(uint *)(local_34 + 0x10);
  if (uVar8 == 0) {
    uVar9 = *(uint *)(local_34 + 0x14);
    iVar6 = uVar9 + 1;
    *(int *)(local_34 + 0x14) = iVar6;
    goto LAB_019d205c;
  }
  puVar1 = *(uint **)(local_34 + 0xc);
  uVar2 = uVar8 - 1;
  *(uint *)(local_34 + 0x10) = uVar2;
  uVar9 = puVar1[uVar2];
  if (uVar2 != 0) {
    uVar7 = *puVar1;
    uVar4 = uVar8 - 3;
    uVar5 = 0;
    uVar3 = 1;
    if (uVar2 < 2) {
      uVar4 = 0;
    }
    iVar6 = 0;
    *puVar1 = uVar9;
    if (3 < uVar8) {
      uVar2 = 0;
      do {
        uVar5 = uVar3;
        if (puVar1[iVar6 + 2] <= puVar1[uVar3]) {
          uVar5 = uVar3 + 1;
        }
        iVar6 = uVar5 << 1;
        puVar1[uVar2] = puVar1[uVar5];
        uVar3 = uVar5 << 1 | 1;
        uVar2 = uVar5;
      } while (uVar5 * 2 < uVar4);
    }
    if (iVar6 == uVar8 - 3) {
      puVar1[uVar5] = puVar1[uVar3];
      puVar1[uVar3] = uVar9;
      uVar5 = uVar3;
    }
    else {
      puVar1[uVar5] = uVar9;
      if (uVar5 == 0) {
        *puVar1 = uVar9;
        uVar9 = uVar7;
        goto LAB_019d2058;
      }
    }
    do {
      uVar2 = uVar5 - 1;
      uVar8 = uVar2 >> 1;
      if (puVar1[uVar8] <= uVar9) goto LAB_019d2054;
      puVar1[uVar5] = puVar1[uVar8];
      uVar5 = uVar8;
    } while (1 < uVar2);
    uVar5 = 0;
LAB_019d2054:
    puVar1[uVar5] = uVar9;
    uVar9 = uVar7;
  }
LAB_019d2058:
  iVar6 = uVar9 + 1;
LAB_019d205c:
  *param_1 = uVar9;
  uVar8 = 0x1fU - LZCOUNT(iVar6) & 0x1f;
  param_1[1] = 0x1fU - LZCOUNT(iVar6);
  param_1[2] = 1 << uVar8;
  param_1[3] = iVar6 - (1 << uVar8);
  FUN_00a97e8c(local_34,local_30);
  *param_2 = 1;
  uVar8 = *param_1;
  uVar2 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = param_1[3];
  param_2[1] = uVar8;
  param_2[2] = uVar2;
  param_2[3] = uVar5;
  param_2[4] = uVar3;
  uVar10 = thunk_FUN_01bee35a(uVar8,0x268);
  puVar1 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)puVar1[1] != '\x01') {
    if ((char)puVar1[1] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(puVar1,FUN_019d2238);
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  *puVar1 = uVar9;
  return;
}

