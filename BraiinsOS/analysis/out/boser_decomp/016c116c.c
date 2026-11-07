// FUN_016c116c @ 016c116c size=328 calls_out=4 calls_in=1
// strings: 

void FUN_016c116c(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar7 = 0;
  iVar6 = param_3 * 0x14;
  if (0x6666666 < param_3) {
LAB_016c1198:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar6);
  }
  if (iVar6 == 0) {
    puVar2 = (undefined4 *)&SUB_00000004;
    uVar3 = 0;
  }
  else {
    uVar7 = 4;
    puVar2 = (undefined4 *)FUN_01298504(iVar6,4);
    uVar3 = param_3;
    if (puVar2 == (undefined4 *)0x0) goto LAB_016c1198;
  }
  if (param_3 < 2) {
    local_40 = 1;
    puVar10 = puVar2;
    if (param_3 == 0) {
      local_40 = 0;
      FUN_0134aee0(*param_2,param_2[1],4,8);
      goto LAB_016c1288;
    }
  }
  else {
    uVar7 = param_2[1];
    uVar1 = *(undefined2 *)(param_2 + 4);
    iVar6 = 0;
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar9 = puVar2;
    do {
      FUN_016c0ed4(&local_38,uVar7,uVar4);
      local_28 = CONCAT22(local_28._2_2_,uVar1);
      iVar6 = iVar6 + 1;
      puVar10 = puVar9 + 5;
      *puVar9 = local_38;
      puVar9[1] = uStack_34;
      puVar9[2] = uStack_30;
      puVar9[3] = uVar5;
      puVar9[4] = local_28;
      puVar9 = puVar10;
      local_2c = uVar5;
    } while (param_3 - 1 != iVar6);
    local_40 = param_3;
  }
  uVar7 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar8 = param_2[4];
  *puVar10 = *param_2;
  puVar10[1] = uVar7;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  puVar10[4] = uVar8;
LAB_016c1288:
  *param_1 = uVar3;
  param_1[1] = (uint)puVar2;
  param_1[2] = local_40;
  return;
}

