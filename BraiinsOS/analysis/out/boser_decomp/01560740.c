// FUN_01560740 @ 01560740 size=276 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01560740(int param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*param_2 == '\x05') && (iVar6 = *(int *)(param_1 + 8), iVar6 != 0)) {
    piVar7 = *(int **)(param_1 + 4);
    iVar10 = *(int *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    if (iVar10 == 0) {
      uVar4 = 0;
    }
    uVar1 = (uint)(iVar10 != 0);
    piVar8 = piVar7;
    do {
      piVar9 = piVar8 + 6;
      local_34 = 0;
      local_48[1] = 0;
      local_48[0] = uVar1;
      local_48[2] = iVar10;
      local_3c = uVar3;
      local_38 = uVar1;
      local_30 = iVar10;
      local_2c = uVar3;
      local_28 = uVar4;
      while( true ) {
        uVar11 = FUN_01a41998(local_48);
        iVar5 = (int)uVar11;
        if (iVar5 == 0) break;
        cVar2 = FUN_0155ff74(*piVar8 + 8,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
        if ((cVar2 != '\0') &&
           (iVar5 = FUN_01577618(piVar8 + 1,(int)((ulonglong)uVar11 >> 0x20),param_3), iVar5 == 0))
        {
          return 0;
        }
      }
      piVar8 = piVar9;
    } while (piVar9 != piVar7 + iVar6 * 6);
  }
  return 1;
}

