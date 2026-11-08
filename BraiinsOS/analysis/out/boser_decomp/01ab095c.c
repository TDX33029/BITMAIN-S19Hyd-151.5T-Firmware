// FUN_01ab095c @ 01ab095c size=268 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_01ab095c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int local_38 [5];
  
  uVar8 = *(uint *)(param_1 + 0xe4);
  bVar1 = *(byte *)(param_2 + 0x3c);
  if (uVar8 < 9) {
    puVar5 = (uint *)(param_1 + 4);
  }
  else {
    uVar8 = *(uint *)(param_1 + 4);
    puVar5 = *(uint **)(param_1 + 8);
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  puVar7 = puVar5;
LAB_01ab0a14:
  puVar6 = puVar7;
  if (puVar6 == puVar5 + uVar8 * 7) {
    return 0;
  }
  uVar3 = puVar6[4];
  puVar7 = puVar6 + 7;
  if (uVar3 != 0x80000000) goto LAB_01ab09e8;
  goto LAB_01ab0a30;
LAB_01ab09e8:
  if ((puVar6[6] <= uVar2) && (iVar10 = thunk_FUN_01bed842(puVar6[5],uVar4), iVar10 == 0)) {
    uVar3 = 0;
LAB_01ab0a30:
    bVar11 = (bVar1 & 1) != 0;
    if (bVar11) {
      uVar3 = puVar6[3];
    }
    if (!bVar11 || uVar3 == 0) {
LAB_01ab0a40:
      if (*(uint *)(param_2 + 8) < *puVar6) {
        return 0;
      }
      return 1;
    }
    puVar9 = (undefined4 *)(puVar6[2] + 4);
    iVar10 = uVar3 * 0xc;
    while (FUN_01abb514(local_38,param_2 + 0x1c,*puVar9,puVar9[1]), local_38[0] != 0) {
      puVar9 = puVar9 + 3;
      iVar10 = iVar10 + -0xc;
      if (iVar10 == 0) goto LAB_01ab0a40;
    }
  }
  goto LAB_01ab0a14;
}

