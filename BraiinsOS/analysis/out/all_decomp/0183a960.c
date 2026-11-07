// FUN_0183a960 @ 0183a960 size=80 calls_out=0 calls_in=4
// strings: 

void FUN_0183a960(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar7 = *param_3;
  uVar8 = param_3[1];
  auVar11 = *param_1;
  uVar9 = param_3[2];
  uVar10 = param_3[3];
  pauVar3 = (undefined1 (*) [16])(param_3 + 4);
  iVar5 = *(int *)(param_3 + 0x1e) + -2;
  do {
    auVar2._8_8_ = uVar8;
    auVar2._0_8_ = uVar7;
    auVar11 = AESInvShiftRows(auVar11 ^ auVar2);
    auVar11 = AESSubBytes(auVar11);
    auVar12 = AESMixColumns(auVar11);
    uVar7 = *(undefined8 *)*pauVar3;
    uVar8 = *(undefined8 *)(*pauVar3 + 8);
    auVar2 = *pauVar3;
    pauVar4 = pauVar3 + 1;
    iVar6 = iVar5 + -2;
    auVar11._8_8_ = uVar10;
    auVar11._0_8_ = uVar9;
    auVar11 = AESInvShiftRows(auVar12 ^ auVar11);
    auVar11 = AESSubBytes(auVar11);
    auVar11 = AESMixColumns(auVar11);
    uVar9 = *(undefined8 *)*pauVar4;
    uVar10 = *(undefined8 *)(pauVar3[1] + 8);
    pauVar3 = pauVar3 + 2;
    bVar1 = 1 < iVar5;
    iVar5 = iVar6;
  } while (iVar6 != 0 && bVar1);
  auVar11 = AESInvShiftRows(auVar11 ^ auVar2);
  auVar11 = AESSubBytes(auVar11);
  auVar11 = AESMixColumns(auVar11);
  auVar2 = *pauVar3;
  auVar11 = AESInvShiftRows(auVar11 ^ *pauVar4);
  auVar11 = AESSubBytes(auVar11);
  *param_2 = SUB168(auVar11 ^ auVar2,0);
  param_2[1] = SUB168(auVar11 ^ auVar2,8);
  return;
}

