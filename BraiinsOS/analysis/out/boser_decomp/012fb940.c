// FUN_012fb940 @ 012fb940 size=500 calls_out=1 calls_in=97
// strings: 

undefined4 FUN_012fb940(undefined4 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = param_1[2];
  if ((uVar10 & 0x18000000) != 0) {
    if ((uVar10 & 0x10000000) == 0) {
      if (param_3 < (byte *)0x10) {
        uVar4 = 0;
        if (param_3 != (byte *)0x0) {
          pbVar5 = param_2;
          pbVar7 = param_3;
          do {
            if (-0x41 < (char)*pbVar5) {
              uVar4 = uVar4 + 1;
            }
            pbVar7 = pbVar7 + -1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar7 != (byte *)0x0);
        }
      }
      else {
        uVar4 = FUN_012fa650(param_2,param_3);
      }
    }
    else {
      uVar4 = (uint)*(ushort *)((int)param_1 + 0xe);
      if (uVar4 == 0) {
        param_3 = (byte *)0x0;
      }
      else {
        pbVar7 = param_2 + (int)param_3;
        param_3 = (byte *)0x0;
        uVar6 = uVar4;
        pbVar5 = param_2;
        do {
          if (pbVar5 == pbVar7) goto LAB_012fba28;
          pbVar8 = pbVar5 + 1;
          bVar1 = *pbVar5;
          if (0x7fffffff < (uint)(int)(char)bVar1) {
            if (bVar1 < 0xe0) {
              pbVar8 = pbVar5 + 2;
            }
            else if (bVar1 < 0xf0) {
              pbVar8 = pbVar5 + 3;
            }
            else {
              pbVar8 = pbVar5 + 4;
            }
          }
          uVar6 = uVar6 - 1;
          param_3 = pbVar8 + ((int)param_3 - (int)pbVar5);
          pbVar5 = pbVar8;
        } while (uVar6 != 0);
      }
      uVar6 = 0;
LAB_012fba28:
      uVar4 = uVar4 - uVar6;
    }
    if (uVar4 < *(ushort *)(param_1 + 3)) {
      uVar4 = *(ushort *)(param_1 + 3) - uVar4;
      uVar6 = 0;
      switch((uVar10 & 0x7fffffff) >> 0x1d) {
      case 1:
        uVar6 = uVar4;
        break;
      case 2:
        uVar6 = (uVar4 & 0xffff) >> 1;
      }
      uVar2 = *param_1;
      iVar11 = param_1[1];
      uVar9 = 0;
      do {
        if ((uVar6 & 0xffff) <= (uVar9 & 0xffff)) {
          iVar3 = (**(code **)(iVar11 + 0xc))(uVar2,param_2,param_3);
          if (iVar3 != 0) {
            return 1;
          }
          uVar9 = 0;
          do {
            if ((uVar4 - uVar6 & 0xffff) <= (uVar9 & 0xffff)) {
              return 0;
            }
            iVar3 = (**(code **)(iVar11 + 0x10))(uVar2,uVar10 & 0x1fffff);
            uVar9 = uVar9 + 1;
          } while (iVar3 == 0);
          return 1;
        }
        iVar3 = (**(code **)(iVar11 + 0x10))(uVar2,uVar10 & 0x1fffff);
        uVar9 = uVar9 + 1;
      } while (iVar3 == 0);
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x012fba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1[1] + 0xc))(*param_1,param_2,param_3);
  return uVar2;
}

