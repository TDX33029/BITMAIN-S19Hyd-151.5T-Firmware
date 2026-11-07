// FUN_01ab54c4 @ 01ab54c4 size=376 calls_out=3 calls_in=2
// strings: 

void FUN_01ab54c4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_2[4] == -0x80000000) {
    uVar9 = param_2[3];
    pcVar10 = (char *)param_2[2];
    iVar2 = uVar9 << 5;
    pcVar5 = pcVar10;
    do {
      if (iVar2 == 0) {
        uVar7 = 0;
        iVar2 = uVar9 * 0xc;
        if (0xaaaaaaa < uVar9) {
LAB_01ab5534:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar7,iVar2);
        }
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)&SUB_00000004;
          uVar4 = 0;
        }
        else {
          uVar7 = 4;
          puVar3 = (undefined4 *)FUN_01298504(iVar2,4);
          uVar4 = uVar9;
          if (puVar3 == (undefined4 *)0x0) goto LAB_01ab5534;
        }
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = 0;
          puVar8 = puVar3;
          do {
            FUN_006666fc(&local_30,*(undefined4 *)(pcVar10 + uVar6 * 0x20 + 0x14),
                         *(undefined4 *)(pcVar10 + uVar6 * 0x20 + 0x18));
            uVar6 = uVar6 + 1;
            *puVar8 = local_30;
            puVar8[1] = uStack_2c;
            puVar8[2] = uStack_28;
            puVar8 = puVar8 + 3;
          } while (uVar9 != uVar6);
          uVar6 = uVar9;
        }
        if (param_2[7] == -0x80000000) {
          local_30 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_30,param_2[8],param_2[9]);
        }
        param_1[1] = uVar4;
        param_1[2] = puVar3;
        param_1[3] = uVar6;
        uVar7 = *param_2;
        param_1[4] = local_30;
        param_1[5] = uStack_2c;
        param_1[6] = uStack_28;
        *param_1 = uVar7;
        return;
      }
      cVar1 = *pcVar5;
      iVar2 = iVar2 + -0x20;
      pcVar5 = pcVar5 + 0x20;
    } while (cVar1 == '\a');
  }
  *param_1 = 6;
  return;
}

