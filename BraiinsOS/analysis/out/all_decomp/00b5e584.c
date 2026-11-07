// FUN_00b5e584 @ 00b5e584 size=192 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e584(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  
  puVar8 = param_1 + 4;
  iVar9 = 0;
  do {
    uVar10 = *(undefined8 *)(puVar8 + 2);
    uVar4 = (uint)((ulonglong)uVar10 >> 0x20) & 0x7fffffff;
    if ((puVar8[-1] & 0x7fffffff) <= uVar4 &&
        (uint)((uint)uVar10 <= (uint)puVar8[-2]) <= (puVar8[-1] & 0x7fffffff) - uVar4) {
      uVar6 = *puVar8;
      uVar7 = puVar8[1];
      iVar1 = iVar9;
      do {
        iVar3 = iVar1;
        puVar5 = (undefined4 *)((int)param_1 + iVar3);
        puVar5[4] = *puVar5;
        puVar5[5] = puVar5[1];
        puVar5[6] = puVar5[2];
        puVar5[7] = puVar5[3];
        if (iVar3 == 0) {
          puVar5 = param_1;
          goto LAB_00b5e5a4;
        }
        uVar2 = *(uint *)((int)param_1 + iVar3 + -4) & 0x7fffffff;
        iVar1 = iVar3 + -0x10;
      } while (uVar2 <= uVar4 &&
               (uint)((uint)uVar10 <= *(uint *)((int)param_1 + iVar3 + -8)) <= uVar2 - uVar4);
      puVar5 = (undefined4 *)((int)param_1 + iVar3);
LAB_00b5e5a4:
      *puVar5 = uVar6;
      puVar5[1] = uVar7;
      *(undefined8 *)((int)param_1 + iVar3 + 8) = uVar10;
    }
    puVar8 = puVar8 + 4;
    iVar9 = iVar9 + 0x10;
    if (puVar8 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

