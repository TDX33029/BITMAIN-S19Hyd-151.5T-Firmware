// FUN_01b3e4e0 @ 01b3e4e0 size=708 calls_out=5 calls_in=3
// strings: 

undefined8
FUN_01b3e4e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 auStack_314 [76];
  ushort auStack_2c8 [106];
  undefined1 auStack_1f4 [228];
  undefined1 auStack_110 [228];
  int local_2c;
  
  iVar4 = param_1[1];
  local_2c = DAT_01d53560;
  FUN_01b24330(auStack_2c8,param_5,iVar4);
  FUN_01bed93e(auStack_1f4,0,0xe4);
  iVar2 = FUN_01bed93e(auStack_110,0,0xe4);
  iVar3 = *param_1;
  puVar7 = auStack_1f4 + iVar3 * 4;
  puVar10 = auStack_1f4 + iVar3 * 8;
  iVar9 = iVar2 + iVar3 * 4;
  iVar2 = iVar2 + iVar3 * 8;
  iVar3 = 4;
  do {
    iVar8 = iVar3 + -1;
    if (iVar8 != 3) {
      iVar5 = 5;
      do {
        (*(code *)param_1[9])(auStack_1f4,puVar7,puVar10,auStack_1f4,puVar7,puVar10);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    for (iVar3 = ((iVar4 + 4U) / 5 - iVar3 & 0xfffffffc) + iVar8; -1 < iVar3; iVar3 = iVar3 + -4) {
      uVar6 = (uint)(short)auStack_2c8[iVar3];
      uVar1 = auStack_2c8[iVar3];
      FUN_01b25730(*param_1,auStack_110,param_1[0xb] + *param_1 * (iVar3 >> 2) * 0x80,
                   (int)(((uVar6 ^ (int)uVar6 >> 0x1f) + (uint)(uVar1 >> 0xf)) * 0x10000) >> 0x11,0)
      ;
      (*(code *)param_1[6])(auStack_314,iVar9);
      FUN_01b0d75c(iVar9,*param_1,uVar1 >> 0xf,iVar9,auStack_314);
      (*(code *)param_1[10])
                (auStack_1f4,puVar7,puVar10,auStack_1f4,puVar7,puVar10,1,auStack_110,iVar9,
                 param_1[8]);
    }
    iVar3 = iVar8;
  } while (iVar8 != 0);
  iVar3 = param_1[0xb];
  (*(code *)param_1[6])(auStack_314,iVar3 + *param_1 * 4);
  (*(code *)param_1[10])
            (auStack_110,iVar9,iVar2,auStack_1f4,puVar7,puVar10,1,iVar3,auStack_314,param_1[8]);
  uVar6 = *param_5;
  FUN_01b0d75c(param_2,*param_1,uVar6 & 1,auStack_110,auStack_1f4);
  FUN_01b0d75c(param_3,*param_1,uVar6 & 1,iVar9,puVar7);
  FUN_01b0d75c(param_4,*param_1,uVar6 & 1,iVar2,puVar10);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

