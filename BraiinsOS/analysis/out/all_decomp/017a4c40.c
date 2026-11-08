// FUN_017a4c40 @ 017a4c40 size=500 calls_out=1 calls_in=4
// strings: 

undefined8
FUN_017a4c40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar8;
  undefined4 *puVar7;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  iVar1 = DAT_018ddaf8;
  puVar12 = param_1;
  if (param_2 <= param_4) {
    uVar4 = param_2[2];
    puVar12 = (undefined4 *)((int)param_1 + ((int)param_4 - (int)param_2));
    uVar3 = param_2[1];
    uVar6 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar6;
    if (0x10 < (int)param_4 - (int)param_2) {
      puVar5 = param_2 + 0xc;
      puVar7 = param_1 + 4;
      do {
        uVar3 = puVar5[-7];
        uVar4 = puVar5[-6];
        puVar2 = puVar7 + 8;
        uVar6 = puVar5[-5];
        *puVar7 = puVar5[-8];
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar6;
        uVar3 = puVar5[-3];
        uVar4 = puVar5[-2];
        uVar6 = puVar5[-1];
        puVar7[4] = puVar5[-4];
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar6;
        puVar5 = puVar5 + 8;
        puVar7 = puVar2;
      } while (puVar2 < puVar12);
    }
    param_2 = param_4;
  }
  if (param_2 < param_3) {
    uVar10 = (int)param_3 - (int)param_2;
    if ((uVar10 - 1 < 6) || ((uint)((int)puVar12 + (-1 - (int)param_2)) < 3)) {
      puVar9 = (undefined1 *)((int)puVar12 + -1);
      do {
        puVar12 = (undefined4 *)((int)param_2 + 1);
        puVar9 = puVar9 + 1;
        *puVar9 = *(undefined1 *)param_2;
        param_2 = puVar12;
      } while (param_3 != puVar12);
    }
    else {
      uVar11 = uVar10 & 0xfffffffc;
      puVar2 = (undefined4 *)((int)param_2 + uVar11);
      puVar5 = puVar12;
      puVar7 = param_2;
      do {
        puVar8 = puVar7 + 1;
        *puVar5 = *puVar7;
        puVar5 = puVar5 + 1;
        puVar7 = puVar8;
      } while (puVar2 != puVar8);
      if (uVar10 != uVar11) {
        *(undefined1 *)(puVar12 + (uVar10 >> 2)) = *(undefined1 *)(param_2 + (uVar10 >> 2));
        if (((undefined4 *)((int)puVar2 + 1) < param_3) &&
           (*(undefined1 *)((int)puVar12 + uVar11 + 1) = *(undefined1 *)((int)puVar2 + 1),
           (undefined4 *)((int)puVar2 + 2) < param_3)) {
          *(undefined1 *)((int)puVar12 + uVar11 + 2) = *(undefined1 *)((int)puVar2 + 2);
        }
      }
    }
  }
  if (iVar1 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

