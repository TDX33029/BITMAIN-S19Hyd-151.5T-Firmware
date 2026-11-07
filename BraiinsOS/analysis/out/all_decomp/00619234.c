// FUN_00619234 @ 00619234 size=1940 calls_out=2 calls_in=1
// strings: 

void FUN_00619234(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = param_1[1];
  uVar5 = param_1[6];
  uVar6 = 2;
  uVar13 = param_1[7];
  puVar8 = param_1 + 0xc;
  if (uVar10 < uVar13 || uVar13 - uVar10 < (uint)(*param_1 <= uVar5)) {
    uVar1 = uVar13;
    uVar3 = uVar5;
    do {
      uVar11 = *puVar8;
      uVar12 = puVar8[1];
      if (uVar12 <= uVar1 && (uint)(uVar3 <= uVar11) <= uVar12 - uVar1) goto LAB_006192c4;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 6;
      uVar1 = uVar12;
      uVar3 = uVar11;
    } while (param_2 != uVar6);
  }
  else {
    uVar1 = uVar13;
    uVar3 = uVar5;
    do {
      uVar11 = *puVar8;
      uVar12 = puVar8[1];
      if (uVar1 < uVar12 || uVar12 - uVar1 < (uint)(uVar3 <= uVar11)) goto LAB_006192c4;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 6;
      uVar1 = uVar12;
      uVar3 = uVar11;
    } while (param_2 != uVar6);
  }
LAB_006192cc:
  if (uVar13 <= uVar10 && (uint)(*param_1 <= uVar5) <= uVar13 - uVar10) {
    iVar4 = 0;
    iVar2 = param_2 * 0x18 + -0xc;
    do {
      puVar9 = (undefined4 *)((int)param_1 + iVar4);
      uVar7 = *puVar9;
      iVar4 = iVar4 + 0x18;
      *puVar9 = *(undefined4 *)((int)param_1 + iVar2 + -0xc);
      *(undefined4 *)((int)param_1 + iVar2 + -0xc) = uVar7;
      uVar7 = puVar9[1];
      puVar9[1] = *(undefined4 *)((int)param_1 + iVar2 + -8);
      *(undefined4 *)((int)param_1 + iVar2 + -8) = uVar7;
      uVar7 = puVar9[2];
      puVar9[2] = *(undefined4 *)((int)param_1 + iVar2 + -4);
      *(undefined4 *)((int)param_1 + iVar2 + -4) = uVar7;
      uVar7 = *(undefined4 *)((int)param_1 + iVar2);
      *(undefined4 *)((int)param_1 + iVar2) = puVar9[3];
      puVar9[3] = uVar7;
      uVar7 = puVar9[4];
      puVar9[4] = *(undefined4 *)((int)param_1 + iVar2 + 4);
      *(undefined4 *)((int)param_1 + iVar2 + 4) = uVar7;
      uVar7 = *(undefined4 *)((int)param_1 + iVar2 + 8);
      *(undefined4 *)((int)param_1 + iVar2 + 8) = puVar9[5];
      puVar9[5] = uVar7;
      iVar2 = iVar2 + -0x18;
    } while ((param_2 >> 1) * 0x18 != iVar4);
  }
  return;
LAB_006192c4:
  if (uVar6 != param_2) {
    FUN_0061938c(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_006192cc;
}

