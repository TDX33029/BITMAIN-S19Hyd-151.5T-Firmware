// FUN_00ec06e4 @ 00ec06e4 size=684 calls_out=4 calls_in=2
// strings: 

void FUN_00ec06e4(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_30;
  byte local_2c;
  
  piVar11 = param_2 + 6;
  piVar5 = param_2 + 8;
  if (param_4 == 0) {
    uVar3 = param_2[4];
    uVar7 = param_2[5];
    if (uVar3 == uVar7) {
      uVar2 = param_2[3];
      uVar8 = param_2[1];
      puVar1 = (undefined1 *)*param_2;
      uVar7 = uVar2;
      if (uVar8 < uVar2) {
        uVar7 = uVar8;
      }
      if (uVar7 == 1) {
        *(undefined1 *)param_2[2] = *puVar1;
      }
      else {
        FUN_016dd1aa((undefined1 *)param_2[2],puVar1,uVar7);
      }
      uVar3 = 0;
      param_2[4] = 0;
      *param_2 = puVar1 + uVar7;
      param_2[1] = uVar8 - uVar7;
      param_2[5] = uVar7;
    }
    else {
      uVar2 = param_2[3];
    }
    if ((uVar7 < uVar3) || (uVar2 < uVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,uVar7,uVar2,&DAT_0187c3b4);
    }
    uVar4 = 0;
    if (uVar7 == uVar3) {
      uVar4 = 4;
    }
    iVar12 = *piVar5;
    iVar10 = *piVar11;
    FUN_0100815c(&local_30,piVar11,param_2[2] + uVar3,uVar7 - uVar3,param_3,0,uVar4);
    uVar3 = uVar3 + (*piVar11 - iVar10);
    if (uVar7 < uVar3) {
      uVar3 = uVar7;
    }
    param_2[4] = uVar3;
    if (local_30 != 2) {
LAB_00ec0940:
      FUN_015e79d4(param_1,0x14,&DAT_00378037,0x16);
      return;
    }
    iVar12 = *piVar5 - iVar12;
  }
  else {
    puVar1 = (undefined1 *)param_2[2];
    uVar2 = param_2[3];
    puVar9 = (undefined1 *)*param_2;
    uVar8 = param_2[1];
    uVar3 = param_2[4];
    uVar7 = param_2[5];
    do {
      if (uVar3 == uVar7) {
        uVar7 = uVar2;
        if (uVar8 < uVar2) {
          uVar7 = uVar8;
        }
        if (uVar7 == 1) {
          *puVar1 = *puVar9;
        }
        else {
          FUN_016dd1aa(puVar1,puVar9,uVar7);
        }
        puVar9 = puVar9 + uVar7;
        uVar8 = uVar8 - uVar7;
        *param_2 = puVar9;
        param_2[1] = uVar8;
        param_2[4] = 0;
        param_2[5] = uVar7;
        uVar6 = 0;
      }
      else {
        uVar6 = uVar3;
      }
      if ((uVar7 < uVar6) || (uVar2 < uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar7,uVar2,&DAT_0187c3b4);
      }
      uVar4 = 0;
      iVar10 = *piVar11;
      if (uVar7 == uVar6) {
        uVar4 = 4;
      }
      iVar12 = *piVar5;
      FUN_0100815c(&local_30,piVar11,puVar1 + uVar6,uVar7 - uVar6,param_3,param_4,uVar4);
      uVar3 = uVar6 + (*piVar11 - iVar10);
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      param_2[4] = uVar3;
      if (local_30 != 2) goto LAB_00ec0940;
      iVar12 = *piVar5 - iVar12;
    } while (((local_2c < 2) && (uVar7 != uVar6)) && (iVar12 == 0));
  }
  *param_1 = 4;
  *(int *)(param_1 + 4) = iVar12;
  return;
}

