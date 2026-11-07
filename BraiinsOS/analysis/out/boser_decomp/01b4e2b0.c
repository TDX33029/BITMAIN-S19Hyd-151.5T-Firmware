// FUN_01b4e2b0 @ 01b4e2b0 size=336 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b4e2b0(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte *pbVar5;
  code *pcVar7;
  code *pcVar8;
  
  if (*(int *)(param_1 + 0x38) != 0 || *(int *)(param_1 + 0x3c) != 0) {
    return 0;
  }
  iVar2 = param_3 + *(uint *)(param_1 + 0x30);
  uVar1 = *(int *)(param_1 + 0x34) + (uint)CARRY4(param_3,*(uint *)(param_1 + 0x30));
  if (0x1fffffff < uVar1 && (uint)(iVar2 == 0) <= 0x20000000 - uVar1) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x164);
  pcVar8 = *(code **)(param_1 + 0x150);
  pcVar7 = *(code **)(param_1 + 0x154);
  *(int *)(param_1 + 0x30) = iVar2;
  *(uint *)(param_1 + 0x34) = uVar1;
  if (uVar3 != 0) {
    for (; uVar3 != 0 && param_3 != 0; uVar3 = uVar3 + 1 & 0xf) {
      param_3 = param_3 - 1;
      *(byte *)(param_1 + uVar3 + 0x40) = *(byte *)(param_1 + uVar3 + 0x40) ^ *param_2;
      param_2 = param_2 + 1;
    }
    if (uVar3 != 0) goto LAB_01b4e34c;
    (*pcVar8)(param_1 + 0x40,param_1 + 0x50);
  }
  uVar3 = param_3;
  uVar1 = uVar3 & 0xfffffff0;
  if (uVar1 == 0) {
    if (uVar3 != 0) goto LAB_01b4e3dc;
  }
  else {
    (*pcVar7)(param_1 + 0x40,param_1 + 0x50,param_2,uVar1);
    uVar3 = uVar3 - uVar1;
    if (uVar3 != 0) {
      param_2 = param_2 + uVar1;
      if (0x10 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0();
      }
LAB_01b4e3dc:
      pbVar4 = (byte *)(param_1 + 0x3f);
      pbVar6 = param_2;
      do {
        pbVar5 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar4 = *pbVar6 ^ *pbVar4;
        pbVar6 = pbVar5;
      } while (pbVar5 != param_2 + uVar3);
      goto LAB_01b4e34c;
    }
  }
  uVar3 = 0;
LAB_01b4e34c:
  *(uint *)(param_1 + 0x164) = uVar3;
  return 1;
}

