// FUN_012419c0 @ 012419c0 size=340 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_012419c0(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    iVar11 = *(int *)(param_2 + 8);
    uVar2 = 0;
    iVar9 = *(int *)(param_1 + 4);
    uVar12 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 0xc)) {
      uVar12 = *(uint *)(param_1 + 8);
    }
    do {
      while( true ) {
        if (uVar2 == uVar12) {
          return 1;
        }
        uVar5 = 1;
        uVar10 = uVar2 + 1;
        iVar4 = *(int *)(iVar9 + uVar2 * 0x14);
        if ((int)*(uint *)(iVar4 + 8) < 0) {
          uVar5 = *(uint *)(iVar4 + 8) ^ 0x80000000;
        }
        if (uVar5 == 0) break;
        iVar7 = iVar11 + uVar2 * 0x18;
        if (uVar5 == 1) {
          puVar6 = *(undefined4 **)(iVar4 + 0xc);
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 1) {
            iVar4 = (**(code **)(puVar6[1] + 0x10))(*puVar6,iVar7,param_3);
            uVar2 = uVar10;
            if (iVar4 == 0) goto LAB_01241afc;
          }
          else {
            puVar8 = puVar6 + iVar4 * 8;
            uVar2 = uVar10;
            if (iVar4 != 0) {
              do {
                iVar4 = (**(code **)(puVar6[1] + 0x10))(*puVar6,iVar7,param_3);
                if (iVar4 == 0) goto LAB_01241afc;
                puVar6 = puVar6 + 8;
              } while (puVar6 != puVar8);
            }
          }
        }
        else {
          puVar6 = *(undefined4 **)(iVar4 + 0x10);
          iVar4 = *(int *)(iVar4 + 0x14) << 5;
          while (iVar4 != 0) {
            iVar3 = (**(code **)(puVar6[1] + 0x10))(*puVar6,iVar7,param_3);
            iVar4 = iVar4 + -0x20;
            puVar6 = puVar6 + 8;
            if (iVar3 == 0) goto LAB_01241afc;
          }
          uVar2 = uVar10;
        }
      }
      uVar2 = uVar10;
    } while (*(int *)(iVar4 + 0xc) == 0);
LAB_01241afc:
    uVar1 = 0;
  }
  return uVar1;
}

