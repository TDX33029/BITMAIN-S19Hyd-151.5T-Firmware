// FUN_015158ac @ 015158ac size=244 calls_out=3 calls_in=0
// strings: 

bool FUN_015158ac(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_48 [3];
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar7 = true;
  if (*param_2 == '\x05') {
    iVar8 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 4);
    local_48[2] = *(uint *)(param_2 + 4);
    uStack_3c = *(undefined4 *)(param_2 + 8);
    local_34 = 0;
    local_48[1] = 0;
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_48[0] = (uint)(local_48[2] != 0);
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = uStack_3c;
    while( true ) {
      uVar9 = FUN_01a41998(local_48);
      iVar3 = (int)uVar9;
      if (iVar3 == 0 || iVar8 == 0) break;
      bVar7 = false;
      iVar5 = iVar2;
      iVar6 = iVar8 * 100;
      do {
        cVar1 = FUN_01501468(iVar5,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        if (cVar1 != '\0') {
          iVar4 = FUN_01577618(iVar5 + 0x50,(int)((ulonglong)uVar9 >> 0x20),param_3);
          bVar7 = true;
          if (iVar4 == 0) goto LAB_0151598c;
        }
        iVar5 = iVar5 + 100;
        iVar6 = iVar6 + -100;
      } while (iVar6 != 0);
      if (!bVar7) break;
    }
LAB_0151598c:
    bVar7 = iVar3 == 0;
  }
  return bVar7;
}

