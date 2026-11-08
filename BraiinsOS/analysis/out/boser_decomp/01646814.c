// FUN_01646814 @ 01646814 size=432 calls_out=4 calls_in=7
// strings: 

void FUN_01646814(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2[2];
  puVar6 = (uint *)param_2[1];
  if (uVar9 < param_4) {
    if (uVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      puVar4 = param_3;
      uVar7 = uVar9;
      do {
        uVar1 = *puVar6;
        uVar5 = *puVar4;
        uVar2 = uVar5 + uVar1;
        *puVar6 = uVar2 + uVar8;
        uVar8 = (uint)(CARRY4(uVar5,uVar1) || CARRY4(uVar2,uVar8));
        uVar7 = uVar7 - 1;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    FUN_0164a850(param_2,param_3 + uVar9,param_3 + param_4);
    uVar7 = param_2[2];
    if (uVar7 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar9,uVar7,uVar7,&DAT_01d065bc);
    }
    if (uVar7 == uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d066fc);
    }
    puVar6 = (uint *)param_2[1];
    uVar1 = puVar6[uVar9];
    puVar6[uVar9] = uVar8 + uVar1;
    if (CARRY4(uVar8,uVar1)) {
      iVar3 = ~uVar9 << 2;
      do {
        if (uVar7 * -4 == iVar3) {
          uVar9 = uVar7;
LAB_01646960:
          if (uVar9 == *param_2) {
            FUN_01a54b48(param_2);
            puVar6 = (uint *)param_2[1];
          }
          puVar6[uVar9] = 1;
          param_2[2] = uVar9 + 1;
          break;
        }
        uVar9 = *(uint *)((int)puVar6 - iVar3);
        *(uint *)((int)puVar6 - iVar3) = uVar9 + 1;
        iVar3 = iVar3 + -4;
      } while (0xfffffffe < uVar9);
    }
  }
  else if (param_4 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar2 = puVar6[uVar8];
      uVar1 = param_3[uVar8];
      uVar5 = uVar1 + uVar2;
      puVar6[uVar8] = uVar5 + uVar7;
      uVar7 = (uint)(CARRY4(uVar1,uVar2) || CARRY4(uVar5,uVar7));
      uVar8 = uVar8 + 1;
    } while (param_4 != uVar8);
    if (uVar7 != 0) {
      iVar3 = param_4 << 2;
      do {
        if (uVar9 * 4 == iVar3) goto LAB_01646960;
        uVar8 = *(uint *)((int)puVar6 + iVar3);
        *(uint *)((int)puVar6 + iVar3) = uVar8 + 1;
        iVar3 = iVar3 + 4;
      } while (0xfffffffe < uVar8);
    }
  }
  uVar9 = param_2[1];
  uVar8 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  param_1[2] = uVar8;
  return;
}

