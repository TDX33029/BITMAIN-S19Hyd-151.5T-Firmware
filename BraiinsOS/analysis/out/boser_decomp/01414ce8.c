// FUN_01414ce8 @ 01414ce8 size=360 calls_out=1 calls_in=6
// strings: 

void FUN_01414ce8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_r9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 local_26;
  
  cVar1 = *param_2;
  ppuVar2 = *(undefined ***)(param_2 + 8);
  if (cVar1 == '\x03') {
    ppuVar5 = *(undefined ***)(param_2 + 0x18);
    if (ppuVar2 == (undefined **)0x0 || ppuVar5 == (undefined **)0x0) {
      uVar3 = 0;
      if (ppuVar2 == (undefined **)0x0) {
        uVar12 = 1;
        uVar8 = 0;
        uVar9 = 0;
        ppuVar2 = &PTR_FUN_01cf4330;
        goto LAB_01414d78;
      }
      uVar9 = 0;
LAB_01414d40:
      uVar12 = *(undefined4 *)(param_2 + 0xc);
      uVar8 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 0x14);
LAB_01414d78:
      if (ppuVar5 == (undefined **)0x0) {
        uVar7 = 1;
        uVar11 = 0;
        uVar6 = 0xffff;
        ppuVar5 = &PTR_FUN_01cf426c;
        uVar10 = 0;
      }
      else {
        local_26 = *(undefined2 *)(param_2 + 0x2a);
        uVar6 = *(undefined2 *)(param_2 + 0x28);
        uVar7 = *(undefined4 *)(param_2 + 0x1c);
        uVar10 = *(undefined4 *)(param_2 + 0x20);
        uVar11 = *(undefined4 *)(param_2 + 0x24);
      }
      *(undefined2 *)(param_1 + 10) = uVar6;
      param_1[8] = uVar10;
      param_1[9] = uVar11;
      *(undefined2 *)((int)param_1 + 0x2a) = local_26;
      *param_1 = uVar9;
      param_1[1] = unaff_r9;
      param_1[2] = ppuVar2;
      param_1[3] = uVar12;
      param_1[4] = uVar8;
      param_1[5] = uVar3;
      param_1[6] = ppuVar5;
      param_1[7] = uVar7;
      return;
    }
    *(undefined2 *)param_1 = 0x503;
  }
  else {
    if (ppuVar2 == (undefined **)0x0) {
      uVar4 = 6;
    }
    else {
      ppuVar5 = *(undefined ***)(param_2 + 0x18);
      if (ppuVar5 != (undefined **)0x0) {
        uVar9 = *(undefined4 *)param_2;
        unaff_r9 = *(undefined4 *)(param_2 + 4);
        goto LAB_01414d40;
      }
      uVar4 = 7;
    }
    *(undefined1 *)((int)param_1 + 1) = uVar4;
    *(undefined1 *)param_1 = 3;
    FUN_01414eb8(cVar1,*(undefined4 *)(param_2 + 4));
    ppuVar2 = *(undefined ***)(param_2 + 8);
    if (ppuVar2 == (undefined **)0x0) goto LAB_01414e1c;
  }
  (*(code *)ppuVar2[4])
            (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
LAB_01414e1c:
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01414e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_2 + 0x18) + 0x10))
            (param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  return;
}

