// FUN_0130ee0c @ 0130ee0c size=336 calls_out=5 calls_in=2
// strings: 

void FUN_0130ee0c(undefined4 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *local_30;
  uint *puStack_2c;
  uint uStack_28;
  uint *local_24;
  
  uVar8 = param_3 - param_2;
  uVar9 = 0;
  if (uVar8 < 0x7ffffffd) {
    if (param_3 == param_2) {
      puVar1 = (uint *)&SUB_00000004;
      uStack_28 = 0;
LAB_0130eebc:
      param_1[2] = 0;
      *param_1 = 0;
      FUN_0134aee0(uStack_28,puVar1,4,4);
      return;
    }
    uVar9 = 4;
    puVar1 = (uint *)FUN_01298504(uVar8,4);
    if (puVar1 != (uint *)0x0) {
      uStack_28 = uVar8 >> 2;
      uVar8 = 0;
      do {
        puVar1[uVar8] = *(uint *)(param_2 + uVar8 * 4);
        uVar8 = uVar8 + 1;
      } while (uStack_28 != uVar8);
      if (uVar8 != 1) {
        if (uVar8 == 0) goto LAB_0130eebc;
        if (uVar8 < 0x15) {
          puVar2 = puVar1 + 1;
          iVar3 = 0;
          do {
            uVar10 = puVar2[-1];
            uVar4 = *puVar2;
            if (uVar4 < uVar10) {
              iVar5 = 0;
              do {
                *(uint *)((int)puVar2 + iVar5) = uVar10;
                if (iVar3 == iVar5) {
                  puVar7 = puVar1;
                  goto LAB_0130ef34;
                }
                iVar6 = iVar5 + -4;
                uVar10 = *(uint *)((int)puVar2 + iVar5 + -8);
                iVar5 = iVar6;
              } while (uVar4 < uVar10);
              puVar7 = (uint *)((int)puVar2 + iVar6);
LAB_0130ef34:
              *puVar7 = uVar4;
            }
            puVar2 = puVar2 + 1;
            iVar3 = iVar3 + -4;
          } while (puVar2 != puVar1 + uVar8);
        }
        else {
          FUN_0130eb34(puVar1,uVar8);
        }
      }
      local_24 = puVar1 + uVar8;
      local_30 = puVar1;
      puStack_2c = puVar1;
      FUN_0130fa24(param_1,&local_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar9,uVar8);
}

