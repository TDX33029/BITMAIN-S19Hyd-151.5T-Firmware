// FUN_0143d324 @ 0143d324 size=292 calls_out=3 calls_in=1
// strings: 

void FUN_0143d324(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,
                 undefined1 *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 unaff_r9;
  ulonglong uVar12;
  
  puVar11 = &DAT_3b9aca00;
  uVar12 = CONCAT44(unaff_r9,unaff_r6);
  if (param_5 != &DAT_3b9aca00) {
    uVar12 = CONCAT44(unaff_r9,unaff_r6);
    if (param_2[3] != param_2[1]) {
      uVar1 = (uint)(param_2[3] - param_2[1]) >> 5;
      iVar3 = FUN_01bf1250(param_5,uVar1);
      uVar12 = FUN_01bf0ff0(param_3,param_4,uVar1,0);
      uVar7 = (uint)(uVar12 >> 0x20);
      uVar4 = (uint)uVar12;
      lVar2 = (ulonglong)uVar1 * (uVar12 & 0xffffffff);
      uVar5 = (uint)lVar2;
      lVar2 = (ulonglong)(param_3 - uVar5) * 1000000000 +
              CONCAT44((param_4 -
                       (uVar7 * uVar1 + (int)((ulonglong)lVar2 >> 0x20) + (uint)(param_3 < uVar5)))
                       * 1000000000,(int)param_5 - iVar3 * uVar1);
      iVar6 = FUN_01bf0ff0((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar1,0);
      puVar11 = (undefined1 *)(iVar3 + iVar6);
      if (&DAT_3b9ac9ff < puVar11) {
        uVar5 = (uint)((ulonglong)((uint)puVar11 >> 9) * 0x44b83 >> 0x20);
        uVar1 = uVar5 >> 7;
        uVar12 = uVar12 + uVar1;
        if (CARRY4(uVar7,(uint)CARRY4(uVar4,uVar1))) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_005310af,0x19,&DAT_01d2e3ac);
        }
        puVar11 = puVar11 + (uVar5 >> 7) * -1000000000;
      }
    }
  }
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  *(ulonglong *)(param_1 + 4) = uVar12;
  param_1[6] = puVar11;
  return;
}

