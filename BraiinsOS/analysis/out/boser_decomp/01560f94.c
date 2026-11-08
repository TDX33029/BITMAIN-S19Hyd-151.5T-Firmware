// FUN_01560f94 @ 01560f94 size=304 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01560f94(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_5c [3];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char local_34;
  
  if ((*param_2 == '\x05') && (iVar5 = *(int *)(param_1 + 8), iVar5 != 0)) {
    piVar6 = *(int **)(param_1 + 4);
    iVar9 = *(int *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    if (iVar9 == 0) {
      uVar2 = 0;
    }
    uVar3 = (uint)(iVar9 != 0);
    piVar7 = piVar6;
    do {
      piVar8 = piVar7 + 6;
      local_48 = 0;
      local_5c[1] = 0;
      local_5c[0] = uVar3;
      local_5c[2] = iVar9;
      local_50 = uVar1;
      local_4c = uVar3;
      local_44 = iVar9;
      local_40 = uVar1;
      local_3c = uVar2;
      while( true ) {
        uVar10 = FUN_01a41998(local_5c);
        iVar4 = (int)uVar10;
        if (iVar4 == 0) break;
        FUN_01338048(&local_38,*piVar7 + 8,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
        if (local_38 == 0x12) {
          if ((local_34 != '\0') &&
             (iVar4 = FUN_01577618(piVar7 + 1,(int)((ulonglong)uVar10 >> 0x20),param_3), iVar4 == 0)
             ) {
            return 0;
          }
        }
        else {
          FUN_0150174c(&local_38);
        }
      }
      piVar7 = piVar8;
    } while (piVar8 != piVar6 + iVar5 * 6);
  }
  return 1;
}

