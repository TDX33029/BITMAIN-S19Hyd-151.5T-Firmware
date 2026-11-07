// FUN_014fc6c8 @ 014fc6c8 size=240 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_014fc6c8(int *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  int local_1c;
  
  iVar5 = *param_1 + -0x18;
  iVar6 = param_1[2];
  while( true ) {
    iVar10 = iVar6;
    iVar4 = iVar5;
    if (iVar4 + 0x18 == param_1[1]) {
      return 0;
    }
    cVar2 = *(char *)(iVar4 + 0x18);
    *param_1 = iVar4 + 0x30;
    iVar6 = iVar10 + 1;
    if (cVar2 != '\x02') break;
    iVar8 = *(int *)(iVar4 + 0x20);
    iVar11 = *(int *)(iVar4 + 0x24);
    param_1[2] = iVar6;
    iVar5 = iVar4 + 0x18;
    if (iVar8 == 2 && iVar11 == 0) {
LAB_014fc738:
      puVar7 = (undefined4 *)param_1[3];
      piVar9 = (int *)*puVar7;
      do {
        iVar5 = *piVar9;
        bVar3 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar3);
      *piVar9 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x14fc7b4);
        (*pcVar1)();
      }
      uVar12 = puVar7[1];
      FUN_014fbbcc(auStack_48,*(undefined4 *)param_1[4]);
      local_1c = param_1[5];
      local_28 = 0x80000001;
      local_24 = iVar10;
      uVar13 = FUN_01531840(&local_28);
      uVar12 = FUN_01595634(piVar9,uVar12,auStack_48,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),
                            iVar4 + 0x18,4);
      return uVar12;
    }
  }
  param_1[2] = iVar6;
  goto LAB_014fc738;
}

