// FUN_0190e07c @ 0190e07c size=768 calls_out=7 calls_in=1
// strings: 

void FUN_0190e07c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar1 = *(undefined1 *)(param_2 + 7);
  FUN_0190e3fc(&local_50,param_2[4],uVar1,param_3,param_4,param_2[6]);
  iVar9 = local_50;
  if (local_50 == 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar5 = param_2[8];
    uVar7 = param_2[9];
    *param_1 = (int)&DAT_8000001c;
    param_1[1] = 0x1a;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_01443048(uVar5,uVar7);
  }
  else {
    FUN_0190e49c(&DAT_0056c128);
    (**(code **)(param_2[9] + 0xc))(&local_50,param_2[8],local_48,local_44);
    piVar6 = (int *)((uint)&local_50 | 4);
    iVar8 = *piVar6;
    puVar10 = (undefined1 *)piVar6[1];
    uVar12 = piVar6[2];
    uVar14 = piVar6[3];
    if (local_50 == -0x7fffffd7) {
      (**(code **)(param_2[0xb] + 0xc))(&local_50,param_2[10],iVar9,local_4c);
      piVar6 = (int *)((uint)&local_50 | 4);
      iVar9 = *piVar6;
      puVar11 = (undefined1 *)piVar6[1];
      uVar13 = piVar6[2];
      uVar15 = piVar6[3];
      if (local_50 == -0x7fffffd7) {
        if (uVar13 < uVar15) {
LAB_0190e368:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar15,uVar13,uVar13,&DAT_01d250a8);
        }
        if (uVar12 < uVar14) {
          uVar15 = uVar14;
          uVar13 = uVar12;
          goto LAB_0190e368;
        }
        FUN_0190e6ac(&local_30,uVar1,puVar11 + uVar15,uVar13 - uVar15,puVar10 + uVar14,
                     uVar12 - uVar14);
        param_1[1] = local_30;
        param_1[2] = iStack_2c;
        param_1[3] = iStack_28;
        *param_1 = -0x7fffffd7;
        param_1[4] = 0;
        puVar2 = puVar11;
        for (; iVar3 = iVar9, puVar4 = puVar11, uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        FUN_0134bd64(iVar9,puVar11);
        puVar11 = puVar10;
        for (; iVar9 = iVar8, puVar2 = puVar10, uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
      }
      else {
        param_1[5] = local_3c;
        param_1[6] = iStack_38;
        param_1[7] = iStack_34;
        param_1[1] = iVar9;
        param_1[2] = (int)puVar11;
        param_1[3] = uVar13;
        param_1[4] = uVar15;
        *param_1 = local_50;
        puVar11 = puVar10;
        for (; iVar9 = iVar8, puVar2 = puVar10, uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
      }
      FUN_0134bd64(iVar8,puVar10);
      goto LAB_0190e348;
    }
    param_1[5] = local_3c;
    param_1[6] = iStack_38;
    param_1[7] = iStack_34;
    param_1[1] = iVar8;
    param_1[2] = (int)puVar10;
    param_1[3] = uVar12;
    param_1[4] = uVar14;
    *param_1 = local_50;
  }
  FUN_01443048(param_2[10],param_2[0xb]);
LAB_0190e348:
  FUN_0134bd64(*param_2,param_2[1]);
  thunk_FUN_01be4678(param_2);
  return;
}

