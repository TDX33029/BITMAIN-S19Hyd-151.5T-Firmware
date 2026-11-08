// FUN_017a2eac @ 017a2eac size=564 calls_out=3 calls_in=1
// strings: 

undefined1
FUN_017a2eac(int *param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,int param_8,uint param_9,int param_10,uint param_11)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint local_34;
  uint local_30;
  
  if (param_4 == param_5) {
    uVar1 = 2 < param_4 || param_10 == 0;
    *param_1 = 0;
  }
  else {
    if (param_11 < 4) {
      if (param_10 == 0) {
LAB_017a3054:
        *param_1 = 1;
        return 2;
      }
      if (999 < param_5 || *param_1 != 2) {
        if ((param_5 < (10 - param_11 << (param_9 & 0xff)) >> 3) ||
           (param_4 < param_5 >> (param_9 - 1 & 0xff))) goto LAB_017a2f38;
        goto LAB_017a3054;
      }
    }
    else {
      if (param_10 == 0) {
        local_30 = 0xffffffff;
      }
      else {
        piVar8 = (int *)(param_2 + -4);
        local_30 = 0;
        psVar5 = (short *)(param_8 + -2);
        do {
          psVar5 = psVar5 + 1;
          iVar2 = (int)*psVar5;
          piVar8 = piVar8 + 1;
          if (iVar2 == -1) {
            iVar2 = 1;
          }
          local_30 = *piVar8 * *(int *)(&DAT_00451158 + (iVar2 << (8 - param_9 & 0xff)) * 4) +
                     local_30;
        } while ((short *)(param_8 + param_3 * 2) != psVar5);
        local_30 = local_30 >> 8;
      }
      piVar8 = (int *)(param_2 + -4);
      if (*param_1 == 0) {
        local_34 = 0xffffffff;
      }
      else {
        local_34 = FUN_017a2d7c(param_7,param_2,param_3);
      }
      iVar2 = FUN_017a2c8c(param_2,param_3,param_5,param_6);
      piVar6 = (int *)(param_2 + param_3 * 4);
      uVar9 = 0;
      do {
        while( true ) {
          piVar8 = piVar8 + 1;
          iVar7 = *piVar8;
          uVar4 = iVar7 * 0x100;
          if ((iVar7 == 0 || uVar4 <= param_5) && (iVar7 != 0 && param_5 != uVar4)) break;
          iVar3 = FUN_018462e8(uVar4,param_5);
          uVar9 = *(int *)(&DAT_00451158 + iVar3 * 4) * iVar7 + uVar9;
          if (piVar8 == piVar6) goto LAB_017a2ff0;
        }
        uVar9 = uVar9 + iVar7 * 0x800;
      } while (piVar8 != piVar6);
LAB_017a2ff0:
      uVar9 = iVar2 * 8 + (uVar9 >> 8);
      if (local_34 < uVar9) {
        uVar4 = local_34;
      }
      else {
        uVar4 = uVar9;
      }
      if (local_30 <= uVar4) {
LAB_017a2f38:
        *param_1 = 0;
        return 0;
      }
      if (uVar9 < local_34) goto LAB_017a3054;
    }
    uVar1 = 3;
  }
  return uVar1;
}

