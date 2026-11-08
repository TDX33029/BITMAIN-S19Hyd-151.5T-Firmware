// FUN_016e9fdc @ 016e9fdc size=412 calls_out=6 calls_in=0
// strings: 

void FUN_016e9fdc(int *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  uint unaff_r7;
  bool bVar7;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_2 < 0x80) {
    local_3c = param_2 & 0xff;
    uVar6 = 1;
  }
  else {
    uVar2 = (undefined1)param_2;
    uVar1 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_3c = (CONCAT11(uVar2,uVar1) & 0x3fff | 0x8000) | 0xc0;
      uVar6 = 2;
    }
    else {
      unaff_r7 = param_2 >> 0xc;
      if (param_2 >> 0x10 == 0) {
        uVar6 = 3;
        local_3c = (CONCAT21(CONCAT11(uVar2,uVar1),(char)unaff_r7) & 0xff3fff | 0x8000) & 0x3fffff |
                   0x8000e0;
        unaff_r6 = 0;
      }
      else {
        uVar6 = 4;
        unaff_r6 = 0xfffffff0;
        unaff_r7 = unaff_r7 & 0x3f | 0xffffff80;
        local_3c = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),(char)unaff_r7),(char)(param_2 >> 0x12))
                   & 0x3f3fffff | 0x808000f0;
      }
    }
  }
  if (*param_1 != 0) {
    FUN_01306fc8(&DAT_01d0a458);
LAB_016ea16c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(unaff_r7,unaff_r6);
  }
  iVar3 = param_1[2];
  bVar7 = param_1[3] == 0;
  piVar5 = (int *)0x0;
  if (!bVar7) {
    piVar5 = (int *)(param_1[3] * 7);
  }
  *param_1 = -1;
  if (!bVar7) {
    iVar3 = iVar3 + (int)piVar5 * 4;
    piVar5 = (int *)(iVar3 + -0x1c);
    bVar7 = piVar5 == (int *)0x0;
  }
  if ((bVar7) || (*piVar5 != 8)) {
    local_30 = FUN_01298504(uVar6,1);
    if (local_30 == 0) {
      unaff_r7 = 1;
      unaff_r6 = uVar6;
      goto LAB_016ea16c;
    }
    FUN_01bed4e2(local_30,&local_3c,uVar6);
    iVar3 = param_1[3];
    local_38 = 8;
    local_34 = uVar6;
    local_2c = uVar6;
    if (iVar3 == param_1[1]) {
      FUN_015f5b48(param_1 + 1);
    }
    puVar4 = (undefined4 *)(param_1[2] + iVar3 * 0x1c);
    *puVar4 = local_38;
    puVar4[1] = local_34;
    puVar4[2] = local_30;
    puVar4[3] = local_2c;
    puVar4[4] = uStack_28;
    puVar4[5] = uStack_24;
    puVar4[6] = uStack_20;
    param_1[3] = iVar3 + 1;
  }
  else {
    FUN_01ac6cbc(iVar3 + -0x18,&local_3c,uVar6);
  }
  *param_1 = *param_1 + 1;
  return;
}

