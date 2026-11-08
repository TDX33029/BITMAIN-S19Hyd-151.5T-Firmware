// FUN_010a2fe8 @ 010a2fe8 size=404 calls_out=1 calls_in=6
// strings: 

void FUN_010a2fe8(char *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 unaff_r10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_2c;
  undefined3 uStack_28;
  
  cVar2 = *param_2;
  ppuVar8 = *(undefined ***)(param_2 + 8);
  if (cVar2 == '\x03') {
    ppuVar4 = *(undefined ***)(param_2 + 0x18);
    if (ppuVar8 == (undefined **)0x0 || ppuVar4 == (undefined **)0x0) {
      cVar2 = '\0';
      cVar3 = '\0';
      if (ppuVar8 == (undefined **)0x0) {
        uVar12 = 1;
        uVar13 = 0;
        uVar9 = 0;
        ppuVar8 = &PTR_LAB_01884310;
        uVar1 = local_2c;
        goto joined_r0x010a308c;
      }
LAB_010a307c:
      uVar12 = *(undefined4 *)(param_2 + 0xc);
      uVar13 = *(undefined4 *)(param_2 + 0x10);
      uVar9 = *(undefined4 *)(param_2 + 0x14);
      cVar3 = cVar2;
      uVar1 = local_2c;
joined_r0x010a308c:
      if (ppuVar4 == (undefined **)0x0) {
        uVar5 = 0xffff;
        uVar10 = 0;
        uVar11 = 1;
        ppuVar4 = &PTR_LAB_01884310;
        uVar6 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(param_2 + 0x1c);
        uVar10 = *(undefined4 *)(param_2 + 0x20);
        uVar6 = *(undefined4 *)(param_2 + 0x24);
        unaff_r10 = *(undefined2 *)(param_2 + 0x2a);
        uVar5 = *(undefined2 *)(param_2 + 0x28);
      }
      *param_1 = cVar3;
      local_2c._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
      *(undefined4 *)(param_1 + 1) = uVar1;
      *(uint *)(param_1 + 4) = CONCAT31(uStack_28,local_2c._3_1_);
      *(undefined2 *)(param_1 + 0x2a) = unaff_r10;
      *(undefined2 *)(param_1 + 0x28) = uVar5;
      *(undefined ***)(param_1 + 8) = ppuVar8;
      *(undefined4 *)(param_1 + 0xc) = uVar12;
      *(undefined4 *)(param_1 + 0x10) = uVar13;
      *(undefined4 *)(param_1 + 0x14) = uVar9;
      *(undefined ***)(param_1 + 0x18) = ppuVar4;
      *(undefined4 *)(param_1 + 0x1c) = uVar11;
      *(undefined4 *)(param_1 + 0x20) = uVar10;
      *(undefined4 *)(param_1 + 0x24) = uVar6;
      return;
    }
    param_1[0] = '\x03';
    param_1[1] = '\x05';
  }
  else {
    if (ppuVar8 == (undefined **)0x0) {
      cVar3 = '\x06';
    }
    else {
      ppuVar4 = *(undefined ***)(param_2 + 0x18);
      if (ppuVar4 != (undefined **)0x0) {
        local_2c = *(undefined4 *)(param_2 + 1);
        uStack_28 = (undefined3)((uint)*(undefined4 *)(param_2 + 4) >> 8);
        goto LAB_010a307c;
      }
      cVar3 = '\a';
    }
    piVar7 = *(int **)(param_2 + 4);
    *param_1 = '\x03';
    param_1[1] = cVar3;
    if (cVar2 == '\x02') {
      (**(code **)(*piVar7 + 0x10))(piVar7 + 3,piVar7[1],piVar7[2]);
      thunk_FUN_016d3fb4(piVar7);
    }
    if (ppuVar8 == (undefined **)0x0) goto LAB_010a3148;
  }
  (*(code *)ppuVar8[4])
            (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
LAB_010a3148:
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010a3170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_2 + 0x18) + 0x10))
            (param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  return;
}

