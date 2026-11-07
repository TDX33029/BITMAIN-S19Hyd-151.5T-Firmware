// FUN_01355ac4 @ 01355ac4 size=336 calls_out=3 calls_in=1
// strings: 

void FUN_01355ac4(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = (uint *)param_2[1];
  puVar7 = (uint *)param_2[2];
  if (puVar8[4] == 0) {
    uVar6 = *param_2;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
      goto LAB_01355b74;
    }
LAB_01355be8:
    do {
      uVar4 = *puVar7;
      bVar2 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar2);
    *puVar7 = uVar4 + 1;
    if (uVar4 < 0x80000000) {
LAB_01355b74:
      *param_1 = uVar6;
      param_1[1] = param_3;
      param_1[2] = puVar7;
      return;
    }
  }
  else {
    if (puVar7 == (uint *)0x0) {
      uVar6 = *param_2;
      do {
        uVar4 = *puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = uVar4 + 1;
    }
    else {
      if ((param_3 == puVar8) ||
         ((param_3[4] == puVar8[4] && (iVar3 = thunk_FUN_016dd50a(param_3[3],puVar8[3]), iVar3 == 0)
          ))) {
        uVar6 = *param_2;
        goto LAB_01355be8;
      }
      uVar6 = *param_2;
      do {
        uVar4 = *puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = uVar4 + 1;
      if ((int)uVar4 < 0) goto LAB_01355c04;
      if (puVar7 == (uint *)0x0) goto LAB_01355ba4;
      do {
        uVar4 = *puVar7;
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = uVar4 + 1;
    }
    if (-1 < (int)uVar4) {
LAB_01355ba4:
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar5 = 1;
      puVar5[1] = 1;
      puVar5[2] = puVar8;
      puVar5[3] = puVar7;
      *param_1 = uVar6;
      param_1[1] = param_3;
      param_1[2] = puVar5;
      return;
    }
  }
LAB_01355c04:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1355c04);
  (*pcVar1)();
}

