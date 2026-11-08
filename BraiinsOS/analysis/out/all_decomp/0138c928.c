// FUN_0138c928 @ 0138c928 size=840 calls_out=1 calls_in=1
// strings: UnsupportedStream | UnsupportedOverlapping

undefined4 FUN_0138c928(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  code *pcVar9;
  int iVar10;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  puVar8 = (undefined1 *)*param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar8) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0138c974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,"InvalidInputAnchoredInvalidInputUnanchored",0x14);
    return uVar1;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0138ca8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"InvalidInputUnanchored",0x16);
    return uVar1;
  case 2:
    uVar1 = *param_2;
    iVar10 = param_2[1];
    pcVar9 = *(code **)(iVar10 + 0xc);
    iVar2 = (*pcVar9)(uVar1,"UnsupportedStream",0x11);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar9)(uVar1,&DAT_00414a7e,3);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar1;
      iStack_2c = iVar10;
      iVar2 = FUN_00fb1f64(&local_30,"got",3);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      puVar3 = &DAT_00421844;
      ppuVar6 = (undefined **)&DAT_018b2ce4;
LAB_0138cc24:
      iVar2 = FUN_00fb1f64(&local_30,ppuVar6[(byte)puVar8[1]],
                           *(undefined4 *)(puVar3 + (uint)(byte)puVar8[1] * 4));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
      if (iVar2 != 0) {
        return 1;
      }
      uVar7 = 1;
      pcVar5 = "}";
      goto LAB_0138cc70;
    }
    iVar2 = (*pcVar9)(uVar1,&DAT_00414a79,3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar9)(uVar1,"got",3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar9)(uVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    puVar3 = &DAT_00421838;
    puVar4 = &DAT_018b2cd8;
    break;
  case 3:
    uVar1 = *param_2;
    iVar10 = param_2[1];
    pcVar9 = *(code **)(iVar10 + 0xc);
    iVar2 = (*pcVar9)(uVar1,"UnsupportedOverlapping",0x16);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar9)(uVar1,&DAT_00414a7e,3);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar1;
      iStack_2c = iVar10;
      iVar2 = FUN_00fb1f64(&local_30,"got",3);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      puVar3 = &DAT_0042185c;
      ppuVar6 = &PTR_DAT_018b2cfc;
      goto LAB_0138cc24;
    }
    iVar2 = (*pcVar9)(uVar1,&DAT_00414a79,3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar9)(uVar1,"got",3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar9)(uVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    puVar3 = &DAT_00421850;
    puVar4 = &DAT_018b2cf0;
    break;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0138c994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"UnsupportedEmpty",0x10);
    return uVar1;
  }
  iVar2 = (*pcVar9)(uVar1,*(undefined4 *)(puVar4 + (uint)(byte)puVar8[1] * 4),
                    *(undefined4 *)(puVar3 + (uint)(byte)puVar8[1] * 4));
  if (iVar2 != 0) {
    return 1;
  }
  uVar7 = 2;
  pcVar5 = " }";
LAB_0138cc70:
  uVar1 = (*pcVar9)(uVar1,pcVar5,uVar7);
  return uVar1;
}

