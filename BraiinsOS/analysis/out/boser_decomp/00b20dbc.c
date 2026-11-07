// FUN_00b20dbc @ 00b20dbc size=180 calls_out=2 calls_in=2
// strings: 

void FUN_00b20dbc(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar5 = 0;
  iVar6 = param_3 * 0x18;
  if (0x5555555 < param_3) {
LAB_00b20de0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar6);
  }
  if (iVar6 == 0) {
    puVar2 = (undefined4 *)&DAT_00000008;
    uVar4 = 0;
  }
  else {
    uVar5 = 8;
    puVar2 = (undefined4 *)FUN_01298504(iVar6,8);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00b20de0;
    if (param_3 != 0) {
      puVar3 = puVar2;
      uVar4 = param_3;
      do {
        bVar8 = iVar6 == 0;
        if (!bVar8) {
          uVar9 = *(undefined8 *)(param_2 + 2);
          iVar6 = iVar6 + -0x18;
          uVar5 = *param_2;
          uVar7 = param_2[1];
          uVar1 = *(undefined1 *)(param_2 + 4);
          param_2 = param_2 + 6;
          *puVar3 = uVar5;
          puVar3[1] = uVar7;
          *(undefined1 *)(puVar3 + 4) = uVar1;
          *(undefined8 *)(puVar3 + 2) = uVar9;
          puVar3 = puVar3 + 6;
          uVar4 = uVar4 - 1;
          bVar8 = uVar4 == 0;
        }
      } while (!bVar8);
    }
    uVar4 = param_3;
  }
  *param_1 = uVar4;
  param_1[1] = (uint)puVar2;
  param_1[2] = param_3;
  return;
}

