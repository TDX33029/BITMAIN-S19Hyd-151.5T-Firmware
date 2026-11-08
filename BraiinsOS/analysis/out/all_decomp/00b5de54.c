// FUN_00b5de54 @ 00b5de54 size=196 calls_out=0 calls_in=1
// strings: 

void FUN_00b5de54(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  puVar7 = param_1 + 4;
  iVar6 = 0;
  do {
    uVar9 = *(undefined8 *)(puVar7 + 2);
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20) & 0x7fffffff;
    if ((puVar7[-1] & 0x7fffffff) <= uVar3 &&
        (uint)((uint)uVar9 <= (uint)puVar7[-2]) <= (puVar7[-1] & 0x7fffffff) - uVar3) {
      uVar8 = *puVar7;
      iVar1 = iVar6;
      do {
        iVar4 = iVar1;
        puVar5 = (undefined4 *)((int)param_1 + iVar4);
        puVar5[4] = *puVar5;
        puVar5[5] = puVar5[1];
        puVar5[6] = puVar5[2];
        puVar5[7] = puVar5[3];
        if (iVar4 == 0) {
          puVar5 = param_1;
          goto LAB_00b5de74;
        }
        uVar2 = *(uint *)((int)param_1 + iVar4 + -4) & 0x7fffffff;
        iVar1 = iVar4 + -0x10;
      } while (uVar2 <= uVar3 &&
               (uint)((uint)uVar9 <= *(uint *)((int)param_1 + iVar4 + -8)) <= uVar2 - uVar3);
      puVar5 = (undefined4 *)((int)param_1 + iVar4);
LAB_00b5de74:
      *puVar5 = uVar8;
      *(undefined8 *)((int)param_1 + iVar4 + 8) = uVar9;
    }
    puVar7 = puVar7 + 4;
    iVar6 = iVar6 + 0x10;
    if (puVar7 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

