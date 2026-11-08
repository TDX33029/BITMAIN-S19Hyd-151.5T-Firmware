// FUN_00f9a578 @ 00f9a578 size=316 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_00f9a578(int param_1,byte *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  
  puVar8 = *(undefined4 **)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  if (param_4 != 0) {
    if (*(int *)(param_1 + 0x1c) == param_3) {
      pbVar2 = *(byte **)(param_1 + 0x18);
      iVar3 = param_3;
      pbVar4 = param_2;
      do {
        if (iVar3 == 0) goto LAB_00f9a6a0;
        uVar5 = (uint)*pbVar4;
        iVar3 = iVar3 + -1;
        uVar7 = (uint)*pbVar2;
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        pbVar2 = pbVar2 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar7 == uVar5);
    }
    puVar1 = puVar8;
    do {
      do {
        puVar9 = puVar1;
        if (puVar9 == puVar8 + iVar10 * 2) {
          return 0;
        }
        puVar1 = puVar9 + 2;
      } while (puVar9[1] != param_3);
      pbVar2 = (byte *)*puVar9;
      iVar3 = param_3;
      pbVar4 = param_2;
      do {
        if (iVar3 == 0) goto LAB_00f9a6a0;
        uVar7 = (uint)*pbVar4;
        iVar3 = iVar3 + -1;
        uVar5 = (uint)*pbVar2;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        pbVar2 = pbVar2 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 == uVar7);
    } while( true );
  }
  if ((*(int *)(param_1 + 0x1c) == param_3) &&
     (iVar3 = thunk_FUN_016dd50a(*(byte **)(param_1 + 0x18),param_2,param_3), iVar3 == 0)) {
LAB_00f9a6a0:
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
    if (iVar10 != 0) {
      piVar6 = puVar8 + 1;
      iVar10 = iVar10 << 3;
      do {
        if ((*piVar6 == param_3) &&
           (iVar3 = thunk_FUN_016dd50a(piVar6[-1],param_2,param_3), iVar3 == 0)) goto LAB_00f9a6a0;
        piVar6 = piVar6 + 2;
        iVar10 = iVar10 + -8;
      } while (iVar10 != 0);
    }
  }
  return uVar11;
}

