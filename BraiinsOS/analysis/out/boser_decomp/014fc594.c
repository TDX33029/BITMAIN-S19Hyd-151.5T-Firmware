// FUN_014fc594 @ 014fc594 size=204 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_014fc594(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  undefined4 local_1c;
  
  iVar9 = param_1[2] + -1;
  pcVar4 = (char *)*param_1;
  do {
    pcVar5 = pcVar4;
    if (pcVar5 == (char *)param_1[1]) {
      return 0;
    }
    iVar7 = iVar9 + 2;
    cVar2 = *pcVar5;
    iVar9 = iVar9 + 1;
    *param_1 = pcVar5 + 0x18;
    param_1[2] = iVar7;
    pcVar4 = pcVar5 + 0x18;
  } while (cVar2 == '\x03');
  puVar6 = (undefined4 *)param_1[3];
  piVar8 = (int *)*puVar6;
  do {
    iVar7 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = iVar7 + 1;
  if (iVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x14fc65c);
    (*pcVar1)();
  }
  uVar10 = puVar6[1];
  FUN_014fbbcc(auStack_48,*(undefined4 *)param_1[4]);
  local_1c = param_1[5];
  local_28 = 0x80000001;
  local_24 = iVar9;
  uVar11 = FUN_01531840(&local_28);
  uVar10 = FUN_01595634(piVar8,uVar10,auStack_48,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),pcVar5
                        ,0x40);
  return uVar10;
}

