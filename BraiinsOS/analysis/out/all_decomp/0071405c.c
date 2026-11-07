// FUN_0071405c @ 0071405c size=504 calls_out=3 calls_in=1
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0071405c(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  uint unaff_r8;
  int unaff_r9;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_98;
  uint uStack_94;
  undefined4 *puStack_90;
  uint local_40;
  undefined1 *local_3c;
  
  FUN_015f5984(&local_98,*param_1,param_1[1]);
  if (local_98 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uStack_94 & 0xff) {
    case 0:
      cVar1 = FUN_005bc530(puStack_90);
      break;
    case 1:
      if ((uStack_94 >> 8 & 0xff) == 0) goto LAB_007141d8;
      goto LAB_007141a8;
    case 2:
      cVar1 = *(char *)(puStack_90 + 2);
      break;
    case 3:
      if (*(char *)(puStack_90 + 2) != '\0') {
        pcVar6 = (char *)*puStack_90;
        puVar8 = (undefined4 *)puStack_90[1];
        unaff_r8 = param_1[2];
        unaff_r9 = param_1[3];
        puVar5 = (undefined1 *)param_1[4];
        puVar9 = puStack_90;
        if ((code *)*puVar8 != (code *)0x0) {
          (*(code *)*puVar8)(pcVar6);
        }
        goto LAB_0071416c;
      }
      goto LAB_007141d8;
    }
    if (cVar1 != '\0') {
LAB_007141a8:
      local_40 = param_1[2];
      unaff_r9 = param_1[3];
      puVar5 = (undefined1 *)param_1[4];
      goto LAB_007141b4;
    }
LAB_007141d8:
    if ((uStack_94 & 0xff) == 3) {
      uVar7 = *puStack_90;
      puVar9 = (undefined4 *)puStack_90[1];
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      thunk_FUN_016d3fb4(puStack_90);
    }
    puVar5 = &DAT_3b9aca00;
    puVar3 = (undefined1 *)param_1[4];
joined_r0x007141c0:
    if (puVar3 == &DAT_3b9aca00) {
LAB_007141c4:
      if (puVar5 == &DAT_3b9aca00) {
        return 0;
      }
      goto LAB_00714250;
    }
  }
  else {
    uVar2 = local_40;
    puVar5 = local_3c;
    if (local_3c >= &DAT_3b9aca00) {
      uVar2 = 2;
      puVar5 = &DAT_3b9aca00;
    }
    unaff_r9 = (int)local_40 >> 0x1f;
    if ((local_3c < &DAT_3b9aca00) || ((uVar2 & 0xff) != 3)) {
LAB_007141b4:
      puVar3 = (undefined1 *)param_1[4];
      unaff_r8 = local_40;
      goto joined_r0x007141c0;
    }
    pcVar6 = "invalid timestamp";
    puVar8 = (undefined4 *)&DAT_00000011;
    puVar9 = (undefined4 *)&DAT_018aad2c;
    unaff_r8 = local_40;
    if (_DAT_00000011 != (code *)0x0) {
      (*_DAT_00000011)("invalid timestamp");
    }
LAB_0071416c:
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(pcVar6);
    }
    thunk_FUN_016d3fb4(puVar9);
    puVar3 = (undefined1 *)param_1[4];
    if (puVar3 == &DAT_3b9aca00) goto LAB_007141c4;
  }
  if (((puVar3 == puVar5) && (puVar5 != &DAT_3b9aca00)) &&
     (param_1[2] == unaff_r8 && param_1[3] == unaff_r9)) {
    return 0;
  }
LAB_00714250:
  param_1[4] = puVar5;
  param_1[2] = unaff_r8;
  param_1[3] = unaff_r9;
  return 1;
}

