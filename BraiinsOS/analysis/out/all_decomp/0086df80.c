// FUN_0086df80 @ 0086df80 size=604 calls_out=8 calls_in=0
// strings: 

void FUN_0086df80(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  int local_30;
  uint local_2c;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x36)) {
  case 0:
    uVar5 = 0;
    param_2[0x35] = param_2[0x34];
    iVar2 = *(int *)(param_2[0x34] + 0x148);
    *param_2 = 0;
    iVar2 = iVar2 + 8;
    param_2[0x32] = iVar2;
    *(undefined1 *)(param_2 + 0x33) = 0;
LAB_0086e004:
    puVar4 = param_2 + 2;
    *puVar4 = uVar5;
    param_2[0x2c] = 0x10;
    unaff_r7 = param_2[1];
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 100000000;
    *(undefined1 *)(param_2 + 0x26) = 0;
    param_2[0x2e] = iVar2;
    param_2[0x2f] = puVar4;
    param_2[0x30] = &LAB_01103938;
    param_2[3] = unaff_r7;
    param_2[4] = 0;
    param_2[5] = iVar2;
    param_2[6] = puVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861318);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861318);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x33)) {
    case 0:
      uVar5 = *param_2;
      iVar2 = param_2[0x32];
      goto LAB_0086e004;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018646d8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018646d8);
    }
  }
  FUN_00811e04(&local_30,param_2 + 4);
  if (local_30 == -0x7fffffff) {
    *(undefined1 *)(param_2 + 0x33) = 3;
    *param_1 = 0x80000002;
    *(undefined1 *)(param_2 + 0x36) = 3;
    return;
  }
  FUN_0086e2bc(param_2 + 4);
  *(undefined1 *)(param_2 + 0x33) = 1;
  if (local_30 == -0x80000000) {
    *param_1 = 0x80000001;
    param_1[1] = local_2c;
    param_1[2] = unaff_r7;
    *(undefined1 *)(param_2 + 0x36) = 1;
    return;
  }
  uVar7 = *(uint *)(param_2[0x35] + 0xf0);
  iVar2 = uVar7 * 0xc;
  uVar5 = 0;
  if (0xaaaaaaa < uVar7) {
LAB_0086e0e4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,iVar2);
  }
  uVar8 = 0;
  uVar5 = *(undefined4 *)(param_2[0x35] + 0xa4);
  if (iVar2 == 0) {
    uVar3 = 4;
    uVar1 = 0;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(iVar2);
    uVar1 = uVar7;
    if (uVar3 == 0) {
      uVar5 = 4;
      goto LAB_0086e0e4;
    }
  }
  if (uVar7 != 0) {
    puVar4 = (undefined4 *)(uVar3 + 4);
    uVar8 = 0;
    do {
      if (local_28 == uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,local_28,&DAT_01862d3c);
      }
      uVar6 = *(undefined4 *)(local_2c + 4 + uVar8 * 8);
      uVar8 = uVar8 + 1;
      *puVar4 = 0;
      puVar4[1] = uVar5;
      puVar4[-1] = uVar6;
      puVar4 = puVar4 + 3;
    } while (uVar7 != uVar8);
  }
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(local_2c);
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  *(undefined1 *)(param_2 + 0x36) = 1;
  return;
}

