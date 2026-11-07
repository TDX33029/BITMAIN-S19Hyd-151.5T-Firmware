// FUN_01511810 @ 01511810 size=364 calls_out=3 calls_in=0
// strings: 

int FUN_01511810(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar4 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    iVar7 = *(int *)(param_1 + 8);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar6 = iVar7 * 100 + iVar5;
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
LAB_01511888:
    do {
      uVar10 = FUN_01a41998(local_58);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar2 = (int)uVar10;
      if (iVar2 == 0) {
        return 0;
      }
      local_30 = *(undefined4 *)(iVar2 + 4);
      local_2c = *(undefined4 *)(iVar2 + 8);
      local_34 = 0x80000000;
      local_28 = param_3;
      if (iVar7 != 0) {
        bVar8 = false;
        iVar9 = iVar5;
        do {
          iVar4 = iVar9;
          while( true ) {
            cVar1 = FUN_01501468(iVar4,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar9 = iVar4 + 100;
            if (cVar1 != '\0') break;
            iVar4 = iVar9;
            if (iVar9 == iVar6) {
              if (!bVar8) goto LAB_01511940;
              goto LAB_01511888;
            }
          }
          iVar4 = FUN_015776f4(iVar4 + 0x50,uVar3,&local_34,param_4,param_5);
          if (iVar4 != 0) goto LAB_01511970;
          bVar8 = true;
        } while (iVar9 != iVar6);
        goto LAB_01511888;
      }
LAB_01511940:
      iVar4 = FUN_015776f4(param_1 + 0xc,uVar3,&local_34,param_4,param_5);
    } while (iVar4 == 0);
  }
LAB_01511970:
  return iVar4;
}

