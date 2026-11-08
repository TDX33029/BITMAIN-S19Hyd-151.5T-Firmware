// FUN_006a0110 @ 006a0110 size=308 calls_out=3 calls_in=1
// strings: 

void FUN_006a0110(uint *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint3 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_30;
  uint local_2c;
  
  uVar7 = 0;
  iVar6 = param_3 * 0x18;
  if (0x5555555 < param_3) {
LAB_006a0138:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar6);
  }
  if (iVar6 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar7 = 4;
    local_2c = FUN_01298504(iVar6,4);
    if (local_2c == 0) goto LAB_006a0138;
    local_30 = param_3;
    if (param_3 != 0) {
      iVar6 = 0;
      puVar8 = param_2;
      uVar10 = param_3;
      do {
        if (puVar8 == param_2 + param_3 * 6) break;
        uVar11 = FUN_016c0ca4(puVar8[2]);
        piVar9 = (int *)puVar8[4];
        uVar10 = uVar10 - 1;
        do {
          iVar4 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x6a0240);
          (*pcVar1)();
        }
        uVar7 = puVar8[5];
        uVar3 = *(uint3 *)(puVar8 + 1);
        puVar5 = (undefined4 *)(local_2c + iVar6 * 0x18);
        *puVar5 = *puVar8;
        puVar5[1] = (uint)uVar3;
        *(undefined8 *)(puVar5 + 2) = uVar11;
        puVar5[4] = piVar9;
        puVar5[5] = uVar7;
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 6;
      } while (uVar10 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

