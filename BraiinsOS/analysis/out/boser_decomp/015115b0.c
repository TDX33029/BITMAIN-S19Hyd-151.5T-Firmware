// FUN_015115b0 @ 015115b0 size=304 calls_out=3 calls_in=0
// strings: 

bool FUN_015115b0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar8 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    iVar9 = *(int *)(param_1 + 8);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    iVar6 = *(int *)(param_1 + 4);
    iVar7 = iVar9 * 100 + iVar6;
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
LAB_01511624:
    do {
      uVar10 = FUN_01a41998(local_48);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar2 = (int)uVar10;
      if (iVar2 == 0) break;
      if (iVar9 != 0) {
        bVar8 = false;
        iVar3 = iVar6;
        do {
          while( true ) {
            cVar1 = FUN_01501468(iVar3,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar5 = iVar3 + 100;
            if (cVar1 == '\0') break;
            iVar3 = FUN_01577618(iVar3 + 0x50,uVar4,param_3);
            if (iVar3 == 0) goto LAB_015116cc;
            bVar8 = true;
            iVar3 = iVar5;
            if (iVar5 == iVar7) goto LAB_01511624;
          }
          iVar3 = iVar5;
        } while (iVar5 != iVar7);
        if (bVar8) goto LAB_01511624;
      }
      iVar3 = FUN_01577618(param_1 + 0xc,uVar4,param_3);
    } while (iVar3 != 0);
LAB_015116cc:
    bVar8 = iVar2 == 0;
  }
  return bVar8;
}

